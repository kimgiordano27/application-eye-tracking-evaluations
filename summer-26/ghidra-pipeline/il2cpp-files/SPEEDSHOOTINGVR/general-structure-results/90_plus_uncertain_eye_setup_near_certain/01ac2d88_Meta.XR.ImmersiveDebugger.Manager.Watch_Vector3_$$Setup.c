/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$Setup
ENTRY_POINT: 01ac2d88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__Setup(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x24;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  puVar2 = (undefined8 *)FUN_0103c348();
  fVar8 = (float)(*(code *)*puVar2)();
  plVar3 = (long *)FUN_021a6128();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
          goto LAB_01ac2e14;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x1d);
LAB_01ac2e14:
    fVar9 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
    fVar11 = *(float *)(unaff_x19 + 0x3e0);
    plVar3 = (long *)FUN_021a6128();
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 01ac2e58 to 01bc2ebb has its CatchHandler @ 01ac2f64 */
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x1d);
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings:
      fVar10 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar4 = *(long *)(unaff_x19 + 0x430);
      if (lVar4 == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x438);
      }
      if (*(long *)(unaff_x19 + 0x410) != 0) {
        fVar8 = (unaff_s9 - unaff_s10) - fVar8;
        plVar3 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
        auVar13 = FUN_021bc63c((fVar11 - fVar8) - fVar10,0);
        puVar1 = PTR_DAT_0234c290;
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0234c290) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x20) * 0x10 + 0x138);
                goto LAB_01ac2f40;
              }
              uVar6 = uVar6 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)PTR_DAT_0234c290,0x20);
LAB_01ac2f40:
          (*(code *)*puVar2)(plVar3,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar2[1]);
          if ((lVar4 != 0) && (plVar3 = (long *)FUN_021a6128(lVar4,0), plVar3 != (long *)0x0)) {
            lVar4 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x24) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x2c) * 0x10 + 0x138);
                  goto LAB_01ac2fbc;
                }
                uVar6 = uVar6 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x2c);
LAB_01ac2fbc:
            fVar11 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
            if (*(long *)(unaff_x19 + 0x410) != 0) {
              fVar10 = *(float *)(unaff_x19 + 0x3e4);
              fVar12 = *(float *)(unaff_x19 + 0x3d8);
              plVar3 = (long *)FUN_021a6128(*(long *)(unaff_x19 + 0x410),0);
              if (plVar3 != (long *)0x0) {
                lVar4 = *plVar3;
                uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                fVar8 = (fVar11 + fVar10) * fVar12 - (unaff_s12 + fVar8 + fVar9);
                if (uVar6 != 0) {
                  piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) == *unaff_x24) {
                      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x2c) * 0x10 + 0x138);
                      goto LAB_01ac3050;
                    }
                    uVar6 = uVar6 - 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x2c);
LAB_01ac3050:
                fVar9 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
                if (ABS(fVar9 - fVar8) <= DAT_00657468) {
                  return;
                }
                if (*(long *)(unaff_x19 + 0x410) != 0) {
                  plVar3 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
                  auVar13 = FUN_021bc63c(fVar8,0);
                  if (plVar3 != (long *)0x0) {
                    lVar4 = *plVar3;
                    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar6 != 0) {
                      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x36) * 0x10 + 0x138);
                          goto LAB_01ac3114;
                        }
                        uVar6 = uVar6 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0x36);
LAB_01ac3114:
                    /* WARNING: Could not recover jumptable at 0x01ac3140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar2)(plVar3,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar2[1]);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


