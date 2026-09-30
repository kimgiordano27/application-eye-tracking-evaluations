/*
FUNCTION_NAME: PanelRaycaster_Raycast_mFD63FF3E65B14E412D6CD21A3A9455416CE5F895
ENTRY_POINT: 046fedb4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_17
*/


void PanelRaycaster_Raycast_mFD63FF3E65B14E412D6CD21A3A9455416CE5F895
               (undefined1 param_1 [16],undefined4 param_2,float param_3,void *param_4,
               PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *param_5,void *param_6,
               undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_400 [80];
  undefined1 auStack_3b0 [84];
  undefined4 local_35c;
  BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4 *local_358;
  undefined8 local_350;
  float local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  ulong local_330;
  float local_328;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_320;
  void *local_318;
  undefined8 local_310;
  long local_308;
  ulong local_300;
  void *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  byte local_2d9;
  undefined8 local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  ulong local_2b8;
  ulong local_2b0;
  float local_2a8;
  void *local_2a0;
  long local_298;
  Il2CppObject *local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined4 local_264;
  long local_260;
  long local_258;
  void *local_250;
  void *local_248;
  Il2CppObject *local_240;
  Il2CppObject *local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_218;
  Il2CppObject *local_210;
  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *local_208;
  byte local_1f9;
  undefined8 local_1f8;
  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *local_1f0;
  byte local_1e1;
  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *local_1e0;
  Il2CppObject *local_1d8;
  float local_1cc;
  undefined8 local_1c8;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  int local_1a4;
  void *local_1a0;
  int local_198;
  int local_194;
  DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F *local_190;
  void *local_188;
  int local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_160;
  ulong local_158;
  float local_150;
  int local_148;
  float local_144;
  ulong local_140;
  float local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  float local_12c;
  ulong local_128;
  float local_120;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_118;
  int local_10c;
  BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4 *local_108;
  long local_100;
  undefined1 auStack_f8 [8];
  void *local_f0 [7];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  void *local_90;
  Il2CppObject *local_88;
  undefined4 local_7c;
  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *local_78;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  ulong local_50;
  float local_48;
  int local_44;
  undefined8 local_40;
  void *local_38;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_30;
  void *local_28;
  
  puVar2 = Method_System_Collections_Generic_List<HandGrabPose>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_40 = param_7;
  local_38 = param_6;
  local_30 = param_5;
  local_28 = param_4;
  if ((PanelRaycaster_Raycast_mFD63FF3E65B14E412D6CD21A3A9455416CE5F895::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<HandGrabPose>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Object>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<GlyphRect>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<int>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    PanelRaycaster_Raycast_mFD63FF3E65B14E412D6CD21A3A9455416CE5F895::s_Il2CppMethodInitialized = 1;
  }
  local_44 = 0;
  local_50 = 0;
  local_48 = 0.0;
  local_60 = 0;
  local_58 = 0.0;
  local_68 = 0;
  local_6c = 0.0;
  local_78 = (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *)0x0;
  local_7c = 0;
  local_88 = (Il2CppObject *)0x0;
  local_90 = (void *)0x0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  memset(auStack_f8,0,0x50);
  local_100 = *(long *)((long)local_28 + 0x28);
  if (local_100 != 0) {
    local_108 = *(BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4 **)
                 ((long)local_28 + 0x28);
    NullCheck(local_108);
    local_10c = BaseRuntimePanel_get_targetDisplay_mF2B0D9BB8A234F9273185DFAA4EC014E86CEDFD3_inline
                          (local_108,(MethodInfo *)0x0);
    local_118 = local_30;
    local_44 = local_10c;
    local_134 = MultipleDisplayUtilities_GetRelativeMousePositionForRaycast_mBD9CBF4855B536FF62D12DA8D774B196C2E7EC1C
                          (local_30,0);
    local_140 = CONCAT44(param_2,local_134);
    local_148 = local_44;
    local_144 = param_3;
    local_138 = param_3;
    uStack_130 = param_2;
    local_12c = param_3;
    local_128 = local_140;
    local_120 = param_3;
    local_50 = local_140;
    local_48 = param_3;
    iVar10 = il2cpp_codegen_cast_double_to_int<int>((double)param_3);
    if (iVar10 == local_148) {
      local_158 = local_50;
      local_150 = local_48;
      local_60 = local_50;
      local_58 = local_48;
      local_160 = local_30;
      NullCheck(local_30);
      local_170 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline
                            (local_160,(MethodInfo *)0x0);
      local_168 = CONCAT44(param_2,local_170);
      uStack_16c = param_2;
      local_68 = local_168;
      local_174 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(0);
      local_6c = (float)local_174;
      local_178 = local_44;
      if (0 < local_44) {
        local_17c = local_44;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_188 = (void *)*puVar11;
        NullCheck(local_188);
        if (local_17c < (int)*(undefined8 *)((long)local_188 + 0x18)) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
          local_190 = (DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F *)*puVar11;
          local_194 = local_44;
          NullCheck(local_190);
          local_198 = local_194;
          local_1a0 = (void *)DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F::GetAt
                                        (local_190,(long)local_194);
          NullCheck(local_1a0);
          local_1a4 = Display_get_systemHeight_mC20ADD124FBEF94796F736684A3AF4D0AA569FC7
                                (local_1a0,0);
          local_6c = (float)local_1a4;
        }
      }
      local_1a8 = local_6c;
      local_1b8 = local_60;
      uVar3 = local_1b8;
      local_1b0 = local_58;
      local_1b8._4_4_ = (float)(local_60 >> 0x20);
      fVar8 = local_1b8._4_4_;
      local_1bc = local_1b8._4_4_;
      local_1b8 = uVar3;
      uVar12 = il2cpp_codegen_subtract<float,float>(local_6c,fVar8);
      local_60 = CONCAT44(uVar12,(undefined4)local_60);
      local_1c8 = local_68;
      uVar5 = local_1c8;
      local_1c8._4_4_ = (float)((ulong)local_68 >> 0x20);
      local_1cc = local_1c8._4_4_;
      local_68 = CONCAT44(-local_1c8._4_4_,(undefined4)local_68);
      local_1c8 = uVar5;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_Unity_Collections_NativeArray<int>_GetEnumerator__);
      local_1d8 = (Il2CppObject *)
                  UIElementsRuntimeUtility_get_activeEventSystem_mEE885CA6E7EB77FFDCE9A63B4E5C7963548233E0_inline
                            ((MethodInfo *)0x0);
      local_1e0 = (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707 *)
                  IsInstClass(local_1d8,
                              *(Il2CppClass **)
                               Method_System_Collections_Generic_List<Object>_get_Item__);
      local_78 = local_1e0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_1e1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_1e0,0);
      local_1e1 = local_1e1 & 1;
      if (local_1e1 == 0) {
        local_1f0 = local_78;
        NullCheck(local_78);
        local_1f8 = EventSystem_get_currentInputModule_m30559FCECCCE1AAD97D801968B8BD1C483FBF7AC_inline
                              (local_1f0,(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_1f9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_1f8,0);
        local_1f9 = local_1f9 & 1;
        if (local_1f9 == 0) {
          local_208 = local_78;
          NullCheck(local_78);
          local_210 = (Il2CppObject *)
                      EventSystem_get_currentInputModule_m30559FCECCCE1AAD97D801968B8BD1C483FBF7AC_inline
                                (local_208,(MethodInfo *)0x0);
          local_218 = local_30;
          NullCheck(local_210);
          local_22c = VirtualFuncInvoker1<int,PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*>
                      ::Invoke(0x1a,local_210,local_218);
          local_228 = *(undefined8 *)((long)local_28 + 0x28);
          local_21c = local_22c;
          local_7c = local_22c;
          local_240 = (Il2CppObject *)
                      PointerCaptureHelper_GetCapturingElement_m30DED02760CA5544CF35162656E2E3959DC8103E
                                (local_228,local_22c,0);
          local_238 = local_240;
          local_88 = local_240;
          local_248 = (void *)IsInstClass(local_240,
                                          *(Il2CppClass **)
                                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                         );
          local_90 = local_248;
          if (local_248 != (void *)0x0) {
            local_250 = local_248;
            NullCheck(local_248);
            local_258 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1
                                  (local_250,0);
            local_260 = *(long *)((long)local_28 + 0x28);
            if (local_258 != local_260) {
              return;
            }
          }
          local_264 = local_7c;
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
          local_278 = PointerDeviceState_GetPlayerPanelWithSoftPointerCapture_m3CB06E8131526B784CCFACBB01DD4E4CE2317BFC
                                (local_264,0);
          if ((local_278 == 0) ||
             (local_288 = *(long *)((long)local_28 + 0x28), local_280 = local_278,
             local_278 == local_288)) {
            local_290 = local_88;
            local_270 = local_278;
            local_98 = local_278;
            if ((local_88 == (Il2CppObject *)0x0) && (local_298 = local_278, local_278 == 0)) {
              local_2a0 = *(void **)((long)local_28 + 0x28);
              local_2b0 = local_60;
              local_2a8 = local_58;
              local_2d0 = local_60;
              uVar3 = local_2d0;
              local_2c8 = local_58;
              local_2d0._4_4_ = (undefined4)(local_60 >> 0x20);
              uVar12 = local_2d0._4_4_;
              local_2d0 = uVar3;
              local_2c0 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                                    (local_60 & 0xffffffff,uVar12,local_58);
              local_2b8 = CONCAT44(uVar12,local_2c0);
              local_2d8 = local_68;
              uStack_2bc = uVar12;
              NullCheck(local_2a0);
              local_2e8 = local_2b8;
              uVar3 = local_2e8;
              local_2f0 = local_2d8;
              uVar5 = local_2f0;
              local_2e8._4_4_ = (undefined4)(local_2b8 >> 0x20);
              uVar7 = local_2e8._4_4_;
              local_2f0._0_4_ = (undefined4)local_2d8;
              uVar12 = (undefined4)local_2f0;
              local_2f0._4_4_ = (undefined4)((ulong)local_2d8 >> 0x20);
              uVar6 = local_2f0._4_4_;
              local_2f0 = uVar5;
              local_2e8 = uVar3;
              bVar9 = BaseRuntimePanel_ScreenToPanel_mAF61E995600A215F99FC3381F94A2F6BFECABB57
                                (local_2b8 & 0xffffffff,uVar7,uVar12,uVar6,local_2a0,&local_a0,
                                 &local_a8,0,0);
              local_2d9 = bVar9 & 1;
              if ((bVar9 & 1) == 0) {
                return;
              }
              local_2f8 = *(void **)((long)local_28 + 0x28);
              local_300 = local_a0;
              NullCheck(local_2f8);
              local_310 = local_300;
              uVar3 = local_310;
              local_310._4_4_ = (undefined4)(local_300 >> 0x20);
              uVar12 = local_310._4_4_;
              local_310 = uVar3;
              local_308 = VirtualFuncInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*,Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>
                          ::Invoke((VirtualFuncInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*,Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>
                                    *)(local_300 & 0xffffffff),uVar12,0x2e,local_2f8);
              if (local_308 == 0) {
                return;
              }
            }
            local_318 = local_38;
            il2cpp_codegen_initobj(auStack_f8,0x50);
            local_320 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                        PanelRaycaster_get_selectableGameObject_m26B496BDA7A92AD0C66B4209171B56321308A628
                                  (local_28);
            RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_inline
                      (auStack_f8,local_320,(MethodInfo *)0x0);
            local_f0[0] = local_28;
            Il2CppCodeGenWriteBarrier(local_f0,local_28);
            local_330 = local_50;
            local_328 = local_48;
            local_350 = local_50;
            uVar3 = local_350;
            local_348 = local_48;
            local_350._4_4_ = (undefined4)(local_50 >> 0x20);
            uVar12 = local_350._4_4_;
            local_350 = uVar3;
            local_340 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                                  (local_50 & 0xffffffff,uVar12,local_48,0);
            local_338 = CONCAT44(uVar12,local_340);
            local_358 = *(BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4 **)
                         ((long)local_28 + 0x28);
            uStack_33c = uVar12;
            local_b4 = local_338;
            NullCheck(local_358);
            local_35c = BaseRuntimePanel_get_targetDisplay_mF2B0D9BB8A234F9273185DFAA4EC014E86CEDFD3_inline
                                  (local_358,(MethodInfo *)0x0);
            local_ac = local_35c;
            memcpy(auStack_3b0,auStack_f8,0x50);
            NullCheck(local_318);
            pvVar4 = local_318;
            memcpy(auStack_400,auStack_3b0,0x50);
            List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline
                      (pvVar4,auStack_400,
                       *(undefined8 *)Method_System_Collections_Generic_List<GlyphRect>_get_Count__)
            ;
          }
        }
      }
    }
  }
  return;
}


