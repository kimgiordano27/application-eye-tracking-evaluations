/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 01872e84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 146
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose
               (ulong param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ArrayUtility_RemoveAt<Material>__);
    thunk_FUN_00d48444(StringLiteral_3917);
    *(undefined1 *)(unaff_x21 + 0x70d) = 1;
  }
  uVar2 = FUN_01872c34(param_2);
  puVar1 = StringLiteral_3917;
  if ((uVar2 & 1) == 0) {
    if (param_3 == (long *)0x0) {
Oculus_Interaction_Input_HandSkeletonOVR__Awake:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar2 = thunk_FUN_015fe514(uVar3,*(undefined8 *)puVar1,0);
    puVar1 = Method_UnityEngine_ProBuilder_ArrayUtility_RemoveAt<Material>__;
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(*param_3 + 0x318))(param_3,*(undefined8 *)(*param_3 + 800));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_01858914(uVar3,0);
      if (DAT_0377977c == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ArrayUtility_RemoveAt<Material>__);
        DAT_0377977c = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto Oculus_Interaction_Input_HandSkeletonOVR__Awake;
      uVar3 = FUN_01858a94(lVar4,*(undefined8 *)(param_2 + 0xc0),0);
      *(undefined8 *)(param_2 + 0x100) = uVar3;
    }
  }
  return;
}


