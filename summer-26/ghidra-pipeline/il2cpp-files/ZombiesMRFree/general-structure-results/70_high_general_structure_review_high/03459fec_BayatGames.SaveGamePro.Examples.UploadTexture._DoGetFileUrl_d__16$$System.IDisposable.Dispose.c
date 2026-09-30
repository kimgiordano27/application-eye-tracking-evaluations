/*
FUNCTION_NAME: BayatGames.SaveGamePro.Examples.UploadTexture.<DoGetFileUrl>d__16$$System.IDisposable.Dispose
ENTRY_POINT: 03459fec
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


/* WARNING: Removing unreachable block (ram,0x0345a160) */

void BayatGames_SaveGamePro_Examples_UploadTexture_<DoGetFileUrl>d__16__System_IDisposable_Dispose
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
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  
code_r0x03459fec:
  param_1 = param_1 + 0x138;
  do {
    lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(param_1 + 8),unaff_x22);
    uVar5 = (**(code **)(lVar4 + 8))();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
    }
    FUN_06973e54();
LAB_03459ae4:
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03459b30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_03459b30:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0345a0ec;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03459b8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_03459b8c:
    uVar3 = (*(code *)*puVar2)();
    uVar1 = FUN_03562980(uVar3,0);
    if (uVar1 < unaff_w26) {
      if (uVar1 == unaff_w27) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7e380,0);
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
                goto LAB_03459f2c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_03459f2c:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06973c3c();
        }
      }
      else if (uVar1 == unaff_w23) {
        uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7f2f0,0);
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
                goto LAB_03459eec;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_03459eec:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          FUN_06973d4c();
        }
      }
      else if ((uVar1 == 0x6b861f3c) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7f308,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7f310;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto FUN_03459f6c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
FUN_03459f6c:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        uVar5 = (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
        }
        FUN_06973dd4();
      }
      goto LAB_03459ae4;
    }
    if (uVar1 <= unaff_w29) {
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
                goto LAB_0345a034;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_02feb5b8();
LAB_0345a034:
          lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
          uVar3 = (**(code **)(lVar4 + 8))();
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8(uVar3,uVar3);
          }
          FUN_068fc96c();
        }
      }
      else if ((uVar1 == unaff_w29) &&
              (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7f2f8,0), (uVar5 & 1) != 0
              )) {
        lVar7 = *(long *)PTR_DAT_06f7c570;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_03459fb0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_03459fb0:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_06973cc4();
      }
      goto LAB_03459ae4;
    }
    if (uVar1 == unaff_w28) {
      uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7c518,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_06f7c560;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_0345a078;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = FUN_02feb5b8();
LAB_0345a078:
        lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
        uVar5 = (**(code **)(lVar4 + 8))();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8(uVar5,uVar5 & 0xffffffff);
        }
        FUN_068fd73c();
      }
      goto LAB_03459ae4;
    }
    if ((uVar1 != 0xfecd52d2) ||
       (uVar5 = thunk_FUN_05971620(uVar3,*(undefined8 *)PTR_DAT_06f7f300,0), (uVar5 & 1) == 0))
    goto LAB_03459ae4;
    unaff_x22 = *(long *)PTR_DAT_06f7f310;
    param_1 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x20)) {
          param_1 = param_1 + (long)(int)(*piVar6 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10;
          goto code_r0x03459fec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = FUN_02feb5b8();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0345a108;
    }
  }
LAB_0345a0ec:
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_0345a108:
  (*(code *)*puVar2)();
  return;
}


