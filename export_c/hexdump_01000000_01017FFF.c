typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;



void FUN_01000000(int param_1)

{
  ushort uVar1;
  
  uVar1 = ((ushort)*(byte *)(DAT_01000ce4 + 0x11) + (*(byte *)(param_1 + DAT_01000ce0) & 7) * 0x100)
          - (ushort)*(byte *)(param_1 + DAT_01000ce8);
  if (0x3ff < uVar1) {
    uVar1 = 0x400;
  }
  *(ushort *)(DAT_01000ce0 + param_1 * 2 + 0x20) = uVar1;
  return;
}



undefined8 FUN_01000030(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_01000cec;
  pbVar1 = DAT_01000ce0;
  uVar4 = (uint)*DAT_01000ce0 << 0x19;
  if ((int)uVar4 < 0) {
    if ((int)((uint)DAT_01000ce0[1] << 0x19) < 0) {
      if ((int)((uint)DAT_01000ce0[2] << 0x19) < 0) {
        if ((int)((uint)DAT_01000ce0[3] << 0x19) < 0) {
          if ((int)((uint)DAT_01000ce0[4] << 0x19) < 0) {
            if ((int)((uint)DAT_01000ce0[5] << 0x19) < 0) {
              if ((int)((uint)DAT_01000ce0[6] << 0x19) < 0) {
                uVar4 = (uint)DAT_01000ce0[7] << 0x19;
                if ((int)uVar4 < 0) {
                  uVar4 = (uint)DAT_01000ce0[8] << 0x19;
                  if ((int)uVar4 < 0) {
                    uVar4 = (uint)DAT_01000ce0[9] << 0x19;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uint)DAT_01000ce0[10] << 0x19;
                      if ((int)uVar4 < 0) {
                        uVar4 = (uint)DAT_01000ce0[0xb] << 0x19;
                        if ((int)uVar4 < 0) {
                          uVar4 = (uint)DAT_01000ce0[0xc];
                          if ((int)(uVar4 << 0x19) < 0) {
                            if ((int)((uint)DAT_01000ce0[0xd] << 0x19) < 0) {
                              if ((int)((uint)DAT_01000ce0[0xe] << 0x19) < 0) {
                                if ((int)((uint)DAT_01000ce0[0xf] << 0x19) < 0) {
                                  uVar3 = 0x10;
                                  uVar5 = 0;
                                  if (((*DAT_01000ce0 & 0x90) == 0) && (*DAT_01000ce4 != 0)) {
                                    uVar3 = 0;
                                    uVar5 = (uint)*DAT_01000ce4;
                                  }
                                  if (((DAT_01000ce0[1] & 0x90) == 0) && (uVar5 < DAT_01000ce4[1]))
                                  {
                                    uVar3 = 1;
                                    uVar5 = (uint)DAT_01000ce4[1];
                                  }
                                  if (((DAT_01000ce0[2] & 0x90) == 0) && (uVar5 < DAT_01000ce4[2]))
                                  {
                                    uVar3 = 2;
                                    uVar5 = (uint)DAT_01000ce4[2];
                                  }
                                  if (((DAT_01000ce0[3] & 0x90) == 0) && (uVar5 < DAT_01000ce4[3]))
                                  {
                                    uVar3 = 3;
                                    uVar5 = (uint)DAT_01000ce4[3];
                                  }
                                  if (((DAT_01000ce0[4] & 0x90) == 0) && (uVar5 < DAT_01000ce4[4]))
                                  {
                                    uVar3 = 4;
                                    uVar5 = (uint)DAT_01000ce4[4];
                                  }
                                  if (((DAT_01000ce0[5] & 0x90) == 0) && (uVar5 < DAT_01000ce4[5]))
                                  {
                                    uVar3 = 5;
                                    uVar5 = (uint)DAT_01000ce4[5];
                                  }
                                  if (((DAT_01000ce0[6] & 0x90) == 0) && (uVar5 < DAT_01000ce4[6]))
                                  {
                                    uVar3 = 6;
                                    uVar5 = (uint)DAT_01000ce4[6];
                                  }
                                  if (((DAT_01000ce0[7] & 0x90) == 0) && (uVar5 < DAT_01000ce4[7]))
                                  {
                                    uVar3 = 7;
                                    uVar5 = (uint)DAT_01000ce4[7];
                                  }
                                  if (((DAT_01000ce0[8] & 0x90) == 0) && (uVar5 < DAT_01000ce4[8]))
                                  {
                                    uVar3 = 8;
                                    uVar5 = (uint)DAT_01000ce4[8];
                                  }
                                  if (((DAT_01000ce0[9] & 0x90) == 0) && (uVar5 < DAT_01000ce4[9]))
                                  {
                                    uVar3 = 9;
                                    uVar5 = (uint)DAT_01000ce4[9];
                                  }
                                  if (((DAT_01000ce0[10] & 0x90) == 0) && (uVar5 < DAT_01000ce4[10])
                                     ) {
                                    uVar3 = 10;
                                    uVar5 = (uint)DAT_01000ce4[10];
                                  }
                                  if (((DAT_01000ce0[0xb] & 0x90) == 0) &&
                                     (uVar5 < DAT_01000ce4[0xb])) {
                                    uVar3 = 0xb;
                                    uVar5 = (uint)DAT_01000ce4[0xb];
                                  }
                                  if (((DAT_01000ce0[0xc] & 0x90) == 0) &&
                                     (uVar5 < DAT_01000ce4[0xc])) {
                                    uVar3 = 0xc;
                                    uVar5 = (uint)DAT_01000ce4[0xc];
                                  }
                                  if (((DAT_01000ce0[0xd] & 0x90) == 0) &&
                                     (uVar5 < DAT_01000ce4[0xd])) {
                                    uVar3 = 0xd;
                                    uVar5 = (uint)DAT_01000ce4[0xd];
                                  }
                                  if (((DAT_01000ce0[0xe] & 0x90) == 0) &&
                                     (uVar5 < DAT_01000ce4[0xe])) {
                                    uVar3 = 0xe;
                                    uVar5 = (uint)DAT_01000ce4[0xe];
                                  }
                                  uVar4 = 0x90;
                                  if (((DAT_01000ce0[0xf] & 0x90) == 0) &&
                                     (uVar4 = (uint)DAT_01000ce4[0xf], uVar5 < uVar4)) {
                                    uVar3 = 0xf;
                                  }
                                  else if (0xf < uVar3) goto LAB_0100027c;
                                  DAT_01000ce0
                                  [(byte)(&DAT_01000e44)[*(byte *)(uVar3 + DAT_01000cec)] + 0x10] =
                                       (&DAT_01000de8)[*(byte *)(uVar3 + DAT_01000cec)] &
                                       DAT_01000ce0
                                       [(byte)(&DAT_01000e44)[*(byte *)(uVar3 + DAT_01000cec)] +
                                        0x10];
                                  DAT_01000ce4[uVar3] = 0;
                                  pbVar1[uVar3] = 0;
                                  *(undefined1 *)(uVar3 + uVar2) = 0;
                                  uVar4 = uVar2;
                                }
                                else {
                                  uVar3 = 0xf;
                                }
                              }
                              else {
                                uVar3 = 0xe;
                              }
                            }
                            else {
                              uVar3 = 0xd;
                            }
                          }
                          else {
                            uVar3 = 0xc;
                          }
                        }
                        else {
                          uVar3 = 0xb;
                        }
                      }
                      else {
                        uVar3 = 10;
                      }
                    }
                    else {
                      uVar3 = 9;
                    }
                  }
                  else {
                    uVar3 = 8;
                  }
                }
                else {
                  uVar3 = 7;
                }
              }
              else {
                uVar3 = 6;
                uVar4 = (uint)DAT_01000ce0[6] << 0x19;
              }
            }
            else {
              uVar3 = 5;
              uVar4 = (uint)DAT_01000ce0[5] << 0x19;
            }
          }
          else {
            uVar3 = 4;
            uVar4 = (uint)DAT_01000ce0[4] << 0x19;
          }
        }
        else {
          uVar3 = 3;
          uVar4 = (uint)DAT_01000ce0[3] << 0x19;
        }
      }
      else {
        uVar3 = 2;
        uVar4 = (uint)DAT_01000ce0[2] << 0x19;
      }
    }
    else {
      uVar3 = 1;
      uVar4 = (uint)DAT_01000ce0[1] << 0x19;
    }
  }
  else {
    uVar3 = 0;
  }
LAB_0100027c:
  return CONCAT44(uVar4,uVar3);
}



undefined4 FUN_01000280(uint param_1)

{
  if (*DAT_01000cec == param_1) {
    return 0;
  }
  if (DAT_01000cec[1] == param_1) {
    return 1;
  }
  if (DAT_01000cec[2] == param_1) {
    return 2;
  }
  if (DAT_01000cec[3] == param_1) {
    return 3;
  }
  if (DAT_01000cec[4] == param_1) {
    return 4;
  }
  if (DAT_01000cec[5] == param_1) {
    return 5;
  }
  if (DAT_01000cec[6] == param_1) {
    return 6;
  }
  if (DAT_01000cec[7] == param_1) {
    return 7;
  }
  if (DAT_01000cec[8] == param_1) {
    return 8;
  }
  if (DAT_01000cec[9] == param_1) {
    return 9;
  }
  if (DAT_01000cec[10] == param_1) {
    return 10;
  }
  if (DAT_01000cec[0xb] == param_1) {
    return 0xb;
  }
  if (DAT_01000cec[0xc] == param_1) {
    return 0xc;
  }
  if (DAT_01000cec[0xd] == param_1) {
    return 0xd;
  }
  if (DAT_01000cec[0xe] == param_1) {
    return 0xe;
  }
  if (DAT_01000cec[0xf] == param_1) {
    return 0xf;
  }
  return 0x10;
}



void FUN_01000328(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x01000338. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(DAT_01000ce4 + 0x30))((&DAT_01000d30)[param_1],0x400);
  return;
}



void FUN_0100033a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_01000cec;
  iVar1 = DAT_01000ce0;
  (**(code **)(DAT_01000ce4 + 0x30))
            (*(byte *)(param_1 + DAT_01000cec) | 0x80,
             *(undefined2 *)(DAT_01000ce0 + param_1 * 2 + 0x20));
  *(byte *)((uint)(byte)(&DAT_01000e44)[*(byte *)(param_1 + iVar2)] + DAT_01000ce8 + 0x10) =
       (&DAT_01000de8)[*(byte *)(param_1 + iVar2)] &
       *(byte *)((uint)(byte)(&DAT_01000e44)[*(byte *)(param_1 + iVar2)] + DAT_01000ce8 + 0x10);
  *(byte *)(param_1 + iVar1) = *(byte *)(param_1 + iVar1) & 0x7f;
  return;
}



char * FUN_0100037e(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *local_28;
  
  pbVar9 = DAT_01000ce0;
  if ((int)((uint)*DAT_01000ce0 << 0x18) < 0) {
    FUN_0100033a(0);
  }
  if ((int)((uint)pbVar9[1] << 0x18) < 0) {
    FUN_0100033a(1);
  }
  if ((int)((uint)pbVar9[2] << 0x18) < 0) {
    FUN_0100033a(2);
  }
  if ((int)((uint)pbVar9[3] << 0x18) < 0) {
    FUN_0100033a(3);
  }
  if ((int)((uint)pbVar9[4] << 0x18) < 0) {
    FUN_0100033a(4);
  }
  if ((int)((uint)pbVar9[5] << 0x18) < 0) {
    FUN_0100033a(5);
  }
  if ((int)((uint)pbVar9[6] << 0x18) < 0) {
    FUN_0100033a(6);
  }
  if ((int)((uint)pbVar9[7] << 0x18) < 0) {
    FUN_0100033a(7);
  }
  if ((int)((uint)pbVar9[8] << 0x18) < 0) {
    FUN_0100033a(8);
  }
  if ((int)((uint)pbVar9[9] << 0x18) < 0) {
    FUN_0100033a(9);
  }
  if ((int)((uint)pbVar9[10] << 0x18) < 0) {
    FUN_0100033a(10);
  }
  if ((int)((uint)pbVar9[0xb] << 0x18) < 0) {
    FUN_0100033a(0xb);
  }
  if ((int)((uint)pbVar9[0xc] << 0x18) < 0) {
    FUN_0100033a(0xc);
  }
  if ((int)((uint)pbVar9[0xd] << 0x18) < 0) {
    FUN_0100033a(0xd);
  }
  if ((int)((uint)pbVar9[0xe] << 0x18) < 0) {
    FUN_0100033a(0xe);
  }
  if ((int)((uint)pbVar9[0xf] << 0x18) < 0) {
    FUN_0100033a(0xf);
  }
  bVar2 = 0;
  local_28 = &DAT_01000ea0;
  pbVar9 = pbVar9 + 0x10;
  pbVar5 = DAT_01000cf4 + 0x10;
  pbVar3 = DAT_01000cf0;
  pbVar4 = DAT_01000cf4;
  if (*(char *)(DAT_01000ce4 + 0x18) != '\0') {
    do {
      uVar8 = (uint)(*pbVar4 | *pbVar3);
      if (uVar8 != 0) {
        cVar6 = (&LAB_01000eb0_1)[uVar8 * 2] + *local_28;
        uVar7 = (uint)(byte)(&LAB_01000eb0)[uVar8 * 2];
        do {
          if ((uVar8 & uVar7) != 0) {
            uVar8 = ~uVar7 & 0xff & uVar8;
            bVar1 = (byte)~uVar7;
            if (((*pbVar3 & uVar7) != 0) && ((*pbVar9 & uVar7) == 0)) {
              *pbVar3 = bVar1 & *pbVar3;
              *pbVar5 = *pbVar5 & bVar1;
            }
            if ((*pbVar4 & uVar7) != 0) {
              *pbVar4 = bVar1 & *pbVar4;
              FUN_01000328(cVar6);
            }
          }
          uVar7 = (uVar7 << 0x19) >> 0x18;
          cVar6 = cVar6 + '\x01';
        } while (uVar8 != 0);
      }
      bVar2 = bVar2 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar9 = pbVar9 + 1;
      local_28 = local_28 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 < *(byte *)(DAT_01000ce4 + 0x18));
  }
  return local_28;
}



undefined4 FUN_01000500(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  
  iVar4 = DAT_01000ce0;
  cVar7 = (&DAT_01000d30)
          [(uint)(byte)(&LAB_01000eb0_1)[param_2 * 2] + (uint)(byte)(&DAT_01000ea0)[param_1]];
  uVar8 = (uint)(byte)(&LAB_01000eb0)[param_2 * 2];
  if (param_2 != 0) {
    do {
      if ((param_2 & uVar8) != 0) {
        param_2 = ~uVar8 & 0xff & param_2;
        bVar2 = *(byte *)(param_1 + DAT_01000cf8);
        if ((bVar2 & uVar8) == 0) {
          if (((*(byte *)(param_1 + iVar4 + 0x10) & uVar8) == 0) ||
             (uVar5 = FUN_01000280(cVar7), 0xf < uVar5)) {
            uVar5 = FUN_01000030();
            if (0xf < (int)uVar5) goto LAB_01000636;
            *(byte *)(param_1 + iVar4 + 0x10) = *(byte *)(param_1 + iVar4 + 0x10) | (byte)uVar8;
            *(char *)(uVar5 + DAT_01000cec) = cVar7;
          }
          *(undefined1 *)(uVar5 + DAT_01000ce8) = *(undefined1 *)(DAT_01000ce4 + 0x11);
          *(undefined1 *)(uVar5 + iVar4) = 0x60;
          iVar6 = DAT_01000ce4;
LAB_0100057a:
          *(undefined1 *)(uVar5 + iVar6) = 0;
        }
        else {
          bVar1 = *(byte *)(param_1 + DAT_01000cfc);
          bVar3 = (byte)~uVar8;
          if ((bVar1 & uVar8) == 0) {
            bVar1 = *(byte *)(param_1 + iVar4 + 0x10);
            if (((bVar1 & uVar8) != 0) && (uVar5 = FUN_01000280(cVar7), (int)uVar5 < 0x10)) {
              if (-1 < (int)((uint)*(byte *)(uVar5 + iVar4) << 0x1a)) {
                *(byte *)(param_1 + iVar4 + 0x10) = bVar3 & bVar1;
LAB_010005f2:
                *(undefined1 *)(uVar5 + DAT_01000ce4) = 0;
                *(undefined1 *)(uVar5 + iVar4) = 0;
                iVar6 = DAT_01000cec;
                goto LAB_0100057a;
              }
              *(byte *)(param_1 + DAT_01000cf8) = bVar3 & bVar2;
            }
          }
          else if ((*(byte *)(param_1 + DAT_01000d00) & uVar8) != 0) {
            *(byte *)(param_1 + DAT_01000cf4) = *(byte *)(param_1 + DAT_01000cf4) | (byte)uVar8;
            *(byte *)(param_1 + DAT_01000cfc) = bVar3 & bVar1;
            *(byte *)(DAT_01000ce4 + 0x15) = *(byte *)(DAT_01000ce4 + 0x15) | 2;
            bVar2 = *(byte *)(param_1 + iVar4 + 0x10);
            if ((bVar2 & uVar8) != 0) {
              *(byte *)(param_1 + iVar4 + 0x10) = bVar3 & bVar2;
              uVar5 = FUN_01000280(cVar7);
              if ((int)uVar5 < 0x10) goto LAB_010005f2;
            }
          }
        }
      }
LAB_01000636:
      uVar8 = (uVar8 << 0x19) >> 0x18;
      cVar7 = cVar7 + '\x01';
    } while (param_2 != 0);
  }
  return param_4;
}



void FUN_01000648(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  
  cVar7 = (&DAT_01000d30)
          [(uint)(byte)(&LAB_01000eb0_1)[param_2 * 2] + (uint)(byte)(&DAT_01000ea0)[param_1]];
  uVar8 = (uint)(byte)(&LAB_01000eb0)[param_2 * 2];
  if (param_2 != 0) {
    do {
      if ((param_2 & uVar8) != 0) {
        param_2 = param_2 & ~uVar8 & 0xff;
        bVar2 = *(byte *)(param_1 + DAT_01000cfc);
        bVar3 = *(byte *)(param_1 + DAT_01000d00);
        bVar6 = (byte)uVar8;
        if ((bVar3 & uVar8) == 0) {
          if ((uVar8 & bVar2) == 0) {
            if ((*(byte *)(param_1 + DAT_01000d04) & uVar8) == 0) {
              if ((*(byte *)(param_1 + DAT_01000cf8) & uVar8) != 0) {
                bVar6 = bVar6 | bVar3;
                goto LAB_010006c0;
              }
            }
            else {
              *(byte *)(param_1 + DAT_01000ce8 + 0x10) =
                   *(byte *)(param_1 + DAT_01000ce8 + 0x10) | bVar6;
              *(byte *)(param_1 + DAT_01000cfc) = bVar6 | bVar2;
              *(byte *)(DAT_01000ce4 + 0x15) = *(byte *)(DAT_01000ce4 + 0x15) | 1;
              iVar5 = FUN_01000280(cVar7);
              FUN_01000000();
              *(undefined1 *)(iVar5 + DAT_01000ce0) = 0xd0;
              *(undefined1 *)(iVar5 + DAT_01000ce4) = 0;
            }
          }
        }
        else if ((uVar8 & bVar2) != 0) {
          bVar1 = *(byte *)(param_1 + DAT_01000d04);
          uVar9 = uVar8 & bVar1;
          bVar4 = (byte)~uVar8;
          if ((((uVar9 == 0) || (iVar5 = FUN_01000280(cVar7), 0xf < iVar5)) ||
              (-1 < (int)((uint)*(byte *)(iVar5 + DAT_01000ce0) << 0x1b))) &&
             ((*(byte *)(param_1 + DAT_01000cf0) & uVar8) == 0)) {
            if ((*(byte *)(param_1 + DAT_01000cf8) & uVar8) != 0) {
              *(byte *)(param_1 + DAT_01000cf4) = *(byte *)(param_1 + DAT_01000cf4) | bVar6;
              *(byte *)(param_1 + DAT_01000cfc) = bVar4 & bVar2;
              *(byte *)(DAT_01000ce4 + 0x15) = *(byte *)(DAT_01000ce4 + 0x15) | 2;
              if (uVar9 != 0) {
                *(byte *)(param_1 + DAT_01000d04) = bVar1 & bVar4;
                iVar5 = FUN_01000280(cVar7);
                if (iVar5 < 0x10) {
                  *(undefined1 *)(iVar5 + DAT_01000ce4) = 0;
                  *(undefined1 *)(iVar5 + DAT_01000ce0) = 0;
                  *(undefined1 *)(iVar5 + DAT_01000cec) = 0;
                }
              }
            }
          }
          else {
            bVar6 = bVar4 & bVar3;
LAB_010006c0:
            *(byte *)(param_1 + DAT_01000d00) = bVar6;
          }
        }
      }
      uVar8 = (uVar8 << 0x19) >> 0x18;
      cVar7 = cVar7 + '\x01';
    } while (param_2 != 0);
  }
  return;
}



void FUN_010007ca(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = DAT_01000cf4;
  iVar3 = DAT_01000ce4;
  uVar5 = (uint)(byte)(&DAT_01000e44)[*(byte *)(param_1 + DAT_01000cec)];
  bVar1 = (&DAT_01000d8c)[*(byte *)(param_1 + DAT_01000cec)];
  bVar6 = (*(byte *)(uVar5 + DAT_01000ce8 + 0x10) & bVar1) != 0;
  iVar4 = DAT_01000cec;
  if (bVar6) {
    iVar4 = 0;
  }
  if (bVar6) {
    *(char *)(param_1 + DAT_01000ce4) = (char)iVar4;
  }
  else {
    if ((*(byte *)(uVar5 + DAT_01000ce4 + 0x1c) & *(byte *)(uVar5 + iVar4 + 0x10) & bVar1) != 0) {
      *(byte *)(uVar5 + DAT_01000cf4) = bVar1 | *(byte *)(uVar5 + DAT_01000cf4);
      *(byte *)(uVar5 + iVar2 + 0x10) = *(byte *)(uVar5 + iVar2 + 0x10) & ~bVar1;
      *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) | 2;
    }
    iVar2 = DAT_01000ce0;
    *(byte *)(uVar5 + DAT_01000ce0 + 0x10) = ~bVar1 & *(byte *)(uVar5 + DAT_01000ce0 + 0x10);
    *(undefined1 *)(param_1 + iVar3) = 0;
    *(undefined1 *)(param_1 + iVar2) = 0;
    *(undefined1 *)(param_1 + iVar4) = 0;
  }
  return;
}



void FUN_01000836(void)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  undefined2 local_48;
  
  pbVar2 = DAT_01000ce4;
  pbVar10 = (byte *)&local_48;
  pbVar12 = (byte *)&local_48;
  bVar6 = DAT_01000ce4[0x10] + 1;
  DAT_01000ce4[0x10] = bVar6;
  if (pbVar2[0x14] == 0) {
    pbVar2[0x14] = 1;
    pbVar2[0x10] = 0;
    if ((int)((uint)*DAT_01000d08 << 0x10) < 0) {
      iVar9 = 0;
    }
    else {
      puVar7 = DAT_01000d08;
      puVar1 = &local_48;
      for (uVar8 = (uint)pbVar2[0x18]; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      *DAT_01000d08 = *(ushort *)(pbVar2 + 0x2c) | 0x8000;
      iVar9 = 0x7f;
    }
    bVar4 = false;
    bVar5 = bVar6 + pbVar2[0x12];
    pbVar2[0x12] = bVar5;
    if (pbVar2[0x13] <= bVar5) {
      pbVar2[0x12] = bVar5 - pbVar2[0x13];
      bVar4 = true;
      if (-1 < (int)((uint)*pbVar2 << 0x18)) {
        *pbVar2 = *pbVar2 + 1;
      }
      bVar5 = pbVar2[1];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[1] = bVar5;
      }
      bVar5 = pbVar2[2];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[2] = bVar5;
      }
      bVar5 = pbVar2[3];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[3] = bVar5;
      }
      bVar5 = pbVar2[4];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[4] = bVar5;
      }
      bVar5 = pbVar2[5];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[5] = bVar5;
      }
      bVar5 = pbVar2[6];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[6] = bVar5;
      }
      bVar5 = pbVar2[7];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[7] = bVar5;
      }
      bVar5 = pbVar2[8];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[8] = bVar5;
      }
      bVar5 = pbVar2[9];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[9] = bVar5;
      }
      bVar5 = pbVar2[10];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[10] = bVar5;
      }
      bVar5 = pbVar2[0xb];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[0xb] = bVar5;
      }
      bVar5 = pbVar2[0xc];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[0xc] = bVar5;
      }
      bVar5 = pbVar2[0xd];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[0xd] = bVar5;
      }
      bVar5 = pbVar2[0xe];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[0xe] = bVar5;
      }
      bVar5 = pbVar2[0xf];
      bVar14 = -1 < (int)((uint)bVar5 << 0x18);
      if (bVar14) {
        bVar5 = bVar5 + 1;
      }
      if (bVar14) {
        pbVar2[0xf] = bVar5;
      }
    }
    bVar5 = pbVar2[0x11];
    bVar6 = bVar6 + bVar5;
    pbVar2[0x11] = bVar6;
    pbVar11 = DAT_01000ce0;
    if (bVar6 < bVar5) {
      if ((*DAT_01000ce0 & 7) != 5) {
        *DAT_01000ce0 = *DAT_01000ce0 + 1;
      }
      bVar6 = pbVar11[1];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[1] = bVar6;
      }
      bVar6 = pbVar11[2];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[2] = bVar6;
      }
      bVar6 = pbVar11[3];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[3] = bVar6;
      }
      bVar6 = pbVar11[4];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[4] = bVar6;
      }
      bVar6 = pbVar11[5];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[5] = bVar6;
      }
      bVar6 = pbVar11[6];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[6] = bVar6;
      }
      bVar6 = pbVar11[7];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[7] = bVar6;
      }
      bVar6 = pbVar11[8];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[8] = bVar6;
      }
      bVar6 = pbVar11[9];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[9] = bVar6;
      }
      bVar6 = pbVar11[10];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[10] = bVar6;
      }
      bVar6 = pbVar11[0xb];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[0xb] = bVar6;
      }
      bVar6 = pbVar11[0xc];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[0xc] = bVar6;
      }
      bVar6 = pbVar11[0xd];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[0xd] = bVar6;
      }
      bVar6 = pbVar11[0xe];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[0xe] = bVar6;
      }
      bVar6 = pbVar11[0xf];
      bVar14 = (bVar6 & 7) != 5;
      if (bVar14) {
        bVar6 = bVar6 + 1;
      }
      if (bVar14) {
        pbVar11[0xf] = bVar6;
      }
    }
    if (bVar4) {
      uVar8 = 0;
      pbVar11 = pbVar2;
      pbVar13 = DAT_01000ce0;
      do {
        uVar3 = (uint)*pbVar13;
        if (((uVar3 & 0x48) == 0x40) && (pbVar2[0x17] <= *pbVar11)) {
          if ((int)(uVar3 << 0x1a) < 0) {
            bVar6 = *pbVar13 & 0xdf;
            *pbVar13 = bVar6;
            *pbVar13 = bVar6 | 8;
          }
          else if ((int)(uVar3 << 0x1b) < 0) {
            FUN_010007ca(uVar8 & 0xff);
          }
        }
        uVar8 = uVar8 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
      } while ((int)uVar8 < 0x10);
    }
    if (iVar9 != 0) {
      uVar8 = (uint)pbVar2[0x18];
      if ((int)((uint)pbVar2[0x16] << 0x1e) < 0) {
        uVar3 = 0;
        if (uVar8 != 0) {
          pbVar11 = pbVar2 + 0x1c;
          pbVar10 = DAT_01000d00;
          do {
            if (*pbVar11 != *pbVar12) {
              *pbVar11 = *pbVar12;
              FUN_01000500(uVar3 & 0xff);
            }
            bVar6 = *pbVar10 ^ pbVar12[1];
            if (bVar6 != 0) {
              *pbVar10 = pbVar12[1];
              FUN_01000648(uVar3 & 0xff,bVar6);
            }
            uVar3 = uVar3 + 1;
            pbVar12 = pbVar12 + 2;
            pbVar10 = pbVar10 + 1;
            pbVar11 = pbVar11 + 1;
          } while ((int)uVar3 < (int)uVar8);
        }
      }
      else {
        uVar3 = 0;
        if (uVar8 != 0) {
          pbVar11 = pbVar2 + 0x1c;
          pbVar12 = DAT_01000d00;
          do {
            bVar6 = *pbVar10;
            bVar5 = *pbVar11 ^ bVar6;
            if (bVar5 != 0) {
              *pbVar11 = bVar6;
              FUN_01000500(uVar3 & 0xff,bVar5);
              *pbVar12 = bVar6;
              FUN_01000648(uVar3 & 0xff,bVar5);
            }
            uVar3 = uVar3 + 1;
            pbVar10 = pbVar10 + 2;
            pbVar12 = pbVar12 + 1;
            pbVar11 = pbVar11 + 1;
          } while ((int)uVar3 < (int)uVar8);
        }
      }
      if (pbVar2[0x15] != 0) {
        pbVar2[0x15] = 0;
        FUN_0100037e();
      }
    }
    pbVar2[0x14] = 0;
  }
  return;
}



void FUN_01000b2c(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar3 = DAT_01000ce4;
  *(undefined4 *)(DAT_01000ce4 + 0x34) = DAT_01000d0c;
  *(undefined4 *)(iVar3 + 0x38) = DAT_01000d10;
  *(undefined4 *)(iVar3 + 0x3c) = DAT_01000d14;
  *(undefined4 *)(iVar3 + 0x40) = DAT_01000d18;
  *(undefined4 *)(iVar3 + 0x44) = DAT_01000d1c;
  *(undefined4 *)(iVar3 + 0x48) = DAT_01000d20;
  *(undefined4 *)(iVar3 + 0x4c) = DAT_01000d24;
  *(undefined4 *)(iVar3 + 0x50) = DAT_01000d28;
  *(undefined4 *)(iVar3 + 0x54) = DAT_01000d2c;
  *(undefined4 *)(iVar3 + 0x30) = *param_1;
  if (param_1[1] != 0) {
    *(undefined4 *)(iVar3 + 0x34) = param_1[1];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(iVar3 + 0x38) = param_1[2];
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(iVar3 + 0x3c) = param_1[3];
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(iVar3 + 0x40) = param_1[4];
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(iVar3 + 0x44) = param_1[5];
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(iVar3 + 0x48) = param_1[6];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(iVar3 + 0x4c) = param_1[7];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(iVar3 + 0x50) = param_1[8];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(iVar3 + 0x54) = param_1[9];
  }
  iVar5 = DAT_01000cec;
  iVar4 = DAT_01000ce8;
  iVar2 = DAT_01000ce0;
  iVar10 = 0;
  puVar8 = (undefined2 *)(DAT_01000ce0 + 0x20);
  do {
    *puVar8 = 0;
    *(undefined1 *)(iVar10 + iVar5) = 0;
    *(undefined1 *)(iVar10 + iVar3) = 0;
    *(undefined1 *)(iVar10 + iVar4) = 0;
    *(undefined1 *)(iVar10 + iVar2) = 0;
    iVar11 = iVar10 + 1;
    puVar8[1] = 0;
    *(undefined1 *)(iVar11 + iVar5) = 0;
    *(undefined1 *)(iVar11 + iVar3) = 0;
    *(undefined1 *)(iVar11 + iVar4) = 0;
    *(undefined1 *)(iVar11 + iVar2) = 0;
    iVar11 = iVar10 + 2;
    puVar9 = puVar8 + 3;
    puVar8[2] = 0;
    *(undefined1 *)(iVar11 + iVar5) = 0;
    *(undefined1 *)(iVar11 + iVar3) = 0;
    *(undefined1 *)(iVar11 + iVar4) = 0;
    *(undefined1 *)(iVar11 + iVar2) = 0;
    iVar11 = iVar10 + 3;
    puVar8 = puVar8 + 4;
    *puVar9 = 0;
    *(undefined1 *)(iVar11 + iVar5) = 0;
    *(undefined1 *)(iVar11 + iVar3) = 0;
    *(undefined1 *)(iVar11 + iVar4) = 0;
    *(undefined1 *)(iVar11 + iVar2) = 0;
    iVar11 = DAT_01000cf4;
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x10);
  iVar10 = 0;
  do {
    *(undefined1 *)(iVar10 + iVar3 + 0x1c) = 0x3f;
    *(undefined1 *)(iVar10 + iVar5 + 0x10) = 0x3f;
    *(undefined1 *)(iVar10 + iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar10 + iVar11) = 0;
    *(undefined1 *)(iVar10 + iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar10 + iVar11 + 0x10) = 0;
    iVar12 = iVar10 + 1;
    *(undefined1 *)(iVar12 + iVar3 + 0x1c) = 0x3f;
    *(undefined1 *)(iVar12 + iVar5 + 0x10) = 0x3f;
    *(undefined1 *)(iVar12 + iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar12 + iVar11) = 0;
    *(undefined1 *)(iVar12 + iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar12 + iVar11 + 0x10) = 0;
    iVar12 = iVar10 + 2;
    *(undefined1 *)(iVar12 + iVar3 + 0x1c) = 0x3f;
    *(undefined1 *)(iVar12 + iVar5 + 0x10) = 0x3f;
    *(undefined1 *)(iVar12 + iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar12 + iVar11) = 0;
    *(undefined1 *)(iVar12 + iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar12 + iVar11 + 0x10) = 0;
    iVar10 = iVar10 + 3;
  } while (iVar10 < 0xf);
  *(undefined2 *)(iVar3 + 0x10) = 0;
  *(undefined1 *)(iVar3 + 0x12) = 0;
  *(undefined2 *)(iVar3 + 0x14) = 0;
  *(undefined1 *)(iVar3 + 0x13) = *(undefined1 *)((int)param_1 + 0x29);
  *(undefined1 *)(iVar3 + 0x16) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(iVar3 + 0x17) = *(undefined1 *)((int)param_1 + 0x2a);
  *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)((int)param_1 + 0x2b);
  uVar7 = (uint)(-1 < (int)((uint)*(byte *)(param_1 + 10) << 0x1e));
  if (-1 < (int)((uint)*(byte *)(param_1 + 10) << 0x1f)) {
    uVar7 = uVar7 | 2;
  }
  if (*(byte *)((int)param_1 + 0x2b) < 0xc) {
    uVar7 = uVar7 | 4;
  }
  else if (*(byte *)((int)param_1 + 0x2b) < 0xe) {
    uVar7 = uVar7 | 8;
  }
  else {
    uVar7 = uVar7 | 0xc;
  }
  uVar1 = (ushort)*(byte *)(param_1 + 0xb) | (ushort)(uVar7 << 8);
  *(ushort *)(iVar3 + 0x2c) = uVar1;
  puVar6 = DAT_01000d08;
  *DAT_01000d08 = uVar1;
  *puVar6 = *(ushort *)(iVar3 + 0x2c) | 0x8000;
  return;
}



void thunk_EXT_FUN_800e0832(void)

{
                    // WARNING: Could not recover jumptable at 0x01000f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000f5c)();
  return;
}



void thunk_EXT_FUN_800e0860(void)

{
                    // WARNING: Could not recover jumptable at 0x01000f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000f64)();
  return;
}



undefined4 FUN_01001016(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_01001856();
  if (iVar1 == 1) {
    FUN_0100179c();
  }
  return unaff_r7;
}



undefined8 FUN_01001026(void)

{
  undefined4 in_stack_00000000;
  undefined4 uStack_c;
  
  thunk_EXT_FUN_800e0832();
  return CONCAT44(uStack_c,in_stack_00000000);
}



void thunk_EXT_FUN_800e0860(void)

{
                    // WARNING: Could not recover jumptable at 0x01000f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000f64)();
  return;
}



void FUN_0100107a(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 1) {
    if (param_1 != 0) {
      if (param_1 == 2) {
        uVar1 = 0x10;
      }
      else if (param_1 < 2) {
        uVar1 = 0xf;
      }
      else {
        if (param_1 != 3) {
          return;
        }
        uVar1 = 0x12;
      }
      goto LAB_010010b6;
    }
  }
  else if (param_1 != 0) {
    if (param_1 == 2) {
      uVar1 = 0xe;
    }
    else if (param_1 < 2) {
      uVar1 = 0xd;
    }
    else {
      if (param_1 != 3) {
        return;
      }
      uVar1 = 0x11;
    }
    goto LAB_010010b6;
  }
  uVar1 = 3;
LAB_010010b6:
                    // WARNING: Could not recover jumptable at 0x01000fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000fa4)(uVar1);
  return;
}



undefined4 FUN_0100122a(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = DAT_010012f0;
  iVar1 = DAT_010012ec;
  if (param_1 != 0) {
    do {
      bVar4 = *(byte *)(iVar1 + 1);
      if ((uint)bVar4 == (uint)*(byte *)(iVar1 + 2)) {
        bVar3 = FUN_01001994();
      }
      else {
        bVar3 = *(byte *)((uint)bVar4 + iVar1 + 4);
        bVar4 = bVar4 + 1;
        *(byte *)(iVar1 + 1) = bVar4;
        bVar6 = 0x40 < bVar4;
        if (bVar6) {
          bVar4 = 0;
        }
        if (bVar6) {
          *(byte *)(iVar1 + 1) = bVar4;
        }
      }
      *param_2 = bVar3;
      iVar5 = iVar1 + (uint)(*param_2 >> 5) * 4;
      *(uint *)(iVar5 + 0x48) = *(uint *)(iVar2 + (*param_2 & 0x1f) * 4) | *(uint *)(iVar5 + 0x48);
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return param_4;
}



void FUN_01001276(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_010012f0;
  iVar2 = DAT_010012ec;
  uVar4 = (uint)*(byte *)(DAT_010012ec + 2);
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      *(byte *)(uVar4 + iVar2 + 4) = bVar1;
      uVar4 = uVar4 + 1 & 0xff;
      if (0x40 < uVar4) {
        uVar4 = 0;
      }
      iVar5 = iVar2 + (uint)(bVar1 >> 5) * 4;
      *(uint *)(iVar5 + 0x48) = *(uint *)(iVar5 + 0x48) & ~*(uint *)(iVar3 + (bVar1 & 0x1f) * 4);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(char *)(iVar2 + 2) = (char)uVar4;
  return;
}



uint FUN_010012b2(uint param_1)

{
  return ~-(uint)((*(uint *)(DAT_010012f0 + (param_1 & 0x1f) * 4) &
                  *(uint *)(DAT_010012ec + (param_1 >> 5) * 4 + 0x48)) == 0) >> 0x1f;
}



void thunk_EXT_FUN_80062a60(void)

{
                    // WARNING: Could not recover jumptable at 0x010012fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01001300)();
  return;
}



void thunk_EXT_FUN_8006c84c(void)

{
                    // WARNING: Could not recover jumptable at 0x01001304. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01001308)();
  return;
}



byte FUN_0100132a(int param_1)

{
  return *(byte *)(param_1 + DAT_0100149c) & 7;
}



byte FUN_01001334(int param_1)

{
  return *(byte *)(param_1 + DAT_0100149c) >> 7;
}



undefined1 FUN_0100133c(int param_1)

{
  return *(undefined1 *)(param_1 + DAT_0100149c + 0xd30);
}



void FUN_01001346(int param_1)

{
  if ((*(char *)(param_1 + DAT_010014a0) == -1) &&
     ((int)((uint)*(byte *)(param_1 + DAT_0100149c) << 0x18) < 0)) {
    FUN_01001ae0(param_1);
    FUN_01001e9e(param_1);
  }
  return;
}



undefined2 FUN_0100136c(int param_1)

{
  return *(undefined2 *)(DAT_010014a8 + param_1 * 2);
}



undefined1 FUN_01001374(int param_1)

{
  return *(undefined1 *)(param_1 + DAT_010014ac);
}



void FUN_0100137a(int param_1)

{
  FUN_0100200c();
  FUN_01001b64(param_1);
  FUN_010024f4(param_1);
  FUN_01002938(DAT_0100149c + param_1 * 0x14 + 0xf0,DAT_010014b0,param_1 + 0x10014c0);
  return;
}



void FUN_010013aa(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0100149c;
  uVar3 = (uint)*param_1;
  if ((*(byte *)(uVar3 + DAT_0100149c) & 7) != 3) {
    thunk_EXT_FUN_8006c84c();
  }
  iVar2 = FUN_010029f4(uVar3);
  if (iVar2 == 1) {
    iVar2 = iVar1 + uVar3 * 0x14 + 0xf0;
    FUN_01001818(0,iVar2);
    *(byte *)(uVar3 + iVar1) = *(byte *)(uVar3 + iVar1) & 0xf8 | 4;
    FUN_01002938(iVar2,DAT_010014b4,uVar3 + 0x10014c0);
    FUN_010017e2(1,iVar2);
    if ((int)((uint)*(byte *)(uVar3 + iVar1) << 0x18) < 0) {
      FUN_01002548(uVar3);
    }
  }
  return;
}



undefined4 FUN_01001476(int param_1)

{
  undefined4 unaff_r7;
  
  FUN_01001818((*(byte *)(param_1 + DAT_0100149c) & 7) == 4,DAT_0100149c + param_1 * 0x14 + 0xf0);
  return unaff_r7;
}



void thunk_EXT_FUN_80057bc0(void)

{
                    // WARNING: Could not recover jumptable at 0x01001650. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01001654)();
  return;
}



void FUN_0100179c(void)

{
                    // WARNING: Could not recover jumptable at 0x010017a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(DAT_010017c4 + 0xc))(*(undefined1 *)(DAT_010017c4 + 9));
  return;
}



void FUN_010017e2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_010018b8;
  piVar3 = (int *)(DAT_010018b8 + param_1 * 8);
  iVar2 = FUN_01002988(param_2);
  if (iVar2 != 0) {
    thunk_EXT_FUN_8006c84c();
  }
  if (*piVar3 == 0) {
    FUN_01002946(0,param_2);
    *piVar3 = param_2;
  }
  else {
    FUN_01002946(piVar3[1],param_2);
  }
  piVar3[1] = param_2;
  *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + 1;
  return;
}



void FUN_01001818(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_010018b8;
  piVar3 = (int *)(DAT_010018b8 + param_1 * 8);
  iVar2 = FUN_01002988(param_2);
  if (iVar2 == 1) {
    if (*piVar3 == param_2) {
      iVar2 = FUN_01002980(param_2);
      *piVar3 = iVar2;
    }
    if (piVar3[1] == param_2) {
      iVar2 = FUN_01002984(param_2);
      piVar3[1] = iVar2;
    }
    FUN_01002964(param_2);
    *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + -1;
  }
  return;
}



uint FUN_01001856(void)

{
  return ~-(uint)(*(short *)(DAT_010018b8 + 0x10) == 0) >> 0x1f;
}



void FUN_01001864(void)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  
  piVar2 = DAT_010018b8;
  iVar1 = *DAT_010018b8;
  while (iVar1 != 0) {
    iVar4 = FUN_01002980(iVar1);
    (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8));
    iVar1 = iVar4;
  }
  if ((uint)*(ushort *)((int)piVar2 + 0x12) == (*(ushort *)((int)piVar2 + 0x12) / 5) * 5) {
    iVar1 = piVar2[2];
    while (iVar1 != 0) {
      iVar4 = FUN_01002980(iVar1);
      (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8));
      iVar1 = iVar4;
    }
  }
  uVar3 = *(short *)((int)piVar2 + 0x12) + 1;
  *(ushort *)((int)piVar2 + 0x12) = uVar3;
  bVar5 = 0x32 < uVar3;
  if (bVar5) {
    uVar3 = 1;
  }
  if (bVar5) {
    *(ushort *)((int)piVar2 + 0x12) = uVar3;
  }
  return;
}



void thunk_EXT_FUN_8008d53c(void)

{
                    // WARNING: Could not recover jumptable at 0x010018bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010018c0)();
  return;
}



undefined8 FUN_01001994(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  uVar1 = FUN_01003be2();
  uVar2 = FUN_01002a50();
  FUN_01001f7c(uVar1);
  if (uVar2 < 0x40) {
    local_10 = CONCAT31(local_10._1_3_,(char)uVar2);
    FUN_01001276(&local_10,1);
  }
  return CONCAT44(local_10,uVar1);
}



undefined8 FUN_010019bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_010012b2();
  if ((iVar1 == 1) && (iVar1 = FUN_0100132a(param_1), iVar1 != 0)) {
    uVar2 = 1;
  }
  return CONCAT44(param_4,uVar2);
}



uint FUN_010019d8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + DAT_01001a38);
  if (((int)(uVar2 << 0x18) < 0) &&
     (((int)(uVar2 << 0x1c) < 0 || (iVar1 = FUN_01003af0(), iVar1 == 1)))) {
    uVar2 = uVar2 & 0x7f;
  }
  return uVar2;
}



ushort FUN_010019f6(int param_1)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  uVar2 = FUN_01001374();
  if (1 < uVar2) {
    sVar1 = FUN_0100136c(param_1);
    uVar3 = (ushort)*(byte *)(param_1 + DAT_01001a3c) + sVar1;
  }
  if (*(short *)(DAT_01001a40 + param_1 * 2) != -1) {
    uVar3 = *(byte *)(param_1 + DAT_01001a44) + uVar3;
  }
  if (0x1ff < uVar3) {
    uVar3 = 0x1ff;
  }
  return uVar3;
}



undefined4 FUN_01001a48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *DAT_01001b4c;
  uVar3 = (uint)*(byte *)(iVar2 + 2);
  if ((*(ushort *)(iVar2 + 0x10) != 0xffff) && (*(byte *)(iVar2 + 0x1a) != 0)) {
    uVar3 = uVar3 + ((int)((int)*(char *)((uint)*DAT_01001b50 +
                                         *DAT_01001b54 + (uint)*(ushort *)(iVar2 + 0x10) * 0x80) *
                          (uint)*(byte *)(iVar2 + 0x1a)) >> 4);
  }
  uVar1 = UnsignedSaturate(param_1 + uVar3,7);
  UnsignedDoesSaturate(param_1 + uVar3,7);
  return uVar1;
}



undefined4 FUN_01001a7c(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_01001b4c;
  bVar1 = *(byte *)(iVar3 + 4);
  if ((*(ushort *)(iVar3 + 0x10) != 0xffff) && (*(byte *)(iVar3 + 0x1b) != 0)) {
    *param_1 = *param_1 +
               ((int)((int)*(char *)((uint)*DAT_01001b50 +
                                    *DAT_01001b54 + (uint)*(ushort *)(iVar3 + 0x10) * 0x80) *
                     (uint)*(byte *)(iVar3 + 0x1b)) >> 4);
  }
  iVar3 = *param_1 + (uint)bVar1;
  uVar2 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  return uVar2;
}



void FUN_01001ab6(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [8];
  undefined1 local_10;
  
  iVar1 = FUN_01002196();
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + DAT_01001b58) = 5;
    local_10 = FUN_01001b1c(param_1);
    FUN_01003ce4(param_1,auStack_18);
  }
  return;
}



void FUN_01001ae0(int param_1)

{
  undefined1 auStack_18 [8];
  undefined1 local_10;
  
  if (*(byte *)(param_1 + DAT_01001b58) == 5) {
    local_10 = FUN_01001b1c(param_1);
    FUN_01003e22(param_1,auStack_18);
  }
  else if (*(byte *)(param_1 + DAT_01001b58) < 5) {
    FUN_01001ab6(param_1);
  }
  return;
}



void FUN_01001b0e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  *(undefined1 *)(param_1 + DAT_01001b58) = 0;
  iVar1 = DAT_01003f00;
  puVar4 = (ushort *)(DAT_01003f00 + param_1 * 2);
  *puVar4 = *puVar4 & 0x7fff;
  iVar2 = DAT_01003f04;
  puVar5 = (ushort *)(DAT_01003f04 + param_1 * 2);
  *puVar5 = *puVar5 & 0x80fc | 0xf000;
  param_1 = param_1 + DAT_01003f08;
  uVar3 = (uint)*(byte *)(param_1 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar1 + uVar3 * 2) = *puVar4;
    *(ushort *)(iVar2 + (uint)*(byte *)(param_1 + 8) * 2) = *puVar5;
  }
  return;
}



void thunk_FUN_01001b0e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  *(undefined1 *)(param_1 + DAT_01001b58) = 0;
  iVar1 = DAT_01003f00;
  puVar4 = (ushort *)(DAT_01003f00 + param_1 * 2);
  *puVar4 = *puVar4 & 0x7fff;
  iVar2 = DAT_01003f04;
  puVar5 = (ushort *)(DAT_01003f04 + param_1 * 2);
  *puVar5 = *puVar5 & 0x80fc | 0xf000;
  param_1 = param_1 + DAT_01003f08;
  uVar3 = (uint)*(byte *)(param_1 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar1 + uVar3 * 2) = *puVar4;
    *(ushort *)(iVar2 + (uint)*(byte *)(param_1 + 8) * 2) = *puVar5;
  }
  return;
}



byte FUN_01001b1c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + DAT_01001b5c + 0xcb0);
  if (*(char *)(param_1 + DAT_01001b5c + 0xd30) != -0x40) {
    uVar2 = (uint)*DAT_01001b60;
    if (0x7e < uVar2) {
      uVar2 = 0x80;
    }
    bVar1 = bVar1 - (char)((int)(uVar2 * ((uint)bVar1 -
                                         (uint)*(byte *)(param_1 + DAT_01001b5c + 0xcf0))) >> 7);
  }
  return bVar1;
}



void FUN_01001b64(int param_1)

{
  *(undefined1 *)(param_1 + DAT_01001f64 + 0xbb0) = 1;
  return;
}



void FUN_01001b72(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  
  iVar6 = DAT_01001f64;
  sVar3 = *(short *)(DAT_01001f64 + param_1 * 2 + 0x730);
  iVar7 = 0;
  iVar12 = 0;
  iVar13 = 0;
  sVar10 = 0xff;
  psVar14 = (short *)*DAT_01001f68;
  if (((ushort)psVar14[9] != 0xffff) && ((ushort)(short)*(char *)((int)psVar14 + 0x1b) != 0)) {
    sVar10 = 0xff - (short)((int)((uint)(ushort)(short)*(char *)((int)psVar14 + 0x1b) *
                                 (uint)(ushort)(short)*(char *)((uint)*DAT_01001f6c +
                                                               *DAT_01001f70 +
                                                               (uint)(ushort)psVar14[9] * 0x80)) >>
                           3);
  }
  iVar5 = (int)sVar10;
  sVar10 = sVar3 + (short)(iVar5 * *psVar14 + ((uint)(iVar5 * *psVar14 >> 7) >> 0x18) >> 8);
  if (sVar10 < 0x801) {
    sVar10 = 0x801;
  }
  else if (0x1000 < sVar10) {
    sVar10 = 0x1000;
  }
  iVar4 = DAT_01001f64 + param_1 * 2;
  *(short *)(iVar4 + 0x7f0) = sVar10 + -0xc00;
  sVar10 = sVar3 + (short)(iVar5 * psVar14[1] + ((uint)(iVar5 * psVar14[1] >> 7) >> 0x18) >> 8);
  if (sVar10 < 0x801) {
    sVar10 = 0x801;
  }
  else if (0x1000 < sVar10) {
    sVar10 = 0x1000;
  }
  *(short *)(iVar4 + 0x8b0) = sVar10 + -0xc00;
  sVar10 = sVar3 + (short)(iVar5 * psVar14[2] + ((uint)(iVar5 * psVar14[2] >> 7) >> 0x18) >> 8);
  if (sVar10 < 0x801) {
    sVar10 = 0x801;
  }
  else if (0x1000 < sVar10) {
    sVar10 = 0x1000;
  }
  *(short *)(iVar4 + 0x970) = sVar10 + -0xc00;
  sVar10 = sVar3 + (short)(iVar5 * psVar14[3] + ((uint)(iVar5 * psVar14[3] >> 7) >> 0x18) >> 8);
  if (sVar10 < 0x801) {
    sVar10 = 0x801;
  }
  else if (0x1000 < sVar10) {
    sVar10 = 0x1000;
  }
  *(short *)(iVar4 + 0xa30) = sVar10 + -0xc00;
  sVar3 = sVar3 + (short)(psVar14[4] * iVar5 + ((uint)(psVar14[4] * iVar5 >> 7) >> 0x18) >> 8);
  if (sVar3 < 0x801) {
    sVar3 = 0x801;
  }
  else if (0x1000 < sVar3) {
    sVar3 = 0x1000;
  }
  *(short *)(iVar4 + 0xaf0) = sVar3 + -0xc00;
  sVar3 = 0;
  if (((ushort)psVar14[8] != 0xffff) && ((char)psVar14[0xd] != 0)) {
    sVar3 = (short)((int)(char)psVar14[0xd] *
                    (int)*(char *)((uint)*DAT_01001f74 +
                                  *DAT_01001f70 + (uint)(ushort)psVar14[8] * 0x80) >> 4);
  }
  uVar11 = (uint)(ushort)psVar14[0xb];
  if (uVar11 != 0xffff) {
    iVar13 = *DAT_01001f70 + uVar11 * 0x80;
    iVar12 = (int)*(char *)((uint)*DAT_01001f6c + iVar13);
    iVar13 = (int)*(char *)((iVar13 - (uint)*DAT_01001f6c) + 0x7f);
  }
  bVar1 = *(byte *)(psVar14 + 5);
  uVar9 = (ushort)bVar1;
  if (bVar1 == 0x7f) {
    cVar8 = -0x80;
    *(undefined1 *)(param_1 + iVar6 + 0xbb0) = 2;
  }
  else {
    if (uVar11 != 0xffff) {
      iVar7 = (int)*(char *)((int)psVar14 + 0x1d);
      if (iVar7 < 1) {
        if (iVar7 < 0) {
          uVar9 = (ushort)bVar1 + (short)(-(iVar13 * iVar7) >> 3);
        }
      }
      else {
        uVar9 = (ushort)bVar1 + (short)(iVar12 * iVar7 >> 3);
      }
    }
    uVar2 = UnsignedSaturate((int)(short)(sVar3 + uVar9),7);
    cVar8 = (char)uVar2;
    UnsignedDoesSaturate((int)(short)(sVar3 + uVar9),7);
  }
  iVar6 = param_1 + iVar6;
  *(char *)(iVar6 + 0x870) = -0x80 - cVar8;
  uVar9 = (ushort)*(byte *)((int)psVar14 + 0xb);
  if (uVar11 != 0xffff) {
    iVar7 = (int)(char)psVar14[0xf];
    if (iVar7 < 1) {
      if (-1 < iVar7) goto LAB_01001d6e;
      iVar5 = -(iVar13 * iVar7);
    }
    else {
      iVar5 = iVar12 * iVar7;
    }
    uVar9 = (ushort)*(byte *)((int)psVar14 + 0xb) + (short)(iVar5 >> 3);
  }
LAB_01001d6e:
  uVar2 = UnsignedSaturate((int)(short)(sVar3 + uVar9),7);
  UnsignedDoesSaturate((int)(short)(sVar3 + uVar9),7);
  *(char *)(iVar6 + 0x930) = (char)uVar2;
  uVar9 = (ushort)*(byte *)(psVar14 + 6);
  if (uVar11 != 0xffff) {
    iVar7 = (int)*(char *)((int)psVar14 + 0x1f);
    if (iVar7 < 1) {
      if (-1 < iVar7) goto LAB_01001d9e;
      iVar5 = -(iVar13 * iVar7);
    }
    else {
      iVar5 = iVar12 * iVar7;
    }
    uVar9 = (ushort)*(byte *)(psVar14 + 6) + (short)(iVar5 >> 3);
  }
LAB_01001d9e:
  uVar2 = UnsignedSaturate((int)(short)(sVar3 + uVar9),7);
  UnsignedDoesSaturate((int)(short)(sVar3 + uVar9),7);
  *(char *)(iVar6 + 0x9f0) = (char)uVar2;
  uVar9 = (ushort)*(byte *)((int)psVar14 + 0xd);
  if (uVar11 != 0xffff) {
    iVar7 = (int)*(char *)((int)psVar14 + 0x1f);
    if (iVar7 < 1) {
      if (-1 < iVar7) goto LAB_01001dce;
      iVar5 = -(iVar13 * iVar7);
    }
    else {
      iVar5 = iVar12 * iVar7;
    }
    uVar9 = (ushort)*(byte *)((int)psVar14 + 0xd) + (short)(iVar5 >> 3);
  }
LAB_01001dce:
  uVar2 = UnsignedSaturate((int)(short)(sVar3 + uVar9),7);
  UnsignedDoesSaturate((int)(short)(sVar3 + uVar9),7);
  *(char *)(iVar6 + 0xab0) = (char)uVar2;
  uVar9 = (ushort)*(byte *)(psVar14 + 7);
  if (uVar11 != 0xffff) {
    if (iVar7 < 1) {
      if (-1 < iVar7) goto LAB_01001dfa;
      iVar12 = -(iVar13 * iVar7);
    }
    else {
      iVar12 = iVar12 * iVar7;
    }
    uVar9 = (ushort)*(byte *)(psVar14 + 7) + (short)(iVar12 >> 3);
  }
LAB_01001dfa:
  uVar2 = UnsignedSaturate((int)(short)(sVar3 + uVar9),7);
  UnsignedDoesSaturate((int)(short)(sVar3 + uVar9),7);
  *(char *)(iVar6 + 0xb70) = (char)uVar2;
  iVar12 = (int)*(short *)(iVar4 + 0x7f0);
  if (*(char *)(iVar6 + 0xbb0) == '\x01') {
    local_30 = (undefined2)((int)(iVar12 + ((uint)(iVar12 >> 1) >> 0x1e)) >> 2);
    local_2c = 0;
    local_2e = local_30;
  }
  else {
    local_30 = (undefined2)((int)(iVar12 + ((uint)(iVar12 >> 1) >> 0x1e)) >> 2);
    local_2e = (undefined2)
               ((int)((int)*(short *)(iVar4 + 0x8b0) +
                     ((uint)((int)*(short *)(iVar4 + 0x8b0) >> 1) >> 0x1e)) >> 2);
    local_2c = *(undefined1 *)(iVar6 + 0x930);
  }
  FUN_01003f14(param_1,&local_30);
  return;
}



void FUN_01001e5a(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined1 local_14;
  
  iVar2 = DAT_01001f64;
  iVar3 = param_1 + DAT_01001f64;
  *(undefined1 *)(iVar3 + 0xbb0) = 4;
  iVar2 = iVar2 + param_1 * 2;
  sVar1 = *(short *)(iVar2 + 0xa30);
  local_14 = *(undefined1 *)(iVar3 + 0xab0);
  if (0x3f < *DAT_01001f78) {
    sVar1 = *(short *)(iVar2 + 0xaf0);
  }
  if (0x3f < *DAT_01001f78) {
    local_14 = *(undefined1 *)(iVar3 + 0xb70);
  }
  local_16 = (undefined2)((int)((int)sVar1 + ((uint)((int)sVar1 >> 1) >> 0x1e)) >> 2);
  FUN_01003f54(param_1,auStack_18);
  return;
}



void FUN_01001e9e(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined1 local_14;
  
  iVar3 = param_1 + DAT_01001f64;
  if (*(char *)(iVar3 + 0xbb0) == '\x04') {
    iVar2 = DAT_01001f64 + param_1 * 2;
    sVar1 = *(short *)(iVar2 + 0xa30);
    local_14 = *(undefined1 *)(iVar3 + 0xab0);
    if (0x3f < *DAT_01001f78) {
      sVar1 = *(short *)(iVar2 + 0xaf0);
    }
    if (0x3f < *DAT_01001f78) {
      local_14 = *(undefined1 *)(iVar3 + 0xb70);
    }
    local_16 = (undefined2)((int)((int)sVar1 + ((uint)((int)sVar1 >> 1) >> 0x1e)) >> 2);
    FUN_01003f54(param_1,auStack_18);
  }
  return;
}



void FUN_01001ee4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 auStack_18 [8];
  
  iVar2 = DAT_01001f64;
  iVar4 = param_1 + DAT_01001f64;
  if (*(char *)(iVar4 + 0xbb0) == '\x01') {
    cVar1 = *(char *)(iVar4 + 0x870) + -1;
    *(char *)(iVar4 + 0x870) = cVar1;
    if (cVar1 != '\0') {
      return;
    }
    *(undefined1 *)(iVar4 + 0xbb0) = 2;
    iVar2 = (int)*(short *)(iVar2 + param_1 * 2 + 0x8b0);
    local_1e = (undefined2)((int)(iVar2 + ((uint)(iVar2 >> 1) >> 0x1e)) >> 2);
    local_1c = *(undefined1 *)(iVar4 + 0x930);
  }
  else {
    if (*(char *)(iVar4 + 0xbb0) != '\x02') {
      return;
    }
    iVar3 = FUN_01003fc2(param_1,auStack_18);
    if (iVar3 != 1) {
      return;
    }
    *(undefined1 *)(iVar4 + 0xbb0) = 3;
    iVar2 = (int)*(short *)(iVar2 + param_1 * 2 + 0x970);
    local_1e = (undefined2)((int)(iVar2 + ((uint)(iVar2 >> 1) >> 0x1e)) >> 2);
    local_1c = *(undefined1 *)(iVar4 + 0x9f0);
  }
  FUN_01003f54(param_1,auStack_20);
  return;
}



void FUN_01001f7c(int param_1)

{
  FUN_01001b0e();
  FUN_01002a58(param_1);
  FUN_01001476(param_1);
  *(byte *)(param_1 + DAT_01001f9c) = *(byte *)(param_1 + DAT_01001f9c) & 0xf8;
  return;
}



undefined8 FUN_01001fa0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined6 uStack_16;
  
  uVar1 = FUN_01002a50();
  uVar2 = 1;
  FUN_01001f7c(param_1);
  local_18 = (undefined1)param_1;
  if (uVar1 < 0x40) {
    uStack_17 = (undefined1)uVar1;
    uVar2 = 2;
  }
  FUN_01001276(&local_18,uVar2);
  return CONCAT62(uStack_16,CONCAT11(uStack_17,local_18));
}



undefined8 FUN_01001fc4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined6 uStack_16;
  
  uVar1 = FUN_01002a50();
  uVar2 = 1;
  thunk_FUN_01001b0e(param_1);
  FUN_01002a58(param_1);
  FUN_01001476(param_1);
  *(byte *)(param_1 + DAT_01001fe8) = *(byte *)(param_1 + DAT_01001fe8) & 0xf8;
  local_18 = (undefined1)param_1;
  if (uVar1 < 0x40) {
    uStack_17 = (undefined1)uVar1;
    uVar2 = 2;
  }
  FUN_01001276(&local_18,uVar2);
  return CONCAT62(uStack_16,CONCAT11(uStack_17,local_18));
}



void FUN_0100200c(int param_1)

{
  *(undefined1 *)(param_1 + DAT_01002250) = 1;
  return;
}



void FUN_01002014(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  byte bVar5;
  short sVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_1b;
  undefined1 local_1a;
  
  bVar5 = *(byte *)(*DAT_01002254 + 0xc) & 0xc0;
  iVar12 = param_1 + DAT_01002258;
  *(byte *)(iVar12 + 0xd30) = bVar5;
  piVar4 = DAT_0100225c;
  local_1a = bVar5 == 0x40;
  local_1b = 0;
  puVar7 = (undefined1 *)*DAT_0100225c;
  uVar9 = (byte)puVar7[1] & 0x7f;
  if ((*(ushort *)(puVar7 + 0x10) != 0xffff) && ((char)puVar7[0x19] != 0)) {
    uVar9 = uVar9 + ((int)(char)puVar7[0x19] *
                     (int)*(char *)((uint)*DAT_01002260 +
                                   *DAT_01002264 + (uint)*(ushort *)(puVar7 + 0x10) * 0x80) >> 4);
  }
  uVar8 = UnsignedSaturate(uVar9,7);
  UnsignedDoesSaturate(uVar9,7);
  iVar11 = (int)*DAT_01002268;
  if (iVar11 < 1) {
    uVar9 = uVar8 - iVar11;
    if ((int)(uVar8 - iVar11) < 0x80) goto LAB_0100209a;
    uVar9 = 0x7f;
  }
  else {
    uVar9 = uVar8;
    if ((int)(uint)(byte)(&DAT_010022cc)[iVar11] < (int)uVar8) {
      uVar9 = (uint)(byte)(&DAT_010022cc)[iVar11];
    }
LAB_0100209a:
    if (uVar9 != 0x7f) {
      local_24 = *puVar7;
      goto LAB_010020a4;
    }
  }
  local_24 = 0;
LAB_010020a4:
  local_23 = 0;
  local_20 = (undefined1)uVar9;
  local_28 = 0;
  if ((*(ushort *)(puVar7 + 0xc) != 0xffff) && ((char)puVar7[0x17] != 0)) {
    local_28 = (int)*(char *)((uint)*DAT_0100226c +
                             *DAT_01002264 + (uint)*(ushort *)(puVar7 + 0xc) * 0x80) *
               (int)(char)puVar7[0x17] >> 4;
  }
  cVar1 = puVar7[3];
  if (cVar1 == '\0') {
    local_1f = 0x7f;
  }
  else {
    local_1f = FUN_01001a48(local_28);
  }
  cVar2 = *(char *)(*piVar4 + 5);
  *(char *)(iVar12 + 0xc30) = cVar2;
  local_22 = cVar1;
  if (cVar2 == cVar1) {
    local_1e = 0x7f;
  }
  else {
    local_1e = FUN_01001a7c(&local_28);
  }
  *(undefined1 *)(iVar12 + 0xbf0) = local_1e;
  local_1d = *(byte *)(*piVar4 + 6);
  if (local_1d != 0) {
    iVar11 = (int)(short)((short)local_28 + (ushort)local_1d);
    uVar3 = UnsignedSaturate(iVar11,7);
    UnsignedDoesSaturate(iVar11,7);
    local_1d = (byte)uVar3;
  }
  *(byte *)(iVar12 + 0xc70) = local_1d;
  local_21 = cVar2;
  FUN_01003c94(param_1,&local_24);
  iVar11 = *piVar4;
  uVar9 = (uint)(short)((short)local_28 + (ushort)*(byte *)(iVar11 + 8));
  if ((int)uVar9 < 0x7f) {
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0x7e;
  }
  iVar10 = (int)*DAT_01002270;
  if (iVar10 < 1) {
    uVar8 = uVar9 - iVar10;
    if (0x7e < (short)(uVar9 - iVar10)) {
      uVar8 = 0x7e;
    }
  }
  else {
    uVar8 = uVar9;
    if ((int)(uint)(byte)(&DAT_0100228c)[iVar10] < (int)uVar9) {
      uVar8 = (uint)(byte)(&DAT_0100228c)[iVar10];
    }
  }
  *(char *)(iVar12 + 0xcb0) = (char)uVar8;
  sVar6 = (short)local_28 + (ushort)*(byte *)(iVar11 + 9);
  if (sVar6 < 0x7f) {
    if (sVar6 < 0) {
      sVar6 = 0;
    }
  }
  else {
    sVar6 = 0x7e;
  }
  *(char *)(iVar12 + 0xcf0) = (char)sVar6;
  return;
}



undefined4 FUN_01002196(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + DAT_01002250) < 5) &&
     ((iVar1 = FUN_0100133c(), iVar1 != 0xc0 || (*DAT_01002274 < 0x40)))) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 FUN_010021b8(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_18;
  undefined6 uStack_16;
  
  local_18 = 0;
  iVar3 = FUN_010029f4(param_1);
  if (iVar3 == 1) {
    iVar3 = FUN_01003e4c(param_1,&local_18);
    *(undefined2 *)(DAT_01002278 + param_1 * 2) = local_18;
    uVar5 = (uint)*(ushort *)(DAT_0100227c + param_1 * 2);
    if (uVar5 == 0xffff) {
      uVar4 = 0;
    }
    else {
      uVar1 = *(ushort *)(DAT_01002284 + param_1 * 2);
      iVar6 = *DAT_01002264 + uVar5 * 0x80;
      if (uVar1 >> 1 < 0x80) {
        uVar4 = *(undefined1 *)(((int)(uint)uVar1 >> 1) + iVar6);
      }
      else {
        uVar4 = *(undefined1 *)(iVar6 + 0x7f);
      }
    }
    *(undefined1 *)(param_1 + DAT_01002280) = uVar4;
    uVar2 = FUN_01003e8e(param_1);
    *(undefined2 *)(DAT_01002288 + param_1 * 2) = uVar2;
    if (*(byte *)(param_1 + DAT_01002250) < 5) {
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      else if (iVar3 == 0x40) {
        uVar4 = 2;
      }
      else if (iVar3 == 0x80) {
        uVar4 = 3;
      }
      else {
        if (iVar3 != 0xc0) {
          return CONCAT62(uStack_16,local_18);
        }
        uVar4 = 4;
      }
      *(undefined1 *)(param_1 + DAT_01002250) = uVar4;
    }
  }
  return CONCAT62(uStack_16,local_18);
}



void FUN_01002320(void)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte local_68 [64];
  byte local_28;
  
  pbVar9 = local_68;
  thunk_EXT_FUN_8008d53c(local_68,0x40,0xff);
  pbVar2 = DAT_01002418;
  thunk_EXT_FUN_80057bc0(local_68,DAT_0100241c,*DAT_01002418);
  local_28 = *pbVar2;
  uVar3 = FUN_01004588(local_68);
  iVar4 = FUN_0100462a(uVar3,local_68);
  iVar5 = FUN_010044a4(local_68);
  iVar7 = DAT_01002420;
  bVar1 = false;
  uVar10 = 0;
  if (local_28 != 0) {
    do {
      uVar8 = (uint)*pbVar9;
      if ((uVar8 != 0xff) && (iVar6 = FUN_0100132a(uVar8), iVar6 == 3)) {
        iVar6 = FUN_01001374(uVar8);
        if (iVar6 == 1) {
          FUN_01004876(uVar8);
          FUN_0100263c(uVar8);
          FUN_010050b8(uVar8);
          FUN_01002014(uVar8);
          FUN_01004730(uVar8);
          FUN_01001b72(uVar8);
          FUN_01005178(uVar8);
          FUN_01004f40(uVar8);
          FUN_01005334(uVar8);
          FUN_01005078(uVar8);
          FUN_0100298c(uVar8);
          bVar1 = true;
        }
        FUN_010017e2(0,iVar7 + uVar8 * 0x14 + 0xf0);
      }
      uVar10 = uVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 < local_28);
    if (bVar1) {
      FUN_010029d0(0);
    }
  }
  if ((iVar4 == 1) || (iVar5 == 1)) {
    iVar7 = iVar7 + 0xdc;
    iVar4 = FUN_01002988(iVar7);
    if (iVar4 == 0) {
      FUN_010017e2(0,iVar7);
    }
  }
  return;
}



void FUN_01002424(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte local_68 [64];
  byte local_28;
  
  pbVar8 = local_68;
  iVar3 = FUN_0100462a(0xff,local_68);
  iVar4 = FUN_010044f8(local_68);
  iVar2 = DAT_010024e0;
  bVar1 = false;
  uVar7 = 0;
  if (local_28 != 0) {
    do {
      uVar6 = (uint)*pbVar8;
      if ((uVar6 != 0xff) && (iVar5 = FUN_0100132a(uVar6), iVar5 == 3)) {
        iVar5 = FUN_01001374(uVar6);
        if (iVar5 == 1) {
          FUN_01004876(uVar6);
          FUN_0100263c(uVar6);
          FUN_010050b8(uVar6);
          FUN_01002014(uVar6);
          FUN_01004730(uVar6);
          FUN_01001b72(uVar6);
          FUN_01005178(uVar6);
          FUN_01004f40(uVar6);
          FUN_01005334(uVar6);
          FUN_01005078(uVar6);
          FUN_0100298c(uVar6);
          bVar1 = true;
        }
        FUN_010017e2(0,iVar2 + uVar6 * 0x14 + 0xf0);
      }
      uVar7 = uVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (uVar7 < local_28);
    if (bVar1) {
      FUN_010029d0(0);
    }
  }
  if (iVar4 == 0 && iVar3 == 0) {
    FUN_01001818(0,DAT_010024e4);
  }
  return;
}



void FUN_010024f4(int param_1)

{
  *(undefined2 *)(DAT_01002534 + param_1 * 2) = 0;
  *(undefined2 *)(DAT_01002538 + param_1 * 2) = 0;
  *(undefined1 *)(param_1 + DAT_0100253c) = 0;
  return;
}



uint FUN_01002508(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*DAT_01002544 +
          (uint)*(byte *)(param_1 + DAT_0100253c) + (uint)*(byte *)(param_1 + DAT_01002540 + 0x670);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  FUN_0100447c(param_1,&stack0xfffffff8);
  return uVar1 & 0xff;
}



undefined4 FUN_01002548(int param_1)

{
  undefined1 uVar1;
  undefined4 unaff_r7;
  
  if (*(char *)(param_1 + DAT_01002588) == '\x01') {
    if (-1 < (int)((uint)*(byte *)(DAT_0100258c + param_1 * 2) << 0x18)) {
      return unaff_r7;
    }
    *DAT_01002594 = *(undefined1 *)((uint)*(byte *)(param_1 + DAT_01002584) + DAT_01002590);
  }
  else {
    uVar1 = *(undefined1 *)((uint)*(byte *)(param_1 + DAT_01002584) + DAT_01002590);
    if (*(char *)(param_1 + DAT_01002598) != -1) {
      uVar1 = 0;
    }
    *DAT_01002594 = uVar1;
  }
  FUN_010025d8();
  return unaff_r7;
}



undefined4 FUN_0100259c(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_0100262c;
  if (param_2 != 0) {
    do {
      uVar3 = (uint)*param_1;
      *(byte *)(uVar3 + iVar1) = *(byte *)(uVar3 + iVar1) | 0x80;
      uVar2 = FUN_0100132a(uVar3);
      if (uVar2 != 1) {
        if (uVar2 == 0) {
LAB_010025c6:
          thunk_EXT_FUN_8006c84c();
        }
        else {
          if (uVar2 == 3) goto LAB_010025d0;
          if ((2 < uVar2) && (uVar2 != 4)) goto LAB_010025c6;
        }
        FUN_01002548(uVar3);
      }
LAB_010025d0:
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_4;
}



void FUN_010025d8(undefined4 param_1)

{
  FUN_01001ab6();
  FUN_01001e5a(param_1);
  return;
}



void FUN_010025ea(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_01001334();
  if ((iVar1 != 1) && ((int)((uint)*(byte *)(param_1 + DAT_01002630) << 0x1c) < 0)) {
    iVar1 = *(int *)(DAT_01002634 + param_1 * 4);
    if (iVar1 == 0) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = (ushort)*(byte *)(iVar1 + 1);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
    }
    if (uVar2 <= *(ushort *)(DAT_01002638 + param_1 * 2)) {
      *(byte *)(param_1 + DAT_0100262c) = *(byte *)(param_1 + DAT_0100262c) | 0x80;
      FUN_010025d8();
    }
  }
  return;
}



undefined8 FUN_0100263c(int param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  byte local_18;
  undefined1 local_17;
  byte local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  byte local_12;
  byte local_11;
  
  pbVar2 = (byte *)*DAT_010027c4;
  local_18 = *pbVar2 >> 7;
  iVar3 = 0;
  local_17 = 0;
  if (*(ushort *)(pbVar2 + 4) != 0xffff) {
    iVar3 = (int)*(char *)((uint)*DAT_010027c8 +
                          *DAT_010027cc + (uint)*(ushort *)(pbVar2 + 4) * 0x80);
  }
  iVar4 = (int)(short)((pbVar2[2] & 0x3f) + (short)(iVar3 << 1));
  uVar1 = UnsignedSaturate(iVar4,6);
  UnsignedDoesSaturate(iVar4,6);
  local_13 = (undefined1)uVar1;
  local_12 = pbVar2[3] & 0x3f;
  local_16 = (byte)(((uint)*pbVar2 << 0x19) >> 0x1f);
  local_15 = *pbVar2 & 0x3f;
  uVar7 = UnsignedSaturate(iVar3 + (uint)pbVar2[1],8);
  UnsignedDoesSaturate(iVar3 + (uint)pbVar2[1],8);
  *(char *)(param_1 + DAT_010027d0) = (char)uVar7;
  bVar5 = *DAT_010027d4;
  if (bVar5 == 0) {
    if (uVar7 == 0) {
      *(undefined1 *)(param_1 + DAT_010027d8) = 0;
    }
    else {
      bVar5 = pbVar2[7];
      if (bVar5 != 0) {
        uVar7 = (int)((uint)bVar5 << 1) / (int)uVar7;
        bVar5 = (byte)uVar7;
        if ((uVar7 & 0xff) == 0) {
          bVar5 = 1;
        }
        local_17 = 1;
        uVar7 = 0;
      }
      *(byte *)(param_1 + DAT_010027d8) = bVar5;
    }
    if (pbVar2[6] == 0) {
      cVar6 = *(char *)(param_1 + DAT_010027d8);
    }
    else {
      local_17 = 1;
      uVar7 = 0;
      cVar6 = pbVar2[6] << 1;
    }
    *(char *)(param_1 + DAT_010027dc) = cVar6;
  }
  else {
    *(undefined1 *)(param_1 + DAT_010027d8) = 0;
    *(undefined1 *)(param_1 + DAT_010027dc) = 0;
    uVar8 = (uint)(bVar5 >> 1);
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
  }
  *(char *)(param_1 + DAT_010027e0) = (char)uVar7;
  local_14 = (undefined1)((int)(uVar7 * 0x17 + 0xf) / 0x1e);
  local_11 = pbVar2[2] >> 7;
  FUN_01004154(param_1,&local_18);
  return CONCAT17(local_11,CONCAT16(local_12,CONCAT15(local_13,CONCAT14(local_14,CONCAT13(local_15,
                                                  CONCAT12(local_16,CONCAT11(local_17,local_18))))))
                 );
}



undefined8 FUN_01002724(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uStack_10;
  undefined1 local_f;
  undefined2 uStack_e;
  undefined4 local_c;
  
  uStack_10 = (undefined1)param_3;
  local_f = (undefined1)((uint)param_3 >> 8);
  uStack_e = (undefined2)((uint)param_3 >> 0x10);
  *(undefined1 *)(param_1 + DAT_010027dc) = 0;
  iVar3 = DAT_010027e0;
  bVar1 = *(byte *)(param_1 + DAT_010027d0);
  bVar2 = *DAT_010027d4 >> 1;
  if (bVar1 < bVar2) {
    *(byte *)(param_1 + DAT_010027e0) = bVar2;
  }
  if (bVar1 >= bVar2) {
    *(byte *)(param_1 + iVar3) = bVar1;
  }
  local_c = CONCAT31((int3)((uint)param_4 >> 8),
                     (char)(((uint)*(byte *)(param_1 + iVar3) * 0x17 + 0xf) / 0x1e));
  FUN_010041c6(param_1,&uStack_10);
  local_f = 0;
  FUN_010041ec(param_1,&uStack_10);
  return CONCAT44(local_c,CONCAT22(uStack_e,CONCAT11(local_f,uStack_10)));
}



undefined8 FUN_0100276c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uStack_18;
  undefined1 local_17;
  undefined2 uStack_16;
  undefined4 local_14;
  
  iVar2 = DAT_010027dc;
  uStack_18 = (undefined1)param_3;
  local_17 = (undefined1)((uint)param_3 >> 8);
  uStack_16 = (undefined2)((uint)param_3 >> 0x10);
  local_14 = param_4;
  if ((*(char *)(param_1 + DAT_010027dc) != '\0') &&
     (cVar1 = *(char *)(param_1 + DAT_010027dc) + -1, *(char *)(param_1 + DAT_010027dc) = cVar1,
     iVar3 = DAT_010027e0, cVar1 == '\0')) {
    bVar4 = *(byte *)(param_1 + DAT_010027d0);
    if (*(byte *)(param_1 + DAT_010027e0) < bVar4) {
      cVar1 = *(char *)(param_1 + DAT_010027d8);
      bVar5 = cVar1 == '\0';
      if (bVar5) {
        *(byte *)(param_1 + DAT_010027e0) = bVar4;
      }
      else {
        bVar4 = *(byte *)(param_1 + DAT_010027e0) + 1;
      }
      if (!bVar5) {
        *(byte *)(param_1 + iVar3) = bVar4;
      }
      if (!bVar5) {
        *(char *)(param_1 + iVar2) = cVar1;
      }
    }
    local_14 = CONCAT31((int3)((uint)param_4 >> 8),
                        (char)(((uint)*(byte *)(param_1 + iVar3) * 0x17 + 0xf) / 0x1e));
    FUN_010041c6(param_1,&uStack_18);
    local_17 = 0;
    FUN_010041ec(param_1,&uStack_18);
  }
  return CONCAT44(local_14,CONCAT22(uStack_16,CONCAT11(local_17,uStack_18)));
}



undefined4 FUN_010027e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_0100282c;
  sVar1 = *(short *)(DAT_0100282c + param_1 * 2);
  if (sVar1 == 0) {
    return param_4;
  }
  if (sVar1 < 0) {
    sVar1 = *(short *)(&DAT_01002838 +
                      (uint)*(byte *)((uint)*(byte *)(param_1 + DAT_01002830) + DAT_01002834) * 2) +
            sVar1;
    *(short *)(DAT_0100282c + param_1 * 2) = sVar1;
    if (sVar1 < 1) goto LAB_01002824;
  }
  else {
    sVar1 = sVar1 - *(short *)(&DAT_01002838 +
                              (uint)*(byte *)((uint)*(byte *)(param_1 + DAT_01002830) + DAT_01002834
                                             ) * 2);
    *(short *)(DAT_0100282c + param_1 * 2) = sVar1;
    if (-1 < sVar1) goto LAB_01002824;
  }
  *(undefined2 *)(iVar2 + param_1 * 2) = 0;
LAB_01002824:
  FUN_01005564();
  return param_4;
}



void FUN_01002938(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



void FUN_01002946(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 1;
  if (param_1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = param_2;
  *(int *)(param_2 + 0x10) = iVar1;
  *(int *)(param_2 + 0xc) = param_1;
  if (iVar1 != 0) {
    *(undefined1 **)(iVar1 + 0xc) = param_2;
  }
  return;
}



void FUN_01002964(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined4 FUN_01002980(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



undefined4 FUN_01002984(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



undefined1 FUN_01002988(undefined1 *param_1)

{
  return *param_1;
}



void FUN_0100298c(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_01002b00;
  iVar2 = DAT_01002afc;
  *(ushort *)(DAT_01002b00 + (param_1 >> 4) * 2) =
       *(ushort *)(DAT_01002b00 + (param_1 >> 4) * 2) |
       (ushort)*(undefined4 *)(DAT_01002afc + (param_1 & 0xf) * 4);
  if (*(char *)(param_1 + iVar3 + 8) != -1) {
    bVar1 = *(byte *)(param_1 + iVar3 + 8);
    FUN_01002a6c((uint)bVar1,param_1);
    *(ushort *)(iVar3 + (uint)(bVar1 >> 4) * 2) =
         *(ushort *)(iVar3 + (uint)(bVar1 >> 4) * 2) |
         (ushort)*(undefined4 *)(iVar2 + (bVar1 & 0xf) * 4);
  }
  return;
}



void FUN_010029d0(undefined2 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_01002b04;
  if (param_1 == (undefined2 *)0x0) {
    param_1 = DAT_01002b00;
  }
  *DAT_01002b04 = param_1[3];
  puVar1[1] = param_1[2];
  puVar1[2] = param_1[1];
  puVar1[3] = *param_1;
  puVar1[4] = 0x8000;
  puVar1[4] = 0x8000;
                    // WARNING: Could not recover jumptable at 0x01000fa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000fac)(param_1,8);
  return;
}



undefined4 FUN_010029f4(uint param_1)

{
  byte bVar1;
  
  if (((uint)*(ushort *)(DAT_01002b04 + ((3 - (param_1 >> 4)) * 0x20000 >> 0x10)) &
      *(uint *)(DAT_01002afc + (param_1 & 0xf) * 4)) == 0) {
    bVar1 = *(byte *)(param_1 + DAT_01002b00 + 8);
    if (bVar1 == 0xff) {
      return 1;
    }
    if (((uint)*(ushort *)(DAT_01002b04 + ((3 - (uint)(bVar1 >> 4)) * 0x20000 >> 0x10)) &
        *(uint *)(DAT_01002afc + (bVar1 & 0xf) * 4)) == 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_01002a3e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_01002b00;
  *(char *)(param_1 + DAT_01002b00 + 8) = (char)param_2;
  if (param_2 != 0xff) {
    *(undefined1 *)(param_2 + iVar1 + 8) = 0xfe;
  }
  return;
}



undefined1 FUN_01002a50(int param_1)

{
  return *(undefined1 *)(param_1 + DAT_01002b00 + 8);
}



void FUN_01002a58(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 + DAT_01002b00;
  uVar1 = (uint)*(byte *)(param_1 + 8);
  if (uVar1 < 0x40) {
    *(undefined1 *)(uVar1 + DAT_01002b00 + 8) = 0xff;
    *(undefined1 *)(param_1 + 8) = 0xff;
  }
  return;
}



void FUN_01002a6c(int param_1,int param_2)

{
  param_2 = param_2 * 2;
  param_1 = param_1 * 2;
  *(undefined2 *)(DAT_01002b08 + param_1) = *(undefined2 *)(DAT_01002b08 + param_2);
  *(undefined2 *)(DAT_01002b0c + param_1) = *(undefined2 *)(DAT_01002b0c + param_2);
  *(undefined2 *)(DAT_01002b10 + param_1) = *(undefined2 *)(DAT_01002b10 + param_2);
  *(undefined2 *)(DAT_01002b14 + param_1) = *(undefined2 *)(DAT_01002b14 + param_2);
  *(undefined2 *)(DAT_01002b18 + param_1) = *(undefined2 *)(DAT_01002b18 + param_2);
  *(undefined2 *)(DAT_01002b1c + param_1) = *(undefined2 *)(DAT_01002b1c + param_2);
  *(undefined2 *)(DAT_01002b20 + param_1) = *(undefined2 *)(DAT_01002b20 + param_2);
  *(undefined2 *)(DAT_01002b24 + param_1) = *(undefined2 *)(DAT_01002b24 + param_2);
  *(undefined2 *)(DAT_01002b28 + param_1) = *(undefined2 *)(DAT_01002b28 + param_2);
  *(undefined2 *)(DAT_01002b2c + param_1) = *(undefined2 *)(DAT_01002b2c + param_2);
  *(undefined2 *)(DAT_01002b30 + param_1) = *(undefined2 *)(DAT_01002b30 + param_2);
  *(undefined2 *)(DAT_01002b34 + param_1) = *(undefined2 *)(DAT_01002b34 + param_2);
  *(undefined2 *)(DAT_01002b38 + param_1) = *(undefined2 *)(DAT_01002b38 + param_2);
  *(undefined2 *)(DAT_01002b3c + param_1) = *(undefined2 *)(DAT_01002b3c + param_2);
  *(undefined2 *)(DAT_01002b40 + param_1) = *(undefined2 *)(DAT_01002b40 + param_2);
  *(undefined2 *)(DAT_01002b44 + param_1) = *(undefined2 *)(DAT_01002b44 + param_2);
  *(undefined2 *)(DAT_01002b48 + param_1) = *(undefined2 *)(DAT_01002b48 + param_2);
  *(undefined2 *)(DAT_01002b4c + param_1) = *(undefined2 *)(DAT_01002b4c + param_2);
  *(undefined2 *)(DAT_01002b50 + param_1) = *(undefined2 *)(DAT_01002b50 + param_2);
  *(undefined2 *)(DAT_01002b54 + param_1) = *(undefined2 *)(DAT_01002b54 + param_2);
  *(undefined2 *)(DAT_01002b58 + param_1) = *(undefined2 *)(DAT_01002b58 + param_2);
  *(undefined2 *)(DAT_01002b5c + param_1) = *(undefined2 *)(DAT_01002b5c + param_2);
  *(undefined2 *)(DAT_01002b60 + param_1) = *(undefined2 *)(DAT_01002b60 + param_2);
  return;
}



void thunk_EXT_FUN_800f9aca(void)

{
                    // WARNING: Could not recover jumptable at 0x010033d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010033d8)();
  return;
}



undefined4 FUN_010033e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r7;
  
  thunk_EXT_FUN_800f9aca(param_4,param_1,param_2);
  return unaff_r7;
}



void thunk_EXT_FUN_800fa568(void)

{
                    // WARNING: Could not recover jumptable at 0x010035e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010035e4)();
  return;
}



void thunk_EXT_FUN_800fa33c(void)

{
                    // WARNING: Could not recover jumptable at 0x010035e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010035ec)();
  return;
}



void FUN_010035f0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_01003980 + param_1 * 0x10;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       1 << (param_2 & 0x1f) | *(uint *)(iVar1 + (param_2 >> 5) * 4);
  return;
}



bool FUN_0100360e(int param_1,uint param_2)

{
  return (*(uint *)(DAT_01003980 + param_1 * 0x10 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) !=
         0;
}



void FUN_010036a2(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_01003980 + param_1 * 0x10;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) & ~(1 << (param_2 & 0x1f));
  return;
}



void FUN_010036c4(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x01000fa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000fac)(DAT_01003980 + param_1 * 0x10,0x10);
  return;
}



void FUN_0100374c(int param_1)

{
  thunk_EXT_FUN_80057bc0(DAT_01003984 + param_1 * 0x10,DAT_01003980 + param_1 * 0x10,0x10);
  return;
}



void FUN_0100375e(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x01000fa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01000fac)(DAT_01003984 + param_1 * 0x10,0x10);
  return;
}



bool FUN_0100376a(int param_1,uint param_2)

{
  return (*(uint *)(DAT_01003984 + param_1 * 0x10 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) !=
         0;
}



void FUN_0100378e(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  pcVar1 = DAT_01003988;
  *DAT_01003988 = -1;
  *DAT_0100398c = 0;
  thunk_EXT_FUN_800fa568();
  pbVar2 = DAT_01003990;
  uVar4 = (uint)*DAT_01003990;
  if (*pcVar1 == -1) {
    FUN_010035f0(uVar4,*DAT_01003994);
  }
  iVar3 = DAT_01003998;
  if (*(char *)(uVar4 * 0x10 + DAT_01003998) != -1) {
    thunk_EXT_FUN_800fa33c(uVar4,*DAT_01003994);
    uVar4 = (uint)*pbVar2;
    if (*(char *)(uVar4 * 0x10 + iVar3) == '\x02') {
      *(undefined1 *)(uVar4 + DAT_0100399c) = 0;
    }
  }
  thunk_EXT_FUN_80062a60(DAT_010039a0,4,0xff);
  pcVar1 = DAT_010039a4;
  *DAT_010039a4 = '\0';
  if (*(char *)((uint)*pbVar2 + DAT_010039a8) == '\0') {
    FUN_01003834();
  }
  else {
    FUN_01005bb8();
  }
  if (*pcVar1 != '\0') {
    FUN_01002320();
  }
  return;
}



undefined4 FUN_01003804(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar1 = DAT_010039b0;
  bVar3 = 0;
  pbVar4 = DAT_010039ac;
  if (*DAT_010039b0 != 0) {
    do {
      iVar2 = FUN_0100132a(bVar3);
      if ((iVar2 != 0) && (*pbVar4 == param_1)) {
        FUN_01001fa0(bVar3);
      }
      bVar3 = bVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 < *pbVar1);
  }
  return param_4;
}



void FUN_01003834(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  ushort *puVar13;
  byte *pbVar14;
  
  pbVar6 = DAT_01003990;
  if (*DAT_01003988 == -1) {
    if ((int)((uint)*(byte *)((uint)*DAT_01003990 + DAT_010039b8) << 0x1c) < 0) {
      bVar3 = *(byte *)((uint)*DAT_01003990 + DAT_010039bc) & 0x7f;
      uVar2 = 0xffff;
      uVar10 = 0;
      bVar7 = 0;
      pbVar9 = DAT_010039ac;
      pbVar11 = DAT_010039c4;
      pcVar12 = DAT_010039c8;
      puVar13 = DAT_010039cc;
      pbVar14 = DAT_010039c0;
      if (*DAT_010039b0 != 0) {
        do {
          iVar4 = FUN_0100132a(bVar7);
          if ((((iVar4 != 0) && (*pbVar9 == *pbVar6)) && (*pbVar14 == bVar3)) &&
             (((*pbVar11 & 0x88) == 0x80 && (*pcVar12 == -1)))) {
            uVar1 = *puVar13;
            if (uVar1 < uVar2) {
              *DAT_010039a0 = bVar7;
              uVar10 = 1;
              uVar2 = uVar1;
            }
            else if (uVar2 == uVar1) {
              DAT_010039a0[uVar10 & 0xff] = bVar7;
              uVar10 = (uVar10 & 0xff) + 1;
            }
          }
          bVar7 = bVar7 + 1;
          puVar13 = puVar13 + 1;
          pcVar12 = pcVar12 + 1;
          pbVar11 = pbVar11 + 1;
          pbVar14 = pbVar14 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar7 < *DAT_010039b0);
        uVar10 = uVar10 & 0xff;
        if (uVar10 != 0) {
          uVar5 = (uint)*pbVar6;
          *(byte *)(uVar5 + DAT_010039b8) = *(byte *)(uVar5 + DAT_010039b8) & 0xf7;
          *(byte *)(uVar5 + DAT_010039bc) = *(byte *)(uVar5 + DAT_010039bc) | 0x80;
          pbVar6 = DAT_010039a0;
          if (*DAT_01003994 < (byte)(bVar3 + 0xc)) {
            FUN_01005f60(uVar10,bVar3);
            return;
          }
          do {
            FUN_01001fa0(*pbVar6);
            uVar10 = uVar10 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar10 != 0);
          FUN_01005fec();
          FUN_01005ef2();
          return;
        }
      }
      *(byte *)((uint)*pbVar6 + DAT_010039b8) = *(byte *)((uint)*pbVar6 + DAT_010039b8) & 0xf7;
    }
    FUN_0100589c();
    uVar8 = 0;
    iVar4 = FUN_0100376a(*pbVar6,*DAT_01003994);
    if (iVar4 == 1) {
      uVar8 = 0x7f;
    }
    *DAT_010039b4 = uVar8;
    FUN_01005e72(*pbVar6);
    FUN_01005fec();
    FUN_01005f10();
  }
  else {
    *DAT_010039b4 = 0;
    FUN_01005fec();
  }
  return;
}



undefined4 FUN_01003a54(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  FUN_01003a76(param_1,param_2,param_2 + 4);
  cVar1 = *(char *)(param_1 + DAT_01003b9c + 8);
  if (cVar1 != -1) {
    FUN_01003a76(cVar1,param_2,param_2 + 0x20);
  }
  return param_4;
}



void FUN_01003a76(int param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 * 2;
  *(undefined2 *)(DAT_01003ba0 + param_1) = *(undefined2 *)(param_3 + 0x18);
  *(ushort *)(DAT_01003ba4 + param_1) = CONCAT11(param_3[2],param_3[3]);
  *(undefined2 *)(DAT_01003ba8 + param_1) = *(undefined2 *)(param_3 + 4);
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(ushort *)(DAT_01003bac + param_1) =
       (ushort)param_3[1] << 9 | (ushort)*param_3 << 0xe | (ushort)*param_2 << 8 |
       (ushort)((uint)uVar1 >> 0x10);
  *(short *)(DAT_01003bb0 + param_1) = (short)uVar1;
  *(undefined2 *)(DAT_01003bb4 + param_1) = *(undefined2 *)(param_3 + 0xc);
  *(undefined2 *)(DAT_01003bb8 + param_1) = *(undefined2 *)(param_3 + 0xe);
  *(undefined2 *)(DAT_01003bbc + param_1) = *(undefined2 *)(param_3 + 0x10);
  *(undefined2 *)(DAT_01003bc0 + param_1) = *(undefined2 *)(param_3 + 0x12);
  *(undefined2 *)(DAT_01003bc4 + param_1) = *(undefined2 *)(param_3 + 0x14);
  *(undefined2 *)(DAT_01003bc8 + param_1) = *(undefined2 *)(param_3 + 0x16);
  return;
}



ushort FUN_01003af0(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_01003bcc;
  *DAT_01003bcc = param_1;
  do {
  } while (-1 < (int)((uint)(ushort)puVar1[1] << 0x10));
  return (ushort)puVar1[1] >> 0xe & 1 ^ 1;
}



undefined4 FUN_01003b08(void)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined4 in_r3;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_01003bd0 + 4);
  iVar3 = 0x40;
  puVar2 = DAT_01003bd4;
  do {
    *puVar2 = 0xff00;
    puVar2[0x280] = (short)((uint)uVar5 >> 0x10);
    puVar2[0x2c0] = (short)uVar5;
    puVar2[0x200] = 0;
    puVar2[0x240] = 0;
    puVar2[0x1c0] = 0;
    puVar2[-0xc0] = 0;
    puVar2[-0x80] = 0x7f00;
    psVar1 = DAT_01003bd8;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *DAT_01003bd8 = -1;
  psVar1[1] = -1;
  psVar1[2] = -1;
  psVar1[3] = -1;
  psVar1[4] = -0x8000;
  psVar1[4] = -0x8000;
  do {
  } while (*psVar1 != 0);
  do {
  } while (psVar1[1] != 0);
  do {
  } while (psVar1[2] != 0);
  do {
  } while (psVar1[3] != 0);
  iVar3 = 0x40;
  puVar2 = DAT_01003bdc;
  do {
    *puVar2 = 0xff00;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  uVar4 = 0;
  do {
    do {
      iVar3 = FUN_01003af0(uVar4);
    } while (iVar3 != 1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  return in_r3;
}



undefined8 FUN_01003be2(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_r3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  
  uVar4 = 0xff;
  uVar7 = 0x80;
  iVar8 = -1;
  bVar1 = false;
  uVar5 = 0;
  pcVar6 = DAT_01003c80;
  pcVar9 = DAT_01003c84;
  if (*DAT_01003c88 != 0) {
    do {
      iVar2 = FUN_010019bc(uVar5);
      if (iVar2 == 1) {
        uVar3 = FUN_010019d8(uVar5);
        iVar2 = FUN_010019f6(uVar5);
        if ((int)(uVar3 << 0x18) < 0) {
          if ((uVar7 & 0x80) != 0) {
            if ((*pcVar6 == *DAT_01003c8c) && (*pcVar9 == *DAT_01003c90)) {
              if (bVar1) {
LAB_01003c26:
                uVar3 = uVar7;
                if (iVar8 < iVar2) goto LAB_01003c2c;
              }
              else {
                bVar1 = true;
                uVar4 = uVar5;
                iVar8 = iVar2;
              }
            }
            else if (!bVar1) goto LAB_01003c26;
          }
        }
        else {
          if ((uVar7 & 0x80) == 0) goto LAB_01003c26;
LAB_01003c2c:
          uVar4 = uVar5;
          uVar7 = uVar3;
          iVar8 = iVar2;
        }
      }
      pcVar9 = pcVar9 + 1;
      pcVar6 = pcVar6 + 1;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *DAT_01003c88);
    if (uVar4 != 0xff) goto LAB_01003c78;
  }
  thunk_EXT_FUN_8006c84c();
LAB_01003c78:
  return CONCAT44(in_r3,uVar4);
}



void FUN_01003c94(int param_1,byte *param_2)

{
  param_1 = param_1 * 2;
  *(ushort *)(param_1 + 0x40002500) = *(ushort *)(param_1 + 0x40002500) & 0xff00 | (ushort)*param_2;
  *(ushort *)(DAT_01003ef8 + param_1) = CONCAT11(param_2[4],param_2[1]);
  *(ushort *)(DAT_01003efc + param_1) = CONCAT11(param_2[5],param_2[2]);
  *(ushort *)(DAT_01003f00 + param_1) =
       (ushort)param_2[6] << 8 | (ushort)param_2[9] << 0xf | (ushort)param_2[3];
  *(ushort *)(DAT_01003f04 + param_1) = CONCAT11(param_2[7],param_2[10]);
  return;
}



void FUN_01003ce4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = DAT_01003f04;
  puVar4 = (ushort *)(DAT_01003f04 + param_1 * 2);
  uVar1 = CONCAT11(*(undefined1 *)(param_2 + 8),(char)*puVar4) | 0x8000;
  *puVar4 = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + DAT_01003f08 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar2 + uVar3 * 2) = uVar1;
  }
  return;
}



void FUN_01003e22(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = DAT_01003f04;
  puVar4 = (ushort *)(DAT_01003f04 + param_1 * 2);
  uVar1 = *puVar4 & 0x80ff | (ushort)*(byte *)(param_2 + 8) << 8;
  *puVar4 = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + DAT_01003f08 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar2 + uVar3 * 2) = uVar1;
  }
  return;
}



uint FUN_01003e4c(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  *param_2 = 0;
  iVar4 = FUN_010029f4();
  iVar2 = DAT_01003f0c;
  if (iVar4 == 1) {
    uVar7 = (uint)*(ushort *)(DAT_01003f0c + param_1 * 2);
    uVar6 = (int)uVar7 >> 6 & 0xff;
    uVar1 = (ushort)uVar6;
    *param_2 = uVar1;
    uVar7 = (int)uVar7 >> 8 & 0xc0;
    uVar5 = (uint)*(byte *)(param_1 + DAT_01003f08 + 8);
    if (uVar5 != 0xff) {
      uVar5 = (uint)*(ushort *)(iVar2 + uVar5 * 2) << 0x12;
      uVar3 = (ushort)(byte)(uVar5 >> 0x18);
      if (uVar6 < uVar5 >> 0x18) {
        uVar3 = uVar1;
      }
      *param_2 = uVar3;
    }
  }
  return uVar7;
}



undefined8 FUN_01003e8e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_010029f4();
  uVar2 = 0;
  if (iVar1 == 1) {
    uVar2 = (uint)*(ushort *)(DAT_01003f10 + param_1 * 2);
    uVar4 = uVar2 & 0xc000;
    if ((uVar4 == 0x8000) || (uVar4 == 0xc000)) {
      uVar2 = uVar2 & 0x1ff;
    }
    else {
      uVar2 = ((uint)*(ushort *)(DAT_01003f0c + param_1 * 2) << 0x12) >> 0x18;
    }
    uVar4 = (uint)*(byte *)(param_1 + DAT_01003f08 + 8);
    if (uVar4 != 0xff) {
      iVar1 = uVar4 * 2;
      uVar4 = (uint)*(ushort *)(DAT_01003f10 + iVar1);
      uVar3 = uVar4 & 0xc000;
      if ((uVar3 == 0x8000) || (uVar3 == 0xc000)) {
        uVar4 = uVar4 & 0x1ff;
      }
      else {
        uVar4 = ((uint)*(ushort *)(DAT_01003f0c + iVar1) << 0x12) >> 0x18;
      }
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
    }
  }
  return CONCAT44(param_4,uVar2);
}



void FUN_01003f14(int param_1,ushort *param_2)

{
  param_1 = param_1 * 2;
  *(ushort *)(DAT_01003ff8 + param_1) =
       *(ushort *)(DAT_01003ff8 + param_1) & 0xfc00 | *param_2 & 0x3ff;
  *(ushort *)(param_1 + 0x40002100) =
       *(ushort *)(param_1 + 0x40002100) & 0xfc00 | param_2[1] & 0x3ff;
  *(ushort *)(param_1 + 0x40002500) =
       *(ushort *)(param_1 + 0x40002500) & 0x80ff | (ushort)(byte)param_2[2] << 8;
  return;
}



void FUN_01003f54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  iVar1 = DAT_01003ffc;
  puVar4 = (ushort *)(DAT_01003ffc + param_1 * 2);
  *puVar4 = *puVar4 & 0xfc00 | *(ushort *)(param_2 + 2) & 0x3ff;
  iVar2 = DAT_01004000;
  puVar5 = (ushort *)(DAT_01004000 + param_1 * 2);
  *puVar5 = *puVar5 & 0x80ff | (ushort)*(byte *)(param_2 + 4) << 8;
  param_1 = param_1 + DAT_01004004;
  uVar3 = (uint)*(byte *)(param_1 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar1 + uVar3 * 2) = *puVar4;
    *(ushort *)(iVar2 + (uint)*(byte *)(param_1 + 8) * 2) = *puVar5;
  }
  return;
}



void FUN_01003f98(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = DAT_01004000;
  puVar4 = (ushort *)(DAT_01004000 + param_1 * 2);
  uVar1 = *puVar4 & 0x80ff | (ushort)*(byte *)(param_2 + 4) << 8;
  *puVar4 = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + DAT_01004004 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar2 + uVar3 * 2) = uVar1;
  }
  return;
}



undefined4 FUN_01003fc2(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = (uint)*(ushort *)(DAT_01004008 + param_1 * 2);
  if (((int)(uVar4 << 0x11) < 0) &&
     ((uVar2 = (uint)*(byte *)(param_1 + DAT_01004004 + 8), uVar2 == 0xff ||
      ((int)((uint)*(ushort *)(DAT_01004008 + uVar2 * 2) << 0x11) < 0)))) {
    uVar3 = 1;
  }
  uVar4 = uVar4 & 0x3fff;
  uVar1 = (ushort)uVar4;
  if ((int)(uVar4 << 0x12) < 0) {
    uVar1 = uVar1 | (ushort)DAT_0100400c;
  }
  *param_2 = uVar1;
  return uVar3;
}



void FUN_01004010(int param_1,undefined2 *param_2)

{
  param_1 = param_1 * 2;
  *(ushort *)(DAT_01004044 + param_1) =
       *(ushort *)(DAT_01004044 + param_1) & 0x3fff | (ushort)((*(byte *)(param_2 + 5) & 3) << 0xe);
  *(undefined2 *)(DAT_01004048 + param_1) = *param_2;
  *(undefined2 *)(DAT_0100404c + param_1) = param_2[1];
  *(undefined2 *)(DAT_01004050 + param_1) = param_2[2];
  *(undefined2 *)(DAT_01004054 + param_1) = param_2[3];
  *(undefined2 *)(DAT_01004058 + param_1) = param_2[4];
  return;
}



void FUN_0100405c(int param_1,byte *param_2)

{
  param_1 = param_1 * 2;
  *(ushort *)(DAT_01004124 + param_1) =
       (ushort)*param_2 << 0xc | (ushort)param_2[1] << 0xe | *(short *)(param_2 + 2) - 1U;
  *(ushort *)(DAT_01004128 + param_1) =
       *(ushort *)(DAT_01004128 + param_1) & 0xe3ff | (ushort)(byte)(&DAT_01004134)[param_2[4]] << 8
  ;
  *(ushort *)(param_1 + 0x40002100) =
       *(ushort *)(param_1 + 0x40002100) & 0x83ff | (ushort)param_2[4] << 10;
  return;
}



void FUN_01004154(int param_1,byte *param_2)

{
  param_1 = param_1 * 2;
  *(ushort *)(DAT_01004218 + param_1) =
       (ushort)param_2[1] << 0xe | (ushort)*param_2 << 0xf | (ushort)param_2[3] << 8 |
       (ushort)param_2[4];
  *(ushort *)(DAT_0100421c + param_1) = (ushort)param_2[5] | (ushort)param_2[6] << 9 | 0x40;
  *(ushort *)(param_1 + 0x40002b00) =
       *(ushort *)(param_1 + 0x40002b00) & 0x3fff | (ushort)param_2[2] << 0xf |
       (ushort)param_2[7] << 0xe;
  return;
}



void FUN_0100419c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = DAT_01004218;
  puVar4 = (ushort *)(DAT_01004218 + param_1 * 2);
  uVar1 = *puVar4 & 0xc0ff | (ushort)*(byte *)(param_2 + 3) << 8;
  *puVar4 = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + DAT_01004220 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar2 + uVar3 * 2) = uVar1;
  }
  return;
}



void FUN_010041c6(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  iVar1 = DAT_01004218;
  puVar4 = (ushort *)(DAT_01004218 + param_1 * 2);
  uVar3 = (ushort)*(byte *)(param_2 + 4) | *puVar4 & 0xff00;
  *puVar4 = uVar3;
  uVar2 = (uint)*(byte *)(param_1 + DAT_01004220 + 8);
  if (uVar2 != 0xff) {
    *(ushort *)(iVar1 + uVar2 * 2) = uVar3;
  }
  return;
}



void FUN_010041ec(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = DAT_01004218;
  puVar4 = (ushort *)(DAT_01004218 + param_1 * 2);
  uVar1 = *puVar4 & 0xbfff | (ushort)*(byte *)(param_2 + 1) << 0xe;
  *puVar4 = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + DAT_01004220 + 8);
  if (uVar3 != 0xff) {
    *(ushort *)(iVar2 + uVar3 * 2) = uVar1;
  }
  return;
}



void FUN_01004224(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01004238();
  FUN_01004276(param_1,param_2,param_4);
  return;
}



void FUN_01004238(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = DAT_01004400;
  puVar2 = (ushort *)(DAT_01004400 + param_1 * 2);
  param_1 = param_1 + DAT_01004404;
  if (*(char *)(param_1 + 8) == -1) {
    *puVar2 = CONCAT11(*(byte *)(param_2 + 7),*(undefined1 *)(param_2 + 8));
  }
  else {
    *puVar2 = (ushort)*(byte *)(param_2 + 7) << 8 | 0xff;
    *(ushort *)(iVar1 + (uint)*(byte *)(param_1 + 8) * 2) = *(byte *)(param_2 + 8) | 0xff00;
  }
  return;
}



void FUN_0100426c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_01004276();
  uVar2 = (uint)*(byte *)(param_1 + DAT_01004404 + 8);
  if (uVar2 != 0xff) {
    param_1 = param_1 * 2;
    iVar1 = uVar2 * 2;
    *(undefined2 *)(DAT_0100440c + iVar1) = *(undefined2 *)(DAT_0100440c + param_1);
    *(undefined2 *)(DAT_01004410 + iVar1) = *(undefined2 *)(DAT_01004410 + param_1);
    *(undefined2 *)(DAT_01004414 + iVar1) = *(undefined2 *)(DAT_01004414 + param_1);
    *(undefined2 *)(DAT_01004408 + iVar1) = *(undefined2 *)(DAT_01004408 + param_1);
  }
  return;
}



undefined4 FUN_01004276(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  
  if (*param_2 == '\0') {
    iVar2 = param_1 * 2;
    puVar4 = (undefined2 *)(DAT_01004408 + iVar2);
    *puVar4 = 0;
    *(ushort *)(DAT_0100440c + iVar2) = *(ushort *)(DAT_0100440c + iVar2) & 0xdfff;
    if (param_2[9] == '\x02') {
      *puVar4 = 2;
    }
    *(ushort *)(DAT_01004410 + iVar2) = CONCAT11(param_2[2],param_2[3]);
    uVar3 = CONCAT11(param_2[4],param_2[5]);
  }
  else {
    if (*param_2 != '\x01') {
      thunk_EXT_FUN_8006c84c();
      return param_4;
    }
    uVar6 = 0xff;
    uVar5 = 0xff;
    uVar7 = 0xff;
    uVar3 = 0xff;
    cVar1 = param_2[1];
    if (cVar1 == '\0') {
      uVar7 = (ushort)(byte)param_2[2];
    }
    else if (cVar1 == '\x01') {
      uVar6 = (uint)(byte)param_2[2];
    }
    else if (cVar1 == '\x02') {
      uVar3 = (ushort)(byte)param_2[2];
    }
    else if (cVar1 == '\v') {
      uVar5 = (uint)(byte)param_2[2];
    }
    else if (cVar1 != '\f') {
      thunk_EXT_FUN_8006c84c();
    }
    iVar2 = param_1 * 2;
    puVar4 = (undefined2 *)(DAT_01004408 + iVar2);
    *puVar4 = 0;
    *(ushort *)(DAT_0100440c + iVar2) = *(ushort *)(DAT_0100440c + iVar2) | 0x2000;
    if (param_2[9] == '\x02') {
      *puVar4 = 3;
    }
    *(ushort *)(DAT_01004410 + iVar2) = uVar7 | (ushort)(uVar5 << 8);
    uVar3 = uVar3 | (ushort)(uVar6 << 8);
  }
  *(ushort *)(DAT_01004414 + param_1 * 2) = uVar3;
  return param_4;
}



void FUN_0100432e(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 == '\0') {
    FUN_01004366(param_1);
  }
  uVar2 = (uint)*(byte *)(param_1 + DAT_01004404 + 8);
  if (uVar2 != 0xff) {
    param_1 = param_1 * 2;
    iVar1 = uVar2 * 2;
    *(undefined2 *)(DAT_0100440c + iVar1) = *(undefined2 *)(DAT_0100440c + param_1);
    *(undefined2 *)(DAT_01004410 + iVar1) = *(undefined2 *)(DAT_01004410 + param_1);
    *(undefined2 *)(DAT_01004414 + iVar1) = *(undefined2 *)(DAT_01004414 + param_1);
    *(undefined2 *)(DAT_01004408 + iVar1) = *(undefined2 *)(DAT_01004408 + param_1);
  }
  return;
}



void FUN_01004366(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  
  param_1 = param_1 * 2;
  puVar5 = (ushort *)(DAT_0100440c + param_1);
  puVar4 = (undefined2 *)(param_1 + 0x40003600);
  if (param_3 == 0) {
    *puVar4 = 0;
    *puVar5 = *puVar5 & 0xdfff;
    if (*(char *)(param_2 + 9) == '\x02') {
      *puVar4 = 2;
    }
    *(ushort *)(DAT_01004410 + param_1) =
         CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3));
    *(ushort *)(DAT_01004414 + param_1) =
         CONCAT11(*(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 5));
    return;
  }
  *puVar4 = 0;
  *puVar5 = *puVar5 & 0xdfff;
  if (*(char *)(param_2 + 9) == '\x02') {
    *puVar4 = 2;
  }
  if (param_3 == 4) {
    bVar1 = *(byte *)(param_2 + 2);
    iVar3 = DAT_01004410;
LAB_010043c6:
    puVar5 = (ushort *)(iVar3 + param_1);
    uVar2 = *puVar5 & 0xff | (ushort)bVar1 << 8;
  }
  else {
    if (param_3 == 1) {
      bVar1 = *(byte *)(param_2 + 3);
      iVar3 = DAT_01004410;
    }
    else {
      if (param_3 == 2) {
        bVar1 = *(byte *)(param_2 + 4);
        iVar3 = DAT_01004414;
        goto LAB_010043c6;
      }
      if ((param_3 != 3) && (param_3 != 5)) {
        return;
      }
      bVar1 = *(byte *)(param_2 + 5);
      iVar3 = DAT_01004414;
    }
    puVar5 = (ushort *)(iVar3 + param_1);
    uVar2 = *puVar5 & 0xff00 | (ushort)bVar1;
  }
  *puVar5 = uVar2;
  return;
}



void FUN_01004418(int param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_2 < 0) {
    iVar2 = -3;
  }
  else {
    iVar2 = 3;
  }
  iVar2 = (int)*DAT_01004464 + (iVar2 + *param_2 * 0x10) / 6;
  uVar1 = SignedSaturate(iVar2,0xf);
  SignedDoesSaturate(iVar2,0xf);
  *(short *)(DAT_01004468 + param_1 * 2) = (short)uVar1;
  return;
}



void FUN_01004444(int param_1)

{
  uint uVar1;
  
  FUN_01004418();
  uVar1 = (uint)*(byte *)(param_1 + DAT_0100446c + 8);
  if (uVar1 != 0xff) {
    *(undefined2 *)(DAT_01004468 + uVar1 * 2) = *(undefined2 *)(DAT_01004468 + param_1 * 2);
  }
  return;
}



void FUN_01004470(int param_1,byte *param_2)

{
  *(ushort *)(DAT_0100449c + param_1 * 2) = (ushort)*param_2 << 8;
  return;
}



void FUN_0100447c(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  iVar1 = DAT_0100449c;
  psVar3 = (short *)(DAT_0100449c + param_1 * 2);
  *psVar3 = (ushort)*param_2 << 8;
  uVar2 = (uint)*(byte *)(param_1 + DAT_010044a0 + 8);
  if (uVar2 != 0xff) {
    *(short *)(iVar1 + uVar2 * 2) = *psVar3;
  }
  return;
}



undefined8 FUN_010044a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar2 = DAT_010044f4;
  iVar1 = DAT_010044f0;
  uVar5 = 0;
  uVar6 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    do {
      uVar4 = (uint)*(byte *)(uVar6 + param_1);
      if ((uVar4 < 0x40) && (iVar3 = FUN_0100132a(uVar4), iVar3 == 2)) {
        if (*(short *)(iVar2 + uVar4 * 2) == 0) {
          *(byte *)(uVar4 + iVar1) = *(byte *)(uVar4 + iVar1) & 0xf8 | 3;
        }
        else {
          uVar5 = 1;
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(param_1 + 0x40));
  }
  return CONCAT44(param_4,uVar5);
}



undefined8 FUN_010044f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  byte bVar7;
  byte *pbVar8;
  
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  pbVar2 = DAT_01004564;
  bVar7 = 0;
  psVar5 = DAT_01004560;
  pbVar8 = DAT_0100455c;
  if (*DAT_01004564 != 0) {
    do {
      iVar3 = FUN_0100132a(bVar7);
      if (iVar3 == 2) {
        uVar4 = FUN_01001374(bVar7);
        if (uVar4 < 2) {
          if ((*psVar5 != 0) && (sVar1 = *psVar5 + -1, *psVar5 = sVar1, sVar1 != 0)) {
            uVar6 = 1;
            goto LAB_0100456a;
          }
        }
        else {
          *psVar5 = 0;
        }
        *(byte *)((uint)*(byte *)(param_1 + 0x40) + param_1) = bVar7;
        *pbVar8 = *pbVar8 & 0xf8 | 3;
        *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
      }
LAB_0100456a:
      bVar7 = bVar7 + 1;
      psVar5 = psVar5 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar7 < *pbVar2);
  }
  return CONCAT44(param_4,uVar6);
}



uint FUN_01004588(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auStack_60 [68];
  
  iVar1 = DAT_01004728;
  iVar3 = *(int *)(DAT_01004728 + 0x40);
  while (iVar3 == 0x3fffffff) {
    FUN_0100462a(0xff,auStack_60);
    iVar3 = *(int *)(iVar1 + 0x40);
  }
  uVar7 = (uint)*(byte *)(iVar1 + 0xda);
  iVar3 = 0x1e;
  do {
    uVar8 = *(uint *)(DAT_0100472c + uVar7 * 4);
    if ((*(uint *)(iVar1 + 0x40) & uVar8) == 0) {
      puVar9 = (undefined1 *)(uVar7 * 5 + iVar1 + 0x44);
      *puVar9 = *(undefined1 *)(param_1 + 0x40);
      uVar6 = 0;
      if (*(char *)(param_1 + 0x40) != '\0') {
        do {
          uVar4 = (uint)*(byte *)(uVar6 + param_1);
          puVar9[uVar6 + 1] = *(byte *)(uVar6 + param_1);
          bVar5 = *(byte *)(uVar4 + iVar1) & 0x78;
          *(byte *)(uVar4 + iVar1) = bVar5;
          *(byte *)(uVar4 + iVar1) = bVar5 | 1;
          FUN_0100137a();
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *(byte *)(param_1 + 0x40));
      }
      uVar8 = *(uint *)(iVar1 + 0x40) | uVar8;
      *(uint *)(iVar1 + 0x40) = uVar8;
      if (0x1c < uVar7) {
        uVar8 = 0;
      }
      cVar2 = (char)uVar8;
      if (uVar7 < 0x1d) {
        cVar2 = (char)uVar7 + '\x01';
      }
      *(char *)(iVar1 + 0xda) = cVar2;
      return uVar7;
    }
    if (uVar7 < 0x1d) {
      uVar7 = uVar7 + 1 & 0xff;
    }
    else {
      uVar7 = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar7;
}



uint FUN_0100462a(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_38;
  uint *local_34;
  ushort local_30 [2];
  uint local_2c;
  
  local_38 = 0x1d;
  uVar8 = 0;
  if (param_1 != 0xff) {
    uVar8 = param_1;
    local_38 = param_1;
  }
  *(undefined1 *)(param_2 + 0x40) = 0;
  iVar2 = DAT_01004728;
  if ((int)uVar8 <= (int)local_38) {
    local_34 = (uint *)(DAT_0100472c + uVar8 * 4);
    iVar9 = uVar8 * 5 + DAT_01004728;
    do {
      local_2c = *local_34;
      if ((*(uint *)(iVar2 + 0x40) & local_2c) != 0) {
        pbVar4 = (byte *)(iVar9 + 0x44);
        uVar5 = (uint)*pbVar4;
        local_30[0] = 0xff;
        if (uVar5 != 0) {
          pcVar6 = (char *)(iVar9 + 0x45);
          do {
            if (((*pcVar6 != -1) && (iVar3 = FUN_01001374(), iVar3 == 1)) &&
               (FUN_01003e4c(*pcVar6,local_30), local_30[0] < 0xff)) goto LAB_010046fc;
            pcVar6 = pcVar6 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        uVar5 = 0;
        if (*pbVar4 != 0) {
          do {
            bVar1 = pbVar4[uVar5 + 1];
            uVar7 = (uint)bVar1;
            if (uVar7 != 0xff) {
              iVar3 = FUN_0100132a(uVar7);
              if (iVar3 == 1) {
                *(byte *)((uint)*(byte *)(param_2 + 0x40) + param_2) = bVar1;
                *(byte *)(uVar7 + iVar2) = *(byte *)(uVar7 + iVar2) & 0xf8 | 2;
                *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
              }
              else {
                pbVar4[uVar5 + 1] = 0xff;
              }
            }
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < *pbVar4);
        }
        *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) & ~local_2c;
        *(char *)(iVar2 + 0xda) = (char)uVar8;
      }
LAB_010046fc:
      iVar9 = iVar9 + 5;
      local_34 = local_34 + 1;
      uVar8 = uVar8 + 1 & 0xff;
    } while ((int)uVar8 <= (int)local_38);
  }
  return ~-(uint)(*(int *)(iVar2 + 0x40) == 0) >> 0x1f;
}



undefined8 FUN_01004730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte local_10;
  byte local_f;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  uStack_e = (undefined2)((uint)param_3 >> 0x10);
  local_10 = (byte)((ushort)*(undefined2 *)(*(int *)PTR_DAT_010047d0 + 0x24) >> 0xe);
  local_f = (byte)((ushort)*(undefined2 *)(*(int *)PTR_DAT_010047d0 + 0x24) >> 0xc) & 3;
  uStack_c = param_4;
  FUN_01006130(param_1,&local_10);
  FUN_01006214(param_1,&local_10);
  FUN_0100405c(param_1,&local_10);
  return CONCAT44(uStack_c,CONCAT22(uStack_e,CONCAT11(local_f,local_10)));
}



void thunk_EXT_FUN_800fa750(void)

{
                    // WARNING: Could not recover jumptable at 0x010047e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010047e4)();
  return;
}



void thunk_EXT_FUN_800fa7f2(void)

{
                    // WARNING: Could not recover jumptable at 0x010047e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010047ec)();
  return;
}



void thunk_EXT_FUN_800fa1c0(void)

{
                    // WARNING: Could not recover jumptable at 0x010047f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010047f4)();
  return;
}



void thunk_EXT_FUN_800f9ae2(void)

{
                    // WARNING: Could not recover jumptable at 0x010047f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010047fc)();
  return;
}



int FUN_01004800(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  sVar1 = 0;
  sVar2 = 0;
  if ((*DAT_01004a60 == '\0') && ((int)((uint)*(byte *)(param_1 + DAT_01004a64) << 0x1c) < 0)) {
    uVar3 = (uint)*(ushort *)(DAT_01004a68 + param_1 * 2);
    if (uVar3 < 0x3ff) {
      iVar4 = *(int *)(DAT_01004a6c + param_1 * 4);
      if (*(short *)(iVar4 + 4) != -1) {
        pcVar5 = (char *)(*(int *)(*DAT_01004a70 + 0x44) + *DAT_01004a70 +
                         (uint)*(ushort *)(iVar4 + 4) * 8);
        *(char **)(DAT_01004a74 + param_1 * 4) = pcVar5;
        if ((pcVar5 != (char *)0x0) && (*(ushort *)(pcVar5 + 2) != 0xffff)) {
          sVar1 = -(short)((int)*(char *)((uint)(byte)(&DAT_01004b40)[uVar3] +
                                         *DAT_01004a78 + (uint)*(ushort *)(pcVar5 + 2) * 0x80) *
                           (int)*pcVar5 >> 4);
        }
      }
      sVar2 = (ushort)*DAT_01004a7c + sVar1;
    }
    else {
      sVar2 = 0xff;
    }
  }
  return (int)sVar2;
}



void FUN_01004876(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  short *psVar8;
  int *piVar9;
  undefined1 uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  
  iVar16 = *(int *)(DAT_01004a80 + param_1 * 4);
  *DAT_01004a84 = iVar16;
  pbVar7 = DAT_01004a8c;
  bVar1 = *(byte *)(param_1 + DAT_01004a88);
  *DAT_01004a8c = bVar1;
  psVar8 = DAT_01004a94;
  sVar11 = *(short *)(DAT_01004a90 + param_1 * 2);
  *DAT_01004a94 = sVar11;
  piVar9 = DAT_01004a9c;
  uVar15 = (uint)*(byte *)(param_1 + DAT_01004a98);
  *DAT_01004a9c = iVar16 + (uint)*(byte *)((uint)bVar1 + iVar16 + 0xe) * 0x28 + 0x92;
  piVar6 = DAT_01004a70;
  iVar16 = *piVar9;
  *DAT_01004aa0 =
       *(int *)(*DAT_01004a70 + 0x38) + *DAT_01004a70 + (uint)*(ushort *)(iVar16 + 0x1e) * 8;
  *DAT_01004aa4 = *piVar6 + *(int *)(*piVar6 + 0x3c) + (uint)*(ushort *)(iVar16 + 0x20) * 0x1e;
  *DAT_01004aa8 = (uint)*(ushort *)(iVar16 + 0x22) * 0x2c + *piVar6 + *(int *)(*piVar6 + 0x40);
  *DAT_01004aac = *piVar6 + *(int *)(*piVar6 + 0x50) + (uint)*(ushort *)(iVar16 + 0x24) * 0xc;
  uVar3 = *(ushort *)(iVar16 + 0x1c);
  *(ushort *)(DAT_01004ab0 + param_1 * 2) = uVar3;
  if (uVar3 == 0xffff) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined1 *)((uint)uVar3 * 0x80 + *DAT_01004a78);
  }
  *(undefined1 *)(param_1 + DAT_01004ab4) = uVar14;
  pcVar5 = DAT_01004a60;
  cVar2 = *(char *)(param_1 + DAT_01004ab8);
  *DAT_01004a60 = cVar2;
  *DAT_01004ac0 = *(undefined1 *)(param_1 + DAT_01004abc);
  if (cVar2 == '\0') {
    iVar16 = (uint)bVar1 + (int)*(char *)(uVar15 + DAT_01004ac4);
    uVar4 = UnsignedSaturate(iVar16,7);
    UnsignedDoesSaturate(iVar16,7);
    *pbVar7 = (byte)uVar4;
    *psVar8 = *(short *)(DAT_01004ac8 + uVar15 * 2) + sVar11;
    if ((*(char *)(uVar15 * 0x10 + DAT_01004acc) == '\x01') &&
       (iVar16 = thunk_EXT_FUN_800fa750(param_1), iVar16 == 1)) {
      thunk_EXT_FUN_800fa7f2(param_1,*(undefined1 *)(uVar15 + DAT_01004ad0));
    }
  }
  *DAT_01004ad8 = *(undefined1 *)(uVar15 + DAT_01004ad4);
  *DAT_01004ae0 = *(undefined1 *)(uVar15 + DAT_01004adc);
  *DAT_01004ae8 = *(undefined2 *)(DAT_01004ae4 + uVar15 * 2);
  *DAT_01004af0 = *(undefined1 *)(uVar15 + DAT_01004aec);
  *DAT_01004af8 = *(undefined1 *)(uVar15 + DAT_01004af4);
  *DAT_01004b00 = *(undefined1 *)(uVar15 + DAT_01004afc);
  sVar11 = FUN_01004800(param_1);
  iVar16 = thunk_EXT_FUN_800fa1c0(uVar15);
  if (iVar16 == 0xff) {
    sVar12 = thunk_EXT_FUN_800f9ae2(uVar15);
    uVar4 = UnsignedSaturate((int)(short)(sVar12 + sVar11),8);
    uVar10 = (undefined1)uVar4;
    UnsignedDoesSaturate((int)(short)(sVar12 + sVar11),8);
    uVar14 = *(undefined1 *)(uVar15 + DAT_01004b04);
  }
  else {
    uVar10 = 0;
    uVar14 = 0x40;
  }
  *DAT_01004b08 = uVar14;
  *DAT_01004b0c = uVar10;
  *DAT_01004b14 = *(undefined1 *)(uVar15 + DAT_01004b10);
  uVar13 = (uint)*(byte *)(uVar15 + DAT_01004b18);
  if (*pcVar5 == '\x01') {
    uVar13 = *(byte *)(DAT_01004b1c + param_1 * 2 + 1) + uVar13;
  }
  if ((*DAT_01004b20 < 0x3f) && (iVar16 = (int)*DAT_01004b20 + uVar13, iVar16 < 0x100)) {
    if (iVar16 < 0) {
      iVar16 = 0;
    }
  }
  else {
    iVar16 = 0xff;
  }
  *DAT_01004b24 = (char)iVar16;
  *DAT_01004b2c = *(undefined1 *)(uVar15 + DAT_01004b28);
  *DAT_01004b34 = *(undefined1 *)(uVar15 + DAT_01004b30);
  *DAT_01004b3c = *(undefined1 *)(uVar15 + DAT_01004b38);
  *(undefined2 *)(DAT_01004a68 + param_1 * 2) = 0;
  return;
}



undefined4 FUN_01004f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_18;
  
  sVar1 = (ushort)*(byte *)*DAT_01005048 +
          (ushort)*(byte *)(*(int *)(DAT_0100504c + param_1 * 4) + 2);
  uVar3 = (uint)*(ushort *)((byte *)*DAT_01005048 + 4);
  if (uVar3 != 0xffff) {
    sVar1 = sVar1 + *(char *)((uint)*DAT_01005050 + *DAT_01005054 + uVar3 * 0x80) * -2;
  }
  iVar2 = (int)(short)((ushort)*(byte *)*DAT_01005058 + sVar1);
  iVar4 = *DAT_0100505c;
  if ((*(ushort *)(iVar4 + 10) != 0xffff) && (*(char *)(iVar4 + 0x16) != 0)) {
    iVar2 = (int)(short)(((ushort)*(byte *)*DAT_01005058 + sVar1) -
                        (short)((int)*(char *)((uint)*DAT_01005050 +
                                              *DAT_01005054 + (uint)*(ushort *)(iVar4 + 10) * 0x80)
                                * (int)*(char *)(iVar4 + 0x16) >> 3));
  }
  if ((*(ushort *)(iVar4 + 0xe) != 0xffff) && (*(char *)(iVar4 + 0x18) != 0)) {
    iVar2 = (int)(short)((short)iVar2 -
                        (short)((int)*(char *)((uint)*DAT_01005060 +
                                              *DAT_01005054 + (uint)*(ushort *)(iVar4 + 0xe) * 0x80)
                                * (int)*(char *)(iVar4 + 0x18) >> 3));
  }
  if (*DAT_01005064 != '\0') {
    if ((*(ushort *)(iVar4 + 0x14) != 0xffff) && (*(char *)(iVar4 + 0x1d) != 0)) {
      iVar2 = (int)(short)((short)iVar2 -
                          (short)((int)*(char *)((uint)*DAT_01005060 +
                                                *DAT_01005054 +
                                                (uint)*(ushort *)(iVar4 + 0x14) * 0x80) *
                                  (int)*(char *)(iVar4 + 0x1d) >> 3));
    }
    if ((*(ushort *)(iVar4 + 0x12) != 0xffff) && (*(char *)(iVar4 + 0x1c) != 0)) {
      iVar2 = (int)(short)((short)iVar2 -
                          (short)((int)*(char *)(iVar4 + 0x1c) *
                                  (int)*(char *)((uint)*DAT_01005050 +
                                                *DAT_01005054 +
                                                (uint)*(ushort *)(iVar4 + 0x12) * 0x80) >> 3));
    }
  }
  iVar4 = UnsignedSaturate(iVar2,8);
  UnsignedDoesSaturate(iVar2,8);
  *(char *)(param_1 + DAT_01005068 + 0x670) = (char)iVar4;
  *(char *)(param_1 + DAT_0100506c) = (char)iVar4;
  iVar2 = (uint)*DAT_01005074 + (uint)*(byte *)(param_1 + DAT_01005070) + iVar4;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  local_18 = CONCAT31((int3)((uint)param_4 >> 8),(char)iVar2);
  FUN_01004470(param_1,&local_18);
  return local_18;
}



void FUN_01005078(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  byte local_6;
  
  puVar1 = (undefined2 *)*DAT_010050b4;
  local_10 = *puVar1;
  local_e = puVar1[1];
  local_c = puVar1[2];
  local_a = puVar1[3];
  local_8 = puVar1[4];
  local_6 = *(byte *)(puVar1 + 5) & 3;
  FUN_01004010(param_1,&local_10);
  return;
}



undefined8 FUN_010050b8(int param_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined2 local_10;
  undefined6 uStack_e;
  
  if (*DAT_01005154 == '\0') {
    sVar1 = (short)*(char *)(*DAT_01005158 + 6) + *DAT_01005160 + (ushort)*DAT_0100515c * 0x80;
    uVar3 = (uint)*(ushort *)(*DAT_01005158 + 8);
    if (uVar3 != 0xffff) {
      sVar1 = (short)(((int)*(char *)((uint)*DAT_0100515c + *DAT_01005164 + uVar3 * 0x80) << 7) /
                     100) + sVar1;
    }
  }
  else {
    sVar1 = 0x2000;
  }
  iVar4 = *DAT_01005168;
  bVar5 = *(byte *)(iVar4 + 3);
  if ((int)((uint)bVar5 << 0x19) < 0) {
    bVar5 = bVar5 | 0x80;
  }
  else {
    bVar5 = bVar5 & 0x7f;
  }
  bVar2 = *(byte *)(iVar4 + 4);
  if ((int)((uint)bVar2 << 0x19) < 0) {
    bVar2 = bVar2 | 0x80;
  }
  else {
    bVar2 = bVar2 & 0x7f;
  }
  sVar1 = (short)(char)bVar2 + sVar1 + ((short)(char)bVar5 - (*(byte *)(iVar4 + 2) & 0x7f)) * 0x80;
  *(short *)(DAT_0100516c + param_1 * 2 + 0x5f0) = sVar1;
  local_10 = FUN_0100559a(param_1,(int)sVar1);
  FUN_01004418(param_1,&local_10);
  return CONCAT62(uStack_e,local_10);
}



void thunk_EXT_FUN_800fa1d4(void)

{
                    // WARNING: Could not recover jumptable at 0x01005170. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01005174)();
  return;
}



void FUN_01005178(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_18;
  char local_f;
  
  iVar1 = DAT_010052a0;
  iVar3 = thunk_EXT_FUN_800fa1c0(*(undefined1 *)(param_1 + DAT_010052a0));
  uVar4 = (uint)*(byte *)(param_1 + iVar1);
  if (iVar3 == 0xff) {
    uVar4 = thunk_EXT_FUN_800fa1d4(uVar4);
    if ((uVar4 & 0x7f) != 10) {
      local_18 = 0;
      goto LAB_010051be;
    }
    uVar2 = 0xb;
  }
  else {
    uVar2 = *(undefined1 *)(uVar4 + DAT_010052a4);
  }
  local_18 = CONCAT11(uVar2,1);
LAB_010051be:
  local_f = *(char *)((uint)*(byte *)(param_1 + iVar1) + DAT_010052a8);
  if (local_f != '\x02') {
    local_f = '\x01';
  }
  FUN_01006298(param_1,&local_18);
  FUN_010063a0(param_1,&local_18);
  FUN_01004224(param_1,&local_18);
  return;
}



void FUN_010051ea(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_20;
  char local_17;
  
  iVar1 = DAT_010052a0;
  iVar3 = thunk_EXT_FUN_800fa1c0(*(undefined1 *)(param_1 + DAT_010052a0));
  uVar4 = (uint)*(byte *)(param_1 + iVar1);
  if (iVar3 == 0xff) {
    uVar4 = thunk_EXT_FUN_800fa1d4(uVar4);
    if ((uVar4 & 0x7f) != 10) {
      local_20 = 0;
      goto LAB_01005232;
    }
    uVar2 = 0xb;
  }
  else {
    uVar2 = *(undefined1 *)(uVar4 + DAT_010052a4);
  }
  local_20 = CONCAT11(uVar2,1);
LAB_01005232:
  local_17 = *(char *)((uint)*(byte *)(param_1 + iVar1) + DAT_010052a8);
  if (local_17 != '\x02') {
    local_17 = '\x01';
  }
  FUN_010063a0(param_1,&local_20);
  FUN_0100432e(param_1,&local_20,param_2);
  return;
}



void FUN_01005258(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [7];
  undefined1 local_11;
  undefined1 local_10;
  
  iVar1 = DAT_010052ac + param_1 * 2;
  uVar2 = (uint)(byte)(&DAT_010052b4)[*DAT_010052b0] + (uint)*(byte *)(iVar1 + 0x6b0);
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  local_11 = (undefined1)uVar2;
  uVar2 = (uint)(byte)FUN_01005334[-(uint)*DAT_010052b0] + (uint)*(byte *)(iVar1 + 0x6b1);
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  local_10 = (undefined1)uVar2;
  FUN_01004238(param_1,auStack_18);
  return;
}



void FUN_01005334(int param_1)

{
  int *piVar1;
  int iVar2;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined2 local_40;
  int local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  piVar1 = DAT_01005554;
  if (*(char *)((uint)*(byte *)(param_1 + DAT_0100554c) + DAT_01005550) == '\0') {
    iVar2 = *DAT_01005554;
    local_48[0] = *(byte *)(iVar2 + 3) >> 7;
    local_43 = *(byte *)(iVar2 + 0x1a) >> 7;
    local_44 = *(byte *)(iVar2 + 1) >> 6 & 2 | *(byte *)(iVar2 + 2) >> 7;
    local_42 = *(byte *)(iVar2 + 6) >> 1;
    local_41 = *(byte *)(iVar2 + 0x1a) & 0x7f;
    local_40 = *(undefined2 *)(iVar2 + 10);
    local_3c = *(int *)(DAT_01005558 + 4) +
               ((uint)*(byte *)(iVar2 + 8) << 8 | (uint)*(byte *)(iVar2 + 7) << 0x10 |
               (uint)*(byte *)(iVar2 + 9));
    local_38 = *(undefined2 *)(iVar2 + 0xe);
    local_36 = *(undefined2 *)(iVar2 + 0x10);
    local_34 = *(undefined2 *)(iVar2 + 0x12);
    local_32 = *(undefined2 *)(iVar2 + 0x14);
    local_30 = *(undefined2 *)(iVar2 + 0x16);
    local_2e = *(undefined2 *)(iVar2 + 0x18);
    local_2c = *(undefined2 *)(iVar2 + 0xc);
    iVar2 = FUN_01002a50(param_1);
    if (iVar2 != 0xff) {
      FUN_010053dc(iVar2,*(undefined1 *)(*piVar1 + 5),local_48);
    }
    FUN_01003a54(param_1,local_48);
    return;
  }
  FUN_01005450();
  return;
}



void FUN_010053dc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *DAT_0100555c + param_2 * 0x28;
  *(byte *)(param_3 + 0x21) = *(byte *)(iVar1 + 0xac) >> 7;
  *(byte *)(param_3 + 0x20) = *(byte *)(iVar1 + 0x93) >> 6 & 2 | *(byte *)(iVar1 + 0x94) >> 7;
  *(byte *)(param_3 + 0x22) = *(byte *)(iVar1 + 0x98) >> 1;
  *(byte *)(param_3 + 0x23) = *(byte *)(iVar1 + 0xac) & 0x7f;
  *(undefined2 *)(param_3 + 0x24) = *(undefined2 *)(iVar1 + 0x9c);
  *(uint *)(param_3 + 0x28) =
       *(int *)(DAT_01005558 + 4) +
       ((uint)*(byte *)(iVar1 + 0x9a) << 8 | (uint)*(byte *)(iVar1 + 0x99) << 0x10 |
       (uint)*(byte *)(iVar1 + 0x9b));
  *(undefined2 *)(param_3 + 0x2c) = *(undefined2 *)(iVar1 + 0xa0);
  *(undefined2 *)(param_3 + 0x2e) = *(undefined2 *)(iVar1 + 0xa2);
  *(undefined2 *)(param_3 + 0x30) = *(undefined2 *)(iVar1 + 0xa4);
  *(undefined2 *)(param_3 + 0x32) = *(undefined2 *)(iVar1 + 0xa6);
  *(undefined2 *)(param_3 + 0x34) = *(undefined2 *)(iVar1 + 0xa8);
  *(undefined2 *)(param_3 + 0x36) = *(undefined2 *)(iVar1 + 0xaa);
  *(undefined2 *)(param_3 + 0x38) = *(undefined2 *)(iVar1 + 0x9e);
  return;
}



void FUN_01005450(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined2 local_40;
  uint local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  bVar1 = *(byte *)(param_1 + DAT_0100554c);
  iVar3 = (uint)bVar1 * 0x34;
  iVar2 = iVar3 + DAT_01005560;
  local_48[0] = *(byte *)(iVar3 + DAT_01005560) & 1;
  local_43 = (byte)(((uint)*(byte *)(iVar2 + 0xf) << 0x1d) >> 0x1f);
  local_44 = *(byte *)(iVar2 + 0xf) & 3;
  local_42 = *(byte *)(iVar2 + 0xe) & 0x7f;
  local_41 = *(byte *)(iVar2 + 10) & 0x7f;
  local_40 = *(undefined2 *)(iVar2 + 8);
  local_3c = *(uint *)(iVar2 + 4) & 0xffffff;
  local_38 = *(undefined2 *)(iVar2 + 0x10);
  local_36 = *(undefined2 *)(iVar2 + 0x12);
  local_34 = *(undefined2 *)(iVar2 + 0x14);
  local_32 = *(undefined2 *)(iVar2 + 0x16);
  local_30 = *(undefined2 *)(iVar2 + 0x18);
  local_2e = *(undefined2 *)(iVar2 + 0x1a);
  local_2c = *(undefined2 *)(iVar2 + 0xc);
  iVar2 = FUN_01002a50(param_1);
  if (iVar2 != 0xff) {
    FUN_010054ee((uint)bVar1,local_48);
  }
  FUN_01003a54(param_1,local_48);
  return;
}



void FUN_010054ee(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x34 + DAT_01005560;
  *(byte *)(param_2 + 0x21) = (byte)(((uint)*(byte *)(iVar1 + 0x27) << 0x1d) >> 0x1f);
  *(byte *)(param_2 + 0x20) = *(byte *)(iVar1 + 0x27) & 3;
  *(byte *)(param_2 + 0x22) = *(byte *)(iVar1 + 0x26) & 0x7f;
  *(byte *)(param_2 + 0x23) = *(byte *)(iVar1 + 0x22) & 0x7f;
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(iVar1 + 0x20);
  *(uint *)(param_2 + 0x28) = *(uint *)(iVar1 + 0x1c) & 0xffffff;
  *(undefined2 *)(param_2 + 0x2c) = *(undefined2 *)(iVar1 + 0x28);
  *(undefined2 *)(param_2 + 0x2e) = *(undefined2 *)(iVar1 + 0x2a);
  *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(iVar1 + 0x2c);
  *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(iVar1 + 0x2e);
  *(undefined2 *)(param_2 + 0x34) = *(undefined2 *)(iVar1 + 0x30);
  *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(iVar1 + 0x32);
  *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(iVar1 + 0x24);
  return;
}



undefined8 FUN_01005564(int param_1)

{
  undefined2 local_10;
  undefined6 uStack_e;
  
  local_10 = FUN_0100559a(param_1,(int)*(short *)(DAT_01005618 + param_1 * 2 + 0x5f0));
  FUN_01004444(param_1,&local_10);
  return CONCAT62(uStack_e,local_10);
}



void FUN_01005588(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = DAT_01005618 + param_1 * 2;
  *(short *)(iVar1 + 0x5f0) = param_2 + *(short *)(iVar1 + 0x5f0);
  FUN_01005564();
  return;
}



int FUN_0100559a(int param_1,short param_2)

{
  short sVar1;
  
  param_2 = *(short *)(DAT_01005620 + (uint)*(byte *)(param_1 + DAT_0100561c) * 2) + param_2;
  if (*(char *)(param_1 + DAT_01005624) == '\0') {
    param_2 = *(short *)(DAT_0100562c + param_1 * 2) + *DAT_01005628 + param_2;
  }
  if (param_2 < 0x3000) {
    if (param_2 < DAT_01005630) {
      sVar1 = -param_2 / 0x600;
      if (7 < sVar1) {
        sVar1 = 7;
      }
      param_2 = -(-param_2 % 0x600 + sVar1 * 0x600);
    }
  }
  else {
    sVar1 = param_2 / 0x600;
    if (7 < sVar1) {
      sVar1 = 7;
    }
    param_2 = param_2 % 0x600 + sVar1 * 0x600;
  }
  return (int)param_2;
}



undefined4 FUN_01005634(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  
  *DAT_0100584c = *(undefined1 *)(param_1 + DAT_01005848);
  pbVar1 = DAT_01005854;
  bVar3 = 0;
  pbVar4 = DAT_01005850;
  if (*DAT_01005854 != 0) {
    do {
      iVar2 = FUN_0100132a(bVar3);
      if ((iVar2 != 0) && (*pbVar4 == param_1)) {
        FUN_01002724(bVar3);
      }
      bVar3 = bVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 < *pbVar1);
  }
  return param_4;
}



undefined4 FUN_010057d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte bVar9;
  
  puVar3 = DAT_0100587c;
  pbVar2 = DAT_01005854;
  uVar1 = *DAT_0100587c;
  bVar9 = 0;
  pbVar6 = DAT_01005850;
  pcVar7 = DAT_01005878;
  pbVar8 = DAT_01005880;
  if (*DAT_01005854 != 0) {
    do {
      iVar4 = FUN_0100132a(bVar9);
      if ((iVar4 != 0) && (*pbVar6 == param_1)) {
        uVar5 = (uint)*(byte *)(param_1 + DAT_01005884);
        if (*pcVar7 == '\x01') {
          uVar5 = *pbVar8 + uVar5;
        }
        if (*DAT_01005888 < 0x3f) {
          uVar5 = (int)*DAT_01005888 + uVar5;
        }
        UnsignedSaturate(uVar5,8);
        UnsignedDoesSaturate(uVar5,8);
        *puVar3 = 0xff;
        FUN_010051ea(bVar9,1);
      }
      bVar9 = bVar9 + 1;
      pbVar8 = pbVar8 + 2;
      pcVar7 = pcVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar9 < *pbVar2);
  }
  *puVar3 = uVar1;
  return param_4;
}



void thunk_EXT_FUN_800fa5d0(void)

{
                    // WARNING: Could not recover jumptable at 0x0100588c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01005890)();
  return;
}



void thunk_EXT_FUN_800fa400(void)

{
                    // WARNING: Could not recover jumptable at 0x01005894. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01005898)();
  return;
}



void FUN_0100589c(void)

{
  return;
}



void FUN_0100589e(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  ushort *puVar10;
  bool bVar11;
  uint local_30;
  uint local_2c;
  
  iVar1 = thunk_EXT_FUN_800fa5d0();
  if (iVar1 == 1) {
    return;
  }
  uVar2 = (uint)*DAT_01005c78;
  if (*(char *)(uVar2 * 0x10 + DAT_01005c7c) == '\x02') {
    *(undefined1 *)(uVar2 + DAT_01005c80) = 0;
  }
  bVar4 = *(byte *)(uVar2 + DAT_01005c84);
  bVar11 = bVar4 == (*DAT_01005c88 | 0x80);
  if (bVar11) {
    bVar4 = bVar4 & 0x7f;
  }
  if (bVar11) {
    *(byte *)(uVar2 + DAT_01005c84) = bVar4;
    return;
  }
  local_30 = DAT_01005cec;
  local_2c = 0xffff;
  uVar2 = 0;
  uVar8 = 0;
  bVar4 = 0;
  pbVar5 = DAT_01005c94;
  pbVar6 = DAT_01005c8c;
  pbVar7 = DAT_01005c90;
  pcVar9 = DAT_01005c98;
  puVar10 = DAT_01005c9c;
  if (*DAT_01005ca0 != 0) {
    do {
      iVar1 = FUN_0100132a(bVar4);
      if (((iVar1 != 0) && (*DAT_01005c88 == *pbVar6)) && (*DAT_01005c78 == *pbVar7)) {
        uVar3 = (uint)*pbVar5;
        if (((int)(uVar3 << 0x18) < 0) && (*pcVar9 == -1)) {
          if ((int)(uVar3 << 0x1a) < 0) {
            *pbVar5 = *pbVar5 | 0x40;
            iVar1 = FUN_0100376a(*pbVar7,*pbVar6);
            if (iVar1 == 0) {
              *pbVar5 = *pbVar5 & 0xbf;
              local_30 = CONCAT31(local_30._1_3_,bVar4);
              FUN_010060e0(&local_30,1);
            }
          }
          else if (-1 < (int)(uVar3 << 0x1c)) {
            uVar3 = (uint)*puVar10;
            if ((int)uVar3 < (int)local_2c) {
              local_30 = CONCAT31(local_30._1_3_,bVar4);
              uVar2 = 1;
              uVar8 = uVar8 + 1;
              local_2c = uVar3;
            }
            else if (local_2c == uVar3) {
              *(byte *)((int)&local_30 + uVar2) = bVar4;
              uVar2 = uVar2 + 1;
            }
          }
        }
      }
      bVar4 = bVar4 + 1;
      puVar10 = puVar10 + 1;
      pcVar9 = pcVar9 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar4 < *DAT_01005ca0);
    if (1 < uVar8) goto LAB_010059cc;
  }
  FUN_010036a2(*DAT_01005c78,*DAT_01005c88);
LAB_010059cc:
  thunk_EXT_FUN_800fa400(*DAT_01005c78,*DAT_01005c88);
  if (uVar2 != 0) {
    FUN_010060e0(&local_30,uVar2 & 0xff);
    if (((*(char *)((uint)*DAT_01005c78 + DAT_01005ca4) == '\0') &&
        (iVar1 = FUN_0100376a((uint)*DAT_01005c78,*DAT_01005c88), iVar1 == 0)) &&
       ((*(char *)((uint)*DAT_01005c78 + DAT_01005ca8) == '\0' &&
        (uVar2 = local_30 & 0xff,
        *(int *)(DAT_01005cac + uVar2 * 4) == *(int *)(DAT_01005cb0 + (uint)*DAT_01005c78 * 4))))) {
      *DAT_01005cb8 = *(undefined1 *)(uVar2 + DAT_01005cb4);
      *DAT_01005c88 = DAT_01005c8c[uVar2];
      *DAT_01005cc0 = *(undefined2 *)(DAT_01005cbc + uVar2 * 2);
      FUN_0100659c();
      if (*DAT_01005cc4 != '\0') {
        FUN_01002320();
      }
    }
  }
  return;
}



void FUN_01005a44(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *DAT_01005cc8 = *(undefined1 *)(param_1 + DAT_01005ca8);
  pbVar1 = DAT_01005ca0;
  bVar3 = 0;
  pbVar4 = DAT_01005c90;
  pbVar5 = DAT_01005c94;
  if (*DAT_01005ca0 != 0) {
    do {
      iVar2 = FUN_0100132a(bVar3);
      if (((iVar2 != 0) && (*pbVar4 == param_1)) && (-1 < (int)((uint)*pbVar5 << 0x18))) {
        FUN_01001346(bVar3);
      }
      bVar3 = bVar3 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 < *pbVar1);
  }
  return;
}



undefined4 FUN_01005a8c(uint param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 local_28;
  
  local_28 = DAT_01005cf0;
  cVar2 = *(char *)(param_1 + DAT_01005ccc);
  if (cVar2 == '\0') {
    FUN_0100375e();
  }
  else {
    FUN_0100374c(param_1);
  }
  pbVar3 = DAT_01005ca0;
  bVar6 = 0;
  pbVar5 = DAT_01005c94;
  pbVar7 = DAT_01005c90;
  puVar8 = DAT_01005c8c;
  pcVar9 = DAT_01005c98;
  if (*DAT_01005ca0 != 0) {
    do {
      iVar4 = FUN_0100132a(bVar6);
      if ((iVar4 != 0) && (*pbVar7 == param_1)) {
        bVar1 = *pbVar5;
        if (cVar2 == '\0') {
          if ((((int)((uint)bVar1 << 0x1a) < 0) &&
              (iVar4 = FUN_0100360e((uint)*pbVar7,*puVar8), iVar4 == 0)) &&
             (bVar1 = *pbVar5, *pbVar5 = (byte)(bVar1 & 0xdf), (int)((bVar1 & 0xdf) << 0x19) < 0)) {
            *pbVar5 = *pbVar5 & 0xbf;
            local_28 = CONCAT31(local_28._1_3_,bVar6);
            FUN_010060e0(&local_28,1);
          }
        }
        else if (((int)((uint)bVar1 << 0x18) < 0) && (*pcVar9 == -1)) {
          *pbVar5 = bVar1 | 0x20;
        }
      }
      bVar6 = bVar6 + 1;
      pcVar9 = pcVar9 + 1;
      puVar8 = puVar8 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar6 < *pbVar3);
  }
  return local_28;
}



undefined4 FUN_01005b3a(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_20;
  
  local_20 = param_4;
  FUN_010036c4();
  *(undefined1 *)(param_1 + DAT_01005cd0) = 0xff;
  *(undefined1 *)(param_1 + DAT_01005cd4) = 0xff;
  *(undefined1 *)(param_1 + DAT_01005cd8) = 0xff;
  pbVar2 = DAT_01005ca0;
  bVar5 = 0;
  pbVar6 = DAT_01005c90;
  pbVar7 = DAT_01005c94;
  if (*DAT_01005ca0 != 0) {
    do {
      iVar4 = FUN_0100132a(bVar5);
      uVar3 = DAT_01005cf4;
      if ((iVar4 != 0) && (*pbVar6 == param_1)) {
        bVar1 = *pbVar7;
        if ((int)((uint)bVar1 << 0x18) < 0) {
          if ((int)((uint)bVar1 << 0x1a) < 0) {
            *pbVar7 = bVar1 | 0x40;
          }
          else {
            *pbVar7 = *pbVar7 & 0x7f;
            local_20 = CONCAT31((int3)((uint)uVar3 >> 8),bVar5);
            FUN_0100259c(&local_20,1);
          }
        }
      }
      bVar5 = bVar5 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar5 < *pbVar2);
  }
  return local_20;
}



undefined4 FUN_01005bb8(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_r3;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar4 = DAT_01005ca0;
  pbVar2 = DAT_01005c78;
  uVar6 = (uint)*DAT_01005c88;
  if (uVar6 < 0xd) {
    uVar6 = 0xd;
  }
  else if (0x5b < uVar6) {
    uVar6 = 0x5b;
  }
  iVar3 = (uint)*(byte *)(*(int *)(DAT_01005cb0 + (uint)*DAT_01005c78 * 4) + 6) * 0x9e +
          *DAT_01005cdc + *(int *)(*DAT_01005cdc + 0x48) + uVar6 * 2;
  bVar1 = *(byte *)(iVar3 + -0x1a);
  if (((bVar1 & 0x3f) != 0) &&
     (bVar8 = 0, pbVar9 = DAT_01005c90, pbVar10 = DAT_01005ce0, *DAT_01005ca0 != 0)) {
    do {
      iVar5 = FUN_0100132a(bVar8);
      if ((iVar5 != 0) && ((*pbVar9 == *pbVar2 && ((bVar1 & 0x3f) == (*pbVar10 & 0x3f))))) {
        FUN_01001fc4(bVar8);
      }
      bVar8 = bVar8 + 1;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 1;
    } while (bVar8 < *pbVar4);
  }
  FUN_01005fec();
  iVar5 = DAT_01005ce8;
  pbVar2 = DAT_01005ce0;
  iVar7 = 4;
  pbVar4 = DAT_01005ce4;
  do {
    if (*pbVar4 == 0xff) {
      return in_r3;
    }
    uVar6 = (uint)*pbVar4;
    pbVar2[uVar6 * 2] = bVar1;
    pbVar2[uVar6 * 2 + 1] = *(byte *)(iVar3 + -0x19);
    *(undefined2 *)(iVar5 + uVar6 * 2) = 0;
    iVar7 = iVar7 + -1;
    pbVar4 = pbVar4 + 1;
  } while (iVar7 != 0);
  return in_r3;
}



void FUN_01005d7a(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  
  pbVar2 = DAT_01005dc8;
  puVar1 = DAT_01005dc0;
  bVar5 = 0;
  puVar6 = DAT_01005dc4;
  if (*DAT_01005dc8 != 0) {
    do {
      iVar4 = FUN_0100132a(bVar5);
      if (iVar4 != 0) {
        uVar3 = *puVar6;
        iVar4 = thunk_EXT_FUN_800fa1c0(uVar3);
        if (iVar4 == 0xff) {
          uVar3 = thunk_EXT_FUN_800f9ae2(uVar3);
          *puVar1 = uVar3;
          FUN_01002508(bVar5);
        }
      }
      bVar5 = bVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar5 < *pbVar2);
  }
  return;
}



int FUN_01005dcc(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  
  iVar1 = *(int *)(DAT_01005fa4 + param_1 * 4);
  bVar3 = *(byte *)(iVar1 + 0xc);
  uVar4 = bVar3 & 7;
  uVar2 = param_2;
  uVar5 = param_3;
  if ((bVar3 & 7) != 0) {
    bVar3 = *(byte *)(iVar1 + 0xd);
    uVar2 = (uint)bVar3;
    uVar5 = uVar2;
    if (uVar4 != 5) {
      uVar5 = (uint)*(byte *)(uVar4 + DAT_01005fa8);
      sVar6 = (ushort)bVar3 * 0x80;
      sVar7 = sVar6 + (short)((int)(uVar5 * (param_2 - uVar2) * 0x80) / 100);
      iVar1 = (int)((int)sVar7 + ((uint)((int)sVar7 >> 6) >> 0x19)) >> 7;
      bVar3 = (byte)iVar1;
      sVar7 = sVar7 + (short)iVar1 * -0x80;
      sVar6 = sVar6 + (short)((int)(uVar5 * (param_3 - uVar2) * 0x80) / 100);
      uVar5 = (int)((int)sVar6 + ((uint)((int)sVar6 >> 6) >> 0x19)) >> 7;
      sVar6 = sVar6 + (short)uVar5 * -0x80;
      goto LAB_01005e2e;
    }
  }
  bVar3 = (byte)uVar2;
  sVar6 = 0;
  sVar7 = 0;
LAB_01005e2e:
  iVar1 = DAT_01005fb0 + (uint)*DAT_01005fac * 0xc;
  return (int)(short)(((short)*(char *)((uint)bVar3 % 0xc + iVar1) +
                      ((sVar7 + ((ushort)bVar3 - (short)(uVar5 & 0xff)) * 0x80) - sVar6)) -
                     (short)*(char *)((uVar5 & 0xff) % 0xc + iVar1));
}



int FUN_01005e72(int param_1)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  ushort uVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  undefined1 uVar9;
  char local_28;
  
  uVar9 = 0xff;
  if (0x3f < *(byte *)(param_1 + DAT_01005fb4)) {
    uVar6 = 0;
    bVar3 = 0;
    pcVar2 = DAT_01005fc0;
    pbVar4 = DAT_01005fb8;
    pcVar5 = DAT_01005fbc;
    puVar7 = DAT_01005fc4;
    puVar8 = DAT_01005fc8;
    if (*DAT_01005fcc != 0) {
      do {
        iVar1 = FUN_0100132a(bVar3);
        if ((((iVar1 != 0) && ((int)((uint)*pbVar4 << 0x18) < 0)) &&
            (local_28 = (char)param_1, *pcVar5 == local_28)) &&
           ((*pcVar2 == -1 && (-1 < (int)((uint)*pbVar4 << 0x1c))))) {
          if (uVar6 < *puVar8) {
            uVar9 = *puVar7;
            uVar6 = *puVar8;
          }
        }
        bVar3 = bVar3 + 1;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        pcVar2 = pcVar2 + 1;
        pcVar5 = pcVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar3 < *DAT_01005fcc);
    }
  }
  *DAT_01005fd0 = uVar9;
  return param_1;
}



void FUN_01005ef2(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = DAT_01005fd8;
  iVar3 = 4;
  pbVar2 = DAT_01005fd4;
  do {
    if (*pbVar2 == 0xff) {
      return;
    }
    *(undefined2 *)(iVar1 + (uint)*pbVar2 * 2) = 0;
    iVar3 = iVar3 + -1;
    pbVar2 = pbVar2 + 1;
  } while (iVar3 != 0);
  return;
}



undefined4 FUN_01005f10(void)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined4 in_r3;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  puVar3 = DAT_01005fdc;
  iVar2 = DAT_01005fd8;
  pcVar1 = DAT_01005fd0;
  if (*DAT_01005fd0 == -1) {
    iVar6 = 4;
    pbVar5 = DAT_01005fd4;
    do {
      if (*pbVar5 == 0xff) {
        return in_r3;
      }
      *(undefined2 *)(iVar2 + (uint)*pbVar5 * 2) = 0;
      iVar6 = iVar6 + -1;
      pbVar5 = pbVar5 + 1;
    } while (iVar6 != 0);
  }
  else {
    iVar6 = 4;
    pbVar5 = DAT_01005fd4;
    do {
      uVar7 = (uint)*pbVar5;
      if (uVar7 == 0xff) {
        return in_r3;
      }
      uVar4 = FUN_01005dcc(uVar7,*pcVar1,*puVar3);
      *(undefined2 *)(iVar2 + uVar7 * 2) = uVar4;
      iVar6 = iVar6 + -1;
      pbVar5 = pbVar5 + 1;
    } while (iVar6 != 0);
  }
  return in_r3;
}



undefined4 FUN_01005f60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar2 = DAT_01005fe0;
  iVar1 = DAT_01005fc4;
  pbVar5 = DAT_01005fd4;
  if (param_1 != 0) {
    do {
      uVar4 = (uint)*pbVar5;
      uVar3 = FUN_01005dcc(uVar4,param_3,param_2);
      *(char *)(uVar4 + iVar1) = (char)param_3;
      FUN_01005588(uVar4,uVar3);
      *(short *)(iVar2 + uVar4 * 2) = *(short *)(iVar2 + uVar4 * 2) + (short)uVar3;
      param_1 = param_1 + -1;
      pbVar5 = pbVar5 + 1;
    } while (param_1 != 0);
  }
  return param_4;
}



void thunk_EXT_FUN_800fa686(void)

{
                    // WARNING: Could not recover jumptable at 0x01005fe4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01005fe8)();
  return;
}



undefined4 FUN_01005fec(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_r3;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  
  thunk_EXT_FUN_80062a60(DAT_01006104,4,0xff);
  puVar10 = *(ushort **)(DAT_0100610c + (uint)*DAT_01006108 * 4);
  if (*puVar10 != 0xffff) {
    *DAT_01006110 = *(byte *)((uint)*DAT_01006110 + *DAT_01006114 + (uint)*puVar10 * 0x80);
  }
  piVar5 = DAT_01006124;
  iVar4 = DAT_01006120;
  iVar3 = DAT_0100611c;
  uVar2 = puVar10[4];
  puVar12 = puVar10;
  uVar9 = (uint)(byte)uVar2;
  if (*DAT_01006118 == -1) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar7 = *piVar5;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x34) + iVar7 + (uint)puVar12[7] * 4) + iVar7;
      iVar8 = FUN_01006414(iVar7,0);
      if (iVar8 != 0xff) {
        *(ushort **)(iVar4 + iVar8 * 4) = puVar10;
        *(int *)(iVar3 + iVar8 * 4) = iVar7;
      }
      puVar12 = puVar12 + 1;
    }
  }
  piVar5 = DAT_01006124;
  iVar4 = DAT_01006120;
  iVar3 = DAT_0100611c;
  uVar9 = (uint)(byte)puVar10[5] + (uint)*(byte *)((int)puVar10 + 9) + (uint)(byte)uVar2 & 0xff;
  uVar11 = *(byte *)((int)puVar10 + 0xb) + uVar9 & 0xff;
  if (uVar9 < uVar11) {
    puVar12 = puVar10 + uVar9;
    do {
      iVar7 = *piVar5;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x34) + iVar7 + (uint)puVar12[7] * 4) + iVar7;
      iVar8 = thunk_EXT_FUN_800fa686(iVar7,*DAT_01006108);
      if ((iVar8 == 1) && (iVar8 = FUN_01006414(iVar7,3), iVar8 != 0xff)) {
        *(ushort **)(iVar4 + iVar8 * 4) = puVar10;
        *(int *)(iVar3 + iVar8 * 4) = iVar7;
      }
      puVar12 = puVar12 + 1;
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < uVar11);
  }
  psVar6 = DAT_01006128;
  sVar1 = *DAT_01006128;
  *DAT_01006128 = sVar1 + 1;
  if ((short)(sVar1 + 1) == 0) {
    *psVar6 = 1;
  }
  return in_r3;
}



void FUN_010060e0(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = DAT_0100612c;
  pbVar2 = param_1;
  iVar3 = param_2;
  if (param_2 != 0) {
    do {
      *(byte *)((uint)*pbVar2 + iVar1) = *(byte *)((uint)*pbVar2 + iVar1) & 0x7f;
      iVar3 = iVar3 + -1;
      pbVar2 = pbVar2 + 1;
    } while (iVar3 != 0);
    FUN_0100259c(param_1,param_2,param_4);
    return;
  }
  FUN_0100259c();
  return;
}



void FUN_01006130(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = *DAT_01006278;
  uVar3 = *(ushort *)(iVar2 + 0x24) & 0xfff;
  if ((*(ushort *)(iVar2 + 0x28) != 0xffff) && (*(char *)(iVar2 + 0x22) != '\0')) {
    uVar3 = (short)*(char *)((uint)*DAT_0100627c +
                            *DAT_01006280 + (uint)*(ushort *)(iVar2 + 0x28) * 0x80) *
            (short)*(char *)(iVar2 + 0x22) + uVar3;
  }
  if ((*(ushort *)(iVar2 + 0x26) != 0xffff) && (*(char *)(iVar2 + 0x21) != '\0')) {
    uVar3 = (short)*(char *)((uint)*DAT_01006284 +
                            *DAT_01006280 + (uint)*(ushort *)(iVar2 + 0x26) * 0x80) *
            (short)*(char *)(iVar2 + 0x21) + uVar3;
  }
  if (*DAT_01006288 != '\0') {
    if ((*(ushort *)(iVar2 + 0x2a) != 0xffff) && (*(char *)(iVar2 + 0x23) != '\0')) {
      uVar3 = (short)*(char *)((uint)*DAT_0100627c +
                              *DAT_01006280 + (uint)*(ushort *)(iVar2 + 0x2a) * 0x80) *
              (short)*(char *)(iVar2 + 0x23) + uVar3;
    }
    if ((*(ushort *)(iVar2 + 0x18) != 0xffff) && (*(char *)(iVar2 + 0x20) != '\0')) {
      uVar3 = (short)*(char *)((uint)*DAT_01006284 +
                              *DAT_01006280 + (uint)*(ushort *)(iVar2 + 0x18) * 0x80) *
              (short)*(char *)(iVar2 + 0x20) + uVar3;
    }
  }
  *(ushort *)(DAT_0100628c + param_1 * 2 + 0x730) = uVar3 + 0x801;
  sVar1 = *DAT_01006290 + 0xc00;
  if (sVar1 < 0x801) {
    sVar1 = 0x801;
  }
  else if (0x1000 < sVar1) {
    sVar1 = 0x1000;
  }
  *(short *)(param_2 + 2) = sVar1;
  return;
}



void FUN_01006214(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *DAT_01006278;
  iVar3 = (int)*(char *)(iVar1 + 0xf);
  if ((*(ushort *)(iVar1 + 0x14) != 0xffff) && ((ushort)(short)*(char *)(iVar1 + 0x1c) != 0)) {
    iVar3 = (int)(short)((short)*(char *)(iVar1 + 0xf) +
                         (short)((int)((uint)(ushort)(short)*(char *)((uint)*DAT_0100627c +
                                                                     *DAT_01006280 +
                                                                     (uint)*(ushort *)(iVar1 + 0x14)
                                                                     * 0x80) *
                                      (uint)(ushort)(short)*(char *)(iVar1 + 0x1c)) >> 6) + -0x20);
  }
  iVar1 = UnsignedSaturate(iVar3,5);
  UnsignedDoesSaturate(iVar3,5);
  *(char *)(param_1 + DAT_0100628c + 0x7b0) = (char)iVar1;
  iVar3 = (int)*DAT_01006294;
  if (iVar3 < 0) {
    iVar2 = iVar3 + iVar1;
    if (iVar3 + iVar1 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
  }
  *(char *)(param_2 + 4) = (char)iVar2;
  return;
}



void FUN_01006298(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  
  piVar3 = DAT_010063d8;
  bVar1 = *(byte *)(*DAT_010063d8 + 1);
  uVar6 = bVar1 & 0x7f;
  if ((bVar1 & 0x7f) == 0) {
    uVar5 = (uint)*(ushort *)(*DAT_010063d8 + 2);
    if (uVar5 == 0xffff) {
      uVar6 = 0x40;
    }
    else {
      uVar6 = (short)((int)*(char *)((uint)*DAT_010063dc + *DAT_010063e0 + uVar5 * 0x80) >> 1) +
              0x40;
    }
  }
  iVar7 = (int)(short)((*(byte *)(*DAT_010063e4 + 1) & 0x7f) + uVar6 + -0x40);
  if ((int)((uint)bVar1 << 0x18) < 0) {
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    else if (0x7f < iVar7) {
      iVar7 = 0x7f;
    }
    uVar5 = *(byte *)(iVar7 + DAT_010063ec) + 8;
  }
  else {
    iVar2 = UnsignedSaturate(iVar7,7);
    UnsignedDoesSaturate(iVar7,7);
    uVar5 = *(byte *)(iVar2 + DAT_010063e8) + 0x10;
    iVar7 = iVar2;
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  iVar8 = DAT_010063f0 + param_1 * 2;
  *(char *)(iVar8 + 0x6b0) = (char)uVar5;
  iVar2 = DAT_010063f4;
  iVar4 = thunk_EXT_FUN_800fa1c0(*(undefined1 *)(param_1 + DAT_010063f4));
  if ((iVar4 == 0xff) &&
     (uVar5 = *(byte *)((uint)*DAT_010063f8 + DAT_010063ec) + uVar5, 0xff < uVar5)) {
    uVar5 = 0xff;
  }
  *(char *)(param_2 + 7) = (char)uVar5;
  if ((int)((uint)*(byte *)(*piVar3 + 1) << 0x18) < 0) {
    uVar5 = *(byte *)(-iVar7 + DAT_010063ec + 0x80) + 8;
  }
  else {
    uVar5 = *(byte *)(-iVar7 + DAT_010063e8 + 0x7f) + 0x10;
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  *(char *)(iVar8 + 0x6b1) = (char)uVar5;
  iVar7 = thunk_EXT_FUN_800fa1c0(*(undefined1 *)(param_1 + iVar2));
  if ((iVar7 == 0xff) &&
     (uVar5 = *(byte *)((DAT_010063ec - (uint)*DAT_010063f8) + 0x80) + uVar5, 0xff < uVar5)) {
    uVar5 = 0xff;
  }
  *(char *)(param_2 + 8) = (char)uVar5;
  return;
}



void FUN_010063a0(undefined4 param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*DAT_010063fc;
  if ((*param_2 == '\0') && (uVar1 = uVar1 + 8, 0xff < uVar1)) {
    uVar1 = 0xff;
  }
  param_2[2] = (char)uVar1;
  param_2[3] = *DAT_01006400;
  param_2[4] = *DAT_01006404;
  if (*param_2 == '\0') {
    param_2[5] = *DAT_01006408;
    param_2[6] = -1;
    return;
  }
  param_2[2] = '\0';
  return;
}



ulonglong FUN_01006414(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  short sVar11;
  undefined4 local_28;
  
  iVar4 = DAT_01006644;
  local_28 = CONCAT31((int3)((uint)param_4 >> 8),0xff);
  if ((*DAT_01006640 < *(byte *)(param_1 + 10)) || (*(byte *)(param_1 + 0xb) < *DAT_01006640))
  goto LAB_01006594;
  if (*(char *)((uint)*DAT_01006648 + DAT_01006644) == '\0') {
    uVar9 = *(byte *)(param_1 + 0xc) & 7;
    if ((*(byte *)(param_1 + 0xc) & 7) == 0) {
      uVar7 = (uint)*DAT_0100664c;
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0xd);
      if (uVar9 != 5) {
        sVar11 = (short)((int)((*DAT_0100664c - uVar7) * (uint)*(byte *)(uVar9 + DAT_01006650) *
                              0x80) / 100) + (ushort)*(byte *)(param_1 + 0xd) * 0x80;
        uVar6 = (ushort)((int)((int)sVar11 + ((uint)((int)sVar11 >> 6) >> 0x19)) >> 7);
        sVar11 = sVar11 + uVar6 * -0x80;
        goto LAB_01006490;
      }
    }
    uVar6 = (ushort)uVar7;
    sVar11 = 0;
  }
  else {
    uVar6 = (ushort)*DAT_0100664c;
    sVar11 = 0;
    *DAT_01006654 = '\0';
  }
LAB_01006490:
  pbVar5 = DAT_01006658;
  iVar8 = (int)(short)((short)*(char *)(param_1 + 7) + uVar6);
  iVar3 = UnsignedSaturate(iVar8,7);
  UnsignedDoesSaturate(iVar8,7);
  uVar9 = (uint)*(byte *)(iVar3 + param_1 + 0xe);
  if ((uVar9 != 0xff) && (*DAT_01006658 < 4)) {
    FUN_0100122a(1,&local_28);
    uVar7 = local_28 & 0xff;
    *(int *)(DAT_0100665c + uVar7 * 4) = param_1;
    *(char *)(uVar7 + DAT_01006660) = (char)param_2;
    iVar8 = DAT_01006664;
    if (param_2 == 3) {
      *(undefined1 *)(uVar7 + DAT_01006668) = *DAT_0100666c;
      uVar10 = *DAT_01006670;
    }
    else {
      *(undefined1 *)(uVar7 + DAT_01006668) = 0xff;
      uVar10 = 0;
    }
    *(undefined1 *)(uVar7 + iVar8) = uVar10;
    *(undefined2 *)(DAT_01006674 + uVar7 * 2) = *DAT_01006678;
    bVar1 = *DAT_0100664c;
    *(byte *)(uVar7 + DAT_0100667c) = bVar1;
    *(byte *)(uVar7 + DAT_01006680) = bVar1;
    *(byte *)(uVar7 + DAT_01006684) = *DAT_01006640;
    *(char *)(uVar7 + DAT_01006688) = (char)iVar3;
    bVar2 = *DAT_01006648;
    *(short *)(DAT_01006690 + uVar7 * 2) =
         *(char *)((uint)bVar1 % 0xc + DAT_0100668c + (uint)bVar2 * 0xc) + sVar11;
    iVar3 = DAT_01006694;
    *(undefined1 *)(uVar7 + DAT_01006694) = 0x80;
    if (*DAT_01006654 != '\0') {
      *(undefined1 *)(uVar7 + iVar3) = 0xa0;
    }
    *(undefined1 *)(uVar7 + DAT_01006698) = *(undefined1 *)((uint)bVar2 + iVar4);
    *(byte *)(uVar7 + DAT_0100669c) = bVar2;
    param_1 = param_1 + uVar9 * 0x28;
    bVar1 = *(byte *)(param_1 + 0xad);
    *(ushort *)(DAT_010066a0 + uVar7 * 2) = (ushort)bVar1 + (ushort)bVar1 * 4;
    bVar1 = *pbVar5;
    *(undefined1 *)((uint)bVar1 + DAT_010066a4) = (undefined1)local_28;
    *pbVar5 = bVar1 + 1;
    if (*(char *)(param_1 + 0x97) == -1) {
      uVar9 = 0xff;
    }
    else {
      local_28._0_2_ = CONCAT11(0xff,(undefined1)local_28);
      FUN_0100122a(1,(int)&local_28 + 1);
      uVar9 = local_28 >> 8 & 0xff;
    }
    FUN_01002a3e(local_28 & 0xff,uVar9);
  }
LAB_01006594:
  return CONCAT44(local_28,local_28) & 0xffffffff000000ff;
}



undefined4 FUN_0100659c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  *DAT_01006658 = 0;
  uVar10 = (uint)*(byte *)(param_1 + 9);
  if (uVar10 != 0) {
    thunk_EXT_FUN_80062a60(DAT_010066a4,4,0xff);
    *DAT_01006654 = 0;
    puVar6 = DAT_010066ac;
    iVar5 = DAT_010066a8;
    iVar4 = DAT_01006694;
    iVar2 = DAT_01006660;
    iVar9 = param_1 + (uint)*(byte *)(param_1 + 8) * 2;
    do {
      iVar7 = *DAT_010066b0;
      iVar7 = *(int *)(*(int *)(iVar7 + 0x34) + iVar7 + (uint)*(ushort *)(iVar9 + 0xe) * 4) + iVar7;
      iVar8 = FUN_01006414(iVar7,1);
      if (iVar8 != 0xff) {
        *(byte *)(iVar8 + iVar4) = *(byte *)(iVar8 + iVar4) | 8;
        *(undefined1 *)(iVar8 + iVar2) = 1;
        *(undefined2 *)(iVar5 + iVar8 * 2) = *puVar6;
        *(int *)(DAT_010066b4 + iVar8 * 4) = param_1;
        *(int *)(DAT_0100665c + iVar8 * 4) = iVar7;
        *(undefined2 *)(DAT_010066b8 + iVar8 * 2) = 0;
        *(undefined1 *)(iVar8 + DAT_01006668) = 0xff;
        *(undefined1 *)(iVar8 + DAT_01006664) = 0;
      }
      psVar3 = DAT_01006678;
      iVar9 = iVar9 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    sVar1 = *DAT_01006678;
    *DAT_01006678 = sVar1 + 1;
    if ((short)(sVar1 + 1) == 0) {
      *psVar3 = 1;
    }
  }
  return param_4;
}



undefined8 FUN_01006726(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = 0;
  uVar6 = (uint)(byte)*PTR_DAT_01006860;
  puVar2 = (ushort *)PTR_DAT_01006854;
LAB_01006732:
  do {
    if (uVar6 <= uVar1) {
      *PTR_DAT_01006860 = (char)uVar6;
      (*(code *)**(undefined4 **)PTR_DAT_01006874)();
      return CONCAT44(param_2,param_1);
    }
    if (*puVar2 != 0) {
      iVar7 = *puVar2 - 1;
      *puVar2 = (ushort)iVar7;
      if (iVar7 != 0) {
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        goto LAB_01006732;
      }
      uVar4 = (uint)((byte)PTR_DAT_01006858[uVar1] >> 3);
      PTR_DAT_01006840[uVar4] =
           PTR_DAT_01006840[uVar4] | PTR_DAT_01006870[(byte)PTR_DAT_01006858[uVar1] & 7 ^ 7];
      *PTR_DAT_0100685c = *PTR_DAT_0100685c | PTR_DAT_01006870[uVar4 & 7 ^ 7];
    }
    puVar3 = (undefined2 *)(PTR_DAT_01006854 + uVar1 * 2);
    puVar5 = PTR_DAT_01006858 + uVar1;
    for (uVar4 = uVar1; uVar4 < uVar6; uVar4 = uVar4 + 1) {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      *puVar5 = puVar5[1];
      puVar5 = puVar5 + 1;
    }
    uVar6 = uVar6 - 1;
  } while( true );
}



undefined8 FUN_010067c6(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_01006e90();
  uVar3 = uVar2 >> 3;
  bVar1 = PTR_DAT_01006870[uVar2 & 7 ^ 7];
  if ((PTR_DAT_0100684c[uVar3] & bVar1) != 0) {
    PTR_DAT_0100684c[uVar3] = PTR_DAT_0100684c[uVar3] & ~bVar1;
    PTR_DAT_01006840[uVar3] = PTR_DAT_01006840[uVar3] | bVar1;
    *PTR_DAT_0100685c = *PTR_DAT_0100685c | PTR_DAT_01006870[uVar3 & 7 ^ 7];
  }
  FUN_01006ea4();
  return CONCAT44(param_2,param_1);
}



void FUN_01006a2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  byte extraout_r1;
  int iVar5;
  int extraout_r1_00;
  uint extraout_r1_01;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 uVar10;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == 0) {
    return;
  }
  piVar9 = &iStack_38;
  iStack_38 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uVar3 = FUN_01006eb2();
  bVar1 = *DAT_01006b50;
  *(undefined2 *)(DAT_01006b58 + (uint)bVar1 * 2) = uVar3;
  bVar2 = *PTR_DAT_01006b5c;
  *(byte *)(DAT_01006b54 + (uint)bVar1) = bVar2;
  *DAT_01006b50 = bVar1 + 1;
  PTR_DAT_01006b6c[bVar2 >> 3] =
       PTR_DAT_01006b6c[bVar2 >> 3] | *(byte *)(DAT_01006b48 + (bVar2 & 7 ^ 7));
  **(undefined4 **)(*(int *)(*DAT_01006b7c + 0x10) + (uint)(byte)*PTR_DAT_01006b5c * 4) = piVar9;
LAB_01006b94:
  do {
    *DAT_01006ecc = 0xff;
    FUN_01006eb2();
    do {
      FUN_01006ebe();
      pbVar8 = DAT_01006ed0;
    } while (*DAT_01006ed0 == 0);
    while( true ) {
      FUN_01006eb2();
      uVar4 = (uint)*(byte *)(DAT_01006ed4 + (uint)*pbVar8);
      bVar1 = *(byte *)(DAT_01006ed8 + uVar4);
      if (bVar1 == 0) break;
      uVar6 = (uint)*(byte *)(DAT_01006ed4 + (uint)bVar1);
      iVar5 = uVar4 * 8 + uVar6;
      uVar10 = CONCAT44(iVar5,uVar4);
      bVar1 = bVar1 & *(byte *)(DAT_01006edc + (uVar6 & 7 ^ 7));
      *(byte *)(DAT_01006ed8 + uVar4) = bVar1;
      if (bVar1 == 0) {
        *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar4 & 7 ^ 7));
      }
      *DAT_01006ecc = (byte)iVar5;
      *(undefined1 *)(DAT_01006ee0 + iVar5) = 1;
      if (*(char *)(DAT_01006ee4 + iVar5) != '\0') {
        *(undefined1 *)(DAT_01006ee4 + iVar5) = 0;
        piVar9 = (int *)(**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + iVar5 * 4) + 0x20);
        uVar10 = FUN_01006ebe();
        software_interrupt(0);
      }
      uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
      bVar1 = *(byte *)(DAT_01006eec + (uVar4 & 7 ^ 7));
      bVar2 = *(byte *)(DAT_01006ef0 + (int)uVar10);
      if ((bVar2 & bVar1) != 0) {
        *(byte *)(DAT_01006ef0 + (int)uVar10) = bVar2 & ~bVar1;
        puVar7 = (undefined4 *)**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + uVar4 * 4);
        FUN_01006ebe(*puVar7,puVar7[1],puVar7[2],puVar7[3]);
        return;
      }
      puVar7 = (undefined4 *)(*(int *)(*(int *)(*DAT_01006ee8 + 0x10) + uVar4 * 4) + -4);
      *puVar7 = piVar9;
      FUN_01006ebe();
      (**(code **)(*(int *)(*DAT_01006ee8 + 0x14) + extraout_r1_00))();
      piVar9 = (int *)*puVar7;
      bVar1 = *DAT_01006ecc;
      uVar4 = (uint)bVar1;
      *DAT_01006ecc = 0xff;
      *(undefined1 *)(DAT_01006ee0 + uVar4) = 0;
      uVar6 = (uint)(bVar1 >> 3);
      bVar1 = *(byte *)(DAT_01006eec + (uVar4 & 7 ^ 7));
      if ((*(byte *)(DAT_01006ef8 + uVar6) & bVar1) != 0) {
        *(byte *)(DAT_01006ef8 + uVar6) = *(byte *)(DAT_01006ef8 + uVar6) & ~bVar1;
        FUN_01006eb2();
        *(byte *)(DAT_01006ed8 + uVar6) = *(byte *)(DAT_01006ed8 + uVar6) | extraout_r1;
        *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar6 & 7 ^ 7));
        uVar4 = FUN_01006ebe();
      }
      bVar1 = PTR_DAT_01006efc[uVar4];
      if (bVar1 == uVar4) goto LAB_01006b94;
      PTR_DAT_01006efc[uVar4] = (char)uVar4;
      uVar4 = (uint)(bVar1 >> 3);
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar4) =
           *(byte *)(DAT_01006ed8 + uVar4) | *(byte *)(DAT_01006eec + (extraout_r1_01 & 7 ^ 7));
      pbVar8 = DAT_01006ed0;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar4 & 7 ^ 7));
      FUN_01006ebe();
    }
    *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar4 & 7 ^ 7));
  } while( true );
}



uint FUN_01006a9a(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint extraout_r1_01;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == (byte)*PTR_DAT_01006b5c) {
    return param_1;
  }
  uStack_38 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uVar9 = FUN_01006eb2();
  uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
  PTR_DAT_01006b6c[uVar3 >> 3] =
       PTR_DAT_01006b6c[uVar3 >> 3] | *(byte *)(DAT_01006b48 + (uVar3 & 7 ^ 7));
  puVar8 = &uStack_38;
  **(undefined4 **)(*(int *)(*DAT_01006b7c + 0x10) + uVar3 * 4) = puVar8;
  *(char *)(DAT_01006b74 + (int)uVar9) = (char)((ulonglong)uVar9 >> 0x20);
  FUN_01006aec();
LAB_01006b94:
  do {
    *DAT_01006ecc = 0xff;
    FUN_01006eb2();
    do {
      FUN_01006ebe();
      pbVar7 = DAT_01006ed0;
    } while (*DAT_01006ed0 == 0);
    while( true ) {
      FUN_01006eb2();
      uVar3 = (uint)*(byte *)(DAT_01006ed4 + (uint)*pbVar7);
      bVar1 = *(byte *)(DAT_01006ed8 + uVar3);
      if (bVar1 == 0) break;
      uVar5 = (uint)*(byte *)(DAT_01006ed4 + (uint)bVar1);
      iVar4 = uVar3 * 8 + uVar5;
      uVar9 = CONCAT44(iVar4,uVar3);
      bVar1 = bVar1 & *(byte *)(DAT_01006edc + (uVar5 & 7 ^ 7));
      *(byte *)(DAT_01006ed8 + uVar3) = bVar1;
      if (bVar1 == 0) {
        *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
      }
      *DAT_01006ecc = (byte)iVar4;
      *(undefined1 *)(DAT_01006ee0 + iVar4) = 1;
      if (*(char *)(DAT_01006ee4 + iVar4) != '\0') {
        *(undefined1 *)(DAT_01006ee4 + iVar4) = 0;
        puVar8 = (uint *)(**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + iVar4 * 4) + 0x20);
        uVar9 = FUN_01006ebe();
        software_interrupt(0);
      }
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
      bVar2 = *(byte *)(DAT_01006ef0 + (int)uVar9);
      if ((bVar2 & bVar1) != 0) {
        *(byte *)(DAT_01006ef0 + (int)uVar9) = bVar2 & ~bVar1;
        puVar6 = (undefined4 *)**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4);
        uVar3 = FUN_01006ebe(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
        return uVar3;
      }
      puVar6 = (undefined4 *)(*(int *)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4) + -4);
      *puVar6 = puVar8;
      FUN_01006ebe();
      (**(code **)(*(int *)(*DAT_01006ee8 + 0x14) + extraout_r1_00))();
      puVar8 = (uint *)*puVar6;
      bVar1 = *DAT_01006ecc;
      uVar3 = (uint)bVar1;
      *DAT_01006ecc = 0xff;
      *(undefined1 *)(DAT_01006ee0 + uVar3) = 0;
      uVar5 = (uint)(bVar1 >> 3);
      bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
      if ((*(byte *)(DAT_01006ef8 + uVar5) & bVar1) != 0) {
        *(byte *)(DAT_01006ef8 + uVar5) = *(byte *)(DAT_01006ef8 + uVar5) & ~bVar1;
        FUN_01006eb2();
        *(byte *)(DAT_01006ed8 + uVar5) = *(byte *)(DAT_01006ed8 + uVar5) | extraout_r1;
        *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar5 & 7 ^ 7));
        uVar3 = FUN_01006ebe();
      }
      bVar1 = PTR_DAT_01006efc[uVar3];
      if (bVar1 == uVar3) goto LAB_01006b94;
      PTR_DAT_01006efc[uVar3] = (char)uVar3;
      uVar3 = (uint)(bVar1 >> 3);
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar3) =
           *(byte *)(DAT_01006ed8 + uVar3) | *(byte *)(DAT_01006eec + (extraout_r1_01 & 7 ^ 7));
      pbVar7 = DAT_01006ed0;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
      FUN_01006ebe();
    }
    *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
  } while( true );
}



undefined8 FUN_01006aec(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_01006e90();
  uVar3 = uVar2 >> 3;
  bVar1 = *(byte *)(DAT_01006b48 + (uVar2 & 7 ^ 7));
  if (((PTR_DAT_01006b6c[uVar3] & bVar1) == 0) && (*(char *)(DAT_01006b78 + uVar2) != '\x01')) {
    *(byte *)(DAT_01006b4c + uVar3) = *(byte *)(DAT_01006b4c + uVar3) | bVar1;
    *DAT_01006b68 = *DAT_01006b68 | *(byte *)(DAT_01006b48 + (uVar3 & 7 ^ 7));
  }
  else {
    *(byte *)(DAT_01006b64 + uVar3) = *(byte *)(DAT_01006b64 + uVar3) | bVar1;
  }
  FUN_01006ea4();
  return CONCAT44(param_2,param_1);
}



void thunk_FUN_01006c90(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint extraout_r1_01;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  while( true ) {
    bVar1 = *DAT_01006ecc;
    uVar3 = (uint)bVar1;
    *DAT_01006ecc = 0xff;
    *(undefined1 *)(DAT_01006ee0 + uVar3) = 0;
    uVar6 = (uint)(bVar1 >> 3);
    bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
    if ((*(byte *)(DAT_01006ef8 + uVar6) & bVar1) != 0) {
      *(byte *)(DAT_01006ef8 + uVar6) = *(byte *)(DAT_01006ef8 + uVar6) & ~bVar1;
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar6) = *(byte *)(DAT_01006ed8 + uVar6) | extraout_r1;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar6 & 7 ^ 7));
      uVar3 = FUN_01006ebe();
    }
    bVar1 = PTR_DAT_01006efc[uVar3];
    if (bVar1 != uVar3) {
      PTR_DAT_01006efc[uVar3] = (char)uVar3;
      uVar3 = (uint)(bVar1 >> 3);
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar3) =
           *(byte *)(DAT_01006ed8 + uVar3) | *(byte *)(DAT_01006eec + (extraout_r1_01 & 7 ^ 7));
      pbVar7 = DAT_01006ed0;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
      FUN_01006ebe();
      goto LAB_01006bac;
    }
    while( true ) {
      *DAT_01006ecc = 0xff;
      FUN_01006eb2();
      do {
        FUN_01006ebe();
        pbVar7 = DAT_01006ed0;
      } while (*DAT_01006ed0 == 0);
LAB_01006bac:
      FUN_01006eb2();
      uVar3 = (uint)*(byte *)(DAT_01006ed4 + (uint)*pbVar7);
      bVar1 = *(byte *)(DAT_01006ed8 + uVar3);
      if (bVar1 != 0) break;
      *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
    }
    uVar6 = (uint)*(byte *)(DAT_01006ed4 + (uint)bVar1);
    iVar4 = uVar3 * 8 + uVar6;
    uVar8 = CONCAT44(iVar4,uVar3);
    bVar1 = bVar1 & *(byte *)(DAT_01006edc + (uVar6 & 7 ^ 7));
    *(byte *)(DAT_01006ed8 + uVar3) = bVar1;
    if (bVar1 == 0) {
      *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
    }
    *DAT_01006ecc = (byte)iVar4;
    *(undefined1 *)(DAT_01006ee0 + iVar4) = 1;
    if (*(char *)(DAT_01006ee4 + iVar4) != '\0') {
      *(undefined1 *)(DAT_01006ee4 + iVar4) = 0;
      register0x00000054 =
           (BADSPACEBASE *)(**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + iVar4 * 4) + 0x20);
      uVar8 = FUN_01006ebe();
      software_interrupt(0);
    }
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
    bVar2 = *(byte *)(DAT_01006ef0 + (int)uVar8);
    if ((bVar2 & bVar1) != 0) break;
    puVar5 = (undefined4 *)(*(int *)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4) + -4);
    *puVar5 = register0x00000054;
    FUN_01006ebe();
    (**(code **)(*(int *)(*DAT_01006ee8 + 0x14) + extraout_r1_00))();
    register0x00000054 = (BADSPACEBASE *)*puVar5;
  }
  *(byte *)(DAT_01006ef0 + (int)uVar8) = bVar2 & ~bVar1;
  puVar5 = (undefined4 *)**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4);
  FUN_01006ebe(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  return;
}



void FUN_01006c90(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint extraout_r1_01;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  while( true ) {
    bVar1 = *DAT_01006ecc;
    uVar3 = (uint)bVar1;
    *DAT_01006ecc = 0xff;
    *(undefined1 *)(DAT_01006ee0 + uVar3) = 0;
    uVar6 = (uint)(bVar1 >> 3);
    bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
    if ((*(byte *)(DAT_01006ef8 + uVar6) & bVar1) != 0) {
      *(byte *)(DAT_01006ef8 + uVar6) = *(byte *)(DAT_01006ef8 + uVar6) & ~bVar1;
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar6) = *(byte *)(DAT_01006ed8 + uVar6) | extraout_r1;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar6 & 7 ^ 7));
      uVar3 = FUN_01006ebe();
    }
    bVar1 = PTR_DAT_01006efc[uVar3];
    if (bVar1 != uVar3) {
      PTR_DAT_01006efc[uVar3] = (char)uVar3;
      uVar3 = (uint)(bVar1 >> 3);
      FUN_01006eb2();
      *(byte *)(DAT_01006ed8 + uVar3) =
           *(byte *)(DAT_01006ed8 + uVar3) | *(byte *)(DAT_01006eec + (extraout_r1_01 & 7 ^ 7));
      pbVar7 = DAT_01006ed0;
      *DAT_01006ed0 = *DAT_01006ed0 | *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
      FUN_01006ebe();
      goto LAB_01006bac;
    }
    while( true ) {
      *DAT_01006ecc = 0xff;
      FUN_01006eb2();
      do {
        FUN_01006ebe();
        pbVar7 = DAT_01006ed0;
      } while (*DAT_01006ed0 == 0);
LAB_01006bac:
      FUN_01006eb2();
      uVar3 = (uint)*(byte *)(DAT_01006ed4 + (uint)*pbVar7);
      bVar1 = *(byte *)(DAT_01006ed8 + uVar3);
      if (bVar1 != 0) break;
      *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
    }
    uVar6 = (uint)*(byte *)(DAT_01006ed4 + (uint)bVar1);
    iVar4 = uVar3 * 8 + uVar6;
    uVar8 = CONCAT44(iVar4,uVar3);
    bVar1 = bVar1 & *(byte *)(DAT_01006edc + (uVar6 & 7 ^ 7));
    *(byte *)(DAT_01006ed8 + uVar3) = bVar1;
    if (bVar1 == 0) {
      *DAT_01006ed0 = *DAT_01006ed0 & *(byte *)(DAT_01006edc + (uVar3 & 7 ^ 7));
    }
    *DAT_01006ecc = (byte)iVar4;
    *(undefined1 *)(DAT_01006ee0 + iVar4) = 1;
    if (*(char *)(DAT_01006ee4 + iVar4) != '\0') {
      *(undefined1 *)(DAT_01006ee4 + iVar4) = 0;
      register0x00000054 =
           (BADSPACEBASE *)(**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + iVar4 * 4) + 0x20);
      uVar8 = FUN_01006ebe();
      software_interrupt(0);
    }
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar1 = *(byte *)(DAT_01006eec + (uVar3 & 7 ^ 7));
    bVar2 = *(byte *)(DAT_01006ef0 + (int)uVar8);
    if ((bVar2 & bVar1) != 0) break;
    puVar5 = (undefined4 *)(*(int *)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4) + -4);
    *puVar5 = register0x00000054;
    FUN_01006ebe();
    (**(code **)(*(int *)(*DAT_01006ee8 + 0x14) + extraout_r1_00))();
    register0x00000054 = (BADSPACEBASE *)*puVar5;
  }
  *(byte *)(DAT_01006ef0 + (int)uVar8) = bVar2 & ~bVar1;
  puVar5 = (undefined4 *)**(int **)(*(int *)(*DAT_01006ee8 + 0x10) + uVar3 * 4);
  FUN_01006ebe(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  return;
}



undefined8 FUN_01006d58(int param_1,undefined4 param_2)

{
  PTR_DAT_01006f00[param_1] = 0xff;
  return CONCAT44(param_2,param_1);
}



undefined8 FUN_01006d66(int param_1,undefined4 param_2)

{
  PTR_DAT_01006f00[param_1] = 0;
  return CONCAT44(param_2,param_1);
}



int FUN_01006e78(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_01006d58(*DAT_01006ecc);
  iVar2 = getProcessStackPointer();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(iVar2 + 0x20);
  }
  return iVar2 + 0x20;
}



undefined8 FUN_01006e90(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  *DAT_01006f14 = uVar2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  return CONCAT44(param_2,param_1);
}



undefined4 FUN_01006ea4(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((*DAT_01006f14 & 1) == 1);
  }
  return param_1;
}



undefined4 FUN_01006eb2(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  return param_1;
}



undefined4 FUN_01006ebe(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  return param_1;
}



void thunk_EXT_FUN_80062880(void)

{
                    // WARNING: Could not recover jumptable at 0x01006f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01006f1c)();
  return;
}



char FUN_01007020(int param_1)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*(int *)(*DAT_0100716c + 0x20) + param_1 * 8);
  if (*pbVar2 != 0) {
    return *(char *)((uint)*pbVar2 + DAT_01007170);
  }
  if (pbVar2[1] == 0) {
    if (pbVar2[2] == 0) {
      if (pbVar2[3] != 0) {
        return *(char *)((uint)pbVar2[3] + DAT_01007170) + '\x18';
      }
      if (pbVar2[4] == 0) {
        if (pbVar2[5] != 0) {
          return *(char *)((uint)pbVar2[5] + DAT_01007170) + '(';
        }
        if (pbVar2[6] == 0) {
          if (pbVar2[7] == 0) {
            return -1;
          }
          return *(char *)((uint)pbVar2[7] + DAT_01007170) + '8';
        }
        cVar1 = *(char *)((uint)pbVar2[6] + DAT_01007170) + '0';
      }
      else {
        cVar1 = *(char *)((uint)pbVar2[4] + DAT_01007170) + ' ';
      }
    }
    else {
      cVar1 = *(char *)((uint)pbVar2[2] + DAT_01007170) + '\x10';
    }
  }
  else {
    cVar1 = *(char *)((uint)pbVar2[1] + DAT_01007170) + '\b';
  }
  return cVar1;
}



void FUN_010070b2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = DAT_0100716c;
  uVar2 = (**(code **)(*DAT_0100716c + 4))();
  uVar3 = FUN_01007020(param_1);
  iVar4 = *piVar1;
  if (uVar3 == 0xff) {
    *(undefined1 *)(param_1 + *(int *)(iVar4 + 0x1c)) = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x20) + param_1 * 8;
    *(byte *)(((int)uVar3 >> 3) + iVar4) =
         *(byte *)(((int)uVar3 >> 3) + iVar4) & PTR_DAT_01007174[uVar3 & 7 ^ 7];
    FUN_010067c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar1 + 8);
                    // WARNING: Could not recover jumptable at 0x0100715a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(uVar2,UNRECOVERED_JUMPTABLE,param_4);
  return;
}



void thunk_EXT_FUN_80070d0c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100717c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007180)();
  return;
}



void thunk_EXT_FUN_8008d0d4(void)

{
                    // WARNING: Could not recover jumptable at 0x01007184. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007188)();
  return;
}



void thunk_EXT_FUN_8006542e(void)

{
                    // WARNING: Could not recover jumptable at 0x0100718c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007190)();
  return;
}



void thunk_EXT_FUN_80065458(void)

{
                    // WARNING: Could not recover jumptable at 0x01007194. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007198)();
  return;
}



void thunk_EXT_FUN_8004dbda(void)

{
                    // WARNING: Could not recover jumptable at 0x0100719c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010071a0)();
  return;
}



void thunk_EXT_FUN_800653d0(void)

{
                    // WARNING: Could not recover jumptable at 0x010071a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010071a8)();
  return;
}



void thunk_EXT_FUN_8006c8f4(void)

{
                    // WARNING: Could not recover jumptable at 0x010071ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010071b0)();
  return;
}



void thunk_EXT_FUN_8006ca80(void)

{
                    // WARNING: Could not recover jumptable at 0x010071b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010071b8)();
  return;
}



void thunk_EXT_FUN_8004c1e6(void)

{
                    // WARNING: Could not recover jumptable at 0x010071bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010071c0)();
  return;
}



bool FUN_010071c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 - (uint)*(byte *)(param_2 + 0xb);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (2 < iVar1) {
    *(char *)(param_2 + 0xb) = (char)param_1;
  }
  return 2 < iVar1;
}



undefined8 FUN_010071de(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_0100bb0c();
  uVar1 = *(undefined1 *)((int)param_1 + 0xd);
  FUN_0100bb32();
  iVar2 = FUN_010071c4(uVar1,param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = (int)(char)param_1[4] + (uint)*(byte *)((int)param_1 + 0xb);
    uVar4 = UnsignedSaturate(iVar2,8);
    UnsignedDoesSaturate(iVar2,8);
    if (*param_1 != 0) {
      uVar4 = (uint)*(byte *)(uVar4 + *param_1);
    }
    uVar4 = uVar4 >> 1;
    if (param_1[1] != 0) {
      uVar4 = (uint)*(byte *)(uVar4 + param_1[1]);
    }
    if (*(byte *)((int)param_1 + 10) != uVar4) {
      *(char *)((int)param_1 + 10) = (char)uVar4;
      uVar3 = 1;
    }
  }
  return CONCAT44(param_4,uVar3);
}



undefined8 FUN_01007220(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_0100bb0c();
  uVar1 = *(undefined1 *)((int)param_1 + 0xd);
  FUN_0100bb32();
  iVar2 = FUN_010071c4(uVar1,param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)((int)param_1 + 0xb);
    if (*param_1 != 0) {
      uVar4 = (uint)*(byte *)(uVar4 + *param_1);
    }
    uVar4 = uVar4 >> 1;
    if (*(char *)((int)param_1 + 0xe) == '\x7f') {
      uVar4 = ~uVar4 & 0x7f;
    }
    if (param_1[1] != 0) {
      uVar4 = (uint)*(byte *)(uVar4 + param_1[1]);
    }
    if (*(byte *)((int)param_1 + 10) != uVar4) {
      *(char *)((int)param_1 + 10) = (char)uVar4;
      uVar3 = 1;
    }
  }
  return CONCAT44(param_4,uVar3);
}



longlong FUN_01007264(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  if (*(char *)(param_1 + 0xe) != -1) {
    FUN_0100bb0c();
    uVar1 = *(undefined1 *)(param_1 + 0xd);
    FUN_0100bb32();
    FUN_010071c4(uVar1,param_1);
    if (*(byte *)(param_1 + 0xb) < 0x80) {
      bVar3 = 0;
    }
    else {
      bVar3 = 0x7f;
    }
    bVar5 = 0;
    iVar7 = 2;
    iVar6 = param_1;
    do {
      bVar5 = bVar5 | *(byte *)(iVar6 + 0x12) ^ bVar3;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    bVar2 = false;
    if ((bVar5 == 0) && (*(byte *)(param_1 + 0xc) != bVar3)) {
      *(byte *)(param_1 + 0xc) = bVar3;
      bVar2 = true;
    }
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar3;
    uVar4 = 0;
    if (bVar2) {
      if (*(char *)(param_1 + 0xe) == *(char *)(param_1 + 0xc)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x7f';
      }
      if (*(char *)(param_1 + 10) != cVar8) {
        *(char *)(param_1 + 10) = cVar8;
        uVar4 = 1;
      }
    }
    return CONCAT44(param_4,uVar4);
  }
  return (ulonglong)param_4 << 0x20;
}



undefined4 FUN_010072d4(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = DAT_0100786c + (uint)*(byte *)((int)param_1 + 0xe) * 0x14;
  if ((*(char *)(iVar3 + 0xe) != -1) &&
     (bVar5 = *(char *)((int)param_1 + 0xf) + 1, *(byte *)((int)param_1 + 0xf) = bVar5,
     (bVar5 & 3) == 0)) {
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    cVar2 = *(char *)(iVar3 + 0x10);
    FUN_0100bb0c();
    uVar1 = *(undefined1 *)((int)param_1 + 0xd);
    FUN_0100bb32();
    iVar3 = FUN_010071c4(uVar1,param_1);
    uVar4 = 0;
    if (iVar3 != 0) {
      iVar3 = (int)cVar2 + (uint)*(byte *)((int)param_1 + 0xb);
      uVar6 = UnsignedSaturate(iVar3,8);
      UnsignedDoesSaturate(iVar3,8);
      if (*param_1 != 0) {
        uVar6 = (uint)*(byte *)(uVar6 + *param_1);
      }
      uVar6 = uVar6 >> 1;
      if (param_1[1] != 0) {
        uVar6 = (uint)*(byte *)(uVar6 + param_1[1]);
      }
      if (*(byte *)((int)param_1 + 10) != uVar6) {
        *(char *)((int)param_1 + 10) = (char)uVar6;
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  return 0;
}



void FUN_0100735a(int param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  
  iVar1 = DAT_0100786c;
  if (param_1 == 1) {
    if (*(char *)(DAT_0100786c + 0x22) != -1) {
      return;
    }
    bVar3 = 0x52 < (param_2 - 0x57 & 0xff);
    if (bVar3) {
      *(undefined1 *)(DAT_0100786c + 0x24) = 0;
    }
    else {
      *(char *)(DAT_0100786c + 0x24) = -0x80 - (char)param_2;
    }
    *(bool *)(iVar1 + 0x22) = !bVar3;
    return;
  }
  if ((param_1 == 3) || (param_1 == 5)) {
    iVar1 = DAT_0100786c + param_1 * 0x14;
    if (*(char *)(iVar1 + 0xe) != -1) {
      return;
    }
    *(char *)(iVar1 + 0x10) = -0x80 - (char)param_2;
  }
  else {
    iVar1 = DAT_0100786c + param_1 * 0x14;
    if (*(char *)(iVar1 + 0xe) != -1) {
      return;
    }
    if (0x7f < param_2) {
      uVar2 = 0x7f;
      goto LAB_010073c8;
    }
  }
  uVar2 = 0;
LAB_010073c8:
  *(undefined1 *)(iVar1 + 0xe) = uVar2;
  return;
}



undefined4 FUN_010073cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1 * 0x14;
  iVar3 = iVar5 + DAT_0100786c;
  if (*(char *)(iVar3 + 9) != '\x02') {
    if (*(char *)(param_1 * 3 + DAT_01007870) == '\0') {
      uVar4 = 0;
      if (param_1 == 0) {
        uVar4 = ~(uint)*DAT_01007874 & 0x80;
      }
      iVar2 = DAT_01007878 + param_1 * 0xc;
      if (*(char *)(iVar2 + 8) == '\0') {
        if (uVar4 != 0) {
          iVar2 = 0xff;
        }
        uVar1 = (undefined1)iVar2;
        if (uVar4 == 0) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = (undefined1)(uVar4 >> *(sbyte *)(iVar2 + 9));
      }
      *(undefined1 *)(iVar3 + 0xd) = uVar1;
      FUN_0100735a(param_1,*(undefined1 *)(iVar3 + 0xd));
    }
    uVar4 = (**(code **)(PTR_PTR_FUN_01007220_1_0100787c + (uint)*(byte *)(iVar3 + 8) * 4))(iVar3);
    bVar6 = (int)((uint)*(byte *)(iVar3 + 0x11) << 0x1f) < 0;
    if (bVar6) {
      uVar4 = *(byte *)(iVar3 + 0x11) & 0xfe;
    }
    if (bVar6) {
      *(char *)(iVar3 + 0x11) = (char)uVar4;
    }
    else if (uVar4 == 0) {
      return param_4;
    }
    thunk_EXT_FUN_80070d0c(1,0x7f);
    thunk_EXT_FUN_80070d0c(1,0);
    if (*(char *)(iVar3 + 9) != '\x01') {
      (**(code **)(PTR_DAT_01007880 + iVar5))
                (PTR_DAT_01007880[iVar5 + 0xf],*(undefined1 *)(iVar3 + 10));
    }
  }
  return param_4;
}



undefined4 FUN_0100746e(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_r3;
  int iVar8;
  char *pcVar9;
  
  iVar4 = DAT_01007884;
  cVar1 = *(char *)(DAT_01007884 + 8) + -1;
  *(char *)(DAT_01007884 + 8) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(iVar4 + 8) = 1;
    iVar3 = DAT_0100786c;
    iVar8 = 0;
    pcVar9 = DAT_01007888;
    do {
      uVar6 = thunk_EXT_FUN_8008d0d4(iVar8);
      cVar1 = *pcVar9;
      if (cVar1 != -1) {
        *(char *)(iVar3 + cVar1 * 0x14 + 0xd) = (char)(uVar6 >> 2);
        FUN_0100735a(cVar1,uVar6 >> 2 & 0xff);
      }
      iVar8 = iVar8 + 1;
      pcVar9 = pcVar9 + 1;
    } while (iVar8 < 0x10);
  }
  FUN_010073cc(0);
  FUN_010073cc(1);
  FUN_010073cc(2);
  FUN_010073cc(3);
  FUN_010073cc(4);
  FUN_010073cc(5);
  FUN_0100bb0c();
  cVar1 = PTR_DAT_0100788c[2];
  PTR_DAT_0100788c[2] = 0;
  FUN_0100bb32();
  if (cVar1 == '\0') {
LAB_0100751e:
    if ((*(char *)(iVar4 + 6) != '\x7f') ||
       (bVar5 = *(char *)(iVar4 + 7) + 1, *(byte *)(iVar4 + 7) = bVar5, bVar5 < 0x50))
    goto LAB_01007540;
    thunk_EXT_FUN_80062880(0xc0000);
    uVar7 = 0;
    *(undefined2 *)(iVar4 + 6) = 0;
  }
  else {
    cVar1 = *(char *)(iVar4 + 5) + cVar1;
    uVar6 = (int)((int)cVar1 + ((uint)((int)cVar1 >> 1) >> 0x1e)) >> 2;
    cVar2 = (char)uVar6;
    *(char *)(iVar4 + 5) = cVar1 + cVar2 * -4;
    if (cVar2 == '\0') goto LAB_0100751e;
    thunk_EXT_FUN_8006542e(0xc,uVar6 & 0xff);
    *(undefined1 *)(iVar4 + 6) = 0x7f;
    *(undefined1 *)(iVar4 + 7) = 0;
    uVar7 = 0x7f;
  }
  thunk_EXT_FUN_80065458(uVar7);
LAB_01007540:
  bVar5 = *(char *)(iVar4 + 0x14) + 1;
  *(byte *)(iVar4 + 0x14) = bVar5;
  if (3 < bVar5) {
    FUN_0100768e();
    *(undefined1 *)(iVar4 + 0x14) = 0;
  }
  return in_r3;
}



void FUN_01007556(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  
  pcVar7 = DAT_01007884;
  uVar9 = (uint)(byte)DAT_01007884[2];
  bVar4 = PTR_DAT_01007890[uVar9];
  pbVar13 = (byte *)(DAT_01007884 + uVar9 + 0x2c);
  bVar1 = DAT_01007884[uVar9 + 0x34];
  bVar2 = DAT_01007884[uVar9 + 0x3c];
  bVar3 = *pbVar13;
  DAT_01007884[uVar9 + 0x3c] = bVar1;
  pcVar7[uVar9 + 0x34] = bVar4;
  pcVar14 = *(char **)(PTR_DAT_01007894 + uVar9 * 4);
  cVar8 = (char)(uVar9 + 1);
  if (7 < (uVar9 + 1 & 0xff)) {
    cVar8 = '\0';
  }
  pcVar7[2] = cVar8;
  iVar17 = 8;
  pbVar15 = DAT_01007898;
  pbVar16 = DAT_0100789c;
  do {
    bVar5 = *pbVar15;
    if (((((bVar4 ^ bVar1 | bVar2 ^ bVar1) & bVar5) == 0) && (((bVar3 ^ bVar4) & bVar5) != 0)) &&
       (*pcVar14 != -1)) {
      if ((bVar4 & bVar5) == 0) {
        *pbVar13 = *pbVar16 & *pbVar13;
        cVar8 = *pcVar14;
        pcVar12 = pcVar7;
        if ((*pcVar7 == cVar8) || (pcVar12 = pcVar7 + 1, pcVar7[1] == cVar8)) {
          *pcVar12 = -1;
          thunk_EXT_FUN_800653d0(cVar8,0);
          uVar10 = 0;
          goto LAB_01007674;
        }
      }
      else {
        *pbVar13 = bVar5 | *pbVar13;
        if (*pcVar14 == '\x15') {
          uVar9 = *(uint *)(pcVar7 + 0x28);
          if (uVar9 - 0x56 < 0x303) {
            uVar6 = *(ushort *)(DAT_010078a0 + uVar9 * 2 + -0xac);
            if (pcVar7[3] != '\x7f') {
              thunk_EXT_FUN_8004dbda(0x80,uVar6 >> 8,0x10);
              uVar11 = (undefined1)uVar6;
LAB_0100761c:
              thunk_EXT_FUN_8004dbda(0x81,uVar11,0x10);
            }
          }
          else if ((uVar9 < 0x56) && (pcVar7[3] != '\x7f')) {
            thunk_EXT_FUN_8004dbda(0x80,1,0x10);
            uVar11 = 0x18;
            goto LAB_0100761c;
          }
          pcVar7[0x28] = '\0';
          pcVar7[0x29] = '\0';
          pcVar7[0x2a] = '\0';
          pcVar7[0x2b] = '\0';
          pcVar7[4] = '\x7f';
        }
        cVar8 = *pcVar14;
        if (pcVar7[3] != '\x7f') {
          pcVar12 = pcVar7;
          if (*pcVar7 != -1) {
            pcVar12 = pcVar7 + 1;
            if (pcVar7[1] != -1) goto LAB_01007678;
          }
          *pcVar12 = cVar8;
          thunk_EXT_FUN_800653d0(cVar8,0x7f);
          uVar10 = 0x7f;
LAB_01007674:
          thunk_EXT_FUN_80065458(uVar10);
        }
      }
    }
LAB_01007678:
    pcVar14 = pcVar14 + 1;
    pbVar16 = pbVar16 + 1;
    pbVar15 = pbVar15 + 1;
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) {
      return;
    }
  } while( true );
}



void FUN_0100768e(void)

{
  int iVar1;
  ushort *puVar2;
  char cVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  
  puVar2 = DAT_010078a4;
  iVar1 = DAT_01007884;
  if ((int)((uint)DAT_010078a4[2] << 0x17) < 0) {
    cVar5 = '\x7f';
  }
  else {
    cVar5 = '\0';
  }
  cVar3 = *(char *)(DAT_01007884 + 0xc);
  bVar6 = cVar5 != cVar3;
  if (bVar6) {
    cVar3 = '\x1e';
  }
  if (bVar6) {
    *(char *)(DAT_01007884 + 0xd) = cVar3;
  }
  if (bVar6) {
    *(char *)(iVar1 + 0xc) = cVar5;
  }
  else if ((*(char *)(iVar1 + 0xd) != '\0') &&
          (cVar3 = *(char *)(iVar1 + 0xd) + -1, *(char *)(iVar1 + 0xd) = cVar3, cVar3 == '\0')) {
    if (cVar5 == '\0') {
      if (*DAT_010078a8 == '\0') {
        uVar4 = 0;
        goto LAB_010076d8;
      }
      uVar4 = 0;
LAB_010076c2:
      thunk_EXT_FUN_8006c8f4(uVar4);
    }
    else {
      if (*DAT_010078a8 != '\0') {
        uVar4 = 0x7f;
        goto LAB_010076c2;
      }
      uVar4 = 0x7f;
LAB_010076d8:
      thunk_EXT_FUN_8004dbda(0x85,uVar4,0x10);
    }
    *(char *)(iVar1 + 0xb) = cVar5;
  }
  if ((int)((uint)*puVar2 << 0x1c) < 0) {
    cVar5 = '\x7f';
  }
  else {
    cVar5 = '\0';
  }
  cVar3 = *(char *)(iVar1 + 0xf);
  bVar6 = cVar5 != cVar3;
  if (bVar6) {
    cVar3 = '\x1e';
  }
  if (bVar6) {
    *(char *)(iVar1 + 0x10) = cVar3;
  }
  if (bVar6) {
    *(char *)(iVar1 + 0xf) = cVar5;
  }
  else if ((*(char *)(iVar1 + 0x10) != '\0') &&
          (cVar3 = *(char *)(iVar1 + 0x10) + -1, *(char *)(iVar1 + 0x10) = cVar3, cVar3 == '\0')) {
    if (cVar5 == '\0') {
      if (*DAT_010078a8 == '\0') {
        thunk_EXT_FUN_8004dbda(0x83,0,0x10);
        uVar4 = 0;
        goto LAB_0100772c;
      }
    }
    else if (*DAT_010078a8 == '\0') {
      thunk_EXT_FUN_8004dbda(0x83,0x7f,0x10);
      uVar4 = 0x7f;
LAB_0100772c:
      thunk_EXT_FUN_8004dbda(0x84,uVar4,0x10);
    }
    *(char *)(iVar1 + 0xe) = cVar5;
  }
  if ((int)((uint)puVar2[2] << 0x16) < 0) {
    cVar5 = '\x7f';
  }
  else {
    cVar5 = '\0';
  }
  if (cVar5 != *(char *)(iVar1 + 0x12)) {
    *(undefined1 *)(iVar1 + 0x13) = 0x1e;
    *(char *)(iVar1 + 0x12) = cVar5;
    return;
  }
  if (*(char *)(iVar1 + 0x13) == '\0') {
    return;
  }
  cVar3 = *(char *)(iVar1 + 0x13) + -1;
  *(char *)(iVar1 + 0x13) = cVar3;
  if (cVar3 != '\0') {
    return;
  }
  if (cVar5 == '\0') {
    if (*DAT_010078a8 != '\0') goto LAB_0100777a;
    uVar4 = 0;
  }
  else {
    if (*DAT_010078a8 != '\0') goto LAB_0100777a;
    uVar4 = 0x7f;
  }
  thunk_EXT_FUN_8004dbda(0x86,uVar4,0x10);
LAB_0100777a:
  *(char *)(iVar1 + 0x11) = cVar5;
  return;
}



void FUN_0100777e(void)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_010078b0;
  puVar3 = PTR_DAT_0100788c;
  uVar5 = *DAT_010078ac >> 10 & 3;
  bVar1 = *PTR_DAT_0100788c;
  cVar2 = *(char *)(uVar5 + DAT_010078b0 + (uint)(byte)PTR_DAT_0100788c[1] * 0x10 + (uint)bVar1 * 4
                   + 0x20);
  PTR_DAT_0100788c[1] = cVar2;
  puVar3[2] = *(char *)(uVar5 + iVar4 + cVar2 * 0x10 + (uint)bVar1 * 4) + puVar3[2];
  *puVar3 = (char)uVar5;
  return;
}



void FUN_010077b8(void)

{
  int iVar1;
  ushort *puVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  iVar1 = DAT_01007884;
  if ((*(char *)(DAT_01007884 + 4) == '\x7f') &&
     (uVar5 = *(int *)(DAT_01007884 + 0x28) + 1, *(uint *)(DAT_01007884 + 0x28) = uVar5,
     0x358 < uVar5)) {
    *(undefined1 *)(iVar1 + 4) = 0;
    thunk_EXT_FUN_8004dbda(0x82,0,0x10);
  }
  FUN_01007556();
  FUN_01007556();
  FUN_0100746e();
  bVar3 = *(char *)(iVar1 + 9) + 1;
  *(byte *)(iVar1 + 9) = bVar3;
  if (bVar3 < 4) goto LAB_0100785e;
  *(undefined1 *)(iVar1 + 9) = 0;
  puVar2 = DAT_010078a4;
  if ((int)((uint)DAT_010078a4[5] << 0x1f) < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0x7f;
  }
  if (*(char *)(iVar1 + 10) == '\x7f') {
    if (iVar7 != 0x7f) {
LAB_01007818:
      *(undefined2 *)(iVar1 + 0x24) = 0;
      *(undefined1 *)(iVar1 + 10) = 0;
      goto LAB_0100785e;
    }
    uVar6 = *(ushort *)(iVar1 + 0x24);
    if (uVar6 < 200) goto LAB_0100785a;
    if ((uVar6 != 200) || (iVar7 = thunk_EXT_FUN_8004c1e6(), iVar7 != 0)) goto LAB_0100785e;
    sVar4 = *(short *)(iVar1 + 0x24) + 1;
  }
  else {
    if (*(char *)(iVar1 + 10) == '\0') {
      if (iVar7 != 0x7f) goto LAB_01007824;
      uVar6 = *(ushort *)(iVar1 + 0x24);
      if (0x27 < uVar6) {
        *(undefined2 *)(iVar1 + 0x24) = 0;
        *(undefined1 *)(iVar1 + 10) = 0x40;
        *puVar2 = *puVar2 & 0xfffb;
        goto LAB_0100785e;
      }
    }
    else {
      if (iVar7 != 0) {
LAB_01007824:
        sVar4 = 0;
        goto LAB_0100785c;
      }
      uVar6 = *(ushort *)(iVar1 + 0x24);
      if (0x13 < uVar6) {
        thunk_EXT_FUN_8006ca80();
        goto LAB_01007818;
      }
    }
LAB_0100785a:
    sVar4 = uVar6 + 1;
  }
LAB_0100785c:
  *(short *)(iVar1 + 0x24) = sVar4;
LAB_0100785e:
  FUN_01007a16();
  thunk_FUN_01006c90();
  return;
}



void thunk_EXT_FUN_8008d1d2(void)

{
                    // WARNING: Could not recover jumptable at 0x010078b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010078b8)();
  return;
}



undefined4 FUN_010078bc(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar4 = DAT_01007a34;
  uVar5 = thunk_EXT_FUN_8008d0d4(9);
  pcVar4[1] = (char)(uVar5 >> 2);
  bVar1 = pcVar4[1];
  if (*pcVar4 != '\0') {
    bVar2 = pcVar4[2];
    if (bVar2 < bVar1) {
      bVar6 = bVar1 - bVar2;
    }
    else {
      bVar6 = bVar2 - bVar1;
    }
    if (bVar6 < 2) {
      pcVar4[1] = bVar2;
      goto LAB_010078ea;
    }
  }
  pcVar4[2] = bVar1;
LAB_010078ea:
  thunk_EXT_FUN_8008d1d2(0,pcVar4);
  uVar5 = -((int)-(uint)((byte)pcVar4[0xe] < 0x41) >> 0x1f);
  if (uVar5 == (byte)pcVar4[0xc]) {
    if (((pcVar4[0xd] != '\0') && (cVar3 = pcVar4[0xd] + -1, pcVar4[0xd] = cVar3, cVar3 == '\0')) &&
       (uVar5 != (byte)pcVar4[0xf])) {
      pcVar4[0xf] = (char)uVar5;
      iVar9 = 2;
      pcVar7 = pcVar4;
      pcVar8 = pcVar4;
      do {
        if (*(int *)(pcVar7 + 0x10) != 0) {
          (**(code **)(pcVar8 + 0x10))(pcVar4[0xf]);
        }
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *(undefined1 *)(DAT_01007a38 + 0x11) = 0xff;
    }
    return 0;
  }
  pcVar4[0xd] = '\x02';
  pcVar4[0xc] = (char)uVar5;
  return 0;
}



void FUN_0100794a(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  pcVar5 = DAT_01007a38;
  bVar6 = DAT_01007a38[0x11];
  iVar2 = thunk_EXT_FUN_8008d0d4(9);
  bVar1 = *(byte *)(((uint)(iVar2 << 0x16) >> 0x18) + DAT_01007a3c);
  pcVar5[1] = bVar1;
  if (*pcVar5 == '\0') {
    *(uint *)(pcVar5 + 4) = (uint)bVar1 * 0x1e;
    *pcVar5 = '\x7f';
  }
  else {
    *(uint *)(pcVar5 + 4) = (uint)bVar1 + *(int *)(pcVar5 + 4);
    *(int *)(pcVar5 + 8) = *(int *)(pcVar5 + 8) + 1;
  }
  if (*(int *)(pcVar5 + 8) != 0x1e) goto LAB_010079f6;
  pcVar5[0x10] = (char)(*(uint *)(pcVar5 + 4) / 0x1e);
  iVar2 = *(int *)(pcVar5 + 0xc);
  *(int *)(pcVar5 + 0xc) = iVar2 + 1;
  uVar4 = (uint)(byte)pcVar5[0x1d];
  uVar3 = *(uint *)(pcVar5 + 4) / 0x1e & 0xff;
  if (uVar3 < *(byte *)(DAT_01007a40 + uVar4 * 2)) {
    if (*(byte *)(DAT_01007a40 + uVar4 * 2 + 1) <= uVar3) {
      bVar6 = 1;
      goto LAB_010079c2;
    }
    if (pcVar5[0x11] != '\x03') {
      bVar6 = 2;
      goto LAB_010079c2;
    }
    bVar6 = 3;
  }
  else {
    bVar6 = 0;
LAB_010079c2:
    bVar1 = pcVar5[0x11];
    if ((bVar6 < bVar1) && (bVar1 != 0xff)) {
      bVar6 = bVar1;
    }
    if ((((bVar6 == 2) && (bVar1 == 2)) && (iVar2 + 1 == 0x14)) &&
       ((bVar6 = 3, *(char *)(DAT_01007a34 + 0xf) == '\x01' && ((uVar4 == 1 || (uVar4 == 2)))))) {
      thunk_EXT_FUN_8006ca80();
    }
  }
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
LAB_010079f6:
  if (bVar6 != pcVar5[0x11]) {
    pcVar5[0x11] = bVar6;
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    iVar2 = 2;
    do {
      if (*(code **)(pcVar5 + 0x14) != (code *)0x0) {
        (**(code **)(pcVar5 + 0x14))(bVar6);
      }
      pcVar5 = pcVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



int FUN_01007a16(void)

{
  char cVar1;
  int iVar2;
  int unaff_r7;
  
  iVar2 = DAT_01007a38;
  cVar1 = *(char *)(DAT_01007a38 + 0x1c) + -1;
  *(char *)(DAT_01007a38 + 0x1c) = cVar1;
  if (cVar1 != '\0') {
    return iVar2;
  }
  *(undefined1 *)(iVar2 + 0x1c) = 0x28;
  FUN_010078bc();
  FUN_0100794a();
  return unaff_r7;
}



void thunk_EXT_FUN_8005c9f2(void)

{
                    // WARNING: Could not recover jumptable at 0x01007a44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007a48)();
  return;
}



void thunk_EXT_FUN_800790a8(void)

{
                    // WARNING: Could not recover jumptable at 0x01007a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007a50)();
  return;
}



void thunk_EXT_FUN_800790b0(void)

{
                    // WARNING: Could not recover jumptable at 0x01007a54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007a58)();
  return;
}



void thunk_EXT_FUN_80047184(void)

{
                    // WARNING: Could not recover jumptable at 0x01007a5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007a60)();
  return;
}



void thunk_EXT_FUN_8005b388(void)

{
                    // WARNING: Could not recover jumptable at 0x01007a64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007a68)();
  return;
}



void thunk_EXT_FUN_80054f76(void)

{
                    // WARNING: Could not recover jumptable at 0x01007ac4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007ac8)();
  return;
}



void thunk_EXT_FUN_8005c6ba(void)

{
                    // WARNING: Could not recover jumptable at 0x01007ad4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007ad8)();
  return;
}



void thunk_EXT_FUN_8005b334(void)

{
                    // WARNING: Could not recover jumptable at 0x01007b04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007b08)();
  return;
}



bool FUN_01007b14(void)

{
  int iVar1;
  
  iVar1 = FUN_01008f14();
  return iVar1 == 0;
}



void FUN_01007b24(undefined4 param_1)

{
  FUN_0100c2e4(0x90,param_1,100,0x2f);
  FUN_0100c2e4(0x80,param_1,0,0x2f);
  return;
}



void FUN_01007b44(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_01008014;
  if ((-1 < (int)((uint)*(byte *)(DAT_01008014 + 0xd) << 0x1e)) ||
     (iVar1 = thunk_EXT_FUN_8005c9f2(), iVar1 << 0x1a < 0)) {
    uVar2 = thunk_EXT_FUN_800790a8();
    iVar1 = thunk_EXT_FUN_800790b0(*(undefined2 *)(iVar3 + 0x1e),uVar2);
    if (iVar1 != 0) {
      return;
    }
  }
  if ((((int)((uint)*(byte *)(iVar3 + 9) << 0x18) < 0) && (*(char *)(iVar3 + 6) == '\0')) ||
     (*(char *)(iVar3 + 2) != '\0')) {
    uVar2 = 0x15;
  }
  else {
    iVar3 = thunk_EXT_FUN_80047184();
    if (iVar3 == 0) {
      return;
    }
    uVar2 = 0x16;
  }
  FUN_01007b24(uVar2);
  return;
}



void FUN_01007b88(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  
  iVar2 = DAT_01008014;
  if (((int)((uint)*(byte *)(DAT_01008014 + 9) << 0x18) < 0) &&
     (*(char *)(DAT_01008014 + 0xb) != *(char *)(DAT_01008014 + 2))) {
    FUN_01007b44();
    iVar4 = FUN_01007b14();
    if (iVar4 != 0) {
      bVar1 = *(byte *)(iVar2 + 10);
      if ((int)((uint)bVar1 << 0x18) < 0) {
        if (*(char *)(iVar2 + 2) != '\0') {
          return;
        }
        *(undefined1 *)(iVar2 + 10) = 1;
        cVar5 = '\x01';
        bVar3 = 0;
      }
      else {
        bVar3 = bVar1 & 1;
        *(byte *)(iVar2 + 10) = bVar1 ^ 1;
        if (*(char *)(iVar2 + 6) == '\0') {
          cVar5 = '\x01';
        }
        else {
          cVar5 = *(char *)(iVar2 + 2) + '\x01';
        }
      }
      thunk_EXT_FUN_8005b388(bVar3,cVar5);
    }
  }
  return;
}



void FUN_01007bd8(void)

{
  int iVar1;
  
  iVar1 = DAT_01008014;
  if ((*(char *)(DAT_01008014 + 0x11) != '\0') &&
     (*(char *)(DAT_01008014 + 0xb) != *(char *)(DAT_01008014 + 2))) {
    if (-1 < (int)((uint)*(byte *)(DAT_01008014 + 9) << 0x18)) {
      FUN_01007b44();
    }
    *(char *)(iVar1 + 0x11) = *(char *)(iVar1 + 0x11) + -1;
  }
  return;
}



undefined4 FUN_01007fa2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_01008014;
  *(short *)(DAT_01008014 + 0x24) = (short)param_1;
  if ((-1 < (int)(param_1 << 0x10)) && (param_1 = param_1 + 1 & 0xffff, 999 < param_1)) {
    param_1 = param_1 % 1000;
  }
  if (((-1 < (int)((uint)*(byte *)(iVar1 + 9) << 0x18)) || (iVar2 = FUN_01007b14(), iVar2 == 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0xe) << 0x1c))) {
    thunk_EXT_FUN_8005b334((int)(short)param_1);
  }
  return param_4;
}



void FUN_01007fdc(undefined4 param_1)

{
  *(char *)(DAT_01008014 + 4) = (char)param_1;
                    // WARNING: Could not recover jumptable at 0x01007b0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01007b10)(param_1,0x7f);
  return;
}



undefined1 FUN_0100800c(void)

{
  return *DAT_01008024;
}



void thunk_EXT_FUN_800559fa(void)

{
                    // WARNING: Could not recover jumptable at 0x01008238. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100823c)();
  return;
}



void thunk_EXT_FUN_8004e886(void)

{
                    // WARNING: Could not recover jumptable at 0x01008240. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008244)();
  return;
}



void thunk_EXT_FUN_8004e8aa(void)

{
                    // WARNING: Could not recover jumptable at 0x01008248. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100824c)();
  return;
}



void thunk_EXT_FUN_80047720(void)

{
                    // WARNING: Could not recover jumptable at 0x01008250. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008254)();
  return;
}



void thunk_EXT_FUN_800547d2(void)

{
                    // WARNING: Could not recover jumptable at 0x01008258. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100825c)();
  return;
}



void thunk_EXT_FUN_800551aa(void)

{
                    // WARNING: Could not recover jumptable at 0x01008260. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008264)();
  return;
}



void thunk_EXT_FUN_800492bc(void)

{
                    // WARNING: Could not recover jumptable at 0x01008270. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008274)();
  return;
}



void thunk_EXT_FUN_8005519a(void)

{
                    // WARNING: Could not recover jumptable at 0x01008288. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100828c)();
  return;
}



void thunk_EXT_FUN_8005509c(void)

{
                    // WARNING: Could not recover jumptable at 0x010082a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082a4)();
  return;
}



void thunk_EXT_FUN_80079094(void)

{
                    // WARNING: Could not recover jumptable at 0x010082a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082ac)();
  return;
}



void thunk_EXT_FUN_8004e85e(void)

{
                    // WARNING: Could not recover jumptable at 0x010082b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082b4)();
  return;
}



void thunk_EXT_FUN_8004e870(void)

{
                    // WARNING: Could not recover jumptable at 0x010082b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082bc)();
  return;
}



void thunk_EXT_FUN_80046820(void)

{
                    // WARNING: Could not recover jumptable at 0x010082c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082c4)();
  return;
}



void thunk_EXT_FUN_8004e89e(void)

{
                    // WARNING: Could not recover jumptable at 0x010082c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082cc)();
  return;
}



void thunk_EXT_FUN_800476fa(void)

{
                    // WARNING: Could not recover jumptable at 0x010082d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082d4)();
  return;
}



void thunk_EXT_FUN_800513e6(void)

{
                    // WARNING: Could not recover jumptable at 0x010082d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082dc)();
  return;
}



void thunk_EXT_FUN_8004e7f6(void)

{
                    // WARNING: Could not recover jumptable at 0x010082e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082e4)();
  return;
}



void thunk_EXT_FUN_80049440(void)

{
                    // WARNING: Could not recover jumptable at 0x010082f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082f4)();
  return;
}



void thunk_EXT_FUN_8004e8c6(void)

{
                    // WARNING: Could not recover jumptable at 0x010082f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082fc)();
  return;
}



void thunk_EXT_FUN_80045cf4(void)

{
                    // WARNING: Could not recover jumptable at 0x01008300. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008304)();
  return;
}



void thunk_EXT_FUN_800466a4(void)

{
                    // WARNING: Could not recover jumptable at 0x01008308. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100830c)();
  return;
}



void thunk_EXT_FUN_800492c2(void)

{
                    // WARNING: Could not recover jumptable at 0x01008310. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008314)();
  return;
}



void thunk_EXT_FUN_800440f8(void)

{
                    // WARNING: Could not recover jumptable at 0x01008318. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100831c)();
  return;
}



void thunk_EXT_FUN_80049f08(void)

{
                    // WARNING: Could not recover jumptable at 0x01008320. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008324)();
  return;
}



void thunk_EXT_FUN_800498d4(void)

{
                    // WARNING: Could not recover jumptable at 0x01008328. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100832c)();
  return;
}



void thunk_EXT_FUN_800510b4(void)

{
                    // WARNING: Could not recover jumptable at 0x01008330. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008334)();
  return;
}



void thunk_EXT_FUN_8005112c(void)

{
                    // WARNING: Could not recover jumptable at 0x01008338. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100833c)();
  return;
}



void thunk_EXT_FUN_800511a2(void)

{
                    // WARNING: Could not recover jumptable at 0x01008340. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008344)();
  return;
}



void thunk_EXT_FUN_8004a0a4(void)

{
                    // WARNING: Could not recover jumptable at 0x01008348. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100834c)();
  return;
}



void thunk_EXT_FUN_8004d51e(void)

{
                    // WARNING: Could not recover jumptable at 0x01008350. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008354)();
  return;
}



void thunk_EXT_FUN_800445d2(void)

{
                    // WARNING: Could not recover jumptable at 0x01008358. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100835c)();
  return;
}



void thunk_EXT_FUN_80045ba6(void)

{
                    // WARNING: Could not recover jumptable at 0x01008360. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008364)();
  return;
}



void thunk_EXT_FUN_8004a62c(void)

{
                    // WARNING: Could not recover jumptable at 0x01008368. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100836c)();
  return;
}



void thunk_EXT_FUN_80043600(void)

{
                    // WARNING: Could not recover jumptable at 0x01008370. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008374)();
  return;
}



void thunk_EXT_FUN_80054408(void)

{
                    // WARNING: Could not recover jumptable at 0x01008378. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100837c)();
  return;
}



void thunk_EXT_FUN_80060f16(void)

{
                    // WARNING: Could not recover jumptable at 0x01008380. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008384)();
  return;
}



void thunk_EXT_FUN_80049594(void)

{
                    // WARNING: Could not recover jumptable at 0x01008388. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100838c)();
  return;
}



void thunk_EXT_FUN_8004a3c8(void)

{
                    // WARNING: Could not recover jumptable at 0x01008390. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01008394)();
  return;
}



void thunk_EXT_FUN_8004999c(void)

{
                    // WARNING: Could not recover jumptable at 0x01008398. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100839c)();
  return;
}



void thunk_EXT_FUN_80049d9c(void)

{
                    // WARNING: Could not recover jumptable at 0x010083a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010083a4)();
  return;
}



void FUN_010083a8(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = thunk_EXT_FUN_8005c6ba();
  if (iVar1 != 0) {
    param_1 = 0;
  }
  *(undefined1 *)(DAT_01008e4c + 4) = param_1;
  return;
}



longlong FUN_010083bc(void)

{
  uint unaff_r7;
  
  if (*(char *)(DAT_01008e4c + 4) == '\x7f') {
    if (*DAT_01008e50 == '\x03') {
LAB_010083d2:
      FUN_010083a8(0);
      FUN_0100b484(0);
      return CONCAT44(unaff_r7,1);
    }
    if (*DAT_01008e50 == '\a') {
      unaff_r7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(DAT_01008e54 + 2),
                                            *(undefined1 *)(DAT_01008e54 + 3)),
                                   *(undefined1 *)(DAT_01008e54 + 4)),
                          *(undefined1 *)(DAT_01008e54 + 5));
      if ((unaff_r7 == DAT_01008e58) ||
         (((unaff_r7 == DAT_01008e5c && ((int)((uint)*(byte *)(DAT_01008e54 + 6) << 0x1b) < 0)) &&
          ((int)((uint)*DAT_01008e60 << 0x1b) < 0)))) goto LAB_010083d2;
    }
    FUN_0100b5ee();
  }
  FUN_0100a9a2();
  return (ulonglong)unaff_r7 << 0x20;
}



int * FUN_01008430(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *in_r3;
  
  piVar6 = DAT_01008e6c;
  piVar5 = DAT_01008e68;
  piVar7 = DAT_01008e64;
  if (*DAT_01008e64 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    piVar9 = DAT_01008e68;
    do {
      if (*DAT_01008e64 == *piVar9) break;
      piVar9 = piVar9 + 0x176;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 0x28);
    if (0x27 < uVar8) {
      iVar3 = thunk_EXT_FUN_800559fa();
      *piVar6 = iVar3;
      iVar3 = thunk_EXT_FUN_8004e886();
      iVar4 = thunk_EXT_FUN_8004e8aa();
      *piVar6 = (iVar3 - iVar4) + *piVar6;
      puVar2 = DAT_01008e70;
      uVar1 = *DAT_01008e70;
      *DAT_01008e70 = uVar1 + 1;
      if (0x27 < (ushort)(uVar1 + 1)) {
        *puVar2 = 0;
      }
      piVar5 = piVar5 + (uint)*puVar2 * 0x176;
      *DAT_01008e74 = (int)piVar5;
      *piVar5 = *piVar7;
      piVar6 = piVar7 + 2;
      piVar9 = piVar5 + 2;
      piVar5[1] = piVar7[1];
      iVar3 = 0x3e;
      do {
        *piVar9 = *piVar6;
        piVar9[1] = piVar6[1];
        piVar9[2] = piVar6[2];
        piVar9[3] = piVar6[3];
        piVar7 = piVar6 + 5;
        piVar5 = piVar9 + 5;
        piVar9[4] = piVar6[4];
        piVar6 = piVar6 + 6;
        piVar9 = piVar9 + 6;
        *piVar5 = *piVar7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return piVar6;
    }
  }
  *DAT_01008e74 = (int)(DAT_01008e68 + uVar8 * 0x176);
  return in_r3;
}



undefined4 FUN_010084ea(void)

{
  undefined4 unaff_r7;
  
  if ((int)((uint)*(byte *)(DAT_01008e4c + 1) << 0x18) < 0) {
    FUN_01008abc();
  }
  return unaff_r7;
}



undefined8 FUN_010086bc(void)

{
  undefined2 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined6 uStack_16;
  
  puVar1 = DAT_01008e90;
  uVar7 = FUN_0100aa6e(*DAT_01008e90);
  if (2 < uVar7) goto LAB_010087a8;
  iVar8 = FUN_0100aa6e(*puVar1);
  if (iVar8 != 0) {
    FUN_0100b766(*puVar1,DAT_01008e94,0x968);
    iVar8 = thunk_EXT_FUN_800547d2();
    if (iVar8 != 1) goto LAB_010087a8;
  }
  uVar6 = thunk_EXT_FUN_8005509c();
  pcVar3 = DAT_01008ea0;
  local_18 = (byte)uVar6;
  uStack_17 = (char)((ushort)uVar6 >> 8);
  *DAT_01008ea0 = uStack_17;
  pbVar2 = DAT_01008e9c;
  *DAT_01008e9c = local_18;
  iVar8 = FUN_0100aa6e(*puVar1);
  if (iVar8 != 0) goto LAB_010087a8;
  cVar4 = thunk_EXT_FUN_8005519a();
  *pcVar3 = cVar4 + '\x01';
  if (*DAT_01008ea4 != -1) {
    iVar8 = thunk_EXT_FUN_80079094();
    if (iVar8 == 0) {
      iVar8 = thunk_EXT_FUN_8004e85e();
      iVar9 = thunk_EXT_FUN_8004e870();
      iVar10 = thunk_EXT_FUN_8004e886();
      uVar7 = iVar10 + (iVar8 - iVar9);
      uVar11 = (0x180 >> (uint)*(byte *)(DAT_01008eb0 + 7)) * (uint)*(byte *)(DAT_01008eb0 + 6);
      if (uVar7 == uVar11 * (uVar7 / uVar11)) goto LAB_01008762;
      cVar4 = *pcVar3 + -1;
    }
    else {
      cVar4 = '\0';
    }
    *pcVar3 = cVar4;
  }
LAB_01008762:
  uVar7 = thunk_EXT_FUN_800551aa();
  if (*DAT_01008e98 != uVar7) {
    *pcVar3 = '\0';
  }
  bVar5 = *pbVar2;
  if ((bVar5 == 2) || (bVar5 == 1)) {
    bVar5 = 0;
LAB_01008780:
    *pbVar2 = bVar5;
    return CONCAT62(uStack_16,uVar6);
  }
  if ((bVar5 == 6) || (bVar5 == 7)) {
    bVar5 = 5;
    goto LAB_01008780;
  }
  if (bVar5 < 0xe) goto LAB_010087a8;
  if (bVar5 == 0xf) {
    bVar5 = 5;
LAB_010087a2:
    *pbVar2 = bVar5;
  }
  else if (bVar5 == 0x10) {
    bVar5 = 0;
    goto LAB_010087a2;
  }
  *pcVar3 = '\0';
LAB_010087a8:
  return CONCAT62(uStack_16,CONCAT11(uStack_17,local_18));
}



undefined4 FUN_010087aa(void)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < (int)((uint)*DAT_01008eb4 << 0x1a)) {
    return 0;
  }
  if (*DAT_01008eb8 == *DAT_01008ebc) {
    uVar1 = thunk_EXT_FUN_80046820();
    uVar2 = thunk_EXT_FUN_8004e89e();
    if (uVar2 <= uVar1) {
      return 0;
    }
  }
  return 1;
}



undefined8 FUN_01008824(void)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_r3;
  uint uVar8;
  uint uVar9;
  
  puVar3 = DAT_01008e88;
  if (*DAT_01008e88 == 0) {
    if ((*(char *)(DAT_01008e4c + 4) == '\0') && (iVar5 = FUN_010093e4(), iVar5 != 0)) {
      thunk_EXT_FUN_800513e6(0x7f);
      uVar6 = 0;
    }
    else {
      FUN_01008a6c();
      uVar6 = FUN_01008a82();
    }
    goto LAB_010088e0;
  }
  uVar8 = 0xffffffff;
  uVar9 = 0xffffffff;
  iVar5 = thunk_EXT_FUN_800476fa();
  piVar4 = DAT_01008ec0;
  piVar2 = DAT_01008e84;
  puVar1 = DAT_01008e80;
  uVar6 = *DAT_01008e84 + *DAT_01008ec0 + iVar5;
  if (*DAT_01008e80 < uVar6) {
    uVar9 = uVar6 - *DAT_01008e80;
  }
  iVar5 = thunk_EXT_FUN_80047720();
  uVar7 = *puVar1;
  if (uVar7 < (uint)(*piVar2 + iVar5)) {
    uVar8 = (*piVar2 + iVar5) - uVar7;
  }
  if ((uVar9 == 0xffffffff) || (uVar8 <= uVar9)) {
    uVar6 = *puVar3;
    if (uVar8 < uVar6) {
      *puVar3 = uVar6 - uVar8;
      *puVar1 = uVar8 + uVar7;
      iVar5 = thunk_EXT_FUN_80047720();
      *piVar2 = iVar5 + *piVar2;
      iVar5 = 0;
      uVar6 = uVar8;
      goto LAB_0100889a;
    }
  }
  else {
    uVar6 = *puVar3;
    if (uVar9 < uVar6) {
      *puVar3 = uVar6 - uVar9;
      *puVar1 = uVar9 + uVar7;
      iVar5 = thunk_EXT_FUN_800476fa();
      iVar5 = iVar5 + *piVar4;
      uVar6 = uVar9;
LAB_0100889a:
      *piVar4 = iVar5;
      goto LAB_010088e0;
    }
  }
  *puVar3 = 0;
LAB_010088e0:
  return CONCAT44(in_r3,uVar6);
}



undefined4 FUN_010088e4(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = 0x7f;
  if (param_1 == 0) {
    if (*(char *)(DAT_01008e4c + 4) == '\x7f') {
      FUN_0100b5ee();
    }
  }
  else if (*(char *)(DAT_01008e4c + 4) == '\x7f') {
    FUN_010083a8(0);
    FUN_0100b484(0);
    FUN_01008430();
  }
  else {
    if (*DAT_01008e8c != *DAT_01008e64) {
      *DAT_01008e8c = *DAT_01008e64;
    }
    puVar3 = DAT_01008e88;
    puVar1 = DAT_01008e80;
    if (*DAT_01008e88 == 0) {
      *DAT_01008e80 = *DAT_01008e80 + param_1;
      iVar5 = thunk_EXT_FUN_80047720();
      piVar2 = DAT_01008e84;
      uVar7 = *DAT_01008e84 + iVar5;
      iVar5 = thunk_EXT_FUN_800476fa();
      piVar4 = DAT_01008ec0;
      uVar8 = *DAT_01008ec0 + *piVar2 + iVar5;
      if ((uVar8 < uVar7) && (uVar8 != 0xffffffff)) {
        if (uVar8 <= *puVar1) {
          iVar5 = thunk_EXT_FUN_800476fa();
          *piVar4 = iVar5 + *piVar4;
          *puVar3 = *puVar1 - uVar8;
          *puVar1 = uVar8;
        }
      }
      else if (uVar7 <= *puVar1) {
        *DAT_01008ec0 = 0;
        iVar5 = thunk_EXT_FUN_80047720();
        *piVar2 = iVar5 + *piVar2;
        *puVar3 = *puVar1 - uVar7;
        *puVar1 = uVar7;
      }
      if (*puVar3 < param_1) {
        param_1 = param_1 - *puVar3;
      }
    }
    uVar6 = thunk_EXT_FUN_8004e7f6(param_1 & 0xffff);
  }
  return uVar6;
}



void FUN_01008a3e(byte param_1)

{
  *DAT_01008e4c = param_1 | *DAT_01008e4c;
  FUN_01006aec(0x11);
  return;
}



void FUN_01008a6c(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  
  pcVar3 = DAT_0100b6b0;
  if ((*DAT_01008ecc != '\x03') && (*DAT_01008ecc != '\x04')) {
    if (*DAT_0100b6b0 == '\0') {
      iVar2 = FUN_0100aa64();
      if ((iVar2 != 0) && (-1 < (int)((uint)*DAT_0100b6b8 << 0x1d))) {
        FUN_0100909c(0);
        FUN_0100909c(1);
        *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(pcVar3 + 4);
      }
      FUN_0100b158();
      return;
    }
    if (*DAT_0100b6b0 == '\x01') {
      iVar2 = FUN_0100aa64();
      if ((iVar2 != 0) && (-1 < (int)((uint)*DAT_0100b6b8 << 0x1d))) {
        iVar2 = FUN_0100aa6e(*DAT_0100b694);
        pbVar1 = DAT_0100b6b4;
        if ((iVar2 == 6) && (bVar4 = 0, *DAT_0100b6b4 != 0)) {
          do {
            FUN_0100909c(bVar4);
            bVar4 = bVar4 + 1;
          } while (bVar4 < *pbVar1);
        }
        *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(pcVar3 + 4);
      }
      while (FUN_0100b24e(), *DAT_0100b6a0 == '\b') {
        bVar4 = 0;
        pcVar3 = DAT_0100b6bc;
        while( true ) {
          if (*DAT_0100b6b4 <= bVar4) {
            return;
          }
          if (*pcVar3 != '\0') break;
          bVar4 = bVar4 + 1;
          pcVar3 = pcVar3 + 0x10;
        }
      }
    }
    else {
      *DAT_0100b6a0 = '\x0e';
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x010082e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010082ec)();
  return;
}



undefined8 FUN_01008a82(void)

{
  char cVar1;
  uint uVar2;
  undefined4 unaff_r7;
  
  cVar1 = *DAT_01008e50;
  if (cVar1 != '\b') {
    if (cVar1 == '\t') {
      uVar2 = *(uint *)(DAT_01008e7c + (uint)*DAT_01008e78 * 4);
      return CONCAT44(uVar2,*(uint *)(DAT_01008e54 + 1) & uVar2);
    }
    if ((cVar1 != '\x0e') && (cVar1 != '\x0f')) {
      if (cVar1 == '\x11') goto LAB_01008aaa;
      if (cVar1 != '\x12') {
        return CONCAT44(unaff_r7,0xfffffffe);
      }
    }
    thunk_EXT_FUN_80049440();
  }
LAB_01008aaa:
  return CONCAT44(unaff_r7,0xffffffff);
}



undefined4 FUN_01008abc(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined4 in_r3;
  
  *DAT_01008ed0 = 0;
  pcVar7 = DAT_01008ed4;
  pbVar6 = DAT_01008ebc;
  pbVar5 = DAT_01008eb8;
  pbVar4 = DAT_01008eb4;
  iVar11 = DAT_01008eb0;
  puVar3 = DAT_01008e84;
  puVar2 = DAT_01008e80;
  piVar1 = DAT_01008e64;
LAB_01008ae8:
  while ((int)((uint)*pbVar4 << 0x1a) < 0) {
    if (*pbVar6 <= *pbVar5) {
      thunk_EXT_FUN_8004e8c6(0);
      iVar10 = thunk_EXT_FUN_80045cf4();
      if ((((iVar10 == 0) && (*DAT_01008ed8 != '\0')) &&
          (iVar10 = thunk_EXT_FUN_800466a4(), iVar10 == 1)) &&
         (((int)((uint)*DAT_01008edc << 0x18) < 0 && (*DAT_01008ee0 == '\x02')))) {
        thunk_EXT_FUN_800492c2(0xfc,0x17f);
      }
      if ((int)((uint)*pbVar4 << 0x1b) < 0) {
        thunk_EXT_FUN_800440f8();
      }
      if ((int)((uint)*pbVar4 << 0x19) < 0) {
        bVar8 = 0x8f;
      }
      else {
        bVar8 = 0xdf;
      }
      *pbVar4 = *pbVar4 & bVar8;
      thunk_EXT_FUN_80049f08();
      thunk_EXT_FUN_800498d4();
      FUN_010083a8(0);
      iVar10 = thunk_EXT_FUN_80045cf4();
      if ((iVar10 == 0) && (iVar10 = FUN_01008f14(), iVar10 != 0)) {
        FUN_01007fdc(1);
      }
      FUN_01006a2c(1);
      thunk_EXT_FUN_800510b4(*(undefined1 *)(iVar11 + 1));
      thunk_EXT_FUN_8005112c(*(undefined1 *)(iVar11 + 3));
      thunk_EXT_FUN_800511a2(*(undefined1 *)(iVar11 + 5));
      iVar10 = FUN_010093e4();
      if (iVar10 != 0) {
        thunk_EXT_FUN_800513e6(0x7f);
      }
    }
    if (-1 < (int)((uint)*pbVar4 << 0x1a)) break;
    iVar10 = thunk_EXT_FUN_8004a0a4();
    if (iVar10 == 0) {
      return in_r3;
    }
    if (*pbVar6 != 0) {
      *pbVar5 = *pbVar5 + 1;
      bVar8 = thunk_EXT_FUN_8004d51e();
      sVar9 = (short)*(undefined4 *)(DAT_01008ee4 + (uint)bVar8 * 4 + -4);
LAB_01008bca:
      iVar10 = thunk_EXT_FUN_8004e7f6(sVar9);
LAB_01008db2:
      if (iVar10 == 0) {
        return in_r3;
      }
    }
  }
  if (((*puVar2 != 0) && (FUN_01009664(), *puVar2 == *puVar3)) && (*DAT_01008e8c == *piVar1)) {
    *piVar1 = *piVar1 + 1;
    FUN_010096ce();
    if (((int)((uint)*pbVar4 << 0x1b) < 0) && (*DAT_01008ee8 < *piVar1)) {
      *pbVar4 = *pbVar4 | 0x28;
      *pbVar5 = 0;
      *pbVar6 = 4;
      FUN_01008a3e(4);
      iVar11 = FUN_0100981a();
      if (iVar11 == 0x7f) {
        thunk_EXT_FUN_800445d2();
      }
      goto LAB_01008c28;
    }
    FUN_010086bc();
    FUN_010083a8(0x7f);
    FUN_0100b5ee();
  }
  if (*DAT_01008ed0 < 2) {
    if (*pcVar7 != '\x7f') {
      if (*DAT_01008eec == '\x7f') goto LAB_01008c28;
      if ((*(char *)(DAT_01008e4c + 4) == '\x7f') && (*DAT_01008e88 != 0)) {
        FUN_010083a8(0);
        FUN_01008430();
      }
      iVar10 = FUN_01008824();
      if (iVar10 == -1) goto LAB_01008c80;
      if (iVar10 != -2) {
        iVar10 = FUN_010088e4();
        goto LAB_01008db2;
      }
      iVar10 = FUN_010083bc();
      if (iVar10 == 1) {
        FUN_01008430();
      }
      goto LAB_01008ae8;
    }
LAB_01008c80:
    if (*(char *)(DAT_01008e4c + 4) == '\x7f') {
      FUN_010083a8(0);
      FUN_0100b484(0);
      FUN_01008430();
    }
    *DAT_01008ef0 = *piVar1;
    iVar10 = FUN_0100aa6e(*DAT_01008e90);
    if ((iVar10 == 0) &&
       (iVar10 = thunk_FUN_0100b6f0(*DAT_01008e90,DAT_01008e94,0x179c),
       *(int *)(DAT_01008ef4 + iVar10 * 4) != *piVar1)) {
      iVar10 = thunk_FUN_0100b6f0(*DAT_01008e90,DAT_01008e94,0x179d);
      *(int *)(DAT_01008ef4 + iVar10 * 4) = *piVar1;
    }
    if ((*pbVar4 & 0x11) == 1) {
      thunk_EXT_FUN_80045ba6(*piVar1,2);
      thunk_EXT_FUN_800492bc(0x8b,0);
    }
    if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
      thunk_EXT_FUN_8004a62c();
      iVar11 = thunk_EXT_FUN_8005c6ba();
      if (iVar11 == 0) {
        if ((((*DAT_01008ed8 != '\0') && (*DAT_01008ed8 != '\x04')) &&
            (iVar11 = thunk_EXT_FUN_80043600(), iVar11 == 1)) &&
           (((*DAT_01008ef8 == '\0' && (iVar11 = thunk_EXT_FUN_80054408(), iVar11 == 0x7f)) &&
            ((int)((uint)*DAT_01008efc << 0x18) < 0)))) {
          if (-1 < (int)((uint)*pbVar4 << 0x1b)) {
            *DAT_01008f00 = *DAT_01008f00 + 1;
          }
          if (*DAT_01008f04 == '\x7f') {
            *(int *)(DAT_01008f04 + 0xc) = *(int *)(DAT_01008f04 + 0xc) + 1;
          }
        }
        thunk_EXT_FUN_80060f16(0);
        thunk_EXT_FUN_800492bc(0x8b,0);
      }
      *pcVar7 = '\x7f';
      return in_r3;
    }
    *pbVar4 = *pbVar4 | 0x28;
    *pbVar5 = 0;
    *pbVar6 = 4;
    if ((*puVar2 != *puVar3) && (iVar10 = thunk_EXT_FUN_80047720(), *puVar2 < *puVar3 + iVar10)) {
      sVar9 = thunk_EXT_FUN_80047720();
      sVar9 = ((short)*puVar3 + sVar9) - (short)*puVar2;
      goto LAB_01008bca;
    }
  }
  FUN_01008a3e(4);
LAB_01008c28:
  thunk_FUN_01006c90();
  return in_r3;
}



void FUN_01008dbc(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = DAT_01008e4c;
  bVar1 = *DAT_01008e4c;
  uVar3 = (uint)bVar1;
  if (uVar3 != 0) {
    *DAT_01008e4c = 0;
    if ((int)(uVar3 << 0x1c) < 0) {
      if ((int)(uVar3 << 0x1f) < 0) {
        thunk_EXT_FUN_8004a62c();
        *DAT_01008f08 = *DAT_01008f08 | 0x20;
        *DAT_01008f0c = 0;
        thunk_EXT_FUN_80060f16(0);
        *pbVar2 = *pbVar2 | 8;
        FUN_01006aec(0x11);
        thunk_FUN_01006c90();
      }
      else {
        thunk_EXT_FUN_80049594();
      }
    }
    else if ((int)(uVar3 << 0x1f) < 0) {
      thunk_EXT_FUN_8004a62c();
    }
    else if ((int)(uVar3 << 0x1b) < 0) {
      thunk_EXT_FUN_8004a3c8();
    }
    else if ((bVar1 & 0x60) == 0) {
      if ((int)(uVar3 << 0x1e) < 0) {
        thunk_EXT_FUN_80049d9c();
      }
      else if ((int)(uVar3 << 0x1d) < 0) {
        FUN_010084ea();
      }
    }
    else {
      *DAT_01008f10 = bVar1 & 0x60 | *DAT_01008f10;
      thunk_EXT_FUN_8004999c();
    }
  }
  thunk_FUN_01006c90();
  return;
}



undefined4 FUN_01008f14(void)

{
  if ((*DAT_01008f30 & 0x60) == 0) {
    return 0;
  }
  if ((int)((uint)*DAT_01008f30 << 0x1b) < 0) {
    return 2;
  }
  return 1;
}



undefined4 FUN_01008f34(ushort param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_r7;
  
  piVar1 = DAT_01009038;
  if ((short)DAT_01009038[1] != -1) {
    iVar2 = FUN_01008fd8();
    if (iVar2 != 0) {
      thunk_EXT_FUN_80054f76(0x70000000);
    }
    return unaff_r7;
  }
  if (*(short *)((int)DAT_01009038 + 6) != 0) {
    param_1 = *(short *)((int)DAT_01009038 + 6) + param_1;
    *(undefined2 *)((int)DAT_01009038 + 6) = 0;
  }
  *piVar1 = (uint)param_1 + *piVar1;
  return unaff_r7;
}



undefined4 FUN_01008fd8(uint param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  
  uVar2 = 0;
  uVar3 = *(ushort *)(param_2 + 1);
  uVar4 = (uint)uVar3;
  sVar5 = *(short *)((int)param_2 + 6);
  sVar1 = (short)param_1;
  if (uVar4 == 0) {
    sVar5 = sVar1 + sVar5;
  }
  else {
    if (uVar4 != param_1) {
      if (param_1 <= uVar4) {
        uVar3 = uVar3 - sVar1;
        goto LAB_01008ffe;
      }
      sVar5 = sVar1 - uVar3;
      param_1 = uVar4;
    }
    uVar2 = 0x7f;
    uVar3 = 0;
  }
LAB_01008ffe:
  *(short *)((int)param_2 + 6) = sVar5;
  *(ushort *)(param_2 + 1) = uVar3;
  *param_2 = param_1 + *param_2;
  return uVar2;
}



void thunk_EXT_FUN_80045854(void)

{
                    // WARNING: Could not recover jumptable at 0x01009068. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100906c)();
  return;
}



void thunk_EXT_FUN_8005d458(void)

{
                    // WARNING: Could not recover jumptable at 0x01009070. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009074)();
  return;
}



void thunk_EXT_FUN_8005acd8(void)

{
                    // WARNING: Could not recover jumptable at 0x01009078. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100907c)();
  return;
}



void FUN_01009080(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)(DAT_01009320 + param_1 * 0x10);
  puVar1 = (undefined4 *)(DAT_01009324 + param_1 * 0x10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  thunk_EXT_FUN_80057bc0(param_1 * 0x20 + DAT_01009328,param_1 * 0x20 + DAT_0100932c,0x20);
  return;
}



void FUN_0100909c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)(DAT_01009324 + param_1 * 0x10);
  puVar1 = (undefined4 *)(DAT_01009320 + param_1 * 0x10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  thunk_EXT_FUN_80057bc0(param_1 * 0x20 + DAT_0100932c,param_1 * 0x20 + DAT_01009328,0x20);
  return;
}



undefined4 FUN_010090c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_01009330;
  iVar3 = FUN_0100aa6e(*DAT_01009330);
  if (iVar3 == 0) {
                    // WARNING: Could not recover jumptable at 0x01009048. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*DAT_0100904c)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  uVar4 = FUN_0100aa6e(*puVar1);
  if (2 < uVar4) {
                    // WARNING: Could not recover jumptable at 0x01009050. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*DAT_01009054)((int)*(short *)(DAT_01009334 + param_3 * 2),param_1,param_2,param_4);
    return uVar2;
  }
  if (param_2 == 0) {
    *(int *)(DAT_01009338 + param_3 * 4) = param_1;
    return param_4;
  }
  if (param_2 == 1) {
    *(int *)(DAT_01009338 + param_3 * 4) = param_1 + *(int *)(DAT_01009338 + param_3 * 4);
  }
  return param_4;
}



ulonglong FUN_0100911a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = DAT_0100933c;
  if (param_1 == 0xff) {
    return CONCAT44(param_4,0xffffffff);
  }
  iVar3 = FUN_0100aa6e(*DAT_0100933c);
  if (iVar3 == 0) {
                    // WARNING: Could not recover jumptable at 0x01009058. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar5 = (*DAT_0100905c)(param_1,param_4);
    return uVar5;
  }
  uVar4 = FUN_0100aa6e(*puVar2);
  if (uVar4 < 3) {
    return CONCAT44(param_4,*(undefined4 *)(DAT_01009338 + param_1 * 4));
  }
  iVar3 = (int)*(short *)(DAT_01009334 + param_1 * 2);
  if ((0 < iVar3) && (param_4 = 0x7fff, iVar3 != 0x7fff)) {
    iVar3 = DAT_0100997c + iVar3 * 0x28;
    sVar1 = *(short *)(iVar3 + 0xce8);
    if (sVar1 == 0) {
      return 0;
    }
    return (ulonglong)CONCAT24(sVar1,*(undefined4 *)(iVar3 + 0xcd8));
  }
  return (ulonglong)param_4 << 0x20;
}



uint FUN_0100915c(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  
  sVar4 = *DAT_0100933c;
  if (sVar4 == 0) {
    sVar4 = 1;
  }
  iVar2 = FUN_0100b80e(sVar4);
  if (iVar2 == 0) {
    uVar3 = FUN_0100b7e0(sVar4);
    bVar5 = uVar3 != 0;
    if (bVar5) {
      uVar3 = (uint)*DAT_01009340;
    }
    bVar1 = (byte)uVar3;
    if (!bVar5) {
      FUN_0100b766(sVar4,DAT_01009344,0xb7b);
                    // WARNING: Could not recover jumptable at 0x01009060. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (*DAT_01009064)();
      return uVar3;
    }
  }
  else {
    bVar1 = (byte)DAT_01009340[1];
  }
  return (uint)bVar1;
}



undefined8 FUN_010091a8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint extraout_r1;
  bool bVar8;
  undefined8 uVar9;
  
  puVar1 = DAT_01009330;
  iVar3 = FUN_0100aa6e(*DAT_01009330);
  if (iVar3 == 0) {
    bVar2 = thunk_EXT_FUN_80045854(param_1);
    return CONCAT44(param_4,(uint)bVar2);
  }
  uVar4 = FUN_0100aa6e(*puVar1);
  iVar3 = DAT_0100997c;
  if (uVar4 < 3) {
    iVar3 = *(int *)(DAT_01009338 + param_1 * 4);
    iVar5 = *(int *)(DAT_01009348 + param_1 * 4);
    *(int *)(DAT_01009338 + param_1 * 4) = iVar3 + 1;
    return CONCAT44(param_4,(uint)*(byte *)(iVar3 + iVar5));
  }
  iVar5 = (int)*(short *)(DAT_01009334 + param_1 * 2);
  if (0 < iVar5) {
    uVar4 = 0x7fff;
    if (iVar5 == 0x7fff) {
LAB_010098bc:
      return CONCAT44(uVar4,0xffffffff);
    }
    param_4 = iVar5 * 5;
    iVar5 = DAT_0100997c + iVar5 * 0x28;
    if (*(short *)(iVar5 + 0xce8) == 1) {
      uVar9 = FUN_0100aa44();
      uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
LAB_010098de:
        return CONCAT44(uVar7,0xfffffffb);
      }
      uVar4 = *(uint *)(iVar5 + 0xcf4);
      if (uVar4 <= *(uint *)(iVar5 + 0xcd8)) goto LAB_010098bc;
      param_4 = (uint)*(ushort *)(iVar5 + 0xcdc);
      uVar4 = param_4 + *(ushort *)(iVar5 + 0xce6) & 0xffff;
      while( true ) {
        if (*(short *)(iVar3 + uVar4 * 6 + 0xc) == 1) {
          bVar2 = *(byte *)((uint)*(ushort *)(iVar5 + 0xce4) + DAT_01009980 + uVar4 * 0x200);
          *(int *)(iVar5 + 0xcd8) = *(int *)(iVar5 + 0xcd8) + 1;
          uVar6 = *(ushort *)(iVar5 + 0xce4) + 1;
          *(ushort *)(iVar5 + 0xce4) = uVar6;
          uVar4 = (uint)uVar6;
          if (0x1ff < uVar4) {
            *(undefined2 *)(iVar5 + 0xce4) = 0;
            uVar6 = *(short *)(iVar5 + 0xce6) + 1;
            *(ushort *)(iVar5 + 0xce6) = uVar6;
            uVar4 = (uint)uVar6;
            bVar8 = uVar4 == *(ushort *)(iVar5 + 0xcde);
            if (bVar8) {
              uVar4 = (uint)*(ushort *)(iVar5 + 0xce0);
            }
            if (bVar8) {
              *(short *)(iVar5 + 0xce6) = (short)uVar4;
            }
          }
          return CONCAT44(uVar4,(uint)bVar2);
        }
        if (*(short *)(iVar5 + 0xce8) != 1) break;
        uVar9 = FUN_0100aa44();
        uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 0) goto LAB_010098de;
        FUN_01006a2c(2);
        param_4 = extraout_r1;
      }
    }
  }
  return CONCAT44(param_4,0xfffffffe);
}



undefined4 FUN_010091f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  bVar1 = *DAT_0100934c;
  if (param_1 == 1) {
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      return unaff_r7;
    }
    *DAT_0100934c = bVar1 | 1;
    uVar2 = 0;
  }
  else {
    if ((int)((uint)bVar1 << 0x1e) < 0) {
      return unaff_r7;
    }
    *DAT_0100934c = bVar1 | 2;
    uVar2 = 1;
  }
  thunk_EXT_FUN_8005d458(uVar2);
  return unaff_r7;
}



uint FUN_0100921a(uint param_1)

{
  if (param_1 < (byte)*DAT_01009350) {
    return 2;
  }
  return -(uint)(*DAT_01009350 >> 8 < param_1) >> 0x1f;
}



longlong FUN_01009232(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 unaff_r7;
  
  if (*DAT_01009354 == '\0') {
    return (ulonglong)param_2 << 0x20;
  }
  iVar1 = FUN_0100aa6e(*DAT_0100933c);
  return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
}



undefined4 FUN_010092ea(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_010087aa();
  if ((((iVar1 == 0) || (param_3 != 0x7f)) && ((*DAT_01009360 & 0x60) == 0)) &&
     ((iVar1 = FUN_0100921a(param_1), iVar1 == 0 || (param_1 == 0xff)))) {
    thunk_EXT_FUN_8005acd8(param_1,param_3,1);
  }
  return param_4;
}



void thunk_EXT_FUN_8004a930(void)

{
                    // WARNING: Could not recover jumptable at 0x01009364. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009368)();
  return;
}



void thunk_EXT_FUN_8004a942(void)

{
                    // WARNING: Could not recover jumptable at 0x0100936c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009370)();
  return;
}



void thunk_EXT_FUN_8004a978(void)

{
                    // WARNING: Could not recover jumptable at 0x01009374. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009378)();
  return;
}



void thunk_EXT_FUN_80042d42(void)

{
                    // WARNING: Could not recover jumptable at 0x0100937c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009380)();
  return;
}



void thunk_EXT_FUN_80042cfc(void)

{
                    // WARNING: Could not recover jumptable at 0x010093b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010093b8)();
  return;
}



void thunk_EXT_FUN_8004176e(void)

{
                    // WARNING: Could not recover jumptable at 0x010093bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010093c0)();
  return;
}



void thunk_EXT_FUN_800416d0(void)

{
                    // WARNING: Could not recover jumptable at 0x010093c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010093c8)();
  return;
}



void thunk_EXT_FUN_800416a4(void)

{
                    // WARNING: Could not recover jumptable at 0x010093cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_010093d0)();
  return;
}



undefined8 FUN_010093e4(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  undefined1 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  int *piVar8;
  ushort *puVar9;
  ushort uVar10;
  
  if ((((*DAT_01009820 == '\x02') && (*DAT_01009824 == '\0')) &&
      (iVar3 = thunk_EXT_FUN_8004a930(), iVar3 == 0)) &&
     ((iVar3 = thunk_EXT_FUN_8004a942(), iVar3 == 0 &&
      (iVar3 = thunk_EXT_FUN_8004a978(), pbVar1 = DAT_0100983c, iVar3 == 0)))) {
    iVar3 = 0x28;
    puVar5 = DAT_01009828;
    pbVar6 = DAT_0100982c;
    pcVar7 = DAT_01009830;
    piVar8 = DAT_01009838;
    puVar9 = DAT_01009834;
    do {
      uVar10 = *puVar9;
      if ((uVar10 != 0xffff) && (*piVar8 == *DAT_01009840)) {
        if ((int)((uint)*pbVar1 << 0x1f) < 0) {
          uVar10 = uVar10 & 0xff;
          if (uVar10 != *DAT_01009844) goto LAB_01009462;
        }
        else {
LAB_01009462:
          iVar4 = thunk_EXT_FUN_80042d42();
          if (((iVar4 == 1) || (-1 < (int)((uint)*pbVar1 << 0x1e))) ||
             ((uVar10 & 0xff) != (ushort)*DAT_01009848)) goto LAB_01009492;
        }
        iVar4 = FUN_0100921a(*puVar5);
        if (((iVar4 == 0) && (-1 < (int)((uint)*pbVar6 << 0x18))) && (*pcVar7 == '\0'))
        goto LAB_010094c6;
      }
LAB_01009492:
      piVar8 = piVar8 + 1;
      puVar9 = puVar9 + 1;
      pcVar7 = pcVar7 + 1;
      pbVar6 = pbVar6 + 1;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (((*DAT_0100984c == *DAT_01009840) && (iVar3 = thunk_EXT_FUN_80043600(), iVar3 != 0)) &&
       ((int)((uint)*DAT_01009850 << 0x18) < 0)) {
LAB_010094c6:
      uVar2 = 1;
      goto LAB_010094c8;
    }
  }
  uVar2 = 0;
LAB_010094c8:
  return CONCAT44(in_r3,uVar2);
}



void FUN_0100953e(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  
  if (param_1 == 0xff) {
    iVar11 = 8;
    puVar2 = DAT_0100982c;
    puVar4 = DAT_01009830;
    puVar6 = DAT_01009828;
    puVar7 = DAT_01009834;
    puVar9 = DAT_01009838;
    do {
      *puVar7 = 0xffff;
      *puVar9 = 0;
      *puVar2 = 0;
      *puVar4 = 0;
      *puVar6 = 0;
      puVar7[1] = 0xffff;
      puVar9[1] = 0;
      puVar2[1] = 0;
      puVar4[1] = 0;
      puVar6[1] = 0;
      puVar7[2] = 0xffff;
      puVar9[2] = 0;
      puVar2[2] = 0;
      puVar4[2] = 0;
      puVar6[2] = 0;
      puVar8 = puVar7 + 4;
      puVar7[3] = 0xffff;
      puVar10 = puVar9 + 4;
      puVar9[3] = 0;
      puVar1 = puVar2 + 4;
      puVar2[3] = 0;
      puVar3 = puVar4 + 4;
      puVar4[3] = 0;
      puVar5 = puVar6 + 4;
      puVar6[3] = 0;
      puVar7 = puVar7 + 5;
      *puVar8 = 0xffff;
      puVar9 = puVar9 + 5;
      *puVar10 = 0;
      puVar2 = puVar2 + 5;
      *puVar1 = 0;
      puVar4 = puVar4 + 5;
      *puVar3 = 0;
      puVar6 = puVar6 + 5;
      *puVar5 = 0;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *DAT_01009858 = 0;
  }
  else if (param_1 < 0x28) {
    DAT_01009834[param_1] = 0xffff;
    DAT_01009838[param_1] = 0;
    DAT_0100982c[param_1] = 0;
    DAT_01009830[param_1] = 0;
    DAT_01009828[param_1] = 0;
  }
  return;
}



undefined4 FUN_010095ea(void)

{
  char cVar1;
  short sVar2;
  byte *pbVar3;
  short *psVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  undefined4 in_r3;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  pbVar3 = DAT_01009860;
  cVar1 = *DAT_0100985c;
  if (cVar1 == '\x03') {
    if (*DAT_01009820 != '\0') {
                    // WARNING: Could not recover jumptable at 0x010093ac. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar7 = (*DAT_010093b0)(in_r3);
      return uVar7;
    }
    if (DAT_01009860[2] != 0) {
      uVar13 = *DAT_01009860 & 0xf;
      uVar7 = in_r3;
      uVar8 = FUN_0100915c();
      pcVar5 = DAT_0100a6a0;
      if (((uVar13 == *DAT_01009844) && ((int)((uint)*DAT_0100983c << 0x1f) < 0)) ||
         (((uVar13 == *DAT_01009848 && ((uVar8 != *DAT_01009864 && (uVar8 != DAT_01009864[8])))) &&
          ((int)((uint)*DAT_0100983c << 0x1e) < 0)))) {
        uVar8 = (uint)pbVar3[1];
        if (-1 < (int)((uint)*DAT_0100a69c << 0x1e)) {
          if ((*DAT_0100a6a0 != '\0') &&
             (iVar9 = thunk_EXT_FUN_800491a0(uVar13,uVar8,in_r3), iVar9 == 1)) {
            uVar8 = FUN_0100a130(uVar8,(int)*pcVar5);
          }
          psVar4 = DAT_0100a660;
          bVar15 = 0;
          psVar10 = DAT_0100a660;
          do {
            sVar2 = *psVar10;
            bVar17 = sVar2 == -1;
            psVar11 = psVar10 + 1;
            if (!bVar17) {
              bVar15 = bVar15 + 1;
              psVar11 = psVar10 + 2;
              sVar2 = psVar10[1];
            }
            bVar18 = sVar2 == -1;
            psVar12 = psVar11;
            if (!bVar17 && !bVar18) {
              bVar15 = bVar15 + 1;
              psVar12 = psVar11 + 1;
              sVar2 = *psVar11;
            }
            bVar14 = bVar15;
            if ((bVar17 || bVar18) || sVar2 == -1) {
LAB_01009fe0:
              uVar16 = (uint)bVar14;
              if (uVar16 == 0xff) {
                return uVar7;
              }
              uVar6 = FUN_01009b28(uVar8,uVar13);
              psVar4[uVar16] = (ushort)uVar13 | (ushort)(uVar8 << 8);
              *(undefined1 *)(uVar16 + DAT_0100a66c) = uVar6;
              if ((((*(char *)(uVar13 + DAT_0100a568) != '\x7f') &&
                   (*(char *)(uVar13 + DAT_0100a568) != '~')) &&
                  ((uVar13 != 0xe || (*DAT_0100a5c8 != '\x01')))) &&
                 (*(char *)(uVar13 + DAT_0100a56c) != -1)) {
                uVar8 = FUN_0100a130(uVar8,(int)*DAT_0100a5cc);
              }
              *(char *)(uVar16 + DAT_0100a674) = (char)uVar8;
              iVar9 = *DAT_0100a668;
              bVar15 = *DAT_0100a6a4;
              *DAT_0100a6a8 = (uint)bVar15 + iVar9;
              *(uint *)(DAT_0100a664 + uVar16 * 4) = (uint)bVar15 + iVar9;
              return uVar7;
            }
            bVar14 = bVar15 + 1;
            if (*psVar12 == -1) goto LAB_01009fe0;
            bVar14 = bVar15 + 2;
            psVar10 = psVar12 + 2;
            if (psVar12[1] == -1) goto LAB_01009fe0;
            bVar15 = bVar15 + 3;
          } while (bVar15 < 0x28);
        }
        return uVar7;
      }
    }
  }
  else if (((*DAT_01009820 != '\0') || (cVar1 == '\a')) || (cVar1 == '\r')) {
    thunk_EXT_FUN_80042cfc();
  }
  return in_r3;
}



uint FUN_01009664(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint in_r3;
  bool bVar5;
  
  iVar2 = DAT_01009878;
  pbVar1 = DAT_01009874;
  if (*DAT_01009868 != 0x7f) {
    return (uint)*DAT_01009868;
  }
  if (((*DAT_0100986c != '\x7f') || (-1 < (int)((uint)*DAT_01009870 << 0x1b))) &&
     (*DAT_01009874 != 0)) {
    if (*(uint *)(DAT_01009878 + 0x18) <= *DAT_01009840) {
      bVar3 = thunk_EXT_FUN_8004d51e();
      *(int *)(iVar2 + 0x18) =
           *(int *)(DAT_0100987c + (uint)bVar3 * 4 + -4) + *(int *)(iVar2 + 0x18);
      *(char *)(iVar2 + 9) = *(char *)(iVar2 + 9) + '\x01';
    }
    if (*pbVar1 <= *(byte *)(iVar2 + 9)) {
      thunk_EXT_FUN_8004176e();
      *(undefined1 *)(iVar2 + 9) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      cVar4 = *DAT_01009880;
      bVar5 = cVar4 == '\x7f';
      if (bVar5) {
        cVar4 = '\0';
      }
      if (bVar5) {
        *(char *)(iVar2 + 8) = cVar4;
      }
    }
  }
  return in_r3;
}



void FUN_010096ce(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  
  iVar2 = DAT_01009878;
  if (*DAT_01009868 != '\x7f') {
    return;
  }
  if (((*DAT_0100986c != '\x7f') || (-1 < (int)((uint)*DAT_01009870 << 0x1b))) &&
     (bVar1 = *DAT_01009884, bVar1 != 0)) {
    bVar4 = *(char *)(DAT_01009878 + 10) + 1;
    *(byte *)(DAT_01009878 + 10) = bVar4;
    if (bVar1 <= bVar4) {
      thunk_EXT_FUN_8004176e();
      *(undefined1 *)(iVar2 + 9) = 0;
      *(undefined1 *)(iVar2 + 10) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      cVar3 = *DAT_01009880;
      bVar5 = cVar3 == '\x7f';
      if (bVar5) {
        cVar3 = '\0';
      }
      if (bVar5) {
        *(char *)(iVar2 + 8) = cVar3;
      }
    }
  }
  return;
}



undefined4 FUN_01009718(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*DAT_01009868 == '\x7f') {
    iVar2 = thunk_EXT_FUN_800416d0(param_1);
    iVar4 = DAT_01009888;
    iVar3 = DAT_01009878;
    if (iVar2 != 0xff) {
      iVar5 = iVar2 * 0xc;
      iVar6 = iVar5 + DAT_01009888;
      if (*DAT_0100988c == '\x02') {
        if ((int)((uint)*(byte *)(iVar6 + 9) << 0x1f) < 0) {
          *(char *)(DAT_01009878 + 8) = *(char *)(DAT_01009878 + 8) + '\x01';
          iVar4 = (*(int *)(iVar5 + iVar4) - *(int *)(iVar3 + 0x14)) + *(int *)(iVar3 + 0x10);
LAB_01009782:
          *(int *)(iVar3 + 0x10) = iVar4;
          iVar3 = thunk_EXT_FUN_800416a4();
          if (iVar3 == 0) {
            thunk_EXT_FUN_8004176e();
          }
                    // WARNING: Could not recover jumptable at 0x010093d4. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar1 = (*DAT_010093d8)(iVar2,param_4);
          return uVar1;
        }
        iVar3 = thunk_EXT_FUN_800416d0(0);
        if (iVar3 == 0xff) {
          return param_4;
        }
      }
      else {
        if ((int)((uint)*(byte *)(iVar6 + 9) << 0x1f) < 0) {
          iVar7 = *(int *)(iVar5 + DAT_01009888);
          iVar8 = *(int *)(DAT_01009878 + 0x14);
          if (-1 < (int)((uint)*(byte *)(iVar6 + 9) << 0x1e)) {
            *(int *)(iVar6 + 4) = iVar8 - iVar7;
            *(int *)(iVar5 + iVar4) = iVar8;
            *(byte *)(iVar6 + 9) = *(byte *)(iVar6 + 9) | 6;
            return param_4;
          }
          *(char *)(DAT_01009878 + 8) = *(char *)(DAT_01009878 + 8) + '\x01';
          iVar4 = (iVar7 - iVar8) + *(int *)(iVar3 + 0x10);
          goto LAB_01009782;
        }
        iVar3 = thunk_EXT_FUN_800416d0(0);
        if (iVar3 == 0xff) {
          return param_4;
        }
      }
LAB_0100973c:
      iVar4 = DAT_01009888;
      *(undefined4 *)(iVar3 * 0xc + DAT_01009888) = *(undefined4 *)(DAT_01009878 + 0x14);
      iVar4 = iVar3 * 0xc + iVar4;
      *(char *)(iVar4 + 8) = (char)param_1;
      *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) | 2;
      return param_4;
    }
    iVar3 = thunk_EXT_FUN_800416d0(0);
    if (iVar3 != 0xff) goto LAB_0100973c;
  }
  return param_4;
}



undefined1 FUN_0100981a(void)

{
  return *(undefined1 *)(DAT_01009894 + 1);
}



int FUN_01009898(int param_1)

{
  return DAT_010098a4 + param_1 * 0x1c;
}



uint FUN_01009984(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  
  uVar3 = 0;
  iVar6 = 10;
  puVar4 = DAT_01009a08;
  pcVar5 = DAT_01009a0c;
  do {
    if (*pcVar5 == 'M') {
      uVar10 = 1;
      pcVar9 = pcVar5;
      pcVar13 = DAT_01009a10;
      do {
        if (pcVar9[1] != pcVar13[1]) goto LAB_010099b2;
        cVar1 = pcVar9[2];
        cVar2 = pcVar13[2];
        bVar14 = cVar1 == cVar2;
        pcVar7 = pcVar9 + 3;
        pcVar11 = pcVar13 + 3;
        if (bVar14) {
          pcVar7 = pcVar9 + 4;
          cVar1 = pcVar9[3];
          pcVar11 = pcVar13 + 4;
          cVar2 = pcVar13[3];
        }
        bVar15 = bVar14 && cVar1 == cVar2;
        pcVar8 = pcVar7;
        pcVar12 = pcVar11;
        if (bVar14 && cVar1 == cVar2) {
          pcVar8 = pcVar7 + 1;
          pcVar12 = pcVar11 + 1;
          bVar15 = *pcVar7 == *pcVar11;
        }
        if (!bVar15) goto LAB_010099b2;
        pcVar9 = pcVar8 + 1;
        pcVar13 = pcVar12 + 1;
        if ((*pcVar8 != *pcVar12) || (*pcVar9 != *pcVar13)) goto LAB_010099b2;
        uVar10 = uVar10 + 6;
      } while (uVar10 < 0x2c5);
    }
    else {
LAB_010099b2:
      uVar3 = uVar3 | *puVar4;
    }
    pcVar5 = pcVar5 + 0xc800;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return uVar3;
    }
  } while( true );
}



void thunk_EXT_FUN_8004cc44(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a18)();
  return;
}



void thunk_EXT_FUN_80058034(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a20)();
  return;
}



void thunk_EXT_FUN_80047298(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a28)();
  return;
}



void thunk_EXT_FUN_8004286c(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a30)();
  return;
}



void thunk_EXT_FUN_800491a0(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a38)();
  return;
}



void thunk_EXT_FUN_80052976(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a40)();
  return;
}



void thunk_EXT_FUN_80053d84(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a48)();
  return;
}



void thunk_EXT_FUN_800488dc(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a50)();
  return;
}



void thunk_EXT_FUN_800488b8(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a58)();
  return;
}



void thunk_EXT_FUN_80053cdc(void)

{
                    // WARNING: Could not recover jumptable at 0x01009a5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01009a60)();
  return;
}



undefined8 FUN_01009a64(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_18;
  
  bVar8 = 0;
  psVar4 = DAT_0100a644;
  do {
    sVar1 = *psVar4;
    bVar10 = sVar1 == -1;
    psVar5 = psVar4 + 1;
    if (!bVar10) {
      bVar8 = bVar8 + 1;
      psVar5 = psVar4 + 2;
      sVar1 = psVar4[1];
    }
    bVar11 = sVar1 == -1;
    psVar6 = psVar5;
    if (!bVar10 && !bVar11) {
      bVar8 = bVar8 + 1;
      psVar6 = psVar5 + 1;
      sVar1 = *psVar5;
    }
    bVar7 = bVar8;
    if ((bVar10 || bVar11) || sVar1 == -1) {
LAB_01009aaa:
      uVar9 = (uint)bVar7;
      if (uVar9 != 0xff) {
        local_18 = CONCAT31(CONCAT21(local_18._2_2_,(char)param_2),(char)param_1);
        DAT_0100a644[uVar9] = (short)local_18;
        iVar3 = FUN_0100aa6e(*DAT_0100a648);
        if (iVar3 == 0) {
          param_2 = FUN_0100a130(param_2,(int)*(char *)(param_1 + DAT_0100a564));
        }
        uVar2 = FUN_01009b28(param_2,param_1);
        *(undefined1 *)(uVar9 + DAT_0100a64c) = uVar2;
        if ((((*(char *)(param_1 + DAT_0100a568) != '\x7f') &&
             (*(char *)(param_1 + DAT_0100a568) != '~')) &&
            (*(char *)(param_1 + DAT_0100a56c) != -1)) &&
           ((param_1 != 0xe || (*DAT_0100a5c8 != '\x01')))) {
          param_2 = FUN_0100a130(param_2,(int)*DAT_0100a5cc);
        }
        *(char *)(uVar9 + DAT_0100a650) = (char)param_2;
      }
      goto LAB_01009b24;
    }
    bVar7 = bVar8 + 1;
    psVar4 = psVar6 + 1;
    if (*psVar6 == -1) goto LAB_01009aaa;
    bVar8 = bVar8 + 2;
  } while (bVar8 < 0x40);
  uVar9 = 0xff;
LAB_01009b24:
  return CONCAT44(local_18,uVar9);
}



uint FUN_01009b28(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != *DAT_0100a600) {
    if (param_2 != *DAT_0100a604) {
      return param_1;
    }
    iVar2 = thunk_EXT_FUN_80058034();
    if ((iVar2 == 4) && (*DAT_0100a654 == '\x03')) {
      uVar1 = 2;
      goto LAB_01009b38;
    }
  }
  uVar1 = 0;
LAB_01009b38:
  iVar2 = thunk_EXT_FUN_8004cc44(uVar1);
  param_1 = param_1 - (int)(char)(((char)iVar2 + (char)(iVar2 << 1)) * '\x04');
  if ((int)param_1 < 0) {
    do {
      param_1 = param_1 + 0xc;
    } while ((short)param_1 < 0);
  }
  else if (0x7f < (int)param_1) {
    param_1 = param_1 + ((int)(short)((short)param_1 + -0x74) / 0xc & 0xffffU) * -0xc;
  }
  return param_1 & 0xff;
}



uint FUN_01009b94(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if (((*DAT_0100a658 == '\0') && (param_4 < 0x12)) && ((param_1 == 0x80 || (param_1 == 0x90)))) {
    return param_4;
  }
  uVar1 = FUN_0100c2e4();
  return uVar1;
}



uint FUN_01009bbc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  
  uVar3 = 0xff;
  uVar1 = 0;
  iVar7 = *DAT_0100a668;
  pcVar4 = DAT_0100a65c;
  puVar5 = DAT_0100a660;
  piVar6 = DAT_0100a664;
  while (((((*puVar5 != param_1 || (*piVar6 != iVar7)) ||
           (uVar2 = uVar1, uVar3 = uVar1, *pcVar4 == '\x7f')) &&
          ((((uVar2 = uVar1 + 1, puVar5[1] != param_1 || (piVar6[1] != iVar7)) ||
            (uVar3 = uVar2, pcVar4[1] == '\x7f')) &&
           (((uVar2 = uVar1 + 2, puVar5[2] != param_1 || (piVar6[2] != iVar7)) ||
            (uVar3 = uVar2, pcVar4[2] == '\x7f')))))) &&
         (((uVar2 = uVar1 + 3, puVar5[3] != param_1 || (piVar6[3] != iVar7)) ||
          (uVar3 = uVar2, pcVar4[3] == '\x7f'))))) {
    uVar1 = uVar1 + 4;
    piVar6 = piVar6 + 4;
    puVar5 = puVar5 + 4;
    pcVar4 = pcVar4 + 4;
    if (0x27 < (int)uVar1) {
      uVar3 = uVar3 & 0xff;
      if (uVar3 == 0xff) {
        uVar3 = 0xff;
      }
      return uVar3;
    }
  }
  return uVar2 & 0xff;
}



undefined8 FUN_01009c48(uint param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  short *psVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  short *psVar16;
  undefined4 local_28;
  
  iVar7 = DAT_0100a674;
  pcVar9 = DAT_0100a670;
  pcVar14 = DAT_0100a66c;
  psVar16 = DAT_0100a660;
  local_28._2_2_ = (undefined2)((uint)param_4 >> 0x10);
  local_28 = CONCAT31(CONCAT21(local_28._2_2_,param_2),(char)param_1);
  uVar15 = 0xff;
  uVar12 = 0xffffffff;
  uVar13 = 0;
  pcVar4 = DAT_0100a65c;
  psVar10 = DAT_0100a660;
  puVar11 = DAT_0100a664;
  do {
    if (((*psVar10 == (short)local_28) && (*puVar11 < uVar12)) && (*pcVar4 != '\0')) {
      uVar12 = *puVar11;
      uVar15 = uVar13;
    }
    if (((psVar10[1] == (short)local_28) && (puVar11[1] < uVar12)) && (pcVar4[1] != '\0')) {
      uVar12 = puVar11[1];
      uVar15 = uVar13 + 1;
    }
    if (((psVar10[2] == (short)local_28) && (puVar11[2] < uVar12)) && (pcVar4[2] != '\0')) {
      uVar12 = puVar11[2];
      uVar15 = uVar13 + 2;
    }
    if (((psVar10[3] == (short)local_28) && (puVar11[3] < uVar12)) && (pcVar4[3] != '\0')) {
      uVar12 = puVar11[3];
      uVar15 = uVar13 + 3;
    }
    uVar13 = uVar13 + 4;
    puVar11 = puVar11 + 4;
    psVar10 = psVar10 + 4;
    pcVar4 = pcVar4 + 4;
  } while ((int)uVar13 < 0x28);
  uVar15 = uVar15 & 0xff;
  cVar2 = DAT_0100a66c[uVar15];
  local_28._0_2_ = CONCAT11(cVar2,(char)param_1);
  if (uVar15 == 0xff) goto LAB_01009e9a;
  cVar1 = *DAT_0100a670;
  if ((int)((uint)*(byte *)(uVar15 + DAT_0100a674) << 0x18) < 0) {
    if (cVar1 != '\0') {
      iVar5 = FUN_0100921a(cVar2);
      cVar1 = *pcVar9;
      if (((cVar1 != '\x03') && ((cVar1 != '\x02' || (iVar6 = FUN_0100981a(), iVar6 != 0x7f)))) ||
         (iVar5 != 0)) {
        bVar3 = *(byte *)(uVar15 + iVar7);
        iVar7 = thunk_EXT_FUN_80047298();
        if (iVar7 == 0) {
          thunk_EXT_FUN_8004286c(0x80,bVar3 & 0x7f,0,param_1);
        }
      }
      iVar7 = thunk_EXT_FUN_80054408();
      if ((((iVar7 == 0x7f) && (*DAT_0100a678 == '\0')) && (*pcVar9 != '\x04')) &&
         (iVar7 = FUN_0100921a(cVar2), iVar7 == 0)) {
        if ((-1 < (int)((uint)*DAT_0100a67c << 0x1b)) &&
           ((((int)((uint)*DAT_0100a680 << 0x1f) < 0 && (param_1 == *DAT_0100a600)) ||
            (((int)((uint)*DAT_0100a680 << 0x1e) < 0 && (param_1 == *DAT_0100a604)))))) {
          *DAT_0100a684 = *DAT_0100a684 + 1;
        }
        if (*DAT_0100a688 == '\x7f') {
          uVar12 = (uint)*DAT_0100a680;
          if ((int)(uVar12 << 0x1f) < 0) {
            if (param_1 == *DAT_0100a600) {
              uVar12 = *(int *)(DAT_0100a688 + 8) + 1;
            }
            if (param_1 == *DAT_0100a600) {
              *(uint *)(DAT_0100a688 + 8) = uVar12;
              goto LAB_01009e94;
            }
          }
          if (((int)(uVar12 << 0x1e) < 0) && (param_1 == *DAT_0100a604)) {
            *(int *)(DAT_0100a688 + 0x10) = *(int *)(DAT_0100a688 + 0x10) + 1;
          }
        }
      }
    }
  }
  else if (((cVar1 != '\x02') && (cVar1 != '\0')) &&
          (((cVar1 != '\x04' &&
            ((*DAT_0100a678 == '\0' && (iVar7 = thunk_EXT_FUN_80054408(), iVar7 == 0x7f)))) &&
           (iVar7 = FUN_0100921a(cVar2), iVar7 == 0)))) {
    if ((-1 < (int)((uint)*DAT_0100a67c << 0x1b)) &&
       ((((int)((uint)*DAT_0100a680 << 0x1f) < 0 && (param_1 == *DAT_0100a600)) ||
        (((int)((uint)*DAT_0100a680 << 0x1e) < 0 && (param_1 == *DAT_0100a604)))))) {
      *DAT_0100a68c = *DAT_0100a68c + 1;
      *DAT_0100a684 = *DAT_0100a684 + 1;
    }
    pcVar9 = DAT_0100a688;
    if (*DAT_0100a688 == '\x7f') {
      if (((int)((uint)*DAT_0100a680 << 0x1f) < 0) && (param_1 == *DAT_0100a600)) {
        *(int *)(DAT_0100a688 + 8) = *(int *)(DAT_0100a688 + 8) + 1;
        *(int *)(pcVar9 + 4) = *(int *)(pcVar9 + 4) + 1;
      }
      else if (((int)((uint)*DAT_0100a680 << 0x1e) < 0) && (param_1 == *DAT_0100a604)) {
        *(int *)(DAT_0100a688 + 0x10) = *(int *)(DAT_0100a688 + 0x10) + 1;
        *(int *)(pcVar9 + 0xc) = *(int *)(pcVar9 + 0xc) + 1;
      }
    }
  }
LAB_01009e94:
  FUN_0100953e(uVar15);
LAB_01009e9a:
  iVar7 = 0x28;
  pcVar9 = DAT_0100a65c;
  do {
    if (((*psVar16 != -1) && (*pcVar14 == cVar2)) &&
       ((*DAT_0100a670 == '\x02' || (*pcVar9 != '\0')))) {
      bVar3 = (byte)*psVar16;
      if ((((int)((uint)*DAT_0100a654 << 0x1f) < 0) && (bVar3 == *DAT_0100a600)) ||
         (((int)((uint)*DAT_0100a654 << 0x1e) < 0 && (bVar3 == *DAT_0100a604)))) {
        uVar8 = 1;
        goto LAB_01009f0e;
      }
    }
    psVar16 = psVar16 + 1;
    pcVar9 = pcVar9 + 1;
    pcVar14 = pcVar14 + 1;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      uVar8 = 0;
LAB_01009f0e:
      return CONCAT44(local_28,uVar8);
    }
  } while( true );
}



undefined4 FUN_01009f12(uint param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = DAT_0100a690;
  iVar1 = FUN_0100aa6e(*DAT_0100a648);
  if (iVar1 == 0) {
    if (10 < param_1) {
      uVar3 = *(ushort *)(iVar2 + param_1 * 2 + -0x16);
      goto LAB_01009f48;
    }
    if (5 < param_1) {
      uVar3 = *(ushort *)(iVar2 + param_1 * 2 + -0xc);
      goto LAB_01009f48;
    }
  }
  uVar3 = *(ushort *)(iVar2 + param_1 * 2);
LAB_01009f48:
  iVar2 = FUN_0100800c();
  if (((iVar2 != 0x7f) && ((*DAT_0100a694 & uVar3) != 0)) && ((*DAT_0100a698 & uVar3) != 0)) {
    return 1;
  }
  return 0;
}



longlong FUN_0100a0c8(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0100915c();
  iVar2 = FUN_0100aa6e(*DAT_0100a648);
  if (iVar2 == 0) {
    if (param_1 == 0) goto LAB_0100a0e2;
  }
  else {
    iVar2 = thunk_EXT_FUN_80058034();
    if (iVar2 == 4) {
      if (((int)((uint)*DAT_0100a654 << 0x1f) < 0) && (param_1 == *DAT_0100a600)) goto LAB_0100a0e2;
      if (-1 < (int)((uint)*DAT_0100a654 << 0x1e)) goto LAB_0100a112;
    }
    else if (param_1 == *DAT_0100a600) goto LAB_0100a0e2;
    if (((param_1 == *DAT_0100a604) && (uVar1 != *DAT_0100a6ac)) && (uVar1 != DAT_0100a6ac[8])) {
LAB_0100a0e2:
      return CONCAT44(param_4,1);
    }
  }
LAB_0100a112:
  return (ulonglong)param_4 << 0x20;
}



ulonglong FUN_0100a130(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0100aa6e(*DAT_0100a648);
  if (((iVar1 == 0) && (0x7d < param_1)) &&
     (iVar1 = thunk_EXT_FUN_80052976(*DAT_0100a6b0 & 0xf), iVar1 != 0)) {
    param_2 = 0;
  }
  param_2 = param_2 + param_1;
  if (param_2 < 0) {
    do {
      param_2 = param_2 + 0xc;
    } while ((short)param_2 < 0);
  }
  else if (0x7f < param_2) {
    param_2 = param_2 + ((int)(short)((short)param_2 + -0x74) / 0xc & 0xffffU) * -0xc;
  }
  return CONCAT44(param_4,param_2) & 0xffffffff000000ff;
}



undefined8 FUN_0100a184(undefined4 param_1,undefined1 param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined6 uStack_1e;
  
  iVar5 = FUN_01009c48();
  iVar4 = DAT_0100a650;
  psVar3 = DAT_0100a644;
  bVar11 = 0;
  psVar6 = DAT_0100a644;
  do {
    sVar1 = *psVar6;
    sVar2 = CONCAT11(param_2,(char)param_1);
    bVar13 = sVar1 == sVar2;
    psVar7 = psVar6 + 1;
    if (!bVar13) {
      bVar11 = bVar11 + 1;
      psVar7 = psVar6 + 2;
      sVar1 = psVar6[1];
    }
    bVar14 = sVar1 == sVar2;
    psVar8 = psVar7;
    if (!bVar13 && !bVar14) {
      bVar11 = bVar11 + 1;
      psVar8 = psVar7 + 1;
      sVar1 = *psVar7;
    }
    bVar10 = bVar11;
    if ((bVar13 || bVar14) || sVar1 == sVar2) {
LAB_0100a1d8:
      uVar12 = (uint)bVar10;
      if (uVar12 != 0xff) {
        if ((int)((uint)*(byte *)(uVar12 + DAT_0100a650) << 0x18) < 0) {
          bVar11 = *(byte *)(uVar12 + DAT_0100a650) & 0x7f;
          *(byte *)(uVar12 + DAT_0100a650) = bVar11;
          FUN_01009b94(0x80,bVar11,0,param_1);
          FUN_0100a608(0x80,*(undefined1 *)(uVar12 + iVar4),0,param_1);
        }
        iVar9 = FUN_0100a0c8(param_1);
        if ((iVar9 == 1) && (iVar5 == 0)) {
          FUN_010092ea(*(undefined1 *)(uVar12 + DAT_0100a64c),(char)psVar3[uVar12],0);
        }
        psVar3[uVar12] = -1;
        *(undefined1 *)(uVar12 + iVar4) = 0;
        *(undefined1 *)(uVar12 + DAT_0100a64c) = 0;
      }
      break;
    }
    bVar10 = bVar11 + 1;
    psVar6 = psVar8 + 1;
    if (*psVar8 == sVar2) goto LAB_0100a1d8;
    bVar11 = bVar11 + 2;
  } while (bVar11 < 0x40);
  return CONCAT62(uStack_1e,CONCAT11(param_2,(char)param_1));
}



void FUN_0100a23c(uint param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = FUN_0100915c();
  iVar5 = FUN_01009a64(param_1,param_2);
  if (iVar5 == 0xff) {
    return;
  }
  iVar6 = FUN_01009f12(param_1);
  iVar7 = DAT_0100a650;
  if (iVar6 == 1) {
    bVar2 = *(byte *)(iVar5 + DAT_0100a650);
    *(byte *)(iVar5 + DAT_0100a650) = bVar2 | 0x80;
    FUN_01009b94(0x90,bVar2 & 0x7f,param_3,param_1);
    FUN_0100a608(0x90,*(byte *)(iVar5 + iVar7) & 0x7f,param_3,param_1);
  }
  iVar7 = FUN_0100a0c8(param_1);
  if (iVar7 != 1) {
    uVar4 = FUN_0100915c();
    if (param_1 != *DAT_0100a600) {
      if (param_1 != *DAT_0100a604) {
        return;
      }
      if (uVar4 == *DAT_0100a6ac) {
        return;
      }
      if (uVar4 == DAT_0100a6ac[8]) {
        return;
      }
    }
    iVar5 = FUN_01009bbc(param_1 + param_2 * 0x100 & 0xffff);
    if (iVar5 == 0xff) {
      return;
    }
    *(undefined1 *)(iVar5 + DAT_0100a65c) = 0x7f;
    return;
  }
  iVar7 = FUN_0100aa6e(*DAT_0100a648);
  if ((iVar7 == 6) || (iVar7 == 0)) {
    FUN_010092ea(*(undefined1 *)(iVar5 + DAT_0100a64c),
                 (char)*(undefined2 *)(DAT_0100a644 + iVar5 * 2),0x7f);
    return;
  }
  iVar7 = FUN_01009bbc(param_1 + param_2 * 0x100 & 0xffff);
  if (iVar7 == 0xff) {
    return;
  }
  *(undefined1 *)(iVar7 + DAT_0100a65c) = 0x7f;
  iVar6 = DAT_0100a64c;
  iVar8 = FUN_0100921a(*(undefined1 *)(iVar5 + DAT_0100a64c));
  pcVar3 = DAT_0100a670;
  if (iVar8 != 0) {
    FUN_010091f0();
    cVar1 = *pcVar3;
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      bVar2 = *(byte *)(iVar7 + DAT_0100a674);
      if ((int)((uint)bVar2 << 0x18) < 0) {
        return;
      }
      *(byte *)(iVar7 + DAT_0100a674) = bVar2 | 0x80;
      thunk_EXT_FUN_8004286c(0x90,bVar2 & 0x7f,param_3,param_1);
      return;
    }
  }
  if (*pcVar3 != '\x02') {
    if (((param_1 == *DAT_0100a600) && ((int)((uint)*DAT_0100a654 << 0x1f) < 0)) ||
       ((param_1 == *DAT_0100a604 &&
        (((uVar4 != *DAT_0100a6ac && (uVar4 != DAT_0100a6ac[8])) &&
         ((int)((uint)*DAT_0100a654 << 0x1e) < 0)))))) {
      FUN_010092ea(*(undefined1 *)(iVar5 + iVar6),(char)*(undefined2 *)(DAT_0100a644 + iVar5 * 2),
                   0x7f);
    }
    iVar7 = FUN_0100921a(*(undefined1 *)(iVar5 + iVar6));
    if (iVar7 == 0) {
      FUN_01009718(*(undefined1 *)(iVar5 + iVar6));
    }
    return;
  }
  if ((int)((uint)*(byte *)(iVar7 + DAT_0100a674) << 0x18) < 0) {
    return;
  }
  FUN_010092ea(*(undefined1 *)(iVar5 + iVar6),(char)*(undefined2 *)(DAT_0100a644 + iVar5 * 2),0x7f);
  if (*DAT_0100a678 != '\0') {
    return;
  }
  thunk_EXT_FUN_800513e6(0x7f);
  return;
}



void FUN_0100a3dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,code *param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_0100aa6e(*DAT_0100a648);
  if ((((iVar1 == 0) && (-1 < (int)((uint)*DAT_0100a69c << 0x1f))) && (*DAT_0100a6b4 == '\0')) &&
     ((((param_4 - 0x18U & 0xff) < 8 &&
       (FUN_0100c2e4(param_1,param_2,param_3,param_4), param_5 != (code *)0x0)) &&
      (-1 < (int)((uint)*DAT_0100a6b8 << 0x1a))))) {
    (*param_5)(0x7f);
  }
  return;
}



int FUN_0100a42c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0100aa6e(*DAT_0100a648);
  if ((((iVar1 == 0) && (-1 < (int)((uint)*DAT_0100a69c << 0x1f))) && (*DAT_0100a6b4 == '\0')) &&
     ((iVar1 = FUN_01009232(), iVar1 != 0 && ((param_4 - 8U & 0xff) < 8)))) {
    thunk_EXT_FUN_80053d84(param_1,param_2,param_3,param_4);
  }
  return param_4;
}



void FUN_0100a5d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0100a3dc(0xe0,param_1,param_2,param_3,DAT_0100a6e0);
  FUN_0100a42c(0xe0,param_1,param_2,param_3 - 0x10U & 0xff);
  return;
}



undefined4 FUN_0100a608(int param_1,byte param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = FUN_01009232();
  if (iVar4 != 0) {
    bVar3 = thunk_EXT_FUN_800488dc(param_4);
    iVar4 = thunk_EXT_FUN_800488b8();
    pbVar2 = DAT_0100a6e8;
    if (iVar4 != 0) {
      cVar1 = *(char *)(((uint)(param_1 << 0x19) >> 0x1d) + DAT_0100a6e4);
      *DAT_0100a6e8 = bVar3 | (byte)param_1;
      pbVar2[1] = param_2;
      if (cVar1 == '\x03') {
        pbVar2[2] = param_3;
      }
      thunk_EXT_FUN_80053cdc();
    }
  }
  return param_4;
}



void thunk_EXT_FUN_800506e2(void)

{
                    // WARNING: Could not recover jumptable at 0x0100a714. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100a718)();
  return;
}



void thunk_EXT_FUN_800628c2(void)

{
                    // WARNING: Could not recover jumptable at 0x0100a71c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100a720)();
  return;
}



undefined4 FUN_0100a9a2(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  if (*DAT_0100aa18 < 0x1a) {
    (**(code **)(DAT_0100aa1c + (uint)*DAT_0100aa18 * 4))();
  }
  uVar1 = thunk_EXT_FUN_800628c2();
  if (uVar1 < 0x33) {
    FUN_01006a2c(1);
  }
  return unaff_r7;
}



undefined4 FUN_0100aa44(void)

{
  int iVar1;
  short *psVar2;
  
  if (*(short *)(DAT_0100aa58 + 10) != 0) {
    return 0;
  }
  iVar1 = 0;
  psVar2 = DAT_0100aa54;
  while( true ) {
    if (2 < iVar1) {
      return 0;
    }
    if (*psVar2 == -1) break;
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 0xc;
  }
  return 1;
}



void thunk_EXT_FUN_80054814(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aa5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aa60)();
  return;
}



byte FUN_0100aa64(void)

{
  return *DAT_0100aab4 & 99;
}



uint FUN_0100aa6e(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100aab8);
  if (param_1 <= uVar2) {
    return 1;
  }
  uVar2 = FUN_0100b80e(param_1);
  if (uVar2 != 0) {
    FUN_0100b736(param_1,DAT_0100aabc,0xe87);
    iVar3 = FUN_01009898();
    cVar1 = *(char *)(iVar3 + 0xe);
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      return (uint)(byte)(cVar1 + 3);
    }
    uVar2 = 5;
  }
  return uVar2;
}



void thunk_EXT_FUN_80079324(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aac0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aac4)();
  return;
}



void thunk_EXT_FUN_8007929c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aac8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aacc)();
  return;
}



void thunk_EXT_FUN_800458fa(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aad0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aad4)();
  return;
}



void thunk_EXT_FUN_8005d18c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aad8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aadc)();
  return;
}



void thunk_EXT_FUN_800516bc(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aae0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aae4)();
  return;
}



void thunk_EXT_FUN_800545a8(void)

{
                    // WARNING: Could not recover jumptable at 0x0100aae8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100aaec)();
  return;
}



void FUN_0100aaf0(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0100b680 + param_1 * 0x20;
  *(undefined1 *)((uint)*(byte *)(iVar1 + 2) + iVar1 + 3) = param_2;
  *(char *)(iVar1 + 2) = *(char *)(iVar1 + 2) + '\x01';
  return;
}



undefined8 FUN_0100ab06(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  
  iVar1 = DAT_0100b680 + param_1 * 0x20;
  local_18 = CONCAT13(*(undefined1 *)(iVar1 + 3),
                      CONCAT12(*(undefined1 *)(iVar1 + 4),(undefined2)local_18));
  if (local_18._2_2_ == -0xfd) {
    param_2 = thunk_EXT_FUN_80079324();
  }
  else if (local_18._2_2_ == -0x81) {
    bVar2 = 2;
    iVar5 = iVar1 + 2;
    do {
      if (-1 < (int)((uint)*(byte *)(iVar5 + 3) << 0x18)) break;
      bVar2 = bVar2 + 1;
      iVar5 = iVar5 + 1;
    } while (bVar2 < 6);
    uVar3 = (byte)(bVar2 + 1) + 1 & 0xff;
    uVar4 = uVar3 + 1 & 0xff;
    local_18 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uint)(byte)(bVar2 + 1) + iVar1 + 3),
                                          *(undefined1 *)(uVar3 + iVar1 + 3)),
                                 *(undefined1 *)(uVar4 + iVar1 + 3)),
                        *(undefined1 *)((uVar4 + 1 & 0xff) + iVar1 + 3));
    if (local_18 == DAT_0100b684) {
      param_2 = thunk_EXT_FUN_8007929c();
    }
  }
  return CONCAT44(local_18,param_2);
}



void FUN_0100ab90(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_0100b364();
  iVar1 = DAT_0100b680;
  iVar6 = param_1 * 0x20;
  if (iVar3 == 0) {
    uVar2 = 8;
  }
  else {
    if (iVar3 != -1) {
      do {
        uVar4 = FUN_010091a8(param_1);
        iVar5 = iVar6 + iVar1;
        if (uVar4 == 0xffffffff) {
          *(undefined1 *)(iVar5 + 1) = 0;
          goto LAB_0100abbe;
        }
        FUN_0100aaf0(param_1,uVar4 & 0xff);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          *(undefined1 *)(iVar5 + 1) = 0;
          if (*(char *)((uint)*(byte *)(iVar5 + 2) + iVar5 + 2) != -9) {
            *(undefined1 *)(iVar5 + 1) = 1;
            return;
          }
          goto LAB_0100abfa;
        }
      } while (*(byte *)(iVar5 + 2) < 0x1d);
      *(undefined1 *)(iVar5 + 1) = 0;
      if (iVar3 != -1) {
        *(undefined1 *)(iVar5 + 0x1f) = 0xf7;
        FUN_010090c0(iVar3,1,param_1);
LAB_0100abfa:
        *(undefined1 *)(iVar6 + iVar1) = 7;
        return;
      }
    }
LAB_0100abbe:
    uVar2 = 0xe;
  }
  *(undefined1 *)(iVar6 + iVar1) = uVar2;
  *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
  return;
}



undefined8 FUN_0100ac1c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uStack_28;
  
  iVar1 = DAT_0100b680;
  puVar8 = &uStack_28;
  iVar7 = param_1 * 0x20;
  iVar6 = iVar7 + DAT_0100b680;
  *(undefined1 *)(iVar6 + 2) = 0;
  FUN_0100aaf0(param_1,0xff);
  uVar3 = FUN_010091a8(param_1);
  if ((int)uVar3 < 0) {
    if (uVar3 == 0xfffffffb) {
      uVar2 = 0x12;
    }
    else if (uVar3 == 0xfffffffe) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    FUN_0100aaf0(param_1,uVar3 & 0xff);
    iVar4 = FUN_0100b364(param_1);
    if (iVar4 != -1) {
      iVar5 = FUN_0100b396(iVar4,&uStack_28);
      if (0 < iVar5) {
        do {
          FUN_0100aaf0(param_1,*(undefined1 *)puVar8);
          iVar5 = iVar5 + -1;
          puVar8 = (undefined8 *)((int)puVar8 + 1);
        } while (iVar5 != 0);
      }
      if (iVar4 == 0) {
LAB_0100accc:
        iVar4 = 0;
      }
      else {
        do {
          uVar3 = FUN_010091a8(param_1);
          if (uVar3 == 0xffffffff) {
            iVar4 = -1;
            break;
          }
          FUN_0100aaf0(param_1,uVar3 & 0xff);
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_0100accc;
        } while (*(byte *)(iVar6 + 2) < 0x1d);
      }
      iVar6 = FUN_0100ab06(param_1,iVar4);
      if (iVar6 != -1) {
        if (iVar6 != 0) {
          FUN_010090c0(iVar6,1,param_1);
        }
        *(undefined1 *)(iVar7 + iVar1) = 0xd;
        return uStack_28;
      }
    }
    uVar2 = 0xe;
  }
  *(undefined1 *)(iVar7 + iVar1) = uVar2;
  *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
  return uStack_28;
}



undefined4 FUN_0100acee(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_0100b680;
  if (param_2 == 0xf0) {
    *(undefined1 *)(DAT_0100b680 + param_1 * 0x20 + 2) = 0;
    uVar2 = *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xf);
    FUN_0100aaf0(param_1,0xff);
    FUN_0100aaf0(param_1,uVar2);
    FUN_0100aaf0(param_1,0xf0);
    *DAT_0100b68c = uVar2;
LAB_0100ad46:
    FUN_0100ab90(param_1);
    return param_4;
  }
  if (param_2 - 0xf1U < 3) {
    thunk_EXT_FUN_800458fa();
  }
  else if (param_2 != 0xf6) {
    if (param_2 == 0xf7) {
      iVar5 = param_1 * 0x20;
      iVar4 = iVar5 + DAT_0100b680;
      if (*(char *)(iVar4 + 1) == '\0') {
        iVar3 = FUN_0100b364();
        if (iVar3 == 0) {
          uVar2 = 8;
        }
        else {
          if (iVar3 != -1) {
            FUN_010090c0(iVar3,1,param_1);
            *(undefined1 *)(iVar5 + iVar1) = 9;
            *(undefined1 *)(iVar4 + 2) = 3;
            *(undefined1 *)(iVar4 + 5) = 0;
            *(undefined1 *)(iVar4 + 4) = 0;
            *(undefined1 *)(iVar4 + 3) = 0;
            return param_4;
          }
          uVar2 = 0xe;
        }
        *(undefined1 *)(iVar5 + iVar1) = uVar2;
        *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
        return param_4;
      }
      goto LAB_0100ad46;
    }
    if (6 < param_2 - 0xf8U) {
      if (param_2 == 0xff) {
        FUN_0100ac1c();
        return param_4;
      }
      *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
      uVar2 = 0xe;
      goto LAB_0100adc0;
    }
  }
  uVar2 = 1;
LAB_0100adc0:
  *(undefined1 *)(param_1 * 0x20 + DAT_0100b680) = uVar2;
  return param_4;
}



void FUN_0100adc4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  uVar5 = FUN_010091a8();
  if ((int)uVar5 < 0) {
    if (uVar5 == 0xfffffffb) {
      uVar4 = 0x12;
    }
    else {
      iVar6 = uVar5 + 2;
      bVar11 = iVar6 == 0;
      if (bVar11) {
        iVar6 = 0xf;
      }
      uVar4 = (undefined1)iVar6;
      if (!bVar11) {
        uVar4 = 8;
      }
    }
    *(undefined1 *)(param_1 * 0x20 + DAT_0100b680) = uVar4;
    *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
    return;
  }
  if ((int)(uVar5 << 0x18) < 0) {
    iVar6 = 1;
    uVar10 = uVar5 & 0xff;
    if (0xef < uVar10) goto LAB_0100ae7e;
    *(char *)(DAT_0100b688 + param_1 * 0x10 + 0xd) = (char)uVar5;
LAB_0100ae40:
    iVar2 = DAT_0100b680;
    puVar8 = (undefined1 *)(param_1 * 0x20 + DAT_0100b680);
    puVar8[2] = 0;
    FUN_0100aaf0(param_1,uVar10);
    if (-1 < (int)(uVar5 << 0x18)) {
      FUN_0100aaf0(param_1,uVar5 & 0xff);
    }
    iVar3 = DAT_0100b690;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar5 = (uVar10 << 0x19) >> 0x1d;
      *puVar8 = *(undefined1 *)(DAT_0100b690 + uVar5 * 2);
      uVar5 = (uint)*(byte *)(iVar3 + uVar5 * 2 + 1);
    }
    else {
      *puVar8 = 0xe;
      uVar5 = 1;
    }
    iVar6 = uVar5 - iVar6;
    if (iVar6 != 0) {
      do {
        uVar5 = FUN_010091a8(param_1);
        if (uVar5 == 0xffffffff) goto LAB_0100ae14;
        FUN_0100aaf0(param_1,uVar5 & 0xff);
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_0100aeba;
      } while ((byte)puVar8[2] < 0x1d);
      if (iVar6 == -1) goto LAB_0100ae14;
    }
LAB_0100aeba:
    cVar9 = puVar8[2];
    pbVar7 = puVar8 + 4;
    do {
      cVar9 = cVar9 + -1;
      if (cVar9 == '\0') {
        return;
      }
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (-1 < (int)((uint)bVar1 << 0x18));
    iVar6 = FUN_0100aa6e(*DAT_0100b694);
    if (((iVar6 != 0) || (puVar8[3] != -0x47)) ||
       ((cVar9 = puVar8[4], cVar9 != 'G' && (((cVar9 != 'J' && (cVar9 != '[')) && (cVar9 != ']')))))
       ) {
      *(undefined1 *)(param_1 * 0x20 + iVar2) = 10;
    }
  }
  else {
    iVar6 = 2;
    uVar10 = (uint)*(byte *)(DAT_0100b688 + param_1 * 0x10 + 0xd);
    if ((int)(uVar10 << 0x18) < 0) {
LAB_0100ae7e:
      if (0xef < uVar10) {
        FUN_0100acee(param_1,uVar10);
        return;
      }
      goto LAB_0100ae40;
    }
LAB_0100ae14:
    *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
    *(undefined1 *)(param_1 * 0x20 + DAT_0100b680) = 0xe;
  }
  return;
}



void FUN_0100aefe(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = FUN_0100aa6e(*DAT_0100b694);
  if (2 < uVar3) {
    thunk_EXT_FUN_8005d18c((int)*(short *)(DAT_0100b698 + param_1 * 2));
  }
  iVar1 = DAT_0100b688;
  iVar8 = param_1 * 0x10 + DAT_0100b688;
  cVar2 = *(char *)(iVar8 + 0xe);
  if (cVar2 == '\0') {
    *(undefined1 *)(iVar8 + 0xe) = 1;
    uVar3 = FUN_0100b364(param_1);
    if (uVar3 == 0xffffffff) {
      *(undefined1 *)(param_1 * 0x20 + DAT_0100b680) = 0xe;
      *(undefined1 *)(iVar8 + 0xc) = 0;
    }
    else {
      if (0x7fffff < uVar3) {
        uVar3 = 0x800000;
      }
      uVar3 = *(int *)(iVar8 + 4) + uVar3 * 0x60;
      uVar6 = *(uint *)(iVar8 + 8);
      if (uVar3 < uVar6) {
        iVar7 = uVar6 - uVar3;
        iVar4 = 0;
      }
      else {
        iVar4 = uVar3 - uVar6;
        iVar7 = 0;
      }
      *(int *)(iVar8 + 8) = iVar7;
      *(int *)(iVar8 + 4) = iVar4;
      *(undefined1 *)(param_1 * 0x20 + DAT_0100b680) = 9;
    }
  }
  else {
    bVar9 = cVar2 == '\x01';
    if (bVar9) {
      cVar2 = '\0';
    }
    if (bVar9) {
      *(char *)(iVar8 + 0xe) = cVar2;
      FUN_0100adc4(param_1);
    }
  }
  uVar5 = FUN_0100911a(param_1);
  *(undefined4 *)(param_1 * 0x10 + iVar1) = uVar5;
  return;
}



uint FUN_0100af98(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint unaff_r7;
  
  iVar2 = DAT_0100b69c;
  cVar1 = *(char *)(DAT_0100b69c + 1);
  if (cVar1 == ' ') {
    *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xf) = *(undefined1 *)(DAT_0100b69c + 3);
  }
  else {
    if (cVar1 != '/') {
      if (cVar1 == 'Q') {
        *DAT_0100b6a0 = 0xc;
        uVar4 = (uint)(uint3)(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 3),
                                                *(undefined1 *)(iVar2 + 4)),
                                       *(undefined1 *)(iVar2 + 5)) >> 5);
        if (uVar4 < DAT_0100b6a4) {
          if (uVar4 < 0x1a29) {
            unaff_r7 = 0x118;
          }
          else {
            unaff_r7 = DAT_0100b6a8 / uVar4;
          }
        }
        else {
          unaff_r7 = 0xb;
        }
        *(char *)(iVar2 + 1) = (char)unaff_r7;
        uVar3 = (undefined1)(unaff_r7 >> 8);
      }
      else {
        if (cVar1 != 'X') {
          return unaff_r7;
        }
        *DAT_0100b6a0 = 0x10;
        *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar2 + 3);
        uVar3 = *(undefined1 *)(iVar2 + 4);
      }
      *(undefined1 *)(iVar2 + 2) = uVar3;
      return unaff_r7;
    }
    *DAT_0100b6a0 = 8;
    *(undefined1 *)(DAT_0100b688 + param_1 * 0x10 + 0xc) = 0;
    if (param_1 == 5) {
      thunk_EXT_FUN_800516bc(0x31,0x22,0x31,0x22);
      thunk_EXT_FUN_800545a8(0x31,0x22);
      uVar4 = thunk_EXT_FUN_80054f76(0x10000a11,0x10000a11);
      return uVar4;
    }
  }
  return unaff_r7;
}



undefined4 FUN_0100b078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = DAT_0100b680;
  iVar4 = param_1 * 0x20;
  if (*(char *)(iVar4 + DAT_0100b680) != '\t') {
    iVar5 = iVar4 + DAT_0100b680;
    bVar1 = *(byte *)(iVar5 + 2);
    iVar7 = iVar5;
    puVar2 = DAT_0100b69c;
    for (uVar6 = (uint)bVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar2 = *(undefined1 *)(iVar7 + 3);
      iVar7 = iVar7 + 1;
      puVar2 = puVar2 + 1;
    }
    *DAT_0100b6ac = (ushort)bVar1;
    bVar1 = *(byte *)(iVar4 + iVar3);
    *DAT_0100b6a0 = bVar1;
    uVar6 = bVar1 - 2;
    if (uVar6 < 5) {
      *DAT_0100b68c = *(byte *)(iVar5 + 3) & 0xf;
      return param_4;
    }
    if (uVar6 != 0xb) {
      return param_4;
    }
    if (DAT_0100b69c[1] != ' ') {
      *DAT_0100b68c = *(byte *)(DAT_0100b688 + param_1 * 0x10 + 0xf);
    }
    FUN_0100af98();
  }
  return param_4;
}



void FUN_0100b0ee(undefined2 param_1)

{
  int iVar1;
  undefined1 local_4;
  undefined1 uStack_3;
  
  iVar1 = DAT_0100b69c;
  local_4 = (undefined1)param_1;
  *(undefined1 *)(DAT_0100b69c + 1) = local_4;
  uStack_3 = (undefined1)((ushort)param_1 >> 8);
  *(undefined1 *)(iVar1 + 2) = uStack_3;
  *DAT_0100b6ac = 3;
  *DAT_0100b6a0 = 9;
  return;
}



void FUN_0100b118(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_0100b688 + param_1 * 0x10;
  uVar3 = *(uint *)(iVar1 + 4);
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    iVar2 = 0;
  }
  else {
    iVar2 = uVar3 - param_2;
    iVar4 = 0;
  }
  *(int *)(iVar1 + 4) = iVar2;
  *(int *)(iVar1 + 8) = iVar4;
  return;
}



short FUN_0100b134(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 / *(ushort *)(DAT_0100b6b0 + 2);
  uVar2 = uVar3;
  if (0xffff < uVar3) {
    uVar2 = 0x8000;
  }
  sVar1 = (short)uVar2;
  if ((0xffff >= uVar3) && (param_1 != *(ushort *)(DAT_0100b6b0 + 2) * uVar3)) {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}



void FUN_0100b158(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = DAT_0100b6b0;
  iVar2 = DAT_0100b688;
  uVar1 = *(ushort *)(DAT_0100b6b0 + 2);
  uVar6 = *(uint *)(DAT_0100b6b0 + 4);
  if (uVar6 < uVar1) {
    if (((*(char *)(DAT_0100b688 + 0xe) == '\0') && (FUN_0100aefe(), *DAT_0100b680 == '\x0e')) ||
       ((*(char *)(iVar2 + 0x1c) != '\0' &&
        ((*(char *)(iVar2 + 0x1e) == '\0' && (FUN_0100aefe(1), DAT_0100b680[0x20] == '\x0e')))))) {
LAB_0100b1b6:
      uVar5 = 0xe;
    }
    else {
      iVar4 = 0;
      uVar6 = *(uint *)(iVar2 + 4);
      if ((*(char *)(iVar2 + 0x1c) != '\0') && (*(uint *)(iVar2 + 0x14) <= uVar6)) {
        iVar4 = 1;
        uVar6 = *(uint *)(iVar2 + 0x14);
      }
      if (uVar6 != 0) {
        iVar4 = FUN_0100b134();
        iVar8 = (uint)*(ushort *)(iVar3 + 2) * iVar4;
        FUN_0100b118(0,iVar8);
        uVar7 = *(uint *)(iVar2 + 4);
        *(uint *)(iVar3 + 4) = uVar7;
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          FUN_0100b118(1,iVar8);
          uVar6 = *(uint *)(iVar2 + 0x14);
          if (uVar6 < uVar7) goto LAB_0100b198;
        }
        goto LAB_0100b19a;
      }
      if (*(char *)(iVar2 + iVar4 * 0x10 + 0xc) == '\0') {
        return;
      }
      FUN_0100aefe(iVar4);
      if (DAT_0100b680[iVar4 * 0x20] == '\x0e') goto LAB_0100b1b6;
      FUN_0100b078(iVar4);
      if (iVar4 != 1) {
        return;
      }
      FUN_010095ea();
      uVar5 = 10;
    }
    *DAT_0100b6a0 = uVar5;
  }
  else {
    iVar4 = FUN_0100b134(uVar6);
    uVar7 = (uint)uVar1 * iVar4;
    FUN_0100b118(0,uVar7);
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      FUN_0100b118(1,uVar7);
    }
    if (uVar6 < uVar7) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 - uVar7;
    }
LAB_0100b198:
    *(uint *)(iVar3 + 4) = uVar6;
LAB_0100b19a:
    FUN_0100b0ee(iVar4);
  }
  return;
}



void FUN_0100b24e(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  pcVar6 = DAT_0100b6b4;
  iVar2 = DAT_0100b6b0;
  uVar5 = (uint)(char)(*DAT_0100b6b4 + -1);
  uVar1 = *(ushort *)(DAT_0100b6b0 + 2);
  if (*(uint *)(DAT_0100b6b0 + 4) < (uint)uVar1) {
    uVar7 = 0xffffffff;
    uVar9 = 0;
    if (-1 < (int)uVar5) {
      puVar8 = (uint *)(DAT_0100b688 + uVar5 * 0x10 + 4);
      do {
        if (((char)puVar8[2] != '\0') && (iVar3 = thunk_EXT_FUN_800506e2(uVar5 & 0xff), iVar3 == 0))
        {
          if (*(char *)((int)puVar8 + 10) == '\0') {
            FUN_0100aefe(uVar5 & 0xff);
          }
          if (*puVar8 < uVar7) {
            uVar7 = *puVar8;
            uVar9 = uVar5;
          }
        }
        uVar5 = (uint)(char)((char)uVar5 + -1);
        puVar8 = puVar8 + -4;
      } while (-1 < (int)uVar5);
      if (uVar7 == 0) {
        FUN_0100aefe(uVar9 & 0xff);
        FUN_0100b078(uVar9 & 0xff);
        return;
      }
    }
    iVar3 = FUN_0100b134(uVar7);
    *(undefined4 *)(iVar2 + 4) = 0xffffffff;
    uVar1 = *(ushort *)(iVar2 + 2);
    uVar5 = (uint)(char)(*pcVar6 + -1);
    if (-1 < (int)uVar5) {
      puVar8 = (uint *)(DAT_0100b688 + uVar5 * 0x10 + 4);
      do {
        iVar4 = thunk_EXT_FUN_800506e2(uVar5 & 0xff);
        if ((iVar4 == 0) && ((char)puVar8[2] != '\0')) {
          FUN_0100b118(uVar5 & 0xff,(uint)uVar1 * iVar3);
          if (*puVar8 < *(uint *)(iVar2 + 4)) {
            *(uint *)(iVar2 + 4) = *puVar8;
          }
        }
        uVar5 = (uint)(char)((char)uVar5 + -1);
        puVar8 = puVar8 + -4;
      } while (-1 < (int)uVar5);
    }
  }
  else {
    iVar3 = FUN_0100b134();
    uVar7 = (uint)uVar1 * iVar3;
    if (-1 < (int)uVar5) {
      pcVar6 = (char *)(DAT_0100b688 + uVar5 * 0x10 + 0xc);
      do {
        iVar4 = thunk_EXT_FUN_800506e2(uVar5 & 0xff);
        if ((iVar4 == 0) && (*pcVar6 != '\0')) {
          FUN_0100b118(uVar5 & 0xff,uVar7);
        }
        uVar5 = (uint)(char)((char)uVar5 + -1);
        pcVar6 = pcVar6 + -0x10;
      } while (-1 < (int)uVar5);
    }
    if (*(uint *)(iVar2 + 4) < uVar7) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(uint *)(iVar2 + 4) - uVar7;
    }
    *(int *)(iVar2 + 4) = iVar4;
  }
  FUN_0100b0ee(iVar3);
  return;
}



uint FUN_0100b364(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 4;
  while( true ) {
    uVar1 = FUN_010091a8(param_1);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar2 = uVar1 & 0x7f | uVar2 << 7;
    if (-1 < (int)(uVar1 << 0x18)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  return uVar2;
}



undefined4 FUN_0100b396(uint param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < 0x80) {
    *param_2 = (byte)param_1;
    return 1;
  }
  bVar1 = (byte)param_1 & 0x7f;
  bVar2 = (byte)(param_1 >> 7);
  if (param_1 < 0x4000) {
    param_2[1] = bVar1;
    *param_2 = bVar2 | 0x80;
    return 2;
  }
  if (param_1 < 0x200000) {
    param_2[2] = bVar1;
    param_2[1] = bVar2 | 0x80;
    *param_2 = (byte)(param_1 >> 0xe) | 0x80;
    return 3;
  }
  param_2[3] = bVar1;
  param_2[2] = bVar2 | 0x80;
  param_2[1] = (byte)(param_1 >> 0xe) | 0x80;
  *param_2 = (byte)(param_1 >> 0x15) | 0x80;
  return 4;
}



undefined4 FUN_0100b484(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  
  puVar1 = DAT_0100b694;
  if (*DAT_0100b6b0 == '\0') {
    FUN_01009080(param_1);
    puVar5 = DAT_0100b688;
    FUN_010090c0(DAT_0100b688[param_1 * 4],0,param_1);
    FUN_01009080(1);
    FUN_010090c0(puVar5[4],0,1);
  }
  else if (*DAT_0100b6b0 == '\x01') {
    iVar4 = FUN_0100aa6e(*DAT_0100b694);
    uVar3 = DAT_0100b6cc;
    iVar2 = DAT_0100b6c8;
    pbVar7 = DAT_0100b6b4;
    puVar5 = DAT_0100b688;
    if (iVar4 == 6) {
      uVar6 = 0;
      if (*DAT_0100b6b4 != 0) {
        do {
          FUN_01009080(uVar6);
          FUN_010090c0(puVar5[uVar6 * 4],0,uVar6);
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < *pbVar7);
      }
    }
    else if ((int)((uint)*DAT_0100b6c4 << 0x19) < 0) {
      uVar6 = 0;
      pcVar8 = (char *)(DAT_0100b688 + 3);
      pbVar7 = DAT_0100b6c0;
      do {
        if (*pcVar8 == '\0') {
          if ((*DAT_0100b6d0 != '\x7f') &&
             (iVar4 = thunk_FUN_0100b6f0(*puVar1,uVar3,0x951),
             (*(byte *)(iVar4 + iVar2) & *pbVar7) != 0)) {
            pcVar8[2] = '\0';
            pcVar8[-0xffffffff00000008] = '\0';
            pcVar8[-0xffffffff00000007] = '\0';
            pcVar8[-0xffffffff00000006] = '\0';
            pcVar8[-0xffffffff00000005] = '\0';
            pcVar8[1] = '\0';
            pcVar8[-0xffffffff0000000c] = ';';
            pcVar8[-0xffffffff0000000b] = '\x03';
            pcVar8[-0xffffffff0000000a] = '\0';
            pcVar8[-0xffffffff00000009] = '\0';
            FUN_010090c0(0x33b,0,uVar6 & 0xff);
            *pcVar8 = '\x01';
          }
        }
        else {
          pcVar8[2] = '\0';
          pcVar8[-0xffffffff00000008] = '\0';
          pcVar8[-0xffffffff00000007] = '\0';
          pcVar8[-0xffffffff00000006] = '\0';
          pcVar8[-0xffffffff00000005] = '\0';
          pcVar8[1] = '\0';
          pcVar8[-0xffffffff0000000c] = ';';
          pcVar8[-0xffffffff0000000b] = '\x03';
          pcVar8[-0xffffffff0000000a] = '\0';
          pcVar8[-0xffffffff00000009] = '\0';
          FUN_010090c0(0x33b,0,uVar6 & 0xff);
        }
        uVar6 = uVar6 + 1;
        pcVar8 = pcVar8 + 0x10;
        pbVar7 = pbVar7 + 1;
      } while ((int)uVar6 < 5);
      *(undefined1 *)((int)puVar5 + 0x5e) = 0;
      puVar5[0x15] = 0;
      *(undefined1 *)((int)puVar5 + 0x5d) = 0;
      puVar5[0x14] = 0x460;
      FUN_010090c0(0x460,0,5);
    }
    else {
      uVar6 = 0;
      pbVar7 = DAT_0100b6c0;
      do {
        iVar4 = thunk_FUN_0100b6f0(*puVar1,uVar3,0x963);
        if (((*(byte *)(iVar4 + iVar2) & *pbVar7) != 0) &&
           (iVar4 = thunk_EXT_FUN_800506e2(param_1), iVar4 == 0)) {
          FUN_01009080(uVar6 & 0xff);
          FUN_010090c0(*puVar5,0,uVar6 & 0xff);
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 4;
        pbVar7 = pbVar7 + 1;
      } while ((int)uVar6 < 6);
    }
    *(undefined4 *)(DAT_0100b6b0 + 4) = *(undefined4 *)(DAT_0100b6b0 + 8);
  }
  return param_4;
}



void FUN_0100b5ee(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  
  pcVar2 = DAT_0100b6b0;
  if (*DAT_0100b6b0 == '\0') {
    iVar4 = FUN_0100aa64();
    if (iVar4 != 0) {
      return;
    }
    FUN_0100909c();
    FUN_0100909c(1);
  }
  else {
    if (*DAT_0100b6b0 != '\x01') {
      return;
    }
    iVar4 = FUN_0100aa64();
    puVar1 = DAT_0100b694;
    if (iVar4 != 0) {
      return;
    }
    iVar5 = FUN_0100aa6e(*DAT_0100b694);
    uVar3 = DAT_0100b6cc;
    iVar4 = DAT_0100b6c8;
    pbVar8 = DAT_0100b6b4;
    if (iVar5 == 6) {
      bVar6 = 0;
      if (*DAT_0100b6b4 != 0) {
        do {
          FUN_0100909c(bVar6);
          bVar6 = bVar6 + 1;
        } while (bVar6 < *pbVar8);
      }
    }
    else {
      uVar7 = 0;
      pbVar8 = DAT_0100b6c0;
      do {
        iVar5 = thunk_FUN_0100b6f0(*puVar1,uVar3,0xa1a);
        if (((*(byte *)(iVar5 + iVar4) & *pbVar8) != 0) &&
           (iVar5 = thunk_EXT_FUN_800506e2(uVar7), iVar5 == 0)) {
          FUN_0100909c(uVar7);
        }
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 < 6);
    }
  }
  *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar2 + 4);
  return;
}



void thunk_EXT_FUN_8010a3d4(void)

{
                    // WARNING: Could not recover jumptable at 0x0100b6d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100b6d8)();
  return;
}



void thunk_EXT_FUN_80056e82(void)

{
                    // WARNING: Could not recover jumptable at 0x0100b6dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100b6e0)();
  return;
}



void thunk_EXT_FUN_80071ae2(void)

{
                    // WARNING: Could not recover jumptable at 0x0100b6e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100b6e8)();
  return;
}



uint thunk_FUN_0100b6f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((param_1 < iVar3 + 1) || (iVar2 + 10 < param_1)) {
    thunk_EXT_FUN_8010a3d4(param_2,param_3);
  }
  iVar2 = thunk_EXT_FUN_80054814((char)*puVar1);
  return (param_1 - iVar2) - 1U & 0xffff;
}



uint FUN_0100b6f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((param_1 < iVar3 + 1) || (iVar2 + 10 < param_1)) {
    thunk_EXT_FUN_8010a3d4(param_2,param_3);
  }
  iVar2 = thunk_EXT_FUN_80054814((char)*puVar1);
  return (param_1 - iVar2) - 1U & 0xffff;
}



ulonglong FUN_0100b736(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  if (param_1 < iVar2 + 0xb) {
    thunk_EXT_FUN_8010a3d4(param_2,param_3);
  }
  iVar2 = thunk_EXT_FUN_80054814((char)*puVar1);
  return CONCAT44(param_4,(param_1 - iVar2) + -0xb) & 0xffffffff0000ffff;
}



uint FUN_0100b766(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    thunk_EXT_FUN_8010a3d4(param_2,param_3);
  }
  return param_1 - 1U & 0xffff;
}



ulonglong FUN_0100b77a(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = thunk_EXT_FUN_80054814(param_2);
  if (param_1 < iVar1 + 1) {
    thunk_EXT_FUN_8010a3d4(param_3,param_4);
  }
  return CONCAT44(param_4,(param_1 - iVar1) + -1) & 0xffffffff0000ffff;
}



undefined4 FUN_0100b7a0(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  if ((0 < param_1) && (param_1 <= iVar1 + 0x1fe)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0100b7c2(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  if ((0 < param_1) && (param_1 <= iVar1)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0100b7e0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((iVar3 + 1 <= param_1) && (param_1 <= iVar2 + 10)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0100b80e(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((iVar3 + 0xb <= param_1) && (param_1 <= iVar2 + 0x1fe)) {
    return 1;
  }
  return 0;
}



longlong FUN_0100b83c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint in_r3;
  
  puVar1 = DAT_0100b980;
  uVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  do {
    iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
    uVar2 = uVar2 + 1 & 0xffff;
    if (iVar3 + 10 < (int)uVar2) {
      return (ulonglong)in_r3 << 0x20;
    }
    iVar3 = thunk_EXT_FUN_80056e82(uVar2);
  } while (iVar3 == 0);
  return CONCAT44(in_r3,1);
}



void FUN_0100b870(code *param_1,code *param_2)

{
  short sVar1;
  
  sVar1 = thunk_EXT_FUN_80071ae2((*DAT_0100b984 & 0xff) + 1);
  if ((param_1 != (code *)0x0) && (param_2 != (code *)0x0)) {
    (*param_1)(1);
    (*param_2)(sVar1 + -1);
  }
  return;
}



void FUN_0100b898(code *param_1,code *param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  if ((param_1 != (code *)0x0) && (param_2 != (code *)0x0)) {
    (*param_1)(1);
    (*param_2)(uVar1);
  }
  return;
}



char FUN_0100b8bc(short *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  short sVar6;
  short *psVar7;
  
  puVar1 = DAT_0100b980;
  cVar4 = '\0';
  uVar5 = 0;
  sVar6 = 1;
  do {
    iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
    iVar3 = thunk_EXT_FUN_80056e82((uVar5 & 0xff) + iVar3 + 1 & 0xffff);
    psVar7 = param_1;
    if (iVar3 != 0) {
      sVar2 = thunk_EXT_FUN_80054814((char)*puVar1);
      psVar7 = param_1 + 1;
      *param_1 = sVar2 + sVar6;
      cVar4 = cVar4 + '\x01';
    }
    uVar5 = uVar5 + 1;
    sVar6 = sVar6 + 1;
    param_1 = psVar7;
  } while ((int)uVar5 < 10);
  return cVar4;
}



void FUN_0100b8fe(code *param_1,code *param_2,short param_3)

{
  undefined2 *puVar1;
  short sVar2;
  short sVar3;
  
  puVar1 = DAT_0100b980;
  sVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  sVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((param_1 != (code *)0x0) && (param_2 != (code *)0x0)) {
    (*param_1)(sVar2 + 0xb);
    (*param_2)(param_3 + sVar3 + 10);
  }
  return;
}



int FUN_0100b93a(code *param_1,code *param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0100b980;
  iVar2 = thunk_EXT_FUN_80054814((char)*DAT_0100b980);
  iVar3 = thunk_EXT_FUN_80054814((char)*puVar1);
  if ((param_1 != (code *)0x0) && (param_2 != (code *)0x0)) {
    (*param_1)(param_4 + iVar2 + 0xbU & 0xffff);
    (*param_2)(param_3 + param_4 + iVar3 + 10U & 0xffff);
  }
  return param_4;
}



void thunk_EXT_FUN_8004d854(void)

{
                    // WARNING: Could not recover jumptable at 0x0100b9c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100b9c8)();
  return;
}



void thunk_EXT_FUN_8006ca00(void)

{
                    // WARNING: Could not recover jumptable at 0x0100ba1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100ba20)();
  return;
}



void thunk_EXT_FUN_8009e3b0(void)

{
                    // WARNING: Could not recover jumptable at 0x0100ba24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100ba28)();
  return;
}



void thunk_EXT_FUN_8009fa2c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100ba2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100ba30)();
  return;
}



void thunk_EXT_FUN_80083db2(void)

{
                    // WARNING: Could not recover jumptable at 0x0100ba34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100ba38)();
  return;
}



undefined8 FUN_0100bb0c(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_r3;
  
  pbVar2 = DAT_0100bb4c;
  bVar1 = *DAT_0100bb4c;
  if (bVar1 == 0) {
    FUN_01006eb2();
    *pbVar2 = 1;
    *(undefined4 *)(pbVar2 + 4) = *DAT_0100bb50;
    *DAT_0100bb54 = 0xffffffff;
    FUN_01006ebe();
  }
  return CONCAT44(in_r3,(uint)bVar1);
}



void FUN_0100bb32(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0100bb4c;
  if (param_1 == 0) {
    *DAT_0100bb4c = 0;
    uVar2 = *(uint *)(puVar1 + 4);
    if (puVar1[1] == '\0') {
      uVar2 = uVar2 | 0x40000000;
    }
    *DAT_0100bb50 = uVar2;
  }
  return;
}



void thunk_EXT_FUN_8010adc4(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bb5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bb60)();
  return;
}



void FUN_0100bb64(ushort *param_1)

{
  undefined4 uVar1;
  
  FUN_0100bdc4(param_1,1);
  if ((int)((uint)*param_1 << 0x11) < 0) {
    uVar1 = 0x7f;
  }
  else {
    uVar1 = 0;
  }
  FUN_0100bdde(uVar1);
  thunk_EXT_FUN_8010adc4(0x7f);
  thunk_EXT_FUN_8010adc4(0);
  return;
}



void FUN_0100bb8a(undefined2 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_0100bd18;
  bVar1 = *(byte *)(DAT_0100bd18 + 1);
  *(undefined2 *)(DAT_0100bd1c + (uint)bVar1 * 2) = param_1;
  *(byte *)(iVar2 + 1) = bVar1 + 1;
  return;
}



void FUN_0100bb9a(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_0100bd18;
  if (*DAT_0100bd18 != DAT_0100bd18[1]) {
    FUN_0100bb64(DAT_0100bd1c + (uint)*DAT_0100bd18 * 2);
    *pbVar1 = *pbVar1 + 1;
    if (pbVar1[1] == *pbVar1) {
      *pbVar1 = 0;
      pbVar1[1] = 0;
    }
  }
  return;
}



undefined4 FUN_0100bbc8(void)

{
  byte *pbVar1;
  undefined4 in_r3;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  pbVar1 = DAT_0100bd24;
  bVar3 = 0;
  if (*DAT_0100bd20 == '\0') {
    uVar5 = DAT_0100bd24[2] + 1 & 0xf;
    DAT_0100bd24[2] = (byte)uVar5;
    uVar6 = 9;
    uVar9 = 0;
    pbVar2 = *(byte **)(pbVar1 + 0x50);
    pbVar4 = pbVar1 + 4;
    do {
      if (*pbVar2 == 0) break;
      if ((*pbVar2 != *pbVar4) || (uVar5 == 0)) {
        if ((bVar3 == 0) && (pbVar1[1] != 0xff)) {
          FUN_0100bb8a(0xc);
          bVar3 = 1;
        }
        uVar7 = uVar6 & 0xff;
        if ((uVar6 & 0xff) != uVar9) {
          FUN_0100bb8a(uVar9 & 0xff | 0x80);
          bVar3 = bVar3 + 1;
          uVar7 = uVar9;
        }
        FUN_0100bb8a(*pbVar2 | 0x4000);
        bVar3 = bVar3 + 1;
        uVar6 = uVar7 + 1;
        *pbVar4 = *pbVar2;
        if (0xf < bVar3) break;
      }
      uVar9 = uVar9 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar2 = pbVar2 + 1;
    } while ((int)uVar9 < 8);
    if (bVar3 < 0x10) {
      uVar9 = 0x41;
      uVar6 = (uint)*pbVar1;
      iVar10 = 0;
      do {
        iVar8 = *(int *)(pbVar1 + 0x54);
        if ((*(byte *)(uVar6 + iVar8) != pbVar1[uVar6 + 0xc]) ||
           (uVar5 == (int)(iVar10 + ((uint)(iVar10 >> 1) >> 0x1e)) >> 2)) {
          if ((bVar3 == 0) && (pbVar1[1] != 0xff)) {
            FUN_0100bb8a(0xc);
            bVar3 = 1;
          }
          uVar7 = uVar9 & 0xff;
          if ((uVar9 & 0xff) != uVar6) {
            FUN_0100bb8a(uVar6 | 0x40);
            bVar3 = bVar3 + 1;
            uVar7 = uVar6;
          }
          FUN_0100bb8a(*(byte *)(uVar6 + iVar8) | 0x4000);
          bVar3 = bVar3 + 1;
          uVar9 = uVar7 + 1;
          pbVar1[uVar6 + 0xc] = *(byte *)(uVar6 + iVar8);
        }
        uVar6 = uVar6 + 1 & 0xff;
        if (0x3f < uVar6) {
          uVar6 = 0;
        }
      } while ((bVar3 < 0x10) && (iVar10 = iVar10 + 1, iVar10 < 0x40));
      *pbVar1 = (byte)uVar6;
    }
    if ((bVar3 != 0) && (bVar3 = pbVar1[1], bVar3 != 0xff)) {
      FUN_0100bb8a(0xe);
      FUN_0100bb8a(bVar3 | 0x80);
    }
  }
  return in_r3;
}



void FUN_0100bcee(int param_1,uint param_2)

{
  if ((param_1 == 0) || (7 < param_2)) {
    FUN_0100bb8a(0xc);
    param_2 = 0xff;
  }
  else {
    FUN_0100bb8a(0xe);
    FUN_0100bb8a(param_2 | 0x80);
  }
  *(char *)(DAT_0100bd24 + 1) = (char)param_2;
  return;
}



void thunk_EXT_FUN_800b4d38(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bd28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bd2c)();
  return;
}



void FUN_0100bd46(void)

{
  return;
}



void FUN_0100bd48(void)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = DAT_0100bda0;
  do {
  } while (-1 < (int)((uint)(ushort)DAT_0100bda0[2] << 0x1b));
  *DAT_0100bda0 = 0x800c;
  puVar3[2] = puVar3[2] & 0xffef;
  iVar2 = DAT_0100bd9c;
  bVar1 = *(byte *)(DAT_0100bd9c + 1);
  iVar6 = 4;
  puVar4 = (undefined2 *)(DAT_0100bd9c + (uint)bVar1 * 8 + 4);
  puVar5 = DAT_0100bda4;
  do {
    *puVar4 = *(undefined2 *)*puVar5;
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = bVar1 + 1;
  *(char *)(iVar2 + 1) = (char)iVar6 + (char)(iVar6 >> 2) * -4;
  thunk_EXT_FUN_800b4d38(*(undefined1 *)(iVar2 + 1));
  *puVar3 = 0x800d;
  return;
}



void FUN_0100bda8(int param_1)

{
  *DAT_0100bdbc =
       *DAT_0100bdbc & 0xff00 | (ushort)*(undefined4 *)(DAT_0100bdc0 + param_1 * 4) & 0xff;
  return;
}



void FUN_0100bdc4(ushort *param_1)

{
  *DAT_0100bdf4 = *DAT_0100bdf4 & 0xff00 | *param_1 & 0xff;
  return;
}



void FUN_0100bdde(int param_1)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = *DAT_0100bdf8 & 0xff7f;
  }
  else {
    uVar1 = *DAT_0100bdf8 | 0x80;
  }
  *DAT_0100bdf8 = uVar1;
  return;
}



undefined4 FUN_0100bdfc(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auStack_30 [28];
  
  uVar7 = 0;
  FUN_0100bb0c();
  iVar4 = 4;
  puVar1 = DAT_0100be98;
  do {
    *param_1 = *puVar1;
    *param_1 = puVar1[1];
    puVar2 = puVar1 + 3;
    *param_1 = puVar1[2];
    puVar1 = puVar1 + 4;
    *param_1 = *puVar2;
    puVar3 = DAT_0100be9c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0x1a;
  puVar5 = auStack_30;
  puVar6 = DAT_0100be9c;
  do {
    *puVar5 = *(undefined1 *)*puVar6;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar4 != 0);
  iVar4 = 0;
  do {
    iVar8 = 0;
    puVar6 = puVar3;
    do {
      if (iVar4 == iVar8) {
        uVar9 = 0xff;
      }
      else {
        uVar9 = 0;
      }
      *(undefined1 *)*puVar6 = uVar9;
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 0x1a);
    iVar8 = 0;
    puVar6 = puVar3;
    do {
      if (iVar4 == iVar8) {
        bVar10 = *(char *)*puVar6 == -1;
      }
      else {
        bVar10 = *(char *)*puVar6 == '\0';
      }
      if (!bVar10) {
        uVar7 = 1;
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 0x1a);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1a);
  iVar4 = 0x1a;
  puVar5 = auStack_30;
  do {
    *(undefined1 *)*puVar3 = *puVar5;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  FUN_0100bb32();
  return uVar7;
}



void thunk_EXT_FUN_8005495a(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bea4)();
  return;
}



void thunk_EXT_FUN_8006c83a(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100beac)();
  return;
}



void thunk_EXT_FUN_8005497e(void)

{
                    // WARNING: Could not recover jumptable at 0x0100beb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100beb4)();
  return;
}



void thunk_EXT_FUN_800549c6(void)

{
                    // WARNING: Could not recover jumptable at 0x0100beb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bebc)();
  return;
}



void thunk_EXT_FUN_80054936(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bec4)();
  return;
}



void thunk_EXT_FUN_800549a2(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100becc)();
  return;
}



void thunk_EXT_FUN_800549ea(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bed4)();
  return;
}



void thunk_EXT_FUN_80054a0e(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bedc)();
  return;
}



void thunk_EXT_FUN_80054a32(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100bee4)();
  return;
}



void thunk_EXT_FUN_80054a56(void)

{
                    // WARNING: Could not recover jumptable at 0x0100bee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100beec)();
  return;
}



void FUN_0100bef6(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_8005495a(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(1,0x7f,0);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2b8;
    *DAT_0100c2b8 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(1,0,0);
  }
  return;
}



void FUN_0100bf70(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_8005497e(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(2,0x7f,0);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2bc;
    *DAT_0100c2bc = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(2,0,0);
  }
  return;
}



void FUN_0100bfe8(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puStack_28;
  undefined2 *puStack_24;
  uint uStack_20;
  
  thunk_EXT_FUN_800549c6(param_1,&puStack_28);
  if (puStack_24 != (undefined2 *)0x0) {
    FUN_0100107a(3,0x7f,0);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2c4;
    *DAT_0100c2c4 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (uStack_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*puStack_24,*puStack_28);
        uVar3 = uVar3 + 1;
        puStack_24 = puStack_24 + 1;
        puStack_28 = puStack_28 + 1;
      } while (uVar3 < uStack_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(3,0,0);
  }
  return;
}



void FUN_0100bffc(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_80054936(param_1,&local_28);
  puVar1 = DAT_0100c2c0;
  if (local_24 != (undefined2 *)0x0) {
    *DAT_0100c2c0 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
  }
  return;
}



void FUN_0100c05c(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_800549a2(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(3,0x7f,0);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2c4;
    *DAT_0100c2c4 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(3,0,0);
  }
  return;
}



void FUN_0100c0dc(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_800549ea(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(1,0x7f,1);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2c8;
    *DAT_0100c2c8 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(1,0,1);
  }
  return;
}



void FUN_0100c154(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_80054a0e(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(2,0x7f,1);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2cc;
    *DAT_0100c2cc = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(2,0,1);
  }
  return;
}



void FUN_0100c1cc(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_80054a32(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(3,0x7f,1);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2d0;
    *DAT_0100c2d0 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(3,0,1);
  }
  return;
}



void FUN_0100c244(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_28;
  undefined2 *local_24;
  uint local_20;
  
  thunk_EXT_FUN_80054a56(param_1,&local_28);
  if (local_24 != (undefined2 *)0x0) {
    FUN_0100107a(3,0x7f,1);
    thunk_EXT_FUN_8006c83a(30000);
    puVar1 = DAT_0100c2d0;
    *DAT_0100c2d0 = 0x8001;
    do {
    } while ((int)((uint)*puVar1 << 0x11) < 0);
    uVar2 = FUN_0100bb0c();
    uVar3 = 0;
    if (local_20 >> 1 != 0) {
      do {
        thunk_EXT_FUN_800e0860(*local_24,*local_28);
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
      } while (uVar3 < local_20 >> 1);
    }
    FUN_0100bb32(uVar2);
    *puVar1 = *puVar1 & 0xfffe;
    FUN_0100107a(3,0,1);
  }
  return;
}



void thunk_EXT_FUN_800722c4(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c2d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c2d8)();
  return;
}



// WARNING: Removing unreachable block (ram,0x0100c716)
// WARNING: Removing unreachable block (ram,0x0100c68e)

uint FUN_0100c2e4(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 unaff_r4;
  byte *pbVar2;
  undefined4 unaff_r5;
  uint uVar3;
  undefined4 unaff_r6;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_r7;
  uint uVar6;
  char *pcVar7;
  
  FUN_0100c36c();
  pbVar2 = DAT_0100c7cc;
  bVar1 = false;
  if (param_1 == 0xb0) {
    if (param_2 == 7) {
      DAT_0100c7cc[param_4 + 2] = (byte)param_3;
      if ((DAT_0100c7d0[param_4] == '\x01') &&
         (param_3 = *(byte *)((uint)*pbVar2 + DAT_0100c7d4) + param_3 & 0xffff, 0xff < param_3)) {
        param_3 = 0xff;
      }
      if (param_3 == pbVar2[param_4 + 0x32]) {
        return param_4;
      }
      uVar3 = param_4;
      FUN_0100c304(0xb0,7,param_3 & 0xff,param_4,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
      pbVar2[param_4 + 0x32] = (byte)param_3;
      return uVar3;
    }
  }
  else {
    if ((param_2 == 0 && param_1 == 0) && (param_3 == 0)) {
      bVar1 = true;
      iVar4 = 0x10;
      do {
        pbVar2[2] = 0xb;
        pbVar2[0x32] = 0xb;
        pbVar2 = pbVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((param_1 == 0x76) && (param_2 == 3)) {
      if (1 < param_4) goto LAB_0100c6e4;
      DAT_0100c7cc[param_4 + 0x62] = (byte)param_3;
      if (0x7f < param_3) {
        param_3 = 0x7f;
      }
      param_1 = 0x76;
    }
  }
  FUN_0100c304(param_1,param_2,param_3,param_4,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
LAB_0100c6e4:
  iVar4 = DAT_0100c7d4;
  pbVar2 = DAT_0100c7cc;
  if (bVar1) {
    uVar3 = 0;
    pbVar5 = DAT_0100c7cc;
    pcVar7 = DAT_0100c7d0;
    do {
      uVar6 = (uint)pbVar5[2];
      if ((*pcVar7 == '\x01') && (uVar6 = *(byte *)((uint)*pbVar2 + iVar4) + uVar6, 0xff < uVar6)) {
        uVar6 = 0xff;
      }
      if (uVar6 != pbVar5[0x32]) {
        FUN_0100c304(0xb0,7,uVar6 & 0xff,uVar3 & 0xff,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        pbVar5[0x32] = (byte)uVar6;
      }
      uVar3 = uVar3 + 1;
      pcVar7 = pcVar7 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar3 < 0x30);
  }
  return param_4;
}



undefined4 FUN_0100c304(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_0100c358 == 0) {
    iVar2 = FUN_0100c626();
    if (((iVar2 == 0) || (0xf < (param_1 + 0x70U & 0xff))) || (param_3 == 0)) {
      thunk_EXT_FUN_800722c4(param_1,param_2,param_3,param_4);
    }
    return param_4;
  }
  if (0x1f < (param_1 - 0x80U & 0xff)) {
    thunk_EXT_FUN_800722c4(param_1);
  }
                    // WARNING: Could not recover jumptable at 0x0100c2dc. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_0100c2e0)(param_1,param_2,param_3,param_4);
  return uVar1;
}



void thunk_EXT_FUN_8008d5e0(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c35c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c360)();
  return;
}



void thunk_EXT_FUN_8007238c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c364. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c368)();
  return;
}



void FUN_0100c36c(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  
  iVar7 = DAT_0100c634;
  (**(code **)(DAT_0100c634 + 0x7c))();
  if (param_1 != 0xb0) {
    if (param_1 == 0xc0) {
      if (0x27 < param_4) {
        return;
      }
      *(char *)(param_4 + iVar7 + 4) = (char)param_2;
      return;
    }
    if (param_1 == 0xe0) {
      if (0x27 < param_4) {
        return;
      }
      *(ushort *)(DAT_0100c644 + param_4 * 2) = (ushort)param_2 | (ushort)(param_3 << 8);
      return;
    }
    if (param_1 == 0x72) {
      if (0x27 < param_4) {
        return;
      }
      uVar8 = param_2 - 0x80 & 0xff;
      if (0xb < uVar8) {
        return;
      }
      *(char *)(param_4 + DAT_0100c654 + uVar8 * 0x28) = (char)param_3;
      return;
    }
    if (param_1 == 0) {
      if (param_3 != 0 || param_2 != 0) {
        return;
      }
      uVar8 = 0;
      do {
        thunk_EXT_FUN_8008d5e0(uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x10);
      thunk_EXT_FUN_8007238c();
      return;
    }
    if (param_1 != 8) {
      return;
    }
    if (0x27 < param_2) {
      return;
    }
    uVar8 = param_3 - 0xcU & 0xff;
    if (1 < uVar8) {
      return;
    }
    *(char *)(param_2 + DAT_0100c648 + uVar8 * 0x28 + 0x438) = (char)param_4;
    return;
  }
  if ((param_4 < 0x28) && (iVar2 = *(int *)(DAT_0100c638 + param_2 * 4), iVar2 != 0)) {
    *(char *)(param_4 + iVar2) = (char)param_3;
  }
  iVar6 = DAT_0100c640;
  iVar2 = DAT_0100c638;
  if (param_2 == 0x79) {
    iVar7 = 0x11;
    pbVar5 = DAT_0100c63c;
    do {
      puVar10 = *(undefined1 **)(iVar6 + (uint)*pbVar5 * 4);
      iVar9 = *(int *)(iVar2 + (uint)*pbVar5 * 4);
      if ((iVar9 != 0) && (puVar10 != (undefined1 *)0x0)) {
        *(undefined1 *)(param_4 + iVar9) = *puVar10;
      }
      pbVar5 = pbVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined2 *)(DAT_0100c644 + param_4 * 2) = 0x4000;
    return;
  }
  iVar2 = DAT_0100c650;
  if (param_2 == 6) {
    iVar6 = param_4 + DAT_0100c648;
    if (*(char *)(iVar6 + 1000) != '\0') {
      return;
    }
    uVar8 = (uint)*(byte *)(iVar6 + 0x398);
    bVar1 = *(byte *)(iVar6 + 0x3c0);
    cVar3 = *(char *)(iVar6 + 0x410);
    if (cVar3 == '\0') {
LAB_0100c406:
      *(ushort *)(iVar7 + param_4 * 2 + 0x2c) = (ushort)bVar1 | (ushort)(uVar8 << 8);
      return;
    }
    if (cVar3 == '\x01') {
      uVar4 = CONCAT11(*(byte *)(iVar6 + 0x398),bVar1);
      goto LAB_0100c3f8;
    }
  }
  else {
    if (param_2 != 0x26) {
      if (param_2 == 0x60) {
        if (*(char *)(param_4 + DAT_0100c648 + 1000) != '\0') {
          return;
        }
        cVar3 = *(char *)(param_4 + DAT_0100c648 + 0x410);
        if (cVar3 == '\0') {
          iVar7 = iVar7 + param_4 * 2 + 0x2c;
        }
        else {
          iVar7 = DAT_0100c650;
          if ((cVar3 != '\x01') && (iVar7 = DAT_0100c64c, cVar3 != '\x02')) {
            return;
          }
          iVar7 = iVar7 + param_4 * 2;
        }
        if (iVar7 == 0) {
          return;
        }
        if (0x7e < *(byte *)(iVar7 + 1)) {
          return;
        }
        cVar3 = *(byte *)(iVar7 + 1) + 1;
      }
      else {
        if (param_2 != 0x61) {
          return;
        }
        if (*(char *)(param_4 + DAT_0100c648 + 1000) != '\0') {
          return;
        }
        cVar3 = *(char *)(param_4 + DAT_0100c648 + 0x410);
        if (cVar3 == '\0') {
          iVar7 = iVar7 + param_4 * 2 + 0x2c;
        }
        else {
          iVar7 = DAT_0100c650;
          if ((cVar3 != '\x01') && (iVar7 = DAT_0100c64c, cVar3 != '\x02')) {
            return;
          }
          iVar7 = iVar7 + param_4 * 2;
        }
        if (iVar7 == 0) {
          return;
        }
        if (*(char *)(iVar7 + 1) == '\0') {
          return;
        }
        cVar3 = *(char *)(iVar7 + 1) + -1;
      }
      *(char *)(iVar7 + 1) = cVar3;
      return;
    }
    iVar6 = param_4 + DAT_0100c648;
    if (*(char *)(iVar6 + 1000) != '\0') {
      return;
    }
    uVar8 = (uint)*(byte *)(iVar6 + 0x398);
    bVar1 = *(byte *)(iVar6 + 0x3c0);
    cVar3 = *(char *)(iVar6 + 0x410);
    if (cVar3 == '\0') goto LAB_0100c406;
    if (cVar3 == '\x01') {
      uVar4 = CONCAT11(*(byte *)(iVar6 + 0x398),bVar1);
      goto LAB_0100c3f8;
    }
  }
  if (cVar3 != '\x02') {
    return;
  }
  uVar4 = (ushort)bVar1 | (ushort)(uVar8 << 8);
  iVar2 = DAT_0100c64c;
LAB_0100c3f8:
  *(ushort *)(iVar2 + param_4 * 2) = uVar4;
  return;
}



undefined1 FUN_0100c54a(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x28) && (iVar1 = *(int *)(DAT_0100c638 + param_1 * 4), iVar1 != 0)) {
    return *(undefined1 *)(param_2 + iVar1);
  }
  thunk_EXT_FUN_8006c84c();
  return 0;
}



undefined2 FUN_0100c566(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x28) {
    uVar1 = *(undefined2 *)(DAT_0100c634 + param_1 * 2 + 0x2c);
  }
  else {
    thunk_EXT_FUN_8006c84c();
  }
  return uVar1;
}



undefined2 FUN_0100c57e(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x28) {
    uVar1 = *(undefined2 *)(DAT_0100c650 + param_1 * 2);
  }
  else {
    thunk_EXT_FUN_8006c84c();
  }
  return uVar1;
}



undefined2 FUN_0100c594(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x28) {
    uVar1 = *(undefined2 *)(DAT_0100c64c + param_1 * 2);
  }
  else {
    thunk_EXT_FUN_8006c84c();
  }
  return uVar1;
}



undefined1 FUN_0100c5aa(uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x28) {
    uVar1 = *(undefined1 *)(param_1 + DAT_0100c634 + 4);
  }
  else {
    thunk_EXT_FUN_8006c84c();
  }
  return uVar1;
}



undefined2 FUN_0100c5c0(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x28) {
    uVar1 = *(undefined2 *)(DAT_0100c644 + param_1 * 2);
  }
  else {
    thunk_EXT_FUN_8006c84c();
  }
  return uVar1;
}



undefined1 FUN_0100c5d6(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0x40;
  uVar1 = param_1 - 0x80U & 0xff;
  if (uVar1 < 0xc) {
    if (param_2 < 0x28) {
      uVar2 = *(undefined1 *)(param_2 + DAT_0100c654 + uVar1 * 0x28);
    }
    else {
      thunk_EXT_FUN_8006c84c();
    }
  }
  return uVar2;
}



undefined1 FUN_0100c5fc(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0x40;
  uVar1 = param_1 - 0xcU & 0xff;
  if (uVar1 < 2) {
    if (param_2 < 0x28) {
      uVar2 = *(undefined1 *)(param_2 + DAT_0100c648 + uVar1 * 0x28 + 0x438);
    }
    else {
      thunk_EXT_FUN_8006c84c();
    }
  }
  return uVar2;
}



undefined1 FUN_0100c626(void)

{
  return *DAT_0100c634;
}



// WARNING: Removing unreachable block (ram,0x0100c780)

void FUN_0100c740(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  
  pbVar2 = DAT_0100c7cc;
  if (param_1 == 0) {
    param_1 = 1;
  }
  else if (0x7f < param_1) {
    param_1 = 0x7f;
  }
  *DAT_0100c7cc = (byte)param_1;
  iVar3 = DAT_0100c7d4;
  uVar4 = 0;
  pbVar5 = pbVar2;
  pcVar7 = DAT_0100c7d0;
  do {
    uVar6 = (uint)pbVar5[2];
    if ((*pcVar7 == '\x01') && (uVar6 = *(byte *)((uint)*pbVar2 + iVar3) + uVar6, 0xff < uVar6)) {
      uVar6 = 0xff;
    }
    if (uVar6 != pbVar5[0x32]) {
      FUN_0100c304(0xb0,7,uVar6 & 0xff,uVar4 & 0xff,param_4);
      pbVar5[0x32] = (byte)uVar6;
    }
    uVar4 = uVar4 + 1;
    pcVar7 = pcVar7 + 1;
    pbVar5 = pbVar5 + 1;
  } while (uVar4 < 0x30);
  iVar3 = (uint)*(byte *)((DAT_0100c7d8 - (uint)*pbVar2) + 0x80) + (uint)pbVar2[100];
  uVar1 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  FUN_0100c304(0x76,1,uVar1,0);
  return;
}



void thunk_EXT_FUN_800b5198(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c7dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c7e0)();
  return;
}



void thunk_EXT_FUN_800b4f4e(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c7e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c7e8)();
  return;
}



void thunk_EXT_FUN_800b526c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c7ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c7f0)();
  return;
}



void thunk_EXT_FUN_800b5240(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c7f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c7f8)();
  return;
}



void thunk_EXT_FUN_800b504c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c7fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c800)();
  return;
}



void thunk_EXT_FUN_800b5036(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c80c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c810)();
  return;
}



void thunk_EXT_FUN_800b522c(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c814. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c818)();
  return;
}



void thunk_EXT_FUN_800b4f36(void)

{
                    // WARNING: Could not recover jumptable at 0x0100c81c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0100c820)();
  return;
}


