/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$Awake
ENTRY_POINT: 02dc024c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte Meta_XR_Samples_SampleMetadata__Awake(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000037;
  
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -8);
  if (*(int *)(unaff_x29 + -0x28) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(unaff_x29 + -8) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack0000000000000037 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x30),*puVar4,0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0xc);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    bVar2 = OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2
                      (uVar1,uStack000000000000002c,uVar3,0);
    *(byte *)(unaff_x29 + -1) = bVar2 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


