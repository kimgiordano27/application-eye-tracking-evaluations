/*
FUNCTION_NAME: OVRAnchor_CreateSpatialAnchorAsync_mCA54220226BB973DE9F66961155F6A633FED4833
ENTRY_POINT: 02d2b494
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
OVRAnchor_CreateSpatialAnchorAsync_mCA54220226BB973DE9F66961155F6A633FED4833
          (ulong *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d0 [47];
  byte local_1a1;
  undefined1 auStack_1a0 [40];
  undefined8 local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined8 local_130;
  ulong local_120;
  undefined4 local_118;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  
  puVar1 = Method_System_Nullable<long>__ctor__;
  local_38 = param_2;
  if ((OVRAnchor_CreateSpatialAnchorAsync_mCA54220226BB973DE9F66961155F6A633FED4833::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_MaterialManager_<>c__DisplayClass12_0_<RemoveStencilMaterial>b__0__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_MaterialManager_<>c__DisplayClass13_0_<ReleaseBaseMaterial>b__0__);
    OVRAnchor_CreateSpatialAnchorAsync_mCA54220226BB973DE9F66961155F6A633FED4833::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  memset(&local_68,0,0x28);
  local_90 = 0;
  uStack_88 = 0;
  uStack_88._4_4_ = 0;
  local_80 = 0;
  local_80._4_4_ = 0;
  local_78 = 0;
  il2cpp_codegen_initobj(&local_68,0x28);
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  local_94 = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A();
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  local_68 = local_94;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  il2cpp_codegen_initobj(&local_90,0x1c);
  uVar2 = local_80;
  uVar5 = uStack_88;
  local_b0 = *param_1;
  uStack_9c = *(undefined8 *)((long)param_1 + 0x14);
  uStack_a4 = *(undefined8 *)((long)param_1 + 0xc);
  uStack_e4 = (undefined4)((ulong)uStack_9c >> 0x20);
  uStack_e8 = (undefined4)uStack_9c;
  uStack_ec = (undefined4)((ulong)uStack_a4 >> 0x20);
  local_f0 = (undefined4)uStack_a4;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  local_c0 = uStack_a4;
  uStack_b8 = uStack_9c;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  local_e0 = OVRExtensions_ToFlippedZQuatf_m3C842AE77FAD382FD91D0F8E81CCA1EF9393BCEF(local_f0,0);
  uVar5 = local_80;
  uStack_c8 = CONCAT44(uStack_e4,uStack_e8);
  local_90 = CONCAT44(uStack_ec,local_e0);
  local_120 = *param_1;
  uStack_fc = *(undefined8 *)((long)param_1 + 0x14);
  uStack_104 = *(undefined8 *)((long)param_1 + 0xc);
  local_118 = uStack_108;
  local_140 = uStack_108;
  local_148._4_4_ = (undefined4)(local_120 >> 0x20);
  uVar6 = local_148._4_4_;
  local_148 = local_120;
  uVar3 = local_80._4_4_;
  local_80 = uVar5;
  local_d0 = local_90;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uStack_e4;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  local_13c = OVRExtensions_ToFlippedZVector3f_m62CC475050FFCDA6E53230DCE20070AB0228D6FA
                        (local_120 & 0xffffffff,0);
  uVar5 = uStack_88;
  local_130 = CONCAT44(uVar6,local_13c);
  uStack_168 = (undefined4)uVar5;
  local_170 = local_90;
  uStack_15c = CONCAT44(uStack_108,uVar6);
  uStack_164 = CONCAT84(local_130,uStack_88._4_4_);
  local_64 = local_90;
  uStack_138 = uVar6;
  uVar3 = uStack_88._4_4_;
  uStack_88 = uVar5;
  local_80 = local_130;
  uStack_58 = uStack_164;
  uStack_50 = uStack_15c;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar3;
  uVar2 = local_80;
  local_80._4_4_ = uVar6;
  local_178 = OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF(0);
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  local_48 = local_178;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  memcpy(auStack_1a0,&local_68,0x28);
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  memcpy(auStack_1d0,auStack_1a0,0x28);
  uVar2 = local_80;
  uVar5 = uStack_88;
  uVar6 = uStack_88._4_4_;
  uStack_88 = uVar5;
  uVar3 = local_80._4_4_;
  local_80 = uVar2;
  uVar5 = uStack_88;
  uStack_88._4_4_ = uVar6;
  uVar2 = local_80;
  local_80._4_4_ = uVar3;
  local_1a1 = OVRPlugin_CreateSpatialAnchor_mF6FFB445CDAAC948FCCD37A0714B2E90CF5B238A
                        (auStack_1d0,&local_40,0);
  uVar2 = local_80;
  uVar5 = uStack_88;
  local_1a1 = local_1a1 & 1;
  uStack_88 = uVar5;
  local_80 = uVar2;
  if (local_1a1 == 0) {
    uVar6 = uStack_88._4_4_;
    uVar3 = local_80._4_4_;
    uVar5 = uStack_88;
    uStack_88._4_4_ = uVar6;
    uVar2 = local_80;
    local_80._4_4_ = uVar3;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar2 = local_80;
    uVar5 = uStack_88;
    uVar6 = uStack_88._4_4_;
    uStack_88 = uVar5;
    uVar3 = local_80._4_4_;
    local_80 = uVar2;
    uVar5 = uStack_88;
    uStack_88._4_4_ = uVar6;
    uVar2 = local_80;
    local_80._4_4_ = uVar3;
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar2 = local_80;
    uVar5 = uStack_88;
    uStack_218 = puVar4[1];
    local_220 = *puVar4;
    local_210 = puVar4[2];
    local_1f0 = local_220;
    uStack_1e8 = uStack_218;
    local_1e0 = local_210;
    uVar6 = uStack_88._4_4_;
    uStack_88 = uVar5;
    uVar3 = local_80._4_4_;
    local_80 = uVar2;
    uVar5 = uStack_88;
    uStack_88._4_4_ = uVar6;
    uVar2 = local_80;
    local_80._4_4_ = uVar3;
    uVar5 = OVRTask_FromResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m2327B3462F3AE24CF8E1B96BC49D7FFC17FC07E2
                      (&local_220,
                       *(undefined8 *)
                        Method_TMPro_TMP_MaterialManager_<>c__DisplayClass13_0_<ReleaseBaseMaterial>b__0__
                      );
                    /* WARNING: Ignoring partial resolution of indirect */
    local_30._0_8_ = uVar5;
  }
  else {
    uVar6 = uStack_88._4_4_;
    uVar3 = local_80._4_4_;
    uVar5 = uStack_88;
    uStack_88._4_4_ = uVar6;
    uVar2 = local_80;
    local_80._4_4_ = uVar3;
    uVar5 = OVRTask_FromRequest_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m88B1F3F03B56F41B1F4664CCA0E93EC8EE22F3AA
                      (local_40,*(MethodInfo **)
                                 Method_TMPro_TMP_MaterialManager_<>c__DisplayClass12_0_<RemoveStencilMaterial>b__0__
                      );
                    /* WARNING: Ignoring partial resolution of indirect */
    local_30._0_8_ = uVar5;
  }
  return local_30;
}


