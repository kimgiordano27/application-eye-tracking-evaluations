/*
FUNCTION_NAME: ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C
ENTRY_POINT: 03ea6fc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;strong_foveation_hits_6;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_known_unity_or_il2cpp_false_positive_family;functionality_foveated_rendering
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  __9 *extraout_x1;
  undefined8 uVar10;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  ulong local_390 [2];
  float local_37c;
  void *local_378;
  undefined4 local_36c;
  void *local_368;
  ShaderPassesU5BU5D_t7B5C5A350D645D5D0195906F61E7B5729A612716 *local_360;
  int local_354;
  int local_350;
  undefined4 local_34c;
  int local_348;
  int local_344;
  ShaderPassesU5BU5D_t7B5C5A350D645D5D0195906F61E7B5729A612716 *local_340;
  int local_334;
  RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF *local_330;
  int local_324;
  RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF *local_320;
  long local_318;
  long local_310;
  undefined8 *local_308;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *local_2f0;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *local_2d8;
  RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF *local_2d0;
  long local_2c8;
  long local_2c0;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  byte local_299;
  void *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  void *local_288;
  undefined4 local_27c;
  void *local_278;
  int local_26c;
  void *local_268;
  int local_25c;
  void *local_258;
  int local_24c;
  void *local_248;
  int local_23c;
  int local_238;
  byte local_231;
  void *local_230;
  byte local_221;
  void *local_220;
  CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E *local_218;
  undefined8 *local_210;
  undefined1 auStack_208 [40];
  undefined1 auStack_1e0 [40];
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined4 local_184;
  RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF *local_180;
  void *local_178;
  undefined1 auStack_170 [52];
  undefined1 auStack_13c [52];
  void *local_108;
  void *local_100;
  byte local_f5;
  void *local_e8;
  undefined1 *local_e0;
  FinallyHelper<ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C::__9,false>
  aFStack_d8 [16];
  undefined8 local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 *local_b0;
  Il2CppObject *local_a8;
  Il2CppObject *local_a0;
  Il2CppArray *local_98;
  Il2CppArray *local_90;
  byte local_81;
  undefined8 local_80;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  ShaderPassesU5BU5D_t7B5C5A350D645D5D0195906F61E7B5729A612716 *local_60;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *local_58;
  undefined1 local_49;
  void *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  long local_30;
  undefined8 local_28;
  
  puVar2 = 
  PTR_ScreenSpaceAmbientOcclusionPass_t021FDB6B7E9228241E759B06CBCF13B9CFE903C5_il2cpp_TypeInfo_var_048c9b00
  ;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral08A43B15A45E316279EE278D3546A5DF8B4E344D_048ca7b8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral0DF194FAA1988FCAE9C25D90709586B1E4F8BE47_048ca7c0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral33C22CE665FEB81776C71A69D70D941A76149644_048ca7c8);
    ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (void *)0x0;
  local_49 = 0;
  local_58 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)0x0;
  local_60 = (ShaderPassesU5BU5D_t7B5C5A350D645D5D0195906F61E7B5729A612716 *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_80 = *(undefined8 *)(local_30 + 0xf8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  local_81 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_80,0);
  local_81 = local_81 & 1;
  if (local_81 != 0) {
    local_98 = (Il2CppArray *)
               SZArrayNew(*(Il2CppClass **)
                           Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                          ,1);
    local_90 = local_98;
    local_a0 = (Il2CppObject *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(local_30);
    NullCheck(local_a0);
    local_a8 = (Il2CppObject *)VirtualFuncInvoker0<String_t*>::Invoke(8,local_a0);
    NullCheck(local_98);
    ArrayElementTypeCheck(local_98,local_a8);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_98,0,local_a8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C
              (*(undefined8 *)PTR__stringLiteral08A43B15A45E316279EE278D3546A5DF8B4E344D_048ca7b8,
               local_98,0);
    return;
  }
  local_b0 = local_38;
  local_c0 = (void *)*local_38;
  local_c8 = *(undefined8 *)(local_30 + 0x140);
  local_b8 = local_c0;
  local_48 = local_c0;
  ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC(&local_49,local_c0,local_c8,0);
  local_e0 = &local_49;
  il2cpp::utils::
  Finally<ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C::__9>
            ((utils *)&local_e0,extraout_x1);
  local_e8 = *(void **)(local_30 + 0x188);
  NullCheck(local_e8);
  local_f5 = *(byte *)((long)local_e8 + 0x15) & 1;
  if (local_f5 == 0) {
    local_100 = local_48;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__);
    CoreUtils_SetKeyword_mF882266E1C4C1EC2F7824B5B0F45EC94BC015FDD
              (local_100,
               *(undefined8 *)PTR__stringLiteral0DF194FAA1988FCAE9C25D90709586B1E4F8BE47_048ca7c0,1,
               0);
  }
  local_108 = local_48;
  memcpy(auStack_13c,(void *)(local_30 + 0x150),0x34);
  pvVar5 = local_108;
  memcpy(auStack_170,auStack_13c,0x34);
  PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35(pvVar5,auStack_170,0);
  local_178 = local_48;
  local_180 = *(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF **)(local_30 + 0x128);
  NullCheck(local_180);
  local_184 = 3;
  local_190 = RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF::GetAt(local_180,3);
  RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(auStack_1e0,local_190,0);
  memcpy(auStack_1b8,auStack_1e0,0x28);
  NullCheck(local_178);
  pvVar5 = local_178;
  uVar10 = *(undefined8 *)PTR__stringLiteral33C22CE665FEB81776C71A69D70D941A76149644_048ca7c8;
  memcpy(auStack_208,auStack_1b8,0x28);
  CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69
            (pvVar5,uVar10,auStack_208,0);
  local_210 = local_38;
  local_218 = (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E *)(local_38 + 3);
  local_220 = (void *)CameraData_get_xr_m5E9EFE56E6BABFF14ADC71E87D5A19BA7CDDF697_inline
                                (local_218,(MethodInfo *)0x0);
  NullCheck(local_220);
  bVar6 = XRPass_get_supportsFoveatedRendering_mC6E13A1C877BBEE86D48AEEA9A552074C2452B73
                    (local_220,0);
  local_221 = bVar6 & 1;
  if ((bVar6 & 1) == 0) goto LAB_03ea7594;
  local_230 = *(void **)(local_30 + 0x188);
  NullCheck(local_230);
  local_231 = *(byte *)((long)local_230 + 0x14) & 1;
  if (local_231 == 0) {
    local_238 = SystemInfo_get_foveatedRenderingCaps_mA18C54E186EB539F4095FFA0A8E9D87F5AEC0D26(0);
    if (local_238 + -2 != 0) {
      local_23c = SystemInfo_get_foveatedRenderingCaps_mA18C54E186EB539F4095FFA0A8E9D87F5AEC0D26
                            (local_238 + -2,0);
      iVar1 = local_23c + -1;
      if (iVar1 == 0) {
        local_248 = *(void **)(local_30 + 0x188);
        NullCheck(local_248);
        iVar1 = *(int *)((long)local_248 + 0x18);
        local_24c = iVar1;
        if (iVar1 == 0) goto LAB_03ea7518;
      }
      local_25c = SystemInfo_get_foveatedRenderingCaps_mA18C54E186EB539F4095FFA0A8E9D87F5AEC0D26
                            (iVar1,0);
      if (local_25c == 1) {
        local_268 = local_48;
        NullCheck(local_48);
        CommandBuffer_SetFoveatedRenderingMode_mEB94470BC91694B62B28AC5EE1383DA636D3B43B
                  (local_268,1,0);
      }
      goto LAB_03ea7594;
    }
  }
LAB_03ea7518:
  local_258 = local_48;
  NullCheck(local_48);
  CommandBuffer_SetFoveatedRenderingMode_mEB94470BC91694B62B28AC5EE1383DA636D3B43B(local_258,0,0);
LAB_03ea7594:
  local_26c = *(int *)(local_30 + 0x130);
  if (local_26c == 2) {
    local_278 = local_48;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_27c = *(undefined4 *)(lVar7 + 0xc);
    NullCheck(local_278);
    CommandBuffer_SetGlobalInt_m504CCC2A3EEE7EE80A937258A429EC071AA5D92D(local_278,local_27c,1,0);
    local_288 = local_48;
    lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_28c = *(undefined4 *)(lVar7 + 0x24);
    NullCheck(local_288);
    CommandBuffer_SetGlobalFloat_mBF1BB546F61D851FE19063F6D383096CA55A7C68(0,local_288,local_28c,0);
  }
  local_290 = *(undefined4 *)(local_30 + 0x130);
  local_298 = *(void **)(local_30 + 0x188);
  NullCheck(local_298);
  local_299 = *(byte *)((long)local_298 + 0x15) & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  ScreenSpaceAmbientOcclusionPass_GetPassOrder_mDCD295EE63D8CAAE565C8E95DF65DA9F66950CD2
            (local_290,local_299 & 1,&local_58,&local_60,0);
  local_2a8 = *(void **)(local_30 + 0x148);
  NullCheck(local_2a8);
  local_2b0 = ScriptableRenderer_get_cameraDepthTargetHandle_m105A4BA47F734199554838F588A5101E2591988E
                        (local_2a8,0);
  local_2b8 = local_38;
  local_2c0 = local_30 + 0x148;
  local_2c8 = local_30 + 0xf8;
  local_2d0 = *(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF **)(local_30 + 0x128);
  local_68 = local_2b0;
  NullCheck(local_2d0);
  puVar4 = local_2b8;
  lVar3 = local_2c0;
  lVar7 = local_2c8;
  uVar10 = RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF::GetAddressAt(local_2d0,0);
                    /* try { // try from 03ea7780 to 03fa78cb has its CatchHandler @ 03ea7780
                       catch() { ... } // from try @ 03ea7780 with catch @ 03ea7780
                       catch() { ... } // from try @ 03ea7960 with catch @ 03ea7780
                       catch() { ... } // from try @ 03ea79b0 with catch @ 03ea7780
                       catch() { ... } // from try @ 03ea7b1c with catch @ 03ea7780 */
  ScreenSpaceAmbientOcclusionPass_RenderAndSetBaseMap_mB97CBB3E9ADFD01D206A1395B2403868B86C1248
            (&local_48,puVar4,lVar3,lVar7,&local_68,uVar10,0,0);
  local_6c = 0;
  while( true ) {
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 03ea78cc with catch @ 03ea7978
                       catch(type#1 @ 0474a728) { ... } // from try @ 03ea79f0 with catch @ 03ea7978
                        */
    local_354 = local_6c;
    local_360 = local_60;
    NullCheck(local_60);
                    /* try { // try from 03ea79a4 to 03fa79ab has its CatchHandler @ 03ea7aec */
    if ((int)*(undefined8 *)(local_360 + 0x18) <= local_354) break;
    local_2d8 = local_58;
    local_2dc = local_6c;
    NullCheck(local_58);
    local_2e0 = local_2dc;
    local_2e4 = Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::GetAt
                          (local_2d8,(long)local_2dc);
    local_2f0 = local_58;
    local_2f4 = local_6c;
    local_70 = local_2e4;
    NullCheck(local_58);
    local_2f8 = il2cpp_codegen_add<int,int>(local_2f4,1);
    local_2fc = Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::GetAt
                          (local_2f0,(long)local_2f8);
    local_308 = local_38;
    local_310 = local_30 + 0x148;
    local_318 = local_30 + 0xf8;
    local_320 = *(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF **)(local_30 + 0x128);
    local_324 = local_70;
    local_74 = local_2fc;
    NullCheck(local_320);
    local_330 = *(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF **)(local_30 + 0x128);
    local_334 = local_74;
    NullCheck(local_330);
    local_340 = local_60;
    local_344 = local_6c;
    NullCheck(local_60);
    local_348 = local_344;
                    /* try { // try from 03ea78cc to 03fa795f has its CatchHandler @ 03ea7978 */
    local_34c = ShaderPassesU5BU5D_t7B5C5A350D645D5D0195906F61E7B5729A612716::GetAt
                          (local_340,(long)local_344);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar4 = local_308;
    lVar3 = local_310;
    lVar7 = local_318;
    uVar10 = RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF::GetAddressAt
                       (local_320,(long)local_324);
    uVar8 = RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF::GetAddressAt
                      (local_330,(long)local_334);
    ScreenSpaceAmbientOcclusionPass_RenderAndSetBaseMap_mB97CBB3E9ADFD01D206A1395B2403868B86C1248
              (&local_48,puVar4,lVar3,lVar7,uVar10,uVar8,local_34c,0);
    local_350 = local_6c;
                    /* try { // try from 03ea7960 to 03fa79a3 has its CatchHandler @ 03ea7780 */
    local_6c = il2cpp_codegen_add<int,int>(local_6c,1);
  }
                    /* try { // try from 03ea79ac to 03fa79af has its CatchHandler @ 03ea7b04 */
                    /* try { // try from 03ea79b0 to 03fa79ef has its CatchHandler @ 03ea7780 */
  local_368 = local_48;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar9 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_36c = *puVar9;
  local_378 = *(void **)(local_30 + 0x188);
                    /* try { // try from 03ea79f0 to 03fa7ac3 has its CatchHandler @ 03ea7978 */
  NullCheck(local_378);
  local_37c = *(float *)((long)local_378 + 0x24);
  local_390[0] = 0;
  local_390[1] = 0;
  Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline
            ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 *)local_390,1.0,0.0,0.0,local_37c,
             (MethodInfo *)0x0);
  NullCheck(local_368);
  uStack_39c = (undefined4)(local_390[0] >> 0x20);
  uStack_398 = (undefined4)local_390[1];
  uStack_394 = (undefined4)(local_390[1] >> 0x20);
  CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA
            (local_390[0] & 0xffffffff,uStack_39c,uStack_398,uStack_394,local_368,local_36c,0);
  il2cpp::utils::
  FinallyHelper<ScreenSpaceAmbientOcclusionPass_Execute_m4D1598A1004E3099653B14832C295967573A212C::$_9,false>
  ::~FinallyHelper(aFStack_d8);
  return;
}


