/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 049a3668
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke
               (long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x25;
  long unaff_x29;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined1 auVar11 [16];
  
  fVar9 = (float)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))
                           ();
  auVar11 = FUN_06dbea40(unaff_s8 * ABS(unaff_s10 - fVar9),0);
  puVar2 = PTR_DAT_072814d8;
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072814d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x3c) * 0x10 + 0x138);
          goto LAB_049a36fc;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(param_1,*(long *)PTR_DAT_072814d8,0x3c);
LAB_049a36fc:
    (*(code *)*puVar3)(param_1,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
    plVar4 = (long *)thunk_FUN_032cddd4();
    if (*plVar4 != 0) {
      plVar4 = (long *)FUN_06da6244(*plVar4,0);
      piVar5 = (int *)thunk_FUN_032cddd4();
      iVar1 = *piVar5;
      fVar9 = (float)(*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158))();
      if (unaff_s10 <= fVar9) {
        fVar9 = unaff_s10;
      }
      fVar10 = unaff_s8 * fVar9;
      if (iVar1 != 0) {
        fVar10 = (unaff_s8 - unaff_s8 * ABS(unaff_s10 - unaff_s9)) - unaff_s8 * fVar9;
      }
      auVar11 = FUN_06dbea40(fVar10,0);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
              goto LAB_049a3804;
            }
            uVar8 = uVar8 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_032937ac(plVar4,lVar6,0x1d);
LAB_049a3804:
        (*(code *)*puVar3)(plVar4,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
        plVar4 = (long *)thunk_FUN_032cddd4();
        if (*plVar4 != 0) {
          plVar4 = (long *)FUN_06da6244(*plVar4,0);
          piVar5 = (int *)thunk_FUN_032cddd4();
          fVar9 = unaff_s10 * unaff_s8;
          if (*piVar5 != 0) {
            fVar9 = unaff_s8 - unaff_s10 * unaff_s8;
          }
          auVar11 = FUN_06dbea40(fVar9,0);
          if (plVar4 != (long *)0x0) {
            lVar7 = *plVar4;
            lVar6 = *(long *)puVar2;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x1d) * 0x10 + 0x138);
                  goto LAB_049a38e0;
                }
                uVar8 = uVar8 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_032937ac(plVar4,lVar6,0x1d);
LAB_049a38e0:
            (*(code *)*puVar3)(plVar4,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
            FUN_06db0a88();
            if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


