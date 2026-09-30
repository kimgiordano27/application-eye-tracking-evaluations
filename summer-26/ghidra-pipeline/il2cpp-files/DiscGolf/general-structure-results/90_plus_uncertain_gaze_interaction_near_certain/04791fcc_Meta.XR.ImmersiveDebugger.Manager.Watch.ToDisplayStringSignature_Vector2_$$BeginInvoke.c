/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$BeginInvoke
ENTRY_POINT: 04791fcc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__BeginInvoke
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  
  if ((*(byte *)(unaff_x19 + 0x7cb) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff858);
    *(undefined1 *)(unaff_x19 + 0x7cb) = 1;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lVar2 = *(long *)PTR_DAT_069ff858;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          iVar5 = *piVar7 + 6;
          goto LAB_047920b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    uVar3 = 6;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          iVar5 = *piVar7 + 1;
LAB_047920b8:
          puVar1 = (undefined8 *)(lVar4 + (long)iVar5 * 0x10 + 0x138);
          goto LAB_047920c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    uVar3 = 1;
  }
  puVar1 = (undefined8 *)FUN_02dd004c(plVar8,lVar2,uVar3);
LAB_047920c0:
                    /* WARNING: Could not recover jumptable at 0x047920d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar8,puVar1[1]);
  return;
}


