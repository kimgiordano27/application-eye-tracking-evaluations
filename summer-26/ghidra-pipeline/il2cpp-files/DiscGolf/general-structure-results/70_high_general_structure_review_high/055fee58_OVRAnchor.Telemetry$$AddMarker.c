/*
FUNCTION_NAME: OVRAnchor.Telemetry$$AddMarker
ENTRY_POINT: 055fee58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint OVRAnchor_Telemetry__AddMarker(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((DAT_06dbb8fb & 1) == 0) {
    FUN_02d965b8(System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo);
    DAT_06dbb8fb = 1;
  }
  local_28 = 0;
  local_30 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_04f07b60(*(long *)(param_1 + 0x30),param_2,&local_30,
                         *(undefined8 *)System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo);
    if ((uVar1 & 1) != 0) {
      FUN_055feedc(param_1);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


