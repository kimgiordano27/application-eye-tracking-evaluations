/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 0414bb70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(3);
  }
  if (((int)unaff_w19 < 0) || (*(int *)(param_2 + 0x18) < (int)unaff_w19)) {
    FUN_04d9c908(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_046280c0(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - unaff_w19) < iVar1) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      uVar2 = (ulong)*(uint *)(lVar3 + 0x20);
      if (0 < (int)*(uint *)(lVar3 + 0x20)) {
        piVar5 = *(int **)(lVar3 + 0x18);
        if (piVar5 == (int *)0x0) goto LAB_0414bc50;
        uVar4 = (ulong)(uint)piVar5[6];
        do {
          if (uVar4 == 0) {
LAB_0414bc38:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < piVar5[8]) {
            if (*(uint *)(param_2 + 0x18) <= unaff_w19) goto LAB_0414bc38;
            lVar3 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(int *)(param_2 + lVar3 * 4 + 0x20) = piVar5[0xe];
          }
          uVar2 = uVar2 - 1;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 8;
        } while (uVar2 != 0);
      }
      return;
    }
  }
LAB_0414bc50:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


