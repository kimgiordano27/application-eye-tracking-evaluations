/*
FUNCTION_NAME: Media_EncodeMrcFrame_m494B203C4816A6DC6CB1C991F5ECB304F697332E
ENTRY_POINT: 02dcf470
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool Media_EncodeMrcFrame_m494B203C4816A6DC6CB1C991F5ECB304F697332E
               (undefined8 param_1,undefined8 param_2,Il2CppObject *param_3,long param_4,int param_5
               ,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined8 *puVar14;
  void **ppvVar15;
  undefined8 uVar16;
  void *pvVar17;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  int local_15c;
  Il2CppObject *local_158;
  int local_14c;
  Il2CppObject *local_148;
  void *local_140;
  Il2CppObject *local_138;
  undefined8 local_130;
  void *local_128;
  undefined4 local_11c;
  Il2CppObject *local_118;
  undefined4 local_10c;
  Il2CppObject *local_108;
  int local_fc;
  Il2CppObject *local_f8;
  int local_ec;
  Il2CppObject *local_e8;
  int local_dc;
  Il2CppObject *local_d8;
  int local_cc;
  Il2CppObject *local_c8;
  byte local_b9;
  undefined8 local_b8;
  int local_b0;
  byte local_a9;
  Il2CppObject *local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  Il2CppObject *local_30;
  
  puVar6 = 
  Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
  ;
  puVar5 = 
  Field_<PrivateImplementationDetails>_4566A0DF6225A1A1F6B842F83FFBDE095C9B4FEF02CB788ADD0D24792BFF32BD
  ;
  puVar4 = 
  Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = param_6;
  local_3c = param_5;
  local_38 = param_4;
  local_30 = param_3;
  if ((Media_EncodeMrcFrame_m494B203C4816A6DC6CB1C991F5ECB304F697332E::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
              );
    Media_EncodeMrcFrame_m494B203C4816A6DC6CB1C991F5ECB304F697332E::s_Il2CppMethodInitialized = 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  local_90 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_98 = *puVar14;
  local_99 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_90,local_98,0);
  local_99 = local_99 & 1;
  if (local_99 == 0) {
    return false;
  }
  local_a8 = local_30;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_a9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_a8,0);
  local_a9 = local_a9 & 1;
  if (local_a9 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
               ,0);
    return false;
  }
  local_b0 = Media_GetMrcInputVideoBufferType_m84171F6829839074E24610A3F0BC5AD9002DA353(0);
  if (local_b0 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
               ,0);
    return false;
  }
  il2cpp_codegen_initobj(&local_68,8);
  local_70 = 0;
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  local_b8 = *puVar14;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_b9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_b8,0);
  local_b9 = local_b9 & 1;
  if (local_b9 == 0) {
    puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
    local_c8 = (Il2CppObject *)*puVar14;
    NullCheck(local_c8);
    local_cc = VirtualFuncInvoker0<int>::Invoke(5,local_c8);
    local_d8 = local_30;
    NullCheck(local_30);
    local_dc = VirtualFuncInvoker0<int>::Invoke(5,local_d8);
    if (local_cc == local_dc) {
      puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
      local_e8 = (Il2CppObject *)*puVar14;
      NullCheck(local_e8);
      local_ec = VirtualFuncInvoker0<int>::Invoke(7,local_e8);
      local_f8 = local_30;
      NullCheck(local_30);
      local_fc = VirtualFuncInvoker0<int>::Invoke(7,local_f8);
      if (local_ec == local_fc) goto LAB_02dcf8a4;
    }
  }
  local_108 = local_30;
  NullCheck(local_30);
  local_10c = VirtualFuncInvoker0<int>::Invoke(5,local_108);
  local_118 = local_30;
  NullCheck(local_30);
  local_11c = VirtualFuncInvoker0<int>::Invoke(7,local_118);
  local_128 = (void *)il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_System_Collections_Generic_Dictionary<int,_TreeItem>_Add__)
  ;
  Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(local_128,local_10c,local_11c,5,0,0);
  pvVar17 = local_128;
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  *puVar14 = pvVar17;
  ppvVar15 = (void **)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  Il2CppCodeGenWriteBarrier(ppvVar15,local_128);
LAB_02dcf8a4:
  local_130 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7();
  local_138 = local_30;
  RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(local_30,0);
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  local_140 = (void *)*puVar14;
  local_148 = local_30;
  NullCheck(local_30);
  local_14c = VirtualFuncInvoker0<int>::Invoke(5,local_148);
  local_158 = local_30;
  NullCheck(local_30);
  local_15c = VirtualFuncInvoker0<int>::Invoke(7,local_158);
  local_170 = 0;
  uStack_168 = 0;
  Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
            ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_170,0.0,0.0,(float)local_14c,
             (float)local_15c,(MethodInfo *)0x0);
  NullCheck(local_140);
  uStack_174 = (undefined4)((ulong)uStack_168 >> 0x20);
  uStack_178 = (undefined4)uStack_168;
  uStack_17c = (undefined4)((ulong)local_170 >> 0x20);
  local_180 = (undefined4)local_170;
  Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9
            (local_180,uStack_17c,uStack_178,uStack_174,local_140,0,0,0);
  RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(local_130,0);
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  pvVar17 = (void *)*puVar14;
  NullCheck(pvVar17);
  uVar16 = Texture2D_GetPixels32_m16E5CE04A162EA1027A0D255CA0A303909915909(pvVar17,0,0);
  local_68 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(uVar16,3,0);
  local_70 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(&local_68,0);
  il2cpp_codegen_initobj(&local_78,8);
  local_80 = 0;
  local_84 = 0;
  if (local_38 != 0) {
    local_78 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_38,3);
    local_80 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(&local_78,0);
    local_84 = il2cpp_codegen_multiply<int,int>(local_3c,4);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  uVar16 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
  puVar14 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
  bVar13 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                     (uVar16,*puVar14,0);
  uVar12 = local_40;
  uVar11 = local_48;
  uVar10 = local_50;
  uVar9 = local_58;
  uVar8 = local_70;
  uVar16 = local_80;
  uVar7 = local_84;
  if ((bVar13 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    local_88 = OVRP_1_38_0_ovrp_Media_EncodeMrcFrame_mAC391EC4739792A81FA113F5E89B7488C8E4BD04
                         (uVar11,uVar8,uVar16,uVar7,uVar12,uVar9,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    local_88 = OVRP_1_49_0_ovrp_Media_EncodeMrcFrameWithPoseTime_m66579ABD32CF065C6EEEBA2A86DBB4C4107BE64D
                         (uVar11,uVar10,uVar8,uVar16,uVar7,uVar12,uVar9,0);
  }
  GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(&local_68,0);
  if (local_38 != 0) {
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(&local_78,0);
  }
  return local_88 == 0;
}


