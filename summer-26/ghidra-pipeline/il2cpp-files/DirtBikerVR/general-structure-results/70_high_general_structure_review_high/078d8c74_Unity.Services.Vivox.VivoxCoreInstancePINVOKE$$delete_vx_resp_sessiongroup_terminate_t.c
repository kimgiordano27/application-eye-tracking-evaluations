/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_terminate_t
ENTRY_POINT: 078d8c74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_terminate_t(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x21;
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
  
  FUN_03a8a718();
  FUN_03a8a718(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
                    /* try { // try from 078d8c84 to 079d8ceb has its CatchHandler @ 078d87b4 */
  FUN_03a8a718(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xa73) = 1;
  puVar3 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo;
  puVar2 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo;
  puVar1 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*(undefined8 *)puVar1);
                    /* try { // try from 078d8cec to 079d8cfb has its CatchHandler @ 078d8cfc */
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_03afed3c(&stack0x00000040);
  thunk_FUN_03afed3c(&stack0x00000048);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_04139e64((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar2);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar3);
  return;
}


