/*
FUNCTION_NAME: ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310
ENTRY_POINT: 044410cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 212
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               Il2CppObject *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *pEVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C **local_1c0;
  FinallyHelper<ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310::__9,false>
  aFStack_1b8 [16];
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1a8;
  undefined4 local_19c;
  void *local_198;
  Il2CppObject *local_190;
  undefined1 local_181;
  Il2CppObject *local_180;
  Il2CppObject *local_178;
  Il2CppObject *local_170;
  Il2CppObject *local_168;
  void *local_160;
  void *local_158;
  undefined1 local_14d;
  int local_14c;
  void *local_148;
  long local_140;
  void *local_138;
  undefined1 local_129;
  undefined4 local_128;
  undefined4 uStack_124;
  byte local_119;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  Il2CppObject *local_d8;
  long local_d0;
  long local_c8;
  Il2CppObject *local_c0;
  Il2CppObject *local_b8;
  void *local_b0;
  int local_a4;
  Il2CppObject *local_a0;
  List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6 *local_98;
  undefined1 local_89;
  Il2CppObject *local_88;
  Il2CppObject *local_80;
  uint local_78;
  uint local_74;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_70;
  undefined1 local_61;
  Il2CppObject *local_60;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  long local_50;
  void *local_48;
  Il2CppObject *local_40;
  undefined8 local_38;
  Il2CppObject *local_30;
  long local_28;
  
  puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_38 = param_6;
  local_30 = param_5;
  local_28 = param_4;
  if ((ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClickEvent_t30651949F0BA68E61187B63F5D325323E92CC318_il2cpp_TypeInfo_var_048d8210
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (void *)0x0;
  local_50 = 0;
  local_51 = 0;
  local_52 = 0;
  local_53 = 0;
  local_60 = (Il2CppObject *)0x0;
  local_61 = 0;
  local_70 = (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)0x0;
  local_74 = 0;
  local_78 = 0;
  local_80 = local_30;
  local_a0 = (Il2CppObject *)IsInst(local_30,*(Il2CppClass **)puVar2);
  local_89 = local_a0 == (Il2CppObject *)0x0;
  if (!(bool)local_89) {
    local_98 = *(List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6 **)(local_28 + 0x10);
    local_51 = local_89;
    local_88 = local_a0;
    local_40 = local_a0;
    NullCheck(local_a0);
    local_a4 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar2,local_a0);
    NullCheck(local_98);
    local_b0 = (void *)List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB
                                 (local_98,local_a4,
                                  *(MethodInfo **)
                                   PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
                                 );
    local_b8 = local_30;
    local_48 = local_b0;
    NullCheck(local_30);
    local_c0 = (Il2CppObject *)
               EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(local_b8,0);
    local_c8 = IsInstClass(local_c0,*(Il2CppClass **)puVar1);
    local_50 = local_c8;
    if (local_c8 == 0) {
      local_74 = 0;
    }
    else {
      local_d8 = local_40;
      local_d0 = local_c8;
      NullCheck(local_40);
      local_f4 = InterfaceFuncInvoker0<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>::Invoke
                           (5,*(Il2CppClass **)puVar2,local_d8);
      local_e8 = CONCAT44(param_2,local_f4);
      local_110 = param_3;
      uStack_f0 = param_2;
      local_ec = param_3;
      local_e0 = param_3;
      local_108 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                            (local_f4,param_2,param_3);
      local_100 = CONCAT44(param_2,local_108);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
                );
      uStack_124 = (undefined4)((ulong)local_100 >> 0x20);
      local_128 = (undefined4)local_100;
      local_119 = ClickDetector_ContainsPointer_m958B2DA338E9A24A5DF005639A981469DEA48852
                            (local_128,uStack_124,local_d0,0);
      local_119 = local_119 & 1;
      local_74 = (uint)local_119;
    }
    local_129 = local_74 != 0;
    if ((bool)local_129) {
      local_138 = local_48;
      local_52 = local_129;
      NullCheck(local_48);
      local_140 = *(long *)((long)local_138 + 0x10);
      if (local_140 == 0) {
        local_78 = 0;
      }
      else {
        local_148 = local_48;
        NullCheck(local_48);
        local_14c = *(int *)((long)local_148 + 0x30);
        local_78 = (uint)(0 < local_14c);
      }
      local_14d = local_78 != 0;
      if ((bool)local_14d) {
        local_158 = local_48;
        local_53 = local_14d;
        NullCheck(local_48);
        local_160 = *(void **)((long)local_158 + 0x10);
        local_168 = local_30;
        NullCheck(local_30);
        local_170 = (Il2CppObject *)
                    EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(local_168);
        NullCheck(local_160);
        pvVar3 = local_160;
        uVar6 = IsInstClass(local_170,*(Il2CppClass **)puVar1);
        local_180 = (Il2CppObject *)
                    VisualElement_FindCommonAncestor_m464F5AAEF24D4BC3A2847581F314630BE8C5B18B
                              (pvVar3,uVar6,0);
        local_181 = local_180 != (Il2CppObject *)0x0;
        if ((bool)local_181) {
          local_190 = local_30;
          local_198 = local_48;
          local_61 = local_181;
          local_178 = local_180;
          local_60 = local_180;
          NullCheck(local_48);
          local_19c = *(undefined4 *)((long)local_198 + 0x30);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      PTR_ClickEvent_t30651949F0BA68E61187B63F5D325323E92CC318_il2cpp_TypeInfo_var_048d8210
                    );
          uVar6 = IsInstSealed(local_190,
                               *(Il2CppClass **)
                                Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__);
          auVar7 = ClickEvent_GetPooled_m55055E410F3604AF4D748B94C32566D6C9770653(uVar6,local_19c,0)
          ;
          local_1a8 = auVar7._0_8_;
          local_1c0 = &local_70;
          local_70 = local_1a8;
          il2cpp::utils::
          Finally<ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310::__9>
                    ((utils *)&local_1c0,auVar7._8_8_);
          pIVar5 = local_60;
          pEVar4 = local_70;
          NullCheck(local_70);
          EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(pEVar4,pIVar5,0);
          pIVar5 = local_60;
          pEVar4 = local_70;
          NullCheck(local_60);
          VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                    (6,pIVar5,pEVar4);
          il2cpp::utils::
          FinallyHelper<ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310::$_9,false>
          ::~FinallyHelper(aFStack_1b8);
        }
      }
    }
  }
  return;
}


