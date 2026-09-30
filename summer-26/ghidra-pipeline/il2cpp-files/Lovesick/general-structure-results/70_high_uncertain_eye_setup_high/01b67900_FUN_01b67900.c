/*
FUNCTION_NAME: FUN_01b67900
ENTRY_POINT: 01b67900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01b67900(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_0377e475 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqaddq_u32__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_TypeExtensions_<>c__DisplayClass48_0_<GetOperatorMethods>b__0__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__);
    DAT_0377e475 = 1;
  }
  puVar2 = Method_Sirenix_Utilities_TypeExtensions_<>c__DisplayClass48_0_<GetOperatorMethods>b__0__;
  puVar1 = Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__;
  if (*(long *)(param_1 + 0x58) != 0) {
    auVar3 = FUN_00c34db4(param_1 + 0x30,
                          *(undefined8 *)
                           Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__
                         );
    FUN_01342b50((long *)(param_1 + 0x58),auVar3._0_8_,auVar3._8_8_,*(undefined8 *)puVar2);
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsqaddq_u32__;
  if (*(long *)(param_1 + 0x68) != 0) {
    auVar3 = FUN_00c34db4(param_1 + 0x30,*(undefined8 *)puVar1);
    FUN_01342b50((long *)(param_1 + 0x68),auVar3._0_8_,auVar3._8_8_,*(undefined8 *)puVar2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    auVar3 = FUN_00c34db4(param_1 + 0x30,*(undefined8 *)puVar1);
    FUN_01342b50((long *)(param_1 + 0x48),auVar3._0_8_,auVar3._8_8_,*(undefined8 *)puVar2);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


