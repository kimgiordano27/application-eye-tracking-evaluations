/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_add_session_t_session_handle_get
ENTRY_POINT: 078d8e88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_add_session_t_session_handle_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x21;
  long *plVar4;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  plVar4 = *(long **)(unaff_x21 + 0x6a0);
  if ((*(byte *)(unaff_x22 + 0xa75) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084ad6a8);
    FUN_03a8a718(UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ad6b8);
    FUN_03a8a718(PTR_DAT_084ad6a0);
    *(undefined1 *)(unaff_x22 + 0xa75) = 1;
  }
  puVar3 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_TypeInfo;
  puVar2 = PTR_DAT_084ad6b8;
  puVar1 = PTR_DAT_084ad6a8;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*(undefined8 *)puVar1);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  in_stack_00000040 = param_1;
  thunk_FUN_03afed3c(&stack0x00000040,param_1);
  in_stack_00000048 = param_2;
  thunk_FUN_03afed3c(&stack0x00000048,param_2);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_04139b88((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar3);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar2);
  return;
}


