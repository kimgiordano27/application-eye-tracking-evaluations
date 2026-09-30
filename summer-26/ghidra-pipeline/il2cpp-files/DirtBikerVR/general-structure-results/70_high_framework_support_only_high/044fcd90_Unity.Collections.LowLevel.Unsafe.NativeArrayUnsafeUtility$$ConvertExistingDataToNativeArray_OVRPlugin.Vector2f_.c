/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector2f>
ENTRY_POINT: 044fcd90
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


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
               (undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000048 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
  uStack0000000000000050 = uStack0000000000000040;
  uStack0000000000000058 = uStack0000000000000048;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044fcd70 with catch @ 044fcd94
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044fcd58 with catch @ 044fcd98
                        */
  FUN_06670abc(0);
  in_stack_00000030 = (undefined1 *)&stack0x00000040;
  in_stack_00000028 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000038 = FUN_067ba8f4(param_2,0);
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
    uStack0000000000000048 = in_stack_00000010;
    uStack0000000000000040 = in_stack_00000008;
    uStack0000000000000058 = in_stack_00000020;
    uStack0000000000000050 = in_stack_00000018;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08491278 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    Newtonsoft_Json_Bson_BsonWriter__RemoveParent(param_2,1,&stack0x00000040,0);
  }
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    FUN_067ba838(&stack0x00000040,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


