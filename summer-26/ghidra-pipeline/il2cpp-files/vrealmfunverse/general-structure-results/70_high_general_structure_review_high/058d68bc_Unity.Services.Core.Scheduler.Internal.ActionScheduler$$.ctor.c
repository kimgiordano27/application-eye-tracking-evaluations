/*
FUNCTION_NAME: Unity.Services.Core.Scheduler.Internal.ActionScheduler$$.ctor
ENTRY_POINT: 058d68bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Services_Core_Scheduler_Internal_ActionScheduler___ctor(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xcd8));
  FUN_02b3c81c(Method_Unity_Properties_Property<Vector4,_float>__ctor__);
  FUN_02b3c81c(
              Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_get_Count__
              );
  *(undefined1 *)(unaff_x20 + 0x356) = 1;
  puVar1 = PTR_DAT_06321558;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_03a1fcfc((long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_06321558);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_039f7188((long *)(unaff_x19 + 0x10),
                 *(undefined8 *)Method_Oculus_Platform_Request<DestinationList>__ctor__);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_03a1fcfc((long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_03a7bc58((long *)(unaff_x19 + 0x40),
                 *(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_Category_TypeInfo);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_03aaf444((long *)(unaff_x19 + 0x50),
                 *(undefined8 *)Method_Unity_Properties_Property<Vector4,_float>__ctor__);
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_03a1fcfc((long *)(unaff_x19 + 0x58),*(undefined8 *)puVar1);
    return;
  }
  return;
}


