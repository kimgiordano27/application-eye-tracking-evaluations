/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 0147cd34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 156
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString
              (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  
  if (param_4 + param_3 <= in_w8 * 4) {
    iVar2 = FUN_0147c47c();
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1 >> 2;
  }
  thunk_FUN_00d48444(StringLiteral_8570);
  uVar3 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar4 = thunk_FUN_00d48444(StringLiteral_2446);
  FUN_016f44f8(uVar3,uVar4,0);
  uVar4 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_LockForChanges__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar4);
}


