/*
FUNCTION_NAME: FUN_05c4ede4
ENTRY_POINT: 05c4ede4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05c4ede4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__;
  local_38 = param_3;
  uStack_34 = param_4;
  local_28 = param_1;
  uStack_24 = param_2;
  if ((DAT_066d7242 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313cc8);
    FUN_02b3c81c(Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__);
    DAT_066d7242 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
  }
  if (*(long *)(*(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__ + 0x38) == 0)
  {
    FUN_02b76274();
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_6 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d72b8 == (code *)0x0) {
    DAT_066d72b8 = (code *)FUN_02b3c7e0(
                                       "UnityEngine.Graphics::Blit4_Injected(System.IntPtr,System.IntPtr,UnityEngine.Vector2&,UnityEngine.Vector2&)"
                                       );
  }
  (*DAT_066d72b8)(uVar3,uVar2,&local_28,&local_38);
  return;
}


