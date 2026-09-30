/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_auto_accept_rules_t$$Dispose
ENTRY_POINT: 0793d880
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void Unity_Services_Vivox_vx_req_account_list_auto_accept_rules_t__Dispose
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x26;
  long unaff_x27;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
                    /* try { // try from 0793d890 to 07a3d893 has its CatchHandler @ 0793d9cc */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0793d8a4 to 07a3d8ab has its CatchHandler @ 0793d9c8 */
    FUN_03a8a718(OVRPlugin_Vector4f___TypeInfo);
    FUN_03a8a718(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
                    /* try { // try from 0793d8bc to 07a3d8c3 has its CatchHandler @ 0793da00 */
    FUN_03a8a718(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_03a8a718(OVRPlugin_Vector3f___TypeInfo);
                    /* try { // try from 0793d8d0 to 07a3d8d7 has its CatchHandler @ 0793d9fc */
    *(undefined1 *)(unaff_x27 + 0xdc5) = 1;
  }
  puVar3 = MS_Internal_Xml_XPath_Operator_Op___TypeInfo;
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo;
  puVar1 = OVRPlugin_Vector4f___TypeInfo;
  in_stack_00000080 = 0;
                    /* try { // try from 0793d8e4 to 07a3d8f7 has its CatchHandler @ 0793da20 */
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*(undefined8 *)puVar1);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  in_stack_00000070 = param_2;
  thunk_FUN_03afed3c(&stack0x00000070,param_2);
  in_stack_00000050 = param_3;
  thunk_FUN_03afed3c(&stack0x00000050,param_3);
  in_stack_00000048 = param_4;
  thunk_FUN_03afed3c(&stack0x00000048,param_4);
  in_stack_00000068 = param_5;
  thunk_FUN_03afed3c(&stack0x00000068,param_5);
  in_stack_00000058 = param_6;
  thunk_FUN_03afed3c(&stack0x00000058,param_6);
  in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,param_7);
  thunk_FUN_03afed3c(&stack0x00000040);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_0412fc5c((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar3);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar2);
  return;
}


