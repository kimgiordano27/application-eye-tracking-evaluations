/*
FUNCTION_NAME: OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41
ENTRY_POINT: 02dc397c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41
               (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  __9 *extraout_x1;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *local_50;
  FinallyHelper<OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41::__9,false>
  aFStack_48 [16];
  uint local_38;
  byte local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_32C4B32E4B1096AF208C666B7076D090CCC69E9B29C30E0786D41A82BAEEF5E5
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  local_30 = param_4;
  local_28 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  if ((OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_32C4B32E4B1096AF208C666B7076D090CCC69E9B29C30E0786D41A82BAEEF5E5
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_8585E89B676AAF771AE193E60AA76C821D3C76FB47F2F559ABED89C86BD1CA49
              );
    OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41::s_Il2CppMethodInitialized =
         1;
  }
  local_31 = 0;
  local_32 = 0;
  local_38 = 0;
  OVRProfilerScope__ctor_m9420381BC476AD6837745E63335B61DE79C2E33B
            (&local_31,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_8585E89B676AAF771AE193E60AA76C821D3C76FB47F2F559ABED89C86BD1CA49
             ,0);
  local_50 = &local_31;
  il2cpp::utils::Finally<OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41::__9>
            ((utils *)&local_50,extraout_x1);
  puVar8 = local_28;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar7 = *puVar6;
  uStack_78 = (undefined4)puVar6[1];
  uVar10 = *(undefined8 *)((long)puVar6 + 0x14);
  uVar9 = *(undefined8 *)((long)puVar6 + 0xc);
  uStack_74 = (undefined4)uVar9;
  puVar8[1] = CONCAT44(uStack_74,uStack_78);
  *puVar8 = uVar7;
  *(undefined8 *)((long)puVar8 + 0x14) = uVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = uVar9;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar8,0);
  uVar3 = local_1c;
  puVar8 = local_28;
  if ((uVar4 & 1) == 0) {
    local_38 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_64_0_ovrp_LocateSpace_m531AB17B13FCBF6BBA1263E553324E3894E8E279
                      (puVar8,&local_18,uVar3,0);
    local_38 = (uint)(iVar5 == 0);
  }
  local_32 = local_38 != 0;
  il2cpp::utils::
  FinallyHelper<OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41::$_9,false>::
  ~FinallyHelper(aFStack_48);
  return local_32 & 1;
}


