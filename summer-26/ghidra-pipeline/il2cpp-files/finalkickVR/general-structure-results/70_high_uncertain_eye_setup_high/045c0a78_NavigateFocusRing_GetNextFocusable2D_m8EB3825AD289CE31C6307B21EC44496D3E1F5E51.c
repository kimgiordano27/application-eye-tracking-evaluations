/*
FUNCTION_NAME: NavigateFocusRing_GetNextFocusable2D_m8EB3825AD289CE31C6307B21EC44496D3E1F5E51
ENTRY_POINT: 045c0a78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

Il2CppObject *
NavigateFocusRing_GetNextFocusable2D_m8EB3825AD289CE31C6307B21EC44496D3E1F5E51
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,Il2CppObject *param_6,void *param_7,undefined8 param_8)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  Il2CppObject *local_d8;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  void *local_a8;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  Il2CppObject *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  Il2CppObject *local_30;
  long local_28;
  
  puVar1 = 
  PTR_NavigateFocusRing_tC9DA3D416867C8961F9AAA822CA624EB1D32F09F_il2cpp_TypeInfo_var_048de570;
  local_40 = param_8;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((NavigateFocusRing_GetNextFocusable2D_m8EB3825AD289CE31C6307B21EC44496D3E1F5E51::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_NavigateFocusRing_tC9DA3D416867C8961F9AAA822CA624EB1D32F09F_il2cpp_TypeInfo_var_048de570
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    NavigateFocusRing_GetNextFocusable2D_m8EB3825AD289CE31C6307B21EC44496D3E1F5E51::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (void *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (Il2CppObject *)0x0;
  local_99 = 0;
  local_9a = 0;
  local_9b = 0;
  local_9c = 0;
  local_9d = 0;
  memset(&local_c8,0,0x28);
  local_48 = (void *)IsInstClass(local_30,*(Il2CppClass **)
                                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                );
  local_99 = local_48 == (void *)0x0;
  if ((bool)local_99) {
    local_48 = *(void **)(local_28 + 0x10);
  }
  pvVar5 = *(void **)(local_28 + 0x10);
  NullCheck(pvVar5);
  uVar6 = VisualElement_get_worldBoundingBox_m086C681F01ED4E997C717364031BB80E3EDA5CAA(pvVar5);
  uStack_58 = CONCAT44(param_4,param_3);
  local_60 = CONCAT44(param_2,uVar6);
  uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_60,(MethodInfo *)0x0);
  uVar6 = param_2;
  uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                    (uVar7,param_2,uVar8,uVar6,0);
  uVar6 = param_2;
  uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_60,(MethodInfo *)0x0);
  uVar7 = uVar6;
  uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(uVar10,0);
  uVar7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline
                    (uVar9,uVar6,uVar10,uVar7,0);
  Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline(uVar8,&local_70,0);
  pvVar5 = local_48;
  NullCheck(local_48);
  uVar8 = VisualElement_get_worldBound_m2E4AF689F0B4AB06E1316348A1E10D4DB2412AC3(pvVar5,0);
  uStack_78 = CONCAT44(uVar6,uVar7);
  local_80 = CONCAT44(param_2,uVar8);
  uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
  uVar6 = param_2;
  uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                    (uVar7,param_2,uVar8,uVar6,0);
  uVar6 = param_2;
  uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0);
  uVar7 = uVar6;
  uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline
                     (uVar10,uVar7,0x40000000,0);
  uVar7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline
                    (uVar9,uVar6,uVar10,uVar7,0);
  Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline(uVar8,param_2,uVar7,uVar6,&local_90,0)
  ;
  pvVar5 = local_38;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pvVar2 = local_38;
  local_9a = pvVar5 == *(void **)(lVar3 + 0x10);
  if ((bool)local_9a) {
    fVar11 = (float)Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F_inline
                              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                               (MethodInfo *)0x0);
    Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE_inline
              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,(MethodInfo *)0x0)
    ;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pvVar5 = local_38;
    local_9b = pvVar2 == *(void **)(lVar3 + 0x18);
    if ((bool)local_9b) {
      fVar11 = (float)Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E_inline
                                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                 (MethodInfo *)0x0);
      Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                 (MethodInfo *)0x0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      plVar4 = (long *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar2 = local_38;
      local_9c = pvVar5 == (void *)*plVar4;
      if ((bool)local_9c) {
        fVar11 = (float)Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                   (MethodInfo *)0x0);
        Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                   (MethodInfo *)0x0);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_9d = pvVar2 == *(void **)(lVar3 + 8);
        if ((bool)local_9d) {
          fVar11 = (float)Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F_inline
                                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                     (MethodInfo *)0x0);
          Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  il2cpp_codegen_initobj(&local_c8,0x28);
  local_c8 = local_48;
  Il2CppCodeGenWriteBarrier(&local_c8,local_48);
  local_a8 = local_38;
  Il2CppCodeGenWriteBarrier(&local_a8,local_38);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  local_b0 = 1;
  local_d8 = (Il2CppObject *)
             FocusableHierarchyTraversal_GetBestOverall_mC2F808C4A4AB7EAAFDCD511987F250B346FF1D7D
                       (&local_c8,*(undefined8 *)(local_28 + 0x10),0);
  if (local_d8 == (Il2CppObject *)0x0) {
    local_98 = local_d8;
    uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0
                      );
    uVar6 = param_2;
    uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
    uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                      (uVar7,param_2,uVar8,uVar6,0);
    uVar6 = param_2;
    uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_80,(MethodInfo *)0x0
                      );
    uVar7 = uVar6;
    uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
    uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline
                       (uVar10,uVar7,0x40000000,0);
    uVar7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline
                      (uVar9,uVar6,uVar10,uVar7,0);
    Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline
              (uVar8,param_2,uVar7,uVar6,&local_90,0);
    pvVar5 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pvVar2 = local_38;
    if (pvVar5 == *(void **)(lVar3 + 0x18)) {
      fVar11 = (float)Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F_inline
                                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                 (MethodInfo *)0x0);
      Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                 (MethodInfo *)0x0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = local_38;
      if (pvVar2 == *(void **)(lVar3 + 0x10)) {
        fVar11 = (float)Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                   (MethodInfo *)0x0);
        Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                   (MethodInfo *)0x0);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        pvVar2 = local_38;
        if (pvVar5 == *(void **)(lVar3 + 8)) {
          fVar11 = (float)Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D_inline
                                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                     (MethodInfo *)0x0);
          Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                     (MethodInfo *)0x0);
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          plVar4 = (long *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          if (pvVar2 == (void *)*plVar4) {
            fVar11 = (float)Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F_inline
                                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_70,
                                       (MethodInfo *)0x0);
            Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_90,fVar11,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
    il2cpp_codegen_initobj(&local_c8,0x28);
    local_c8 = local_48;
    Il2CppCodeGenWriteBarrier(&local_c8,local_48);
    local_a8 = local_38;
    Il2CppCodeGenWriteBarrier(&local_a8,local_38);
    uStack_b8 = uStack_88;
    local_c0 = local_90;
    local_b0 = 0;
    local_d8 = (Il2CppObject *)
               FocusableHierarchyTraversal_GetBestOverall_mC2F808C4A4AB7EAAFDCD511987F250B346FF1D7D
                         (&local_c8,*(undefined8 *)(local_28 + 0x10),0);
    if (local_d8 == (Il2CppObject *)0x0) {
      local_d8 = local_30;
    }
  }
  return local_d8;
}


