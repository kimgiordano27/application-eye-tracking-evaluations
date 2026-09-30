/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetRawZeroPoseToStandingAbsoluteTrackingPose
ENTRY_POINT: 02daf6d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_CVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000027;
  
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined4 *)(unaff_x29 + -0x10) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    uVar2 = *puVar3;
    in_stack_00000008[1] = puVar3[1];
    *in_stack_00000008 = uVar2;
    uVar2 = *(undefined8 *)((long)puVar3 + 0xc);
    *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
    *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_30_0_ovrp_GetTrackingTransformRawPose_mB04FBB26C652ECCE00BFFB937D29D88106FCDE35
                      (unaff_x29 + -0x28,0);
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
      in_stack_00000008[1] = *(undefined8 *)(unaff_x29 + -0x20);
      *in_stack_00000008 = uVar2;
      uVar2 = *(undefined8 *)(unaff_x29 + -0x1c);
      *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)(unaff_x29 + -0x14);
      *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
      uVar2 = *puVar3;
      in_stack_00000008[1] = puVar3[1];
      *in_stack_00000008 = uVar2;
      uVar2 = *(undefined8 *)((long)puVar3 + 0xc);
      *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
      *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
    }
  }
  return;
}


