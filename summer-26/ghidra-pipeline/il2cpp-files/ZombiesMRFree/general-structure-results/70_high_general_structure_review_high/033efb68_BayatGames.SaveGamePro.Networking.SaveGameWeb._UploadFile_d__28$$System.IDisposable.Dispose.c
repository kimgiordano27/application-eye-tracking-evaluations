/*
FUNCTION_NAME: BayatGames.SaveGamePro.Networking.SaveGameWeb.<UploadFile>d__28$$System.IDisposable.Dispose
ENTRY_POINT: 033efb68
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f1750) */

void BayatGames_SaveGamePro_Networking_SaveGameWeb_<UploadFile>d__28__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          lVar4 = param_1 + (long)(int)(*piVar6 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10 +
                  0x138;
          goto LAB_033f14a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_02feb5b8();
LAB_033f14a4:
    lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),unaff_x22);
    (**(code **)(lVar4 + 8))();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_0697b1ec();
LAB_033ef378:
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033ef3c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033ef3c4:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_033f16f8;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033ef420;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033ef420:
    uVar3 = (*(code *)*puVar2)();
    uVar1 = FUN_03562980(uVar3,0);
    if (unaff_w27 <= uVar1) {
      if (unaff_w29 < uVar1) {
        if (unaff_w24 < uVar1) {
          if (uVar1 < 0xee9e2471) {
            if (uVar1 == 0xdde5a47d) {
              uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9f8,0);
              if ((uVar5 & 1) != 0) {
                lVar7 = *(long *)PTR_DAT_06f7da38;
                lVar4 = *unaff_x20;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                      lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_033f10c8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                lVar4 = FUN_02feb5b8();
LAB_033f10c8:
                lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
                uVar5 = (**(code **)(lVar4 + 8))();
                if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
                }
                FUN_0697970c();
              }
            }
            else if (uVar1 == 0xeb1d4ff4) {
              uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c518,0);
              if ((uVar5 & 1) != 0) {
                lVar7 = *(long *)PTR_DAT_06f7c560;
                lVar4 = *unaff_x20;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                      lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10
                              + 0x138;
                      goto LAB_033f0d50;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                lVar4 = FUN_02feb5b8();
LAB_033f0d50:
                lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
                uVar5 = (**(code **)(lVar4 + 8))();
                if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
                }
                FUN_068fd73c();
              }
            }
            else if ((uVar1 == 0xee9e2470) &&
                    (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da20,0),
                    (uVar5 & 1) != 0)) {
              lVar7 = *(long *)PTR_DAT_06f7c880;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f1420;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f1420:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06979638();
            }
          }
          else if (uVar1 == 0xf097c8c2) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d5b0,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7c570;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f12d0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f12d0:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_069781b8();
            }
          }
          else if (uVar1 == 0xf2ebe5e4) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c510,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7c558;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f0f6c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f0f6c:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06977ea0();
            }
          }
          else if ((uVar1 == 0xf5295264) &&
                  (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d560,0),
                  (uVar5 & 1) != 0)) {
            lVar7 = *(long *)PTR_DAT_06f7c558;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1610;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1610:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_069780b0();
          }
        }
        else if (uVar1 < 0xd15cb1d9) {
          if (uVar1 == 0xb48aebf4) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da00,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7d5d8;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f0fb0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f0fb0:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06979c98();
            }
          }
          else if (uVar1 == 0xcae9ad25) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d588,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7c570;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f0c3c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f0c3c:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06978130();
            }
          }
          else if ((uVar1 == 0xd15cb1d8) &&
                  (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9c0,0),
                  (uVar5 & 1) != 0)) {
            lVar7 = *(long *)PTR_DAT_06f7d5e0;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1310;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1310:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697a2a4();
          }
        }
        else if (uVar1 == 0xd3f35533) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9d0,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7d5e0;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f11d0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f11d0:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697a16c();
          }
        }
        else if (uVar1 == 0xd95a275c) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da28,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da40;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto BayatGames_SaveGamePro_IO_SaveGamePlayerPrefsStorage__GetWriteStream;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
