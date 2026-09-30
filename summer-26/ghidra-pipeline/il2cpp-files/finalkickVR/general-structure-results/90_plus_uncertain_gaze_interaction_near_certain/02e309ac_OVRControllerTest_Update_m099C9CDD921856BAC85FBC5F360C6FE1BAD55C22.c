/*
FUNCTION_NAME: OVRControllerTest_Update_m099C9CDD921856BAC85FBC5F360C6FE1BAD55C22
ENTRY_POINT: 02e309ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRControllerTest_Update_m099C9CDD921856BAC85FBC5F360C6FE1BAD55C22
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  void **ppvVar11;
  undefined8 uVar12;
  void *pvVar13;
  String_t *pSVar14;
  List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE *pLVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined4 local_5e8;
  undefined4 local_5e4;
  void *local_5e0;
  undefined4 local_5d4;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  void *local_5b8;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  void *local_540;
  undefined4 local_534;
  undefined4 uStack_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 local_520;
  int local_51c;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  void *local_4b0;
  undefined4 local_4a4;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  int local_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  void *local_420;
  undefined4 local_414;
  undefined4 uStack_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  int local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  void *local_390;
  undefined4 local_384;
  undefined4 uStack_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  int local_36c;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  void *local_300;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined8 local_2d8;
  Il2CppObject *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  Il2CppArray *local_2a8;
  Il2CppObject *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  Il2CppArray *local_278;
  Il2CppObject *local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  Il2CppArray *local_248;
  Il2CppObject *local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  Il2CppArray *local_218;
  Il2CppArray *local_210;
  void *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int local_1d4;
  void *local_1d0;
  long local_1c8;
  void *local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  void *local_188;
  void *local_180;
  Il2CppFakeBox<int> aIStack_178 [28];
  int local_15c;
  undefined8 local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  Il2CppFakeBox<int> aIStack_138 [24];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  void *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e2;
  undefined1 local_e1;
  void *local_e0;
  undefined1 local_d1;
  void *local_d0;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined1 local_35;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  puVar4 = StringLiteral_532;
  puVar3 = StringLiteral_531;
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_<CreatePixelValidationMode>b__2__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__;
  local_30 = param_6;
  local_28 = param_5;
  if ((OVRControllerTest_Update_m099C9CDD921856BAC85FBC5F360C6FE1BAD55C22::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_533);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_534);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_535);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_536);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_537);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_538);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_539);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_540);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_541);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_542);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_543);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_544);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_545);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_546);
    OVRControllerTest_Update_m099C9CDD921856BAC85FBC5F360C6FE1BAD55C22::s_Il2CppMethodInitialized =
         1;
  }
  local_34 = 0;
  local_35 = 0;
  local_3c = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  local_c4 = OVRInput_GetActiveController_m1F0234F8333A98DC3F2BF49A9ECA6530139B6A65_inline
                       ((MethodInfo *)0x0);
  local_d0 = *(void **)(local_28 + 0x30);
  local_34 = local_c4;
  NullCheck(local_d0);
  StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(local_d0,0,0);
  local_e2 = OVRInput_GetControllerBatteryPercentRemaining_m71749CA732247A262C0274C88BCE39BE6F48FF08
                       (0x80000000,0);
  local_e0 = *(void **)(local_28 + 0x30);
  local_e1 = local_e2;
  local_d1 = local_e2;
  local_35 = local_e2;
  local_f0 = Box(*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__,
                 &local_e2);
  NullCheck(local_e0);
  local_f8 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                       (local_e0,*(undefined8 *)StringLiteral_535,local_f0,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_110 = OVRPlugin_GetAppFramerate_mCA873E5D8A4530857583F99C9DD9AD301A415742(0);
  local_108 = *(void **)(local_28 + 0x30);
  local_10c = local_110;
  local_fc = local_110;
  local_3c = local_110;
  local_118 = Box(*(Il2CppClass **)puVar1,&local_110);
  NullCheck(local_108);
  local_120 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (local_108,*(undefined8 *)StringLiteral_538,local_118,0);
  Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_138,*(Il2CppClass **)puVar2,&local_34);
  local_150 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_138,0);
  local_148 = *(void **)(local_28 + 0x30);
  local_140 = local_150;
  local_48 = local_150;
  NullCheck(local_148);
  local_158 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (local_148,*(undefined8 *)StringLiteral_542,local_150,0);
  local_15c = OVRInput_GetConnectedControllers_m70645A9B001F6880D104D779341958174139332D_inline
                        ((MethodInfo *)0x0);
  local_bc = local_15c;
  Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_178,*(Il2CppClass **)puVar2,&local_bc);
  local_190 = (void *)Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_178,0);
  local_188 = *(void **)(local_28 + 0x30);
  local_180 = local_190;
  local_50 = local_190;
  NullCheck(local_188);
  local_198 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (local_188,*(undefined8 *)StringLiteral_537,local_190,0);
  local_1a0 = *(void **)(local_28 + 0x30);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_1a8 = *puVar9;
  NullCheck(local_1a0);
  local_1b0 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (local_1a0,*(undefined8 *)StringLiteral_546,local_1a8,0);
  lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_1b8 = *(void **)(lVar10 + 8);
  NullCheck(local_1b8);
  BoolMonitor_Update_m8FDD0C6A9AAAD8BF1AE8F46C2FDF85222D804DBE(local_1b8,0);
  lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_1c0 = *(void **)(lVar10 + 8);
  local_1c8 = local_28 + 0x30;
  NullCheck(local_1c0);
  BoolMonitor_AppendToStringBuilder_mAC4CE128E241C2C710CFB148225B098A73FC9254(local_1c0,local_1c8,0)
  ;
  pvVar13 = local_50;
  local_1d0 = local_50;
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  *puVar9 = pvVar13;
  ppvVar11 = (void **)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  Il2CppCodeGenWriteBarrier(ppvVar11,local_1d0);
  local_1d4 = local_34;
  local_200 = OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
                        (local_34,0);
  local_208 = *(void **)(local_28 + 0x30);
  uStack_1fc = param_2;
  uStack_1f8 = param_3;
  uStack_1f4 = param_4;
  local_60._0_4_ = local_200;
  local_60._4_4_ = param_2;
  local_1f0 = local_200;
  uStack_1ec = param_2;
  uStack_58._0_4_ = param_3;
  uStack_58._4_4_ = param_4;
  uStack_1e8 = param_3;
  uStack_1e4 = param_4;
  local_218 = (Il2CppArray *)
              SZArrayNew(*(Il2CppClass **)
                          Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                         ,4);
  uStack_228 = (undefined4)uStack_58;
  uStack_224 = uStack_58._4_4_;
  local_230 = (undefined4)local_60;
  uStack_22c = local_60._4_4_;
  local_234 = (undefined4)local_60;
  local_238 = (undefined4)local_60;
  local_210 = local_218;
  local_240 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_238);
  NullCheck(local_218);
  ArrayElementTypeCheck(local_218,local_240);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_218,0,local_240);
  local_248 = local_218;
  uStack_258 = (undefined4)uStack_58;
  uStack_254 = uStack_58._4_4_;
  local_260 = (undefined4)local_60;
  uStack_25c = local_60._4_4_;
  local_264 = local_60._4_4_;
  local_268 = local_60._4_4_;
  local_270 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_268);
  NullCheck(local_248);
  ArrayElementTypeCheck(local_248,local_270);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_248,1,local_270);
  local_278 = local_248;
  uStack_288 = (undefined4)uStack_58;
  uStack_284 = uStack_58._4_4_;
  local_290 = (undefined4)local_60;
  uStack_28c = local_60._4_4_;
  local_294 = (undefined4)uStack_58;
  local_298 = (undefined4)uStack_58;
  local_2a0 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_298);
  NullCheck(local_278);
  ArrayElementTypeCheck(local_278,local_2a0);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_278,2,local_2a0);
  local_2a8 = local_278;
  uStack_2b8 = (undefined4)uStack_58;
  uStack_2b4 = uStack_58._4_4_;
  local_2c0 = (undefined4)local_60;
  uStack_2bc = local_60._4_4_;
  local_2c4 = uStack_58._4_4_;
  local_2c8 = uStack_58._4_4_;
  local_2d0 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_2c8);
  NullCheck(local_2a8);
  ArrayElementTypeCheck(local_2a8,local_2d0);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_2a8,3,local_2d0);
  NullCheck(local_208);
  local_2d8 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151
                        (local_208,*(undefined8 *)StringLiteral_536,local_2a8,0);
  local_2dc = local_34;
  local_318 = OVRInput_GetLocalControllerAngularVelocity_m4A05C6F3F878F119AEB2E5222154B773C3FE8F24
                        (local_34,0);
  local_300 = *(void **)(local_28 + 0x30);
  local_314 = local_318;
  local_308 = param_3;
  local_2f4 = local_318;
  uStack_2f0 = param_2;
  local_2ec = param_3;
  local_2e0 = param_3;
  local_68 = param_3;
  local_70._0_4_ = local_318;
  local_70._4_4_ = param_2;
  local_310 = local_318;
  uStack_30c = param_2;
  local_2e8 = local_318;
  uStack_2e4 = param_2;
  local_320 = Box(*(Il2CppClass **)puVar1,&local_318);
  local_330 = (undefined4)local_70;
  uStack_32c = local_70._4_4_;
  local_328 = local_68;
  local_334 = local_70._4_4_;
  local_338 = local_70._4_4_;
  local_340 = Box(*(Il2CppClass **)puVar1,&local_338);
  local_350 = (undefined4)local_70;
  uStack_34c = local_70._4_4_;
  local_348 = local_68;
  local_354 = local_68;
  local_358 = local_68;
  local_360 = Box(*(Il2CppClass **)puVar1,&local_358);
  NullCheck(local_300);
  local_368 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                        (local_300,*(undefined8 *)StringLiteral_545,local_320,local_340,local_360,0)
  ;
  local_36c = local_34;
  local_3a8 = OVRInput_GetLocalControllerAngularAcceleration_mEF0691E48437D9A49899E17BA2F5501DDDF9E762
                        (local_34,0);
  local_390 = *(void **)(local_28 + 0x30);
  local_3a4 = local_3a8;
  local_398 = param_3;
  local_384 = local_3a8;
  uStack_380 = param_2;
  local_37c = param_3;
  local_370 = param_3;
  local_78 = param_3;
  local_80._0_4_ = local_3a8;
  local_80._4_4_ = param_2;
  local_3a0 = local_3a8;
  uStack_39c = param_2;
  local_378 = local_3a8;
  uStack_374 = param_2;
  local_3b0 = Box(*(Il2CppClass **)puVar1,&local_3a8);
  local_3c0 = (undefined4)local_80;
  uStack_3bc = local_80._4_4_;
  local_3b8 = local_78;
  local_3c4 = local_80._4_4_;
  local_3c8 = local_80._4_4_;
  local_3d0 = Box(*(Il2CppClass **)puVar1,&local_3c8);
  local_3e0 = (undefined4)local_80;
  uStack_3dc = local_80._4_4_;
  local_3d8 = local_78;
  local_3e4 = local_78;
  local_3e8 = local_78;
  local_3f0 = Box(*(Il2CppClass **)puVar1,&local_3e8);
  NullCheck(local_390);
  local_3f8 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                        (local_390,*(undefined8 *)StringLiteral_539,local_3b0,local_3d0,local_3f0,0)
  ;
  local_3fc = local_34;
  local_438 = OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253
                        (local_34,0);
  local_420 = *(void **)(local_28 + 0x30);
  local_434 = local_438;
  local_428 = param_3;
  local_414 = local_438;
  uStack_410 = param_2;
  local_40c = param_3;
  local_400 = param_3;
  local_88 = param_3;
  local_90._0_4_ = local_438;
  local_90._4_4_ = param_2;
  local_430 = local_438;
  uStack_42c = param_2;
  local_408 = local_438;
  uStack_404 = param_2;
  local_440 = Box(*(Il2CppClass **)puVar1,&local_438);
  local_450 = (undefined4)local_90;
  uStack_44c = local_90._4_4_;
  local_448 = local_88;
  local_454 = local_90._4_4_;
  local_458 = local_90._4_4_;
  local_460 = Box(*(Il2CppClass **)puVar1,&local_458);
  local_470 = (undefined4)local_90;
  uStack_46c = local_90._4_4_;
  local_468 = local_88;
  local_474 = local_88;
  local_478 = local_88;
  local_480 = Box(*(Il2CppClass **)puVar1,&local_478);
  NullCheck(local_420);
  local_488 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                        (local_420,*(undefined8 *)StringLiteral_541,local_440,local_460,local_480,0)
  ;
  local_48c = local_34;
  local_4c8 = OVRInput_GetLocalControllerVelocity_m2E8ED9F38FCB0E781C796E72917D27F65A3EFF14
                        (local_34,0);
  local_4b0 = *(void **)(local_28 + 0x30);
  local_4c4 = local_4c8;
  local_4b8 = param_3;
  local_4a4 = local_4c8;
  uStack_4a0 = param_2;
  local_49c = param_3;
  local_490 = param_3;
  local_98 = param_3;
  local_a0._0_4_ = local_4c8;
  local_a0._4_4_ = param_2;
  local_4c0 = local_4c8;
  uStack_4bc = param_2;
  local_498 = local_4c8;
  uStack_494 = param_2;
  local_4d0 = Box(*(Il2CppClass **)puVar1,&local_4c8);
  local_4e0 = (undefined4)local_a0;
  uStack_4dc = local_a0._4_4_;
  local_4d8 = local_98;
  local_4e4 = local_a0._4_4_;
  local_4e8 = local_a0._4_4_;
  local_4f0 = Box(*(Il2CppClass **)puVar1,&local_4e8);
  local_500 = (undefined4)local_a0;
  uStack_4fc = local_a0._4_4_;
  local_4f8 = local_98;
  local_504 = local_98;
  local_508 = local_98;
  local_510 = Box(*(Il2CppClass **)puVar1,&local_508);
  NullCheck(local_4b0);
  local_518 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                        (local_4b0,*(undefined8 *)StringLiteral_544,local_4d0,local_4f0,local_510,0)
  ;
  local_51c = local_34;
  local_558 = OVRInput_GetLocalControllerAcceleration_m89D4A94FC2E1282CED140A6BC5D54527B1E98ECD
                        (local_34,0);
  local_540 = *(void **)(local_28 + 0x30);
  local_554 = local_558;
  local_548 = param_3;
  local_534 = local_558;
  uStack_530 = param_2;
  local_52c = param_3;
  local_520 = param_3;
  local_a8 = param_3;
  local_b0._0_4_ = local_558;
  local_b0._4_4_ = param_2;
  local_550 = local_558;
  uStack_54c = param_2;
  local_528 = local_558;
  uStack_524 = param_2;
  local_560 = Box(*(Il2CppClass **)puVar1,&local_558);
  local_570 = (undefined4)local_b0;
  uStack_56c = local_b0._4_4_;
  local_568 = local_a8;
  local_574 = local_b0._4_4_;
  local_578 = local_b0._4_4_;
  local_580 = Box(*(Il2CppClass **)puVar1,&local_578);
  local_590 = (undefined4)local_b0;
  uStack_58c = local_b0._4_4_;
  local_588 = local_a8;
  local_594 = local_a8;
  local_598 = local_a8;
  local_5a0 = Box(*(Il2CppClass **)puVar1,&local_598);
  NullCheck(local_540);
  local_5a8 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                        (local_540,*(undefined8 *)StringLiteral_540,local_560,local_580,local_5a0,0)
  ;
  local_5c0 = OVRSimpleJSON_JSONNode__get_Value(1,0x80000000,0);
  local_5b8 = *(void **)(local_28 + 0x30);
  local_5bc = local_5c0;
  local_5ac = local_5c0;
  local_b4 = local_5c0;
  local_5c8 = Box(*(Il2CppClass **)puVar1,&local_5c0);
  NullCheck(local_5b8);
  local_5d0 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (local_5b8,*(undefined8 *)StringLiteral_543,local_5c8,0);
  local_5e8 = OVRSimpleJSON_JSONNode__get_Value(4,0x80000000,0);
  local_5e0 = *(void **)(local_28 + 0x30);
  local_5e4 = local_5e8;
  local_5d4 = local_5e8;
  local_b8 = local_5e8;
  uVar12 = Box(*(Il2CppClass **)puVar1,&local_5e8);
  NullCheck(local_5e0);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (local_5e0,*(undefined8 *)StringLiteral_534,uVar12,0);
  local_c0 = 0;
  while( true ) {
    iVar5 = local_c0;
    pLVar15 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)(local_28 + 0x28);
    NullCheck(pLVar15);
    iVar8 = List_1_get_Count_m7A8A86B2A7AAFD5364696673958E1865D5E5CC57_inline
                      (pLVar15,*(MethodInfo **)StringLiteral_533);
    iVar6 = local_c0;
    if (iVar8 <= iVar5) break;
    pLVar15 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)(local_28 + 0x28);
    NullCheck(pLVar15);
    pvVar13 = (void *)List_1_get_Item_m5EBEB3919F9BFAD2E9465B74A2F1BB944D0B4559
                                (pLVar15,iVar6,*(MethodInfo **)puVar3);
    NullCheck(pvVar13);
    BoolMonitor_Update_m8FDD0C6A9AAAD8BF1AE8F46C2FDF85222D804DBE(pvVar13);
    iVar5 = local_c0;
    pLVar15 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)(local_28 + 0x28);
    NullCheck(pLVar15);
    pvVar13 = (void *)List_1_get_Item_m5EBEB3919F9BFAD2E9465B74A2F1BB944D0B4559
                                (pLVar15,iVar5,*(MethodInfo **)puVar3);
    lVar10 = local_28 + 0x30;
    NullCheck(pvVar13);
    BoolMonitor_AppendToStringBuilder_mAC4CE128E241C2C710CFB148225B098A73FC9254(pvVar13,lVar10,0);
    local_c0 = il2cpp_codegen_add<int,int>(local_c0,1);
  }
  uVar12 = *(undefined8 *)(local_28 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar12,0);
  if ((bVar7 & 1) != 0) {
    pIVar16 = *(Il2CppObject **)(local_28 + 0x20);
    pIVar17 = *(Il2CppObject **)(local_28 + 0x30);
    NullCheck(pIVar17);
    pSVar14 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar17);
    NullCheck(pIVar16);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar16,pSVar14);
  }
  return;
}


