/*
FUNCTION_NAME: VisualElementFocusRing_FocusRingAutoIndexSort_m3A5B1368543121656105D37462B199A9EF0B6712
ENTRY_POINT: 0448d918
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
VisualElementFocusRing_FocusRingAutoIndexSort_m3A5B1368543121656105D37462B199A9EF0B6712
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
          VisualElementFocusRing_t8965E2C7F4AC653F2C416E2B81F66E51FE8EEFE3 *param_5,void *param_6,
          void *param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  Il2CppObject *pIVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_62;
  undefined1 local_61;
  void *local_60;
  void *local_58;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  void *local_38;
  void *local_30;
  VisualElementFocusRing_t8965E2C7F4AC653F2C416E2B81F66E51FE8EEFE3 *local_28;
  
  puVar4 = StringLiteral_10677;
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_40 = param_8;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((VisualElementFocusRing_FocusRingAutoIndexSort_m3A5B1368543121656105D37462B199A9EF0B6712::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_10677);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    VisualElementFocusRing_FocusRingAutoIndexSort_m3A5B1368543121656105D37462B199A9EF0B6712::
    s_Il2CppMethodInitialized = 1;
  }
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  local_61 = 0;
  local_62 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_48 = VisualElementFocusRing_get_defaultFocusOrder_m203045C5C38AE34531DB2B05436514C4EB34CD2A_inline
                       (local_28,(MethodInfo *)0x0);
  pvVar8 = local_30;
  local_44 = local_48;
  if (local_48 != 0) {
    if (local_48 == 1) {
      NullCheck(local_30);
      local_58 = (void *)IsInstClass(*(Il2CppObject **)((long)pvVar8 + 0x18),*(Il2CppClass **)puVar3
                                    );
      pvVar8 = local_38;
      NullCheck(local_38);
      local_60 = (void *)IsInstClass(*(Il2CppObject **)((long)pvVar8 + 0x18),*(Il2CppClass **)puVar3
                                    );
      pvVar8 = local_58;
      local_61 = local_58 != (void *)0x0 && local_60 != (void *)0x0;
      if ((bool)local_61) {
        NullCheck(local_58);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(param_2,uVar5);
        fVar9 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                 ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                  (MethodInfo *)0x0);
        pvVar8 = local_60;
        NullCheck(local_60);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(param_2,uVar5);
        fVar10 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                   (MethodInfo *)0x0);
        pvVar8 = local_58;
        local_62 = fVar9 < fVar10;
        if ((bool)local_62) {
          return 0xffffffff;
        }
        NullCheck(local_58);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar9 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                 ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                  (MethodInfo *)0x0);
        pvVar8 = local_60;
        NullCheck(local_60);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar10 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                   (MethodInfo *)0x0);
        pvVar8 = local_58;
        if (fVar10 < fVar9) {
          return 1;
        }
        NullCheck(local_58);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        pvVar8 = local_60;
        fVar9 = fVar10;
        NullCheck(local_60);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar9,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        pvVar8 = local_58;
        if (fVar10 < fVar9) {
          return 0xffffffff;
        }
        NullCheck(local_58);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar9,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        pvVar8 = local_60;
        fVar10 = fVar9;
        NullCheck(local_60);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        if (fVar10 < fVar9) {
          return 1;
        }
      }
      pIVar6 = (Il2CppObject *)
               Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051
                         (*(MethodInfo **)puVar4);
      pvVar7 = local_30;
      NullCheck(local_30);
      pvVar8 = local_38;
      iVar1 = *(int *)((long)pvVar7 + 0x10);
      NullCheck(local_38);
      iVar2 = *(int *)((long)pvVar8 + 0x10);
      NullCheck(pIVar6);
      uVar5 = VirtualFuncInvoker2<int,int,int>::Invoke(6,pIVar6,iVar1,iVar2);
      return uVar5;
    }
    if (local_48 == 2) {
      NullCheck(local_30);
      pvVar7 = (void *)IsInstClass(*(Il2CppObject **)((long)pvVar8 + 0x18),*(Il2CppClass **)puVar3);
      pvVar8 = local_38;
      NullCheck(local_38);
      pvVar8 = (void *)IsInstClass(*(Il2CppObject **)((long)pvVar8 + 0x18),*(Il2CppClass **)puVar3);
      if (pvVar7 != (void *)0x0 && pvVar8 != (void *)0x0) {
        NullCheck(pvVar7);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar7);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(param_2,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        fVar9 = param_2;
        NullCheck(pvVar8);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar9,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        if (param_2 < fVar9) {
          return 0xffffffff;
        }
        NullCheck(pvVar7);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar7);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar9,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        fVar10 = fVar9;
        NullCheck(pvVar8);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
        if (fVar10 < fVar9) {
          return 1;
        }
        NullCheck(pvVar7);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar7);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar9 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                 ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                  (MethodInfo *)0x0);
        NullCheck(pvVar8);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar10 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                   (MethodInfo *)0x0);
        if (fVar9 < fVar10) {
          return 0xffffffff;
        }
        NullCheck(pvVar7);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar7);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar9 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                 ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                  (MethodInfo *)0x0);
        NullCheck(pvVar8);
        uVar5 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pvVar8,0);
        uStack_78 = CONCAT44(param_4,param_3);
        local_80 = CONCAT44(fVar10,uVar5);
        fVar10 = (float)Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,
                                   (MethodInfo *)0x0);
        if (fVar10 < fVar9) {
          return 1;
        }
      }
      pIVar6 = (Il2CppObject *)
               Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051
                         (*(MethodInfo **)puVar4);
      pvVar7 = local_30;
      NullCheck(local_30);
      pvVar8 = local_38;
      iVar1 = *(int *)((long)pvVar7 + 0x10);
      NullCheck(local_38);
      iVar2 = *(int *)((long)pvVar8 + 0x10);
      NullCheck(pIVar6);
      uVar5 = VirtualFuncInvoker2<int,int,int>::Invoke(6,pIVar6,iVar1,iVar2);
      return uVar5;
    }
  }
  pIVar6 = (Il2CppObject *)
           Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(*(MethodInfo **)puVar4);
  pvVar7 = local_30;
  NullCheck(local_30);
  pvVar8 = local_38;
  iVar1 = *(int *)((long)pvVar7 + 0x10);
  NullCheck(local_38);
  iVar2 = *(int *)((long)pvVar8 + 0x10);
  NullCheck(pIVar6);
  uVar5 = VirtualFuncInvoker2<int,int,int>::Invoke(6,pIVar6,iVar1,iVar2);
  return uVar5;
}