BayatGames_SaveGamePro_IO_SaveGamePlayerPrefsStorage__GetWriteStream:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697a770();
          }
        }
        else if ((uVar1 == unaff_w24) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d978,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7da38;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f14e8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f14e8:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          uVar5 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
          }
          FUN_0697988c();
        }
      }
      else if (uVar1 < 0x97038dff) {
        if (uVar1 < 0x8ecc09b4) {
          if (uVar1 == 0x8d39bde6) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c520,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7c578;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f0bb8;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f0bb8:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              uVar3 = (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8(uVar3,uVar3);
              }
              FUN_068fc96c();
            }
          }
          else if ((uVar1 == 0x8ecc09b3) &&
                  (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d970,0),
                  (uVar5 & 1) != 0)) {
            lVar7 = *(long *)PTR_DAT_06f7da48;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0af4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0af4:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar5 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
            }
            FUN_0697afdc();
          }
        }
        else if (uVar1 == 0x8fe1c293) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9a0,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da38;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f114c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f114c:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar5 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
            }
            FUN_0697998c();
          }
        }
        else if (uVar1 == 0x95f72993) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c4f8,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7c578;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0dd4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0dd4:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar3 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar3,uVar3);
            }
            FUN_068f635c();
          }
        }
        else if ((uVar1 == 0x97038dfe) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9f0,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7da38;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f1460;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f1460:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          uVar5 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
          }
          FUN_0697978c();
        }
      }
      else if (uVar1 < 0x9d517617) {
        if (uVar1 == 0x98b39ef2) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d998,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da50;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1040;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1040:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar5 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
            }
            FUN_0697abd8();
          }
        }
        else if (uVar1 == 0x98cdfb92) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9b8,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da40;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0cbc;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0cbc:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697ade0();
          }
        }
        else if ((uVar1 == 0x9d517616) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9b0,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7d5e0;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f13a0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f13a0:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697a034();
        }
      }
      else if (uVar1 == 0xa4e3773a) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9a8,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7d5e0;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f1250;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f1250:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06979efc();
        }
      }
      else if (uVar1 == 0xa7c891ae) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d988,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c870;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f0eec;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f0eec:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697a9cc();
        }
      }
      else if ((uVar1 == unaff_w29) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da08,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7da40;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f157c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f157c:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0697af0c();
      }
      goto LAB_033ef378;
    }
    if (uVar1 <= unaff_w28) {
      if (uVar1 < 0x327b951d) {
        if (uVar1 < 0xfed466c) {
          if (uVar1 == 0x1c394f6) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c500,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)PTR_DAT_06f7c570;
              lVar4 = *unaff_x20;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033f0b78;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033f0b78:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06977fa8();
            }
          }
          else if ((uVar1 == 0xfed466b) &&
                  (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da10,0),
                  (uVar5 & 1) != 0)) {
            lVar7 = *(long *)PTR_DAT_06f7d5d8;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0ab4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0ab4:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06979b7c();
          }
        }
        else if (uVar1 == 0x17776653) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d550,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7c570;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f110c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f110c:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697b0e4();
          }
        }
        else if (uVar1 == 0x1d7b8c7a) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d958,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7d5d8;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0d94;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0d94:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06979a60();
          }
        }
        else if ((uVar1 == 0x327b951c) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c4e8,0),
                (uVar5 & 1) != 0)) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar3 = FUN_069779bc();
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar5 = FUN_068f9b78(uVar3,0,0);
          if ((uVar5 & 1) == 0) {
            FUN_069779bc();
            lVar7 = *(long *)PTR_DAT_06f7d5c8;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1694;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1694:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
          }
          else {
            lVar7 = *(long *)PTR_DAT_06f7d5d0;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1654;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1654:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            FUN_069779f8();
          }
        }
      }
      else if (uVar1 < 0x3df740ce) {
        if (uVar1 == 0x3662a319) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7da18,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da40;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0ff0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0ff0:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0697acb4();
          }
        }
        else if (uVar1 == 0x37efd363) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9d8,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7d5e0;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0c7c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0c7c:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06979dc4();
          }
        }
        else if ((uVar1 == 0x3df740cd) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9e0,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7da40;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f1350;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f1350:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697a644();
        }
      }
      else if (uVar1 == 0x3e39397b) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d5b8,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c570;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f1210;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f1210:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697b05c();
        }
      }
      else if (uVar1 == 0x42edcab4) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c4e0,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c880;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f0eac;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f0eac:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06977c94();
        }
      }
      else if ((uVar1 == unaff_w28) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d948,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7da40;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f152c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f152c:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0697a89c();
      }
      goto LAB_033ef378;
    }
    if (0x6bd123b2 < uVar1) {
      if (uVar1 < 0x6d2badf5) {
        if (uVar1 == 0x6c47a22e) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c4f0,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7c558;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f1084;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f1084:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06978030();
          }
        }
        else if (uVar1 == 0x6d23b07f) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d990,0);
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_06f7da38;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033f0d0c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033f0d0c:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar5 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
            }
            FUN_0697980c();
          }
        }
        else if ((uVar1 == 0x6d2badf4) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d5a0,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7c880;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f13e0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f13e0:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06977b5c();
        }
      }
      else if (uVar1 == 0x8211b90b) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c508,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c570;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f1290;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f1290:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06977f20();
        }
      }
      else if (uVar1 == 0x7295aa3b) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d950,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c880;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f0f2c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f0f2c:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697a514();
        }
      }
      else if ((uVar1 == 0x780acfd4) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d980,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c558;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f15cc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f15cc:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0697b16c();
      }
      goto LAB_033ef378;
    }
    if (uVar1 < 0x539c5c1c) {
      if (uVar1 == 0x536cdd75) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9e8,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)PTR_DAT_06f7c880;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033f0bfc;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033f0bfc:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_0697ab04();
        }
      }
      else if ((uVar1 == 0x539c5c1b) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d960,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c880;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f0b38;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f0b38:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0697a3dc();
      }
      goto LAB_033ef378;
    }
    if (uVar1 == 0x5aab2961) {
      uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c528,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_06f7c880;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f1190;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f1190:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06977dcc();
      }
      goto LAB_033ef378;
    }
    if (uVar1 == 0x63b980f2) {
      uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d968,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_06f7da38;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033f0e18;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033f0e18:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        uVar5 = (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
        }
        FUN_0697990c();
      }
      goto LAB_033ef378;
    }
    if ((uVar1 != 0x6bd123b2) ||
       (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d9c8,0), (uVar5 & 1) == 0))
    goto LAB_033ef378;
    unaff_x22 = *(long *)PTR_DAT_06f7c558;
    param_1 = *unaff_x20;
    param_3 = *(long *)(unaff_x22 + 0x20);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_033f1714;
    }
  }
LAB_033f16f8:
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033f1714:
  (*(code *)*puVar2)();
  return;
}


