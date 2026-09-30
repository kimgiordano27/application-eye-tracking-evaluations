/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._ShowBindingsForActionSet$$Invoke
ENTRY_POINT: 02dad4a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRInput__ShowBindingsForActionSet__Invoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  byte bStack0000000000000047;
  
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x30) = *puVar5;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),
                     in_stack_00000008);
  *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x31) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    bStack0000000000000047 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
    bStack0000000000000047 = bStack0000000000000047 & 1;
    if (bStack0000000000000047 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      if (*(int *)(unaff_x29 + -8) != 0) {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Field_<PrivateImplementationDetails>_49230341F29F11E05C96D792708390210C6215F18315D1A96C6356AB5E2F590B
                   ,0);
      }
      uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      iVar3 = OVRP_1_15_0_ovrp_EnqueueSetupLayer_m9636B252CBF86741188162002EB00D3F493BB93B
                        (in_stack_00000010,uVar4,0);
      *(bool *)(unaff_x29 + -1) = iVar3 == 0;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -8);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    uVar2 = OVRP_1_28_0_ovrp_EnqueueSetupLayer2_mEE8D5C3330ABEE55F9AF36150E863510B6BB50CB
                      (in_stack_00000010,*(undefined4 *)(unaff_x29 + -0x38),
                       *(undefined8 *)(unaff_x29 + -0x40),0);
    *(undefined4 *)(unaff_x29 + -0x44) = uVar2;
    *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x44) == 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


