/*
FUNCTION_NAME: BayatGames.SaveGamePro.Serialization.Formatters.Json.JsonFormatter$$DeserializeInto
ENTRY_POINT: 033da6f0
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

void BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonFormatter__DeserializeInto
               (long param_1)

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
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  
  do {
    (**(code **)(param_1 + 8))();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_06976710();
LAB_033d9be4:
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033d9c30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033d9c30:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_033dab10;
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
          goto LAB_033d9c8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033d9c8c:
    uVar3 = (*(code *)*puVar2)();
    uVar1 = FUN_03562980(uVar3,0);
    if (unaff_w27 <= uVar1) {
      if (unaff_w29 < uVar1) {
        if (unaff_w24 < uVar1) {
          if (uVar1 == 0xd5bdbb42) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7cdb0,0);
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
                    goto LAB_033da974;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033da974:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              UnityEngine_UIElements_Internal_ColumnMover___ctor();
            }
          }
          else if (uVar1 == 0xe0ab5f35) {
            uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d488,0);
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
                    goto LAB_033da934;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar4 = FUN_02feb5b8();
LAB_033da934:
              lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
              (**(code **)(lVar4 + 8))();
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_06976af0();
            }
          }
          else if ((uVar1 == 0xeb1d4ff4) &&
                  (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c518,0),
                  (uVar5 & 1) != 0)) {
            lVar7 = *(long *)PTR_DAT_06f7c560;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da9b4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da9b4:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            uVar5 = (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
            }
            FUN_068fd73c();
          }
        }
        else if (uVar1 == 0xa3f2a130) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7cfe8,0);
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
                  goto LAB_033da82c;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da82c:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06975e64();
          }
        }
        else if ((uVar1 == unaff_w24) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7cda0,0),
                (uVar5 & 1) != 0)) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar3 = FUN_06976124();
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar5 = FUN_068f9b78(uVar3,0,0);
          if ((uVar5 & 1) == 0) {
            FUN_06976124();
            lVar7 = *(long *)PTR_DAT_06f7cff8;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033daa78;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033daa78:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
          }
          else {
            lVar7 = *(long *)PTR_DAT_06f7d000;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033da9f8;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da9f8:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            FUN_06976160();
          }
        }
      }
      else if (uVar1 < 0x95f72994) {
        if (uVar1 == 0x921cb7f4) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d480,0);
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
                  goto FUN_033da7ac;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
FUN_033da7ac:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_069769e0();
          }
        }
        else if ((uVar1 == 0x95f72993) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c4f8,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7c578;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da660;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da660:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          uVar3 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar3,uVar3);
          }
          FUN_068f635c();
        }
      }
      else if (uVar1 == 0x9bd01463) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d478,0);
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
                goto LAB_033da8ac;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da8ac:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06976b78();
        }
      }
      else if ((uVar1 == unaff_w29) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d468,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c558;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da724;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da724:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06976bf8();
      }
      goto LAB_033d9be4;
    }
    if (unaff_w28 < uVar1) {
      if (uVar1 < 0x542fcc9c) {
        if (uVar1 == 0x4351eb54) {
          uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d490,0);
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
                  goto LAB_033da7ec;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033da7ec:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_06976a68();
          }
        }
        else if ((uVar1 == 0x542fcc9b) &&
                (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d470,0),
                (uVar5 & 1) != 0)) {
          lVar7 = *(long *)PTR_DAT_06f7c570;
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_033da6a4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da6a4:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06976958();
        }
      }
      else if (uVar1 == 0x87223973) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7cfe0,0);
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
                goto LAB_033da8f0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_033da8f0:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06975de4();
        }
      }
      else if ((uVar1 == 0x8d39bde6) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c520,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c578;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da768;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da768:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        uVar3 = (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8(uVar3,uVar3);
        }
        FUN_068fc96c();
      }
      goto LAB_033d9be4;
    }
    if (uVar1 < 0x2f3b39f) {
      if (uVar1 == 0x2a6ca3d) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7ced0,0);
        if ((uVar5 & 1) != 0) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar3 = FUN_069760a4();
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar5 = FUN_068f9b78(uVar3,0,0);
          if ((uVar5 & 1) == 0) {
            FUN_069760a4();
            lVar7 = *(long *)PTR_DAT_06f7cff8;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033daaac;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033daaac:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
          }
          else {
            lVar7 = *(long *)PTR_DAT_06f7d000;
            lVar4 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_033daa38;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar4 = FUN_02feb5b8();
LAB_033daa38:
            lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
            (**(code **)(lVar4 + 8))();
            FUN_069760e0();
          }
        }
      }
      else if ((uVar1 == 0x2f3b39e) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c530,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c558;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da61c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da61c:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06975d64();
      }
      goto LAB_033d9be4;
    }
    if (uVar1 == 0x58c4484) {
      uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7cfc8,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_06f7c880;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_033da86c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_033da86c:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06976884();
      }
      goto LAB_033d9be4;
    }
    if ((uVar1 != unaff_w28) ||
       (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7d420,0), (uVar5 & 1) == 0))
    goto LAB_033d9be4;
    lVar7 = *(long *)PTR_DAT_06f7c570;
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_033da6e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_02feb5b8();
LAB_033da6e4:
    param_1 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_033dab2c;
    }
  }
LAB_033dab10:
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_033dab2c:
  (*(code *)*puVar2)();
  return;
}


