/*
FUNCTION_NAME: BayatGames.SaveGamePro.Serialization.Formatters.Json.JsonFormatter$$Serialize
ENTRY_POINT: 033d9d70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033dab68) */

void BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonFormatter__Serialize(uint param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  
  do {
    if ((bool)in_ZR) {
      uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d480,0);
      if ((uVar2 & 1) != 0) {
        lVar6 = *(long *)PTR_DAT_06f7c570;
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
              goto FUN_033da7ac;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        lVar4 = FUN_02feb5b8();
FUN_033da7ac:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_069769e0();
      }
    }
    else if ((param_1 == 0x95f72993) &&
            (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7c4f8,0),
            (uVar2 & 1) != 0)) {
      lVar6 = *(long *)PTR_DAT_06f7c578;
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_033da660;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_033da660:
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
      uVar3 = (**(code **)(lVar4 + 8))();
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8(uVar3,uVar3);
      }
      FUN_068f635c();
    }
LAB_033d9be4:
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_033d9c30;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_033d9c30:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_033dab10;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_033d9c8c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_033d9c8c:
    unaff_x22 = (*(code *)*puVar1)();
    param_1 = FUN_03562980(unaff_x22,0);
    if (param_1 < unaff_w27) {
      if (unaff_w28 < param_1) {
        if (param_1 < 0x542fcc9c) {
          if (param_1 == 0x4351eb54) {
            uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d490,0);
            if ((uVar2 & 1) != 0) {
              lVar6 = *(long *)PTR_DAT_06f7c570;
              lVar4 = *unaff_x20;
              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033da7ec;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033da7ec:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06976a68();
            }
          }
          else if ((param_1 == 0x542fcc9b) &&
                  (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d470,0),
                  (uVar2 & 1) != 0)) {
            lVar6 = *(long *)PTR_DAT_06f7c570;
            lVar4 = *unaff_x20;
            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da6a4;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da6a4:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06976958();
          }
        }
        else if (param_1 == 0x87223973) {
          uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7cfe0,0);
          if ((uVar2 & 1) != 0) {
            lVar6 = *(long *)PTR_DAT_06f7c558;
            lVar4 = *unaff_x20;
            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da8f0;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da8f0:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06975de4();
          }
        }
        else if ((param_1 == 0x8d39bde6) &&
                (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7c520,0),
                (uVar2 & 1) != 0)) {
          lVar6 = *(long *)PTR_DAT_06f7c578;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da768;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da768:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          uVar3 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar3,uVar3);
          }
          FUN_068fc96c();
        }
      }
      else if (param_1 < 0x2f3b39f) {
        if (param_1 == 0x2a6ca3d) {
          uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7ced0,0);
          if ((uVar2 & 1) != 0) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            uVar3 = FUN_069760a4();
            if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar2 = FUN_068f9b78(uVar3,0,0);
            if ((uVar2 & 1) == 0) {
              FUN_069760a4();
              lVar6 = *(long *)PTR_DAT_06f7cff8;
              lVar4 = *unaff_x20;
              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033daaac;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033daaac:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
              (**(code **)(lVar4 + 8))();
            }
            else {
              lVar6 = *(long *)PTR_DAT_06f7d000;
              lVar4 = *unaff_x20;
              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_033daa38;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033daa38:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
              (**(code **)(lVar4 + 8))();
              FUN_069760e0();
            }
          }
        }
        else if ((param_1 == 0x2f3b39e) &&
                (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7c530,0),
                (uVar2 & 1) != 0)) {
          lVar6 = *(long *)PTR_DAT_06f7c558;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da61c;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da61c:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06975d64();
        }
      }
      else if (param_1 == 0x58c4484) {
        uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7cfc8,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = *(long *)PTR_DAT_06f7c880;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da86c;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da86c:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06976884();
        }
      }
      else if ((param_1 == unaff_w28) &&
              (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d420,0),
              (uVar2 & 1) != 0)) {
        lVar6 = *(long *)PTR_DAT_06f7c570;
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da6e4;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da6e4:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06976710();
      }
      goto LAB_033d9be4;
    }
    if (unaff_w29 < param_1) {
      if (unaff_w24 < param_1) {
        if (param_1 == 0xd5bdbb42) {
          uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7cdb0,0);
          if ((uVar2 & 1) != 0) {
            lVar6 = *(long *)PTR_DAT_06f7c570;
            lVar4 = *unaff_x20;
            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da974;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da974:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            UnityEngine_UIElements_Internal_ColumnMover___ctor();
          }
        }
        else if (param_1 == 0xe0ab5f35) {
          uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d488,0);
          if ((uVar2 & 1) != 0) {
            lVar6 = *(long *)PTR_DAT_06f7c570;
            lVar4 = *unaff_x20;
            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar2 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da934;
                }
                uVar2 = uVar2 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da934:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06976af0();
          }
        }
        else if ((param_1 == 0xeb1d4ff4) &&
                (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7c518,0),
                (uVar2 & 1) != 0)) {
          lVar6 = *(long *)PTR_DAT_06f7c560;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da9b4;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da9b4:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          uVar2 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar2,uVar2 & 0xffffffff);
          }
          FUN_068fd73c();
        }
      }
      else if (param_1 == 0xa3f2a130) {
        uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7cfe8,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = *(long *)PTR_DAT_06f7c570;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da82c;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da82c:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06975e64();
        }
      }
      else if ((param_1 == unaff_w24) &&
              (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7cda0,0),
              (uVar2 & 1) != 0)) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar3 = FUN_06976124();
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar2 = FUN_068f9b78(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          FUN_06976124();
          lVar6 = *(long *)PTR_DAT_06f7cff8;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033daa78;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033daa78:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
        }
        else {
          lVar6 = *(long *)PTR_DAT_06f7d000;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da9f8;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da9f8:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
          FUN_06976160();
        }
      }
      goto LAB_033d9be4;
    }
    if (0x95f72993 < param_1) {
      if (param_1 == 0x9bd01463) {
        uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d478,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = *(long *)PTR_DAT_06f7c558;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da8ac;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da8ac:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06976b78();
        }
      }
      else if ((param_1 == unaff_w29) &&
              (uVar2 = thunk_FUN_05971620(unaff_x22,*(undefined8 *)PTR_DAT_06f7d468,0),
              (uVar2 & 1) != 0)) {
        lVar6 = *(long *)PTR_DAT_06f7c558;
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da724;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da724:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar6);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06976bf8();
      }
      goto LAB_033d9be4;
    }
    in_ZR = param_1 == 0x921cb7f4;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_033dab2c;
    }
  }
LAB_033dab10:
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_033dab2c:
  (*(code *)*puVar1)();
  return;
}


