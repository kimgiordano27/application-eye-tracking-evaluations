/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorPortNotAvailable_get
ENTRY_POINT: 07881b6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorPortNotAvailable_get(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x22;
  long unaff_x23;
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
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 07881b78 to 07981b7b has its CatchHandler @ 07881d18 */
    FUN_03a8a718(
                System_Collections_Generic_IEnumerator<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo);
                    /* try { // try from 07881b94 to 07981b97 has its CatchHandler @ 07881d38 */
    FUN_03a8a718(System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0x767) = 1;
  }
  puVar3 = System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerator<InputBindingCompositeContext_PartBinding>_TypeInfo
  ;
                    /* try { // try from 07881bb0 to 07981bcf has its CatchHandler @ 07881d1c */
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338a3c(&stack0x00000008,*(undefined8 *)puVar1);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_03afed3c(&stack0x00000048);
  thunk_FUN_03afed3c(&stack0x00000050);
  thunk_FUN_03afed3c(&stack0x00000040);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_04136258((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar2);
  FUN_05338a50((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar3);
  return;
}


