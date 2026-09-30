/*
FUNCTION_NAME: OVRSpectatorModeDomeTest_Update_m03F53D146D71392487FDA83C91D9F77971BB780A
ENTRY_POINT: 02e63ed8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSpectatorModeDomeTest_Update_m03F53D146D71392487FDA83C91D9F77971BB780A
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_61;
  ulong local_60;
  undefined8 uStack_58;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  byte local_31;
  ulong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRSpectatorModeDomeTest_Update_m03F53D146D71392487FDA83C91D9F77971BB780A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRSpectatorModeDomeTest_Update_m03F53D146D71392487FDA83C91D9F77971BB780A::
    s_Il2CppMethodInitialized = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_31 = *(byte *)(local_18 + 0x20) & 1;
  if (local_31 == 0) {
    OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37(local_18,0);
  }
  else {
    local_40 = *(undefined8 *)(local_18 + 0x28);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    local_41 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_40,0);
    local_41 = local_41 & 1;
    if (local_41 != 0) {
      local_42 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
      local_42 = local_42 & 1;
      if (local_42 != 0) {
        System_Linq_Expressions_MethodCallExpression1__get_ArgumentCount(local_18);
        OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
                  (local_18,0);
        il2cpp_codegen_initobj(&local_30,0x10);
        uStack_58 = uStack_28;
        local_60 = local_30;
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
        uStack_78 = uStack_58;
        uVar5 = uStack_78;
        local_80 = local_60;
        uVar2 = local_80;
        local_80._4_4_ = (undefined4)(local_60 >> 0x20);
        uVar3 = local_80._4_4_;
        uStack_78._0_4_ = (undefined4)uStack_58;
        uVar4 = (undefined4)uStack_78;
        uStack_78._4_4_ = (undefined4)((ulong)uStack_58 >> 0x20);
        uVar6 = uStack_78._4_4_;
        local_80 = uVar2;
        uStack_78 = uVar5;
        local_61 = OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4
                             (local_60 & 0xffffffff,uVar3,uVar4,uVar6,0,0,0);
        local_61 = local_61 & 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_c0 = *puVar7;
        uStack_98 = (undefined4)puVar7[1];
        uStack_ac = *(undefined8 *)((long)puVar7 + 0x14);
        uStack_94 = (undefined4)*(undefined8 *)((long)puVar7 + 0xc);
        uStack_90 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20);
        uStack_b8 = uStack_98;
        uStack_b4 = uStack_94;
        uStack_b0 = uStack_90;
        local_a0 = local_c0;
        uStack_8c = uStack_ac;
        OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58
                  (0,0,&local_c0,0);
      }
    }
  }
  return;
}


