/*
FUNCTION_NAME: Unity.XR.CoreUtils.CachedComponentFilter<object,-object>$$Dispose
ENTRY_POINT: 021ae838
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 185
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_16;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_16
*/


void Unity_XR_CoreUtils_CachedComponentFilter<object,_object>__Dispose
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x29;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  NullCheck(*(void **)(param_1 + 0x3c0));
  uVar2 = EventDispatcher_get_pointerState_mC4FD7936160D687BC2370EDAF719E295BCB85B80_inline
                    (*(EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398 **)
                      (*(long *)(unaff_x19 + 0xd0) + 0x3c0),*(MethodInfo **)(unaff_x19 + 0xb0));
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0x3b8) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x514) = *(undefined4 *)(unaff_x29 + -0x3c);
  NullCheck(*(void **)(lVar6 + 0x3b8));
  uVar2 = PointerDispatchState_GetCapturingElement_m84B2B033EC3CCAD4613D6A83C13C25EC8907D891
                    (*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x3b8),
                     *(undefined4 *)(unaff_x19 + 0x514),*(undefined8 *)(unaff_x19 + 0xb0));
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0x3a8) = uVar2;
  *(undefined8 *)(lVar6 + 0x490) = *(undefined8 *)(lVar6 + 0x3a8);
  *(undefined8 *)(lVar6 + 0x3a0) = *(undefined8 *)(lVar6 + 0x490);
  uVar2 = IsInstClass(*(Il2CppObject **)(lVar6 + 0x3a0),
                      *(Il2CppClass **)
                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0x488) = uVar2;
  *(undefined8 *)(lVar6 + 0x398) = *(undefined8 *)(lVar6 + 0x488);
  *(bool *)(unaff_x29 + -0xb8) = *(long *)(lVar6 + 0x398) != 0;
  *(byte *)(unaff_x19 + 0x4f4) = *(byte *)(unaff_x29 + -0xb8) & 1;
  if ((*(byte *)(unaff_x19 + 0x4f4) & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x388) = *(undefined8 *)(lVar6 + 0x488);
    NullCheck(*(void **)(lVar6 + 0x388));
    uVar2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x388),0);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x380) = uVar2;
    *(undefined8 *)(lVar6 + 0x498) = *(undefined8 *)(lVar6 + 0x380);
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x480) = 0;
  uVar9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline((MethodInfo *)0x0);
  pMVar3 = *(MethodInfo **)(unaff_x19 + 0xa0);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined4 *)(unaff_x19 + 0x4d0) = uVar9;
  *(undefined4 *)(unaff_x19 + 0x4d4) = param_3;
  *(undefined8 *)(lVar6 + 0x378) = *(undefined8 *)(lVar6 + 0x370);
  *(undefined8 *)(lVar6 + 0x478) = *(undefined8 *)(lVar6 + 0x378);
  uVar9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(pMVar3);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined4 *)(unaff_x19 + 0x4c0) = uVar9;
  *(undefined4 *)(unaff_x19 + 0x4c4) = param_3;
  *(undefined8 *)(lVar6 + 0x368) = *(undefined8 *)(lVar6 + 0x360);
  *(undefined8 *)(lVar6 + 0x470) = *(undefined8 *)(lVar6 + 0x368);
  *(undefined8 *)(lVar6 + 0x358) = *(undefined8 *)(lVar6 + 0x498);
  uVar2 = IsInstClass(*(Il2CppObject **)(lVar6 + 0x358),
                      *(Il2CppClass **)Method_Unity_Collections_NativeArray<int>_CopyFrom__);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0x468) = uVar2;
  *(undefined8 *)(lVar6 + 0x350) = *(undefined8 *)(lVar6 + 0x468);
  *(bool *)(unaff_x29 + -0xbc) = *(long *)(lVar6 + 0x350) != 0;
  *(byte *)(unaff_x19 + 0x4ac) = *(byte *)(unaff_x29 + -0xbc) & 1;
  if ((*(byte *)(unaff_x19 + 0x4ac) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Collections_NativeArray<int>_GetEnumerator__);
    uVar2 = UIElementsRuntimeUtility_GetSortedPlayerPanels_m8D486E3150FBE718BB735B3680732AB3F7EDEF76
                      (0);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x2b8) = uVar2;
    *(undefined8 *)(lVar6 + 0x448) = *(undefined8 *)(lVar6 + 0x2b8);
    *(undefined8 *)(lVar6 + 0x2b0) = *(undefined8 *)(lVar6 + 0x448);
    NullCheck(*(void **)(lVar6 + 0x2b0));
    uVar9 = List_1_get_Count_m377F4EA9935CBD64678FEB9BCBEEFEF87B63BACA_inline
                      (*(List_1_t9FF902E193613BD654FD1CF8DBDEF7B872504919 **)
                        (*(long *)(unaff_x19 + 0xd0) + 0x2b0),
                       *(MethodInfo **)Method_Unity_Collections_NativeArray<int>_Dispose__);
    *(undefined4 *)(unaff_x19 + 0x40c) = uVar9;
    uVar9 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x19 + 0x40c),1);
    *(undefined4 *)(unaff_x29 + -0xcc) = uVar9;
    while( true ) {
      *(undefined4 *)(unaff_x19 + 0x300) = *(undefined4 *)(unaff_x29 + -0xcc);
      *(byte *)(unaff_x29 + -0xf0) =
           (byte)~(byte)((uint)*(undefined4 *)(unaff_x19 + 0x300) >> 0x18) >> 7;
      *(byte *)(unaff_x19 + 0x2fc) = *(byte *)(unaff_x29 + -0xf0) & 1;
      if ((*(byte *)(unaff_x19 + 0x2fc) & 1) == 0) break;
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined8 *)(lVar6 + 0x2a0) = *(undefined8 *)(lVar6 + 0x448);
      *(undefined4 *)(unaff_x19 + 0x3fc) = *(undefined4 *)(unaff_x29 + -0xcc);
      NullCheck(*(void **)(lVar6 + 0x2a0));
      uVar2 = List_1_get_Item_mBB2665215C9020491DBEB82B9E3CABA0071A5B1B
                        (*(List_1_t9FF902E193613BD654FD1CF8DBDEF7B872504919 **)
                          (*(long *)(unaff_x19 + 0xd0) + 0x2a0),*(int *)(unaff_x19 + 0x3fc),
                         *(MethodInfo **)Method_Unity_Collections_NativeArray<int>_Dispose__);
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined8 *)(lVar6 + 0x290) = uVar2;
      uVar2 = IsInstClass(*(Il2CppObject **)(lVar6 + 0x290),
                          *(Il2CppClass **)Method_Unity_Collections_NativeArray<int>_CopyFrom__);
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined8 *)(lVar6 + 0x438) = uVar2;
      *(undefined8 *)(lVar6 + 0x288) = *(undefined8 *)(lVar6 + 0x438);
      if (*(long *)(lVar6 + 0x288) == 0) {
        *(undefined4 *)(unaff_x19 + 0x558) = 0;
      }
      else {
        bVar1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                          ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)
                           (unaff_x29 + -0x30),
                           *(MethodInfo **)
                            Method_System_Collections_Generic_List<InputActionMap>__ctor__);
        *(byte *)(unaff_x19 + 0x3e4) = bVar1 & 1;
        if ((*(byte *)(unaff_x19 + 0x3e4) & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x55c) = 1;
        }
        else {
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined8 *)(lVar6 + 0x278) = *(undefined8 *)(lVar6 + 0x438);
          NullCheck(*(void **)(lVar6 + 0x278));
          uVar9 = BaseRuntimePanel_get_targetDisplay_mF2B0D9BB8A234F9273185DFAA4EC014E86CEDFD3_inline
                            (*(BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4 **)
                              (*(long *)(unaff_x19 + 0xd0) + 0x278),(MethodInfo *)0x0);
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined4 *)(unaff_x19 + 0x3d4) = uVar9;
          *(undefined8 *)(lVar6 + 0x268) = *(undefined8 *)(lVar6 + 0x4e0);
          *(undefined8 *)(lVar6 + 0x428) = *(undefined8 *)(lVar6 + 0x268);
          pMVar3 = *(MethodInfo **)
                    Method_System_Collections_Generic_List<InputActionMap>_get_Count__;
          *(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 **)(unaff_x19 + 0x90) =
               (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)(unaff_x29 + -0xe8);
          uVar9 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                            ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)
                             (unaff_x29 + -0xe8),pMVar3);
          *(undefined4 *)(unaff_x19 + 0x3c4) = uVar9;
          bVar1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                            (*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 **)
                              (unaff_x19 + 0x90),
                             *(MethodInfo **)
                              Method_System_Collections_Generic_List<InputActionMap>__ctor__);
          *(byte *)(unaff_x19 + 0x3c0) = bVar1 & 1;
          *(uint *)(unaff_x19 + 0x55c) =
               (uint)(*(byte *)(unaff_x19 + 0x3c0) &
                     *(int *)(unaff_x19 + 0x3d4) == *(int *)(unaff_x19 + 0x3c4));
        }
        *(undefined4 *)(unaff_x19 + 0x558) = *(undefined4 *)(unaff_x19 + 0x55c);
      }
      *(bool *)(unaff_x29 + -0xdc) = *(int *)(unaff_x19 + 0x558) != 0;
      *(byte *)(unaff_x19 + 0x3bc) = *(byte *)(unaff_x29 + -0xdc) & 1;
      if ((*(byte *)(unaff_x19 + 0x3bc) & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        *(undefined8 *)(lVar6 + 0x250) = *(undefined8 *)(lVar6 + 0x438);
        uVar2 = *(undefined8 *)(lVar6 + 0x4f8);
        *(undefined4 *)(unaff_x19 + 0x3a8) = *(undefined4 *)(unaff_x29 + -0x10);
        *(undefined8 *)(lVar6 + 0x240) = uVar2;
        uVar2 = *(undefined8 *)(lVar6 + 0x240);
        *(undefined4 *)(unaff_x19 + 0x388) = *(undefined4 *)(unaff_x19 + 0x3a8);
        *(undefined8 *)(lVar6 + 0x220) = uVar2;
        uVar10 = *(undefined4 *)(unaff_x19 + 900);
        *(undefined8 *)(unaff_x19 + 0x88) = 0;
        uVar9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                          (*(undefined4 *)(unaff_x19 + 0x380),uVar10,
                           *(undefined4 *)(unaff_x19 + 0x388));
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
        *(undefined4 *)(unaff_x19 + 0x390) = uVar9;
        *(undefined4 *)(unaff_x19 + 0x394) = uVar10;
        *(undefined8 *)(lVar6 + 0x238) = *(undefined8 *)(lVar6 + 0x230);
        uVar7 = *(undefined8 *)(lVar6 + 0x4e8);
        *(undefined4 *)(unaff_x19 + 0x378) = *(undefined4 *)(unaff_x29 + -0x20);
        *(undefined8 *)(lVar6 + 0x210) = uVar7;
        uVar7 = *(undefined8 *)(lVar6 + 0x210);
        *(undefined4 *)(unaff_x19 + 0x358) = *(undefined4 *)(unaff_x19 + 0x378);
        *(undefined8 *)(lVar6 + 0x1f0) = uVar7;
        uVar10 = *(undefined4 *)(unaff_x19 + 0x354);
        uVar9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                          (*(undefined4 *)(unaff_x19 + 0x350),uVar10,
                           *(undefined4 *)(unaff_x19 + 0x358),uVar2);
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        *(undefined4 *)(unaff_x19 + 0x360) = uVar9;
        *(undefined4 *)(unaff_x19 + 0x364) = uVar10;
        *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(lVar6 + 0x200);
        NullCheck(*(void **)(lVar6 + 0x250));
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
        *(undefined8 *)(lVar6 + 0x1e0) = *(undefined8 *)(lVar6 + 0x238);
        *(undefined8 *)(lVar6 + 0x1d8) = *(undefined8 *)(lVar6 + 0x208);
        param_4 = *(undefined4 *)(unaff_x19 + 0x338);
        bVar1 = BaseRuntimePanel_ScreenToPanel_mAF61E995600A215F99FC3381F94A2F6BFECABB57
                          (*(undefined4 *)(unaff_x19 + 0x340),*(undefined4 *)(unaff_x19 + 0x344),
                           param_4,*(undefined4 *)(unaff_x19 + 0x33c),*(undefined8 *)(lVar6 + 0x250)
                           ,unaff_x29 + -0x98,unaff_x29 + -0xa0,0,uVar2);
        *(byte *)(unaff_x19 + 0x34c) = bVar1 & 1;
        if ((*(byte *)(unaff_x19 + 0x34c) & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x554) = 0;
        }
        else {
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined8 *)(lVar6 + 0x1d0) = *(undefined8 *)(lVar6 + 0x438);
          *(undefined8 *)(lVar6 + 0x1c8) = *(undefined8 *)(lVar6 + 0x478);
          NullCheck(*(void **)(lVar6 + 0x1d0));
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined8 *)(lVar6 + 0x1b8) = *(undefined8 *)(lVar6 + 0x1c8);
                    /* WARNING: Load size is inaccurate */
          uVar2 = VirtualFuncInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*,Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>
                  ::Invoke(*(VirtualFuncInvoker1<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*,Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>
                             **)(unaff_x19 + 0x318),*(undefined4 *)(unaff_x19 + 0x31c),0x2e,
                           *(undefined8 *)(lVar6 + 0x1d0));
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined8 *)(lVar6 + 0x1c0) = uVar2;
          *(uint *)(unaff_x19 + 0x554) = (uint)(*(long *)(lVar6 + 0x1c0) != 0);
        }
        *(bool *)(unaff_x29 + -0xec) = *(int *)(unaff_x19 + 0x554) != 0;
        *(byte *)(unaff_x19 + 0x314) = *(byte *)(unaff_x29 + -0xec) & 1;
        if ((*(byte *)(unaff_x19 + 0x314) & 1) != 0) {
          lVar6 = *(long *)(unaff_x19 + 0xd0);
          *(undefined8 *)(lVar6 + 0x1a8) = *(undefined8 *)(lVar6 + 0x438);
          *(undefined8 *)(lVar6 + 0x480) = *(undefined8 *)(lVar6 + 0x1a8);
          break;
        }
      }
      *(undefined4 *)(unaff_x19 + 0x304) = *(undefined4 *)(unaff_x29 + -0xcc);
      uVar9 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x19 + 0x304),1);
      *(undefined4 *)(unaff_x29 + -0xcc) = uVar9;
    }
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x340) = *(undefined8 *)(lVar6 + 0x468);
    *(undefined8 *)(lVar6 + 0x480) = *(undefined8 *)(lVar6 + 0x340);
    *(undefined8 *)(lVar6 + 0x338) = *(undefined8 *)(lVar6 + 0x480);
    uVar2 = *(undefined8 *)(lVar6 + 0x4f8);
    *(undefined4 *)(unaff_x19 + 0x490) = *(undefined4 *)(unaff_x29 + -0x10);
    *(undefined8 *)(lVar6 + 0x328) = uVar2;
    uVar2 = *(undefined8 *)(lVar6 + 0x328);
    *(undefined4 *)(unaff_x19 + 0x470) = *(undefined4 *)(unaff_x19 + 0x490);
    *(undefined8 *)(lVar6 + 0x308) = uVar2;
    uVar10 = *(undefined4 *)(unaff_x19 + 0x46c);
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    uVar9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                      (*(undefined4 *)(unaff_x19 + 0x468),uVar10,*(undefined4 *)(unaff_x19 + 0x470))
    ;
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined4 *)(unaff_x19 + 0x478) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x47c) = uVar10;
    *(undefined8 *)(lVar6 + 800) = *(undefined8 *)(lVar6 + 0x318);
    uVar7 = *(undefined8 *)(lVar6 + 0x4e8);
    *(undefined4 *)(unaff_x19 + 0x460) = *(undefined4 *)(unaff_x29 + -0x20);
    *(undefined8 *)(lVar6 + 0x2f8) = uVar7;
    uVar7 = *(undefined8 *)(lVar6 + 0x2f8);
    *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(unaff_x19 + 0x460);
    *(undefined8 *)(lVar6 + 0x2d8) = uVar7;
    uVar10 = *(undefined4 *)(unaff_x19 + 0x43c);
    uVar9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                      (*(undefined4 *)(unaff_x19 + 0x438),uVar10,*(undefined4 *)(unaff_x19 + 0x440),
                       uVar2);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined4 *)(unaff_x19 + 0x448) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x44c) = uVar10;
    *(undefined8 *)(lVar6 + 0x2f0) = *(undefined8 *)(lVar6 + 0x2e8);
    NullCheck(*(void **)(lVar6 + 0x338));
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(lVar6 + 0x2c8) = *(undefined8 *)(lVar6 + 800);
    *(undefined8 *)(lVar6 + 0x2c0) = *(undefined8 *)(lVar6 + 0x2f0);
    param_4 = *(undefined4 *)(unaff_x19 + 0x420);
    bVar1 = BaseRuntimePanel_ScreenToPanel_mAF61E995600A215F99FC3381F94A2F6BFECABB57
                      (*(undefined4 *)(unaff_x19 + 0x428),*(undefined4 *)(unaff_x19 + 0x42c),param_4
                       ,*(undefined4 *)(unaff_x19 + 0x424),*(undefined8 *)(lVar6 + 0x338),
                       unaff_x29 + -0x98,unaff_x29 + -0xa0,0,uVar2);
    *(byte *)(unaff_x19 + 0x434) = bVar1 & 1;
  }
  *(undefined4 *)(unaff_x19 + 0x2f8) = *(undefined4 *)(unaff_x29 + -0x3c);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
  uVar2 = PointerDeviceState_GetPanel_mF1ABAF676F34A5F603E66044D2F5BAB057AC140E
                    (*(undefined4 *)(unaff_x19 + 0x2f8),0,0);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 400) = uVar2;
  uVar2 = IsInstClass(*(Il2CppObject **)(lVar6 + 400),
                      *(Il2CppClass **)Method_Unity_Collections_NativeArray<int>_CopyFrom__);
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0x460) = uVar2;
  *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(lVar6 + 0x460);
  *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(lVar6 + 0x480);
  *(bool *)(unaff_x29 + -0xf4) = *(long *)(lVar6 + 0x188) != *(long *)(lVar6 + 0x180);
  *(byte *)(unaff_x19 + 0x2dc) = *(byte *)(unaff_x29 + -0xf4) & 1;
  if ((*(byte *)(unaff_x19 + 0x2dc) & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)(lVar6 + 0x460);
    if (*(long *)(lVar6 + 0x170) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(lVar6 + 0x460);
      *(undefined4 *)(unaff_x19 + 0x2c4) = *(undefined4 *)(unaff_x29 + -0x3c);
      *(undefined8 *)(lVar6 + 0x158) = *(undefined8 *)(lVar6 + 0x460);
      uVar2 = *(undefined8 *)(lVar6 + 0x4f8);
      *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)(unaff_x29 + -0x10);
      *(undefined8 *)(lVar6 + 0x148) = uVar2;
      uVar2 = *(undefined8 *)(lVar6 + 0x148);
      *(undefined4 *)(unaff_x19 + 0x290) = *(undefined4 *)(unaff_x19 + 0x2b0);
      *(undefined8 *)(lVar6 + 0x128) = uVar2;
      param_4 = *(undefined4 *)(unaff_x19 + 0x290);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x28c);
      *(undefined8 *)(unaff_x19 + 0x80) = 0;
      uVar9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                        (*(undefined4 *)(unaff_x19 + 0x288));
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined4 *)(unaff_x19 + 0x298) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x29c) = uVar10;
      *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(lVar6 + 0x138);
      NullCheck(*(void **)(lVar6 + 0x158));
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(lVar6 + 0x140);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x274);
      uVar9 = BaseRuntimePanel_ScreenToPanel_m7825049306B75739056A085BEBB4DBF9192EAED6
                        (*(undefined4 *)(unaff_x19 + 0x270),*(undefined8 *)(lVar6 + 0x158),uVar2);
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined4 *)(unaff_x19 + 0x278) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x27c) = uVar10;
      *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)(lVar6 + 0x118);
      NullCheck(*(void **)(lVar6 + 0x168));
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x2c4);
      *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(lVar6 + 0x120);
      BaseRuntimePanel_PointerLeavesPanel_mB19671805A09ABDCD5E57F3458471653B6C3F39E
                (*(undefined4 *)(unaff_x19 + 0x268),*(undefined4 *)(unaff_x19 + 0x26c),
                 *(undefined8 *)(lVar6 + 0x168),uVar9,uVar2);
    }
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x100) = *(undefined8 *)(lVar6 + 0x480);
    if (*(long *)(lVar6 + 0x100) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(lVar6 + 0x480);
      *(undefined4 *)(unaff_x19 + 0x254) = *(undefined4 *)(unaff_x29 + -0x3c);
      *(undefined8 *)(lVar6 + 0xe8) = *(undefined8 *)(lVar6 + 0x478);
      NullCheck(*(void **)(lVar6 + 0xf8));
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x254);
      *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar6 + 0xe8);
      BaseRuntimePanel_PointerEntersPanel_m6D24AF54FA1180AA1D4BE357ADD57846BCD6D8F6
                (*(undefined4 *)(unaff_x19 + 0x240),*(undefined4 *)(unaff_x19 + 0x244),
                 *(undefined8 *)(lVar6 + 0xf8),uVar9,0);
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(lVar6 + 0x480);
  *(bool *)(unaff_x29 + -0xf8) = *(long *)(lVar6 + 0xd8) != 0;
  *(byte *)(unaff_x19 + 0x234) = *(byte *)(unaff_x29 + -0xf8) & 1;
  if ((*(byte *)(unaff_x19 + 0x234) & 1) == 0) {
    *(byte *)(unaff_x19 + 0xe0) = *(byte *)(unaff_x29 + -0x54) & 1;
    *(byte *)(unaff_x19 + 0x560) = *(byte *)(unaff_x19 + 0xe0) & 1;
    *(byte *)(unaff_x19 + 0xdc) = *(byte *)(unaff_x19 + 0x560) & 1;
    if ((*(byte *)(unaff_x19 + 0xdc) & 1) != 0) {
      DefaultEventSystem_set_focusedPanel_m880CDB3048B0915D3593C1C299077B31D3B0F846
                (*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x4d8),0);
    }
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0x4c8);
    *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(lVar6 + 0x478);
    *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(lVar6 + 0xc0);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x1fc);
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    uVar9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline
                      (*(undefined4 *)(unaff_x19 + 0x1f8));
    uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined4 *)(unaff_x19 + 0x200) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x204) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x208) = param_4;
    uVar7 = *(undefined8 *)(lVar6 + 0xa0);
    *(undefined4 *)(unaff_x19 + 0x218) = *(undefined4 *)(unaff_x19 + 0x208);
    *(undefined8 *)(lVar6 + 0xb0) = uVar7;
    *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar6 + 0x470);
    *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar6 + 0x90);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x1cc);
    uVar9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline
                      (*(undefined4 *)(unaff_x19 + 0x1c8),uVar2);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined4 *)(unaff_x19 + 0x1d0) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x1d4) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x1d8) = param_4;
    uVar2 = *(undefined8 *)(lVar6 + 0x70);
    *(undefined4 *)(unaff_x19 + 0x1e8) = *(undefined4 *)(unaff_x19 + 0x1d8);
    *(undefined8 *)(lVar6 + 0x80) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(lVar6 + 0x4a0);
    pIVar4 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(lVar6 + 0x4b0) + 0x38),1);
    uVar5 = il2cpp_codegen_class_is_value_type(pIVar4);
    if ((uVar5 & 1) == 0) {
      *(long *)(unaff_x19 + 0x68) = unaff_x29 + -0x50;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x4c0);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0x78),*(void **)(unaff_x19 + 0x68),
               (ulong)*(uint *)(unaff_x29 + -100));
    NullCheck(*(void **)(*(long *)(unaff_x19 + 0xd0) + 200));
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(lVar6 + 200);
    uVar2 = *(undefined8 *)(lVar6 + 0xb0);
    *(undefined4 *)(unaff_x19 + 0x1b8) = *(undefined4 *)(unaff_x19 + 0x218);
    *(undefined8 *)(lVar6 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)(lVar6 + 0x80);
    *(undefined4 *)(unaff_x19 + 0x1a8) = *(undefined4 *)(unaff_x19 + 0x1e8);
    *(undefined8 *)(lVar6 + 0x40) = uVar2;
    pIVar4 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(lVar6 + 0x4b0) + 0x38),1);
    uVar5 = il2cpp_codegen_class_is_value_type(pIVar4);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = **(undefined8 **)(*(long *)(unaff_x19 + 0xd0) + 0x4a0);
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x4a0);
    }
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x58);
    uVar2 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                 (*(long *)(*(long *)(unaff_x19 + 0xd0) + 0x4b0) + 0x38),2);
    auVar11 = Func_4_Invoke_m1B3086E7C4107A2F5235389DA3D79311375E21A4_inline
                        (*(undefined4 *)(unaff_x19 + 0x1b0),*(undefined4 *)(unaff_x19 + 0x1b4),
                         *(undefined4 *)(unaff_x19 + 0x1b8),*(undefined4 *)(unaff_x19 + 0x1a0),
                         *(undefined4 *)(unaff_x19 + 0x1a4),*(undefined4 *)(unaff_x19 + 0x1a8),
                         *(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x50),uVar2);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(long *)(lVar6 + 0x60) = auVar11._0_8_;
    *(undefined8 *)(lVar6 + 0x410) = *(undefined8 *)(lVar6 + 0x60);
    *(long *)(lVar6 + 0x28) = unaff_x29 + -0x100;
    il2cpp::utils::
    Finally<DefaultEventSystem_SendPositionBasedEvent_TisIl2CppFullySharedGenericAny_mBA3CB514D1E06EB3DD892C675936B2201218F104_gshared::__25>
              ((utils *)(unaff_x19 + 0x188),auVar11._8_8_);
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x480);
    NullCheck(*(void **)(lVar6 + 0x20));
    uVar2 = VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                      (0x26,*(Il2CppObject **)(*(long *)(unaff_x19 + 0xd0) + 0x20));
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    puVar8 = *(undefined8 **)(unaff_x19 + 0xd0);
    puVar8[1] = *(undefined8 *)(unaff_x19 + 0x48);
    *puVar8 = puVar8[0x82];
    NullCheck((void *)puVar8[1]);
    VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
              (6,(Il2CppObject *)(*(undefined8 **)(unaff_x19 + 0xd0))[1],
               (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)
               **(undefined8 **)(unaff_x19 + 0xd0));
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x410);
    NullCheck(*(void **)(unaff_x19 + 0x158));
    uVar9 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53
                      (*(undefined8 *)(unaff_x19 + 0x158),0);
    *(undefined4 *)(unaff_x19 + 0x44) = uVar9;
    *(byte *)(unaff_x19 + 0x154) = (byte)*(undefined4 *)(unaff_x19 + 0x44) & 1;
    *(byte *)(unaff_x19 + 0x56c) = *(byte *)(unaff_x19 + 0x154) & 1;
    *(byte *)(unaff_x19 + 0x150) = *(byte *)(unaff_x19 + 0x56c) & 1;
    if ((*(byte *)(unaff_x19 + 0x150) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x480);
      DefaultEventSystem_UpdateFocusedPanel_m60C0DC3B3F201A2DE043AD5B1AC02D0E425D1141
                (*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x4d8),
                 *(undefined8 *)(unaff_x19 + 0x148),0);
    }
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x410);
    NullCheck(*(void **)(unaff_x19 + 0x140));
    uVar2 = VirtualFuncInvoker0<long>::Invoke(5,*(Il2CppObject **)(unaff_x19 + 0x140));
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0x38);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Collections_NativeArray<JobHandle>_Dispose__);
    uVar2 = EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12
                      (*(MethodInfo **)Method_Unity_Collections_NativeArray<int>_GetSubArray__);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0x30);
    *(bool *)(unaff_x19 + 0x568) = *(long *)(unaff_x19 + 0x138) == *(long *)(unaff_x19 + 0x130);
    *(byte *)(unaff_x19 + 300) = *(byte *)(unaff_x19 + 0x568) & 1;
    if ((*(byte *)(unaff_x19 + 300) & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x410);
      NullCheck(*(void **)(unaff_x19 + 0x118));
      uVar2 = VirtualFuncInvoker0<long>::Invoke(5,*(Il2CppObject **)(unaff_x19 + 0x118));
      *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0x28);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_Unity_Collections_NativeArray<JobHandle>__ctor__);
      uVar2 = EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D
                        (*(MethodInfo **)Method_Unity_Collections_NativeArray<int>_get_IsCreated__);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(long *)(unaff_x19 + 0x110) == *(long *)(unaff_x19 + 0x108)) {
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x410);
        uVar2 = CastclassSealed(*(Il2CppObject **)(unaff_x19 + 0x100),
                                *(Il2CppClass **)
                                 Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        NullCheck(*(void **)(unaff_x19 + 0x18));
        uVar2 = CastclassSealed(*(Il2CppObject **)(unaff_x19 + 0x100),
                                *(Il2CppClass **)
                                 Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
        uVar9 = PointerEventBase_1_get_pressedButtons_mAEE1A8AAE5241E6E45E1750BE6BC01E86CC9EF1E_inline
                          (*(PointerEventBase_1_t2DFB78320E5810F8163F6CF5D3C5537CF40B2496 **)
                            (unaff_x19 + 0x10),
                           *(MethodInfo **)Method_Unity_Collections_NativeArray<Keyframe>_Dispose__)
        ;
        *(undefined4 *)(unaff_x19 + 0xc) = uVar9;
        *(undefined4 *)(unaff_x19 + 0xfc) = *(undefined4 *)(unaff_x19 + 0xc);
        *(uint *)(unaff_x19 + 0x550) = (uint)(*(int *)(unaff_x19 + 0xfc) == 0);
      }
      else {
        *(undefined4 *)(unaff_x19 + 0x550) = 0;
      }
      *(bool *)(unaff_x19 + 0x564) = *(int *)(unaff_x19 + 0x550) != 0;
      *(byte *)(unaff_x19 + 0xf8) = *(byte *)(unaff_x19 + 0x564) & 1;
      if ((*(byte *)(unaff_x19 + 0xf8) & 1) != 0) {
        *(undefined4 *)(unaff_x19 + 0xf4) = *(undefined4 *)(unaff_x29 + -0x3c);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
        PointerDeviceState_SetPlayerPanelWithSoftPointerCapture_mC198DEB84AC0A97B1754EC66048AFEE33D3E53CA
                  (*(undefined4 *)(unaff_x19 + 0xf4),0);
      }
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x128) = *(undefined4 *)(unaff_x29 + -0x3c);
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x480);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
      PointerDeviceState_SetPlayerPanelWithSoftPointerCapture_mC198DEB84AC0A97B1754EC66048AFEE33D3E53CA
                (*(undefined4 *)(unaff_x19 + 0x128),*(undefined8 *)(unaff_x19 + 0x120),0);
    }
    *(undefined4 *)(unaff_x19 + 0xe4) = 0x1c;
    il2cpp::utils::
    FinallyHelper<DefaultEventSystem_SendPositionBasedEvent_TisIl2CppFullySharedGenericAny_mBA3CB514D1E06EB3DD892C675936B2201218F104_gshared::$_25,false>
    ::~FinallyHelper((FinallyHelper<DefaultEventSystem_SendPositionBasedEvent_TisIl2CppFullySharedGenericAny_mBA3CB514D1E06EB3DD892C675936B2201218F104_gshared::__25,false>
                      *)(unaff_x19 + 400));
  }
  lVar6 = tpidr_el0;
  lVar6 = *(long *)(lVar6 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  return;
}


