/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector3f>
ENTRY_POINT: 044fcd9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector3f>
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_06670abc();
  in_stack_00000030 = &stack0x00000040;
  in_stack_00000028 = 0;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000038 = FUN_067ba8f4();
  uVar2 = FUN_067bb280(&stack0x00000038,0);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = Newtonsoft_Json_Bson_BsonWriter__Flush(&stack0x00000038,unaff_w21 & 1,0),
       (uVar2 & 1) == 0)) || (uVar2 = FUN_067bb2a8(), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_067bb2f8(&stack0x00000038), (uVar2 & 1) == 0)) {
    uVar2 = FUN_067bae40();
    puVar1 = PTR_DAT_08491278;
    if ((uVar2 & 1) != 0) {
      unaff_x22 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491278);
      FUN_067bae4c(unaff_x22,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_067bb38c(&stack0x00000008,unaff_x22,unaff_w21 & 1,0);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08491278 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    Newtonsoft_Json_Bson_BsonWriter__RemoveParent();
  }
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    FUN_067ba838(&stack0x00000040,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


