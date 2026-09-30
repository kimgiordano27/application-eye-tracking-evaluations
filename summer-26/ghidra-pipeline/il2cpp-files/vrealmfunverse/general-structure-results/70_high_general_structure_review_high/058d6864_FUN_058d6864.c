/*
FUNCTION_NAME: FUN_058d6864
ENTRY_POINT: 058d6864
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void FUN_058d6864(long param_1)

{
  undefined *puVar1;
  
  if ((DAT_066d3356 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06321558);
    FUN_02b3c81c(Meta_XR_ImmersiveDebugger_Manager_Category_TypeInfo);
    FUN_02b3c81c(Method_Oculus_Platform_Request<DestinationList>__ctor__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
                );
    FUN_02b3c81c(PTR_DAT_06321568);
    FUN_02b3c81c(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector4,_float>__ctor__);
    FUN_02b3c81c(
                Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_get_Count__
                );
    DAT_066d3356 = 1;
  }
  puVar1 = PTR_DAT_06321558;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03a1fcfc((long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06321558);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_039f7188((long *)(param_1 + 0x10),
                 *(undefined8 *)Method_Oculus_Platform_Request<DestinationList>__ctor__);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_03a1fcfc((long *)(param_1 + 0x30),*(undefined8 *)puVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_03a7bc58((long *)(param_1 + 0x40),
                 *(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_Category_TypeInfo);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_03aaf444((long *)(param_1 + 0x50),
                 *(undefined8 *)Method_Unity_Properties_Property<Vector4,_float>__ctor__);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_03a1fcfc((long *)(param_1 + 0x58),*(undefined8 *)puVar1);
    return;
  }
  return;
}


