/*
FUNCTION_NAME: OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3
ENTRY_POINT: 02dabf48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_14;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3
               (undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined1 auStack_108 [88];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 local_54;
  int local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uVar7 = uStack_a8;
  local_30 = param_4;
  local_28 = param_3;
  local_24 = param_2;
  if ((OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    uVar7 = uStack_a8;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_16CD36253CA3793C17E6703E0AE283CDA2396668DD55974A092157BD0D64B271
              );
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3::s_Il2CppMethodInitialized = 1;
  }
  uStack_a8 = uVar7;
  uVar4 = uStack_a8._4_4_;
  uVar7 = uStack_a8;
  uStack_a8._4_4_ = uVar4;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar7 = uStack_a8;
  local_34 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  uStack_a8 = uVar7;
  uVar7 = uStack_a8;
  if ((local_34 == 3) && (local_38 = local_28, local_28 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    local_28 = -1;
  }
  uStack_a8 = uVar7;
  uVar4 = uStack_a8._4_4_;
  uVar7 = uStack_a8;
  uStack_a8._4_4_ = uVar4;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar7 = uStack_a8;
  local_40 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  uStack_a8 = uVar7;
  uVar7 = uStack_a8;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uStack_a8 = uVar7;
  uVar7 = uStack_a8;
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uStack_a8 = uVar7;
  uVar7 = uStack_a8;
  local_48 = *puVar6;
  local_49 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_40,local_48,0);
  uStack_a8 = uVar7;
  uVar7 = uStack_a8;
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar5 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar6,0)
    ;
    uVar4 = local_24;
    if (((bVar5 & 1) == 0) || (local_28 != 0)) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Field_<PrivateImplementationDetails>_16CD36253CA3793C17E6703E0AE283CDA2396668DD55974A092157BD0D64B271
                );
      OVRP_0_1_2_ovrp_GetNodePose_m9EF6663B74E7B01F28E13ACB255BB9594E9D5E25(uVar4,0);
      param_1[1] = uStack_158;
      *param_1 = local_160;
      *(undefined8 *)((long)param_1 + 0x14) = uStack_14c;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_150,uStack_158._4_4_);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      OVRP_1_8_0_ovrp_GetNodePose2_m66FC50D7808388A3727ED7DE8F36C0AB20FC9CF3(0,uVar4,0);
      param_1[1] = uStack_138;
      *param_1 = local_140;
      *(undefined8 *)((long)param_1 + 0x14) = uStack_12c;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_130,uStack_138._4_4_);
    }
  }
  else {
    local_50 = local_28;
    local_54 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD(local_50,local_54,0)
    ;
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    memcpy(&local_b0,auStack_108,0x58);
    uStack_a8 = uVar7;
    uVar7 = uStack_a8;
    param_1[1] = uVar7;
    *param_1 = local_b0;
    *(undefined8 *)((long)param_1 + 0x14) = uStack_9c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_a0,uStack_a8._4_4_);
  }
  return;
}


