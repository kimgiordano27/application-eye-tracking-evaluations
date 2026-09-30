/*
FUNCTION_NAME: ControlGuanteEnSettings_PosiblePulsacionEnBoton_mCF1971A0B1FB225FCB19B784490B4C63CDF0237B
ENTRY_POINT: 0210b868
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ControlGuanteEnSettings_PosiblePulsacionEnBoton_mCF1971A0B1FB225FCB19B784490B4C63CDF0237B
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_150;
  undefined4 local_148;
  float local_140;
  undefined4 local_13c;
  float fStack_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  void *local_120;
  void *local_118;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float local_f0;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  float local_c4;
  void *local_c0;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float fStack_a8;
  float local_a4;
  float local_98;
  void *local_90;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar3 = Method_System_Collections_Generic_List<LogrosRecords_Resultado>_RemoveRange__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_38 = param_7;
  local_30 = param_5;
  local_28 = param_4;
  if ((ControlGuanteEnSettings_PosiblePulsacionEnBoton_mCF1971A0B1FB225FCB19B784490B4C63CDF0237B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<IXRSelectInteractor>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    ControlGuanteEnSettings_PosiblePulsacionEnBoton_mCF1971A0B1FB225FCB19B784490B4C63CDF0237B::
    s_Il2CppMethodInitialized = 1;
  }
  local_39 = 0;
  local_40 = 0;
  local_44 = 0.0;
  local_48 = (float)Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(0);
  local_4c = *(float *)(local_28 + 0x30);
  fVar10 = (float)il2cpp_codegen_subtract<float,float>(local_48,local_4c);
  fVar11 = 0.1;
  if (0.1 <= fVar10) {
    local_50 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(0);
    *(undefined4 *)(local_28 + 0x30) = local_50;
    local_39 = 0;
    local_58 = *(void **)(local_28 + 0x20);
    NullCheck(local_58);
    local_5c = *(int *)((long)local_58 + 0x20);
    if (local_5c == 0xc) {
      local_39 = 1;
      local_68 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A();
      NullCheck(local_68);
      local_6c = FGVariables_GetAlturaAsistida_mC989C10730997E295B4EB515CF433D75EC0BFEB1(local_68,0)
      ;
      local_70 = il2cpp_codegen_add<int,int>(local_6c,5);
      iVar6 = local_70 + -0x1e;
      local_40 = local_70;
      if (iVar6 != 0 && 0x1d < local_70) {
        iVar6 = -0xf;
        local_40 = -0xf;
      }
      local_78 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(iVar6);
      local_7c = local_40;
      NullCheck(local_78);
      FGVariables_SetAlturaAsistida_mD0C574861030B86A3FC52EFF5517F5778EFE1A0E(local_78,local_7c,0);
      puVar5 = (undefined8 *)
               il2cpp_codegen_static_fields_for
                         (*(Il2CppClass **)
                           Method_System_Collections_Generic_List_Enumerator<IXRSelectInteractor>_Dispose__
                         );
      local_88 = (void *)*puVar5;
      NullCheck(local_88);
      local_90 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (local_88,0);
      NullCheck(local_90);
      local_ac = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_90,0);
      local_b4 = fVar11;
      local_b0 = fVar11;
      fStack_a8 = fVar11;
      local_a4 = param_3;
      local_98 = param_3;
      local_44 = fVar11;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__
                );
      local_c0 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D(0);
      NullCheck(local_c0);
      fVar11 = (float)OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1(local_c0,0)
      ;
      local_c4 = fVar11;
      local_44 = (float)il2cpp_codegen_add<float,float>(local_b4,fVar11);
      local_d0 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (local_28,0);
      NullCheck(local_d0);
      local_d8 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_d0,0);
      local_e0 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (local_28,0);
      NullCheck(local_e0);
      local_e8 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(local_e0,0);
      NullCheck(local_e8);
      local_108 = (float)Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95
                                   (local_e8,0);
      local_10c = local_44;
      local_104 = local_108;
      fStack_100 = fVar11;
      local_fc = param_3;
      local_f0 = param_3;
      local_118 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                    (local_28,0);
      NullCheck(local_118);
      local_120 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                                    (local_118,0);
      NullCheck(local_120);
      local_13c = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(local_120,0)
      ;
      local_130 = CONCAT44(fVar11,local_13c);
      local_150 = 0;
      local_148 = 0;
      local_140 = param_3;
      fStack_138 = fVar11;
      local_134 = param_3;
      local_128 = param_3;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_150,local_108,local_10c
                 ,param_3,(MethodInfo *)0x0);
      NullCheck(local_d8);
      uStack_15c = (undefined4)((ulong)local_150 >> 0x20);
      local_160 = (undefined4)local_150;
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (local_160,uStack_15c,local_148,local_d8,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 1) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6(pvVar8,0x32,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 2) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6(pvVar8,0x4b,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 3) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6(pvVar8,100,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 5) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 6) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0x14,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 7) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0x28,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 8) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0x3c,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 9) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0x50,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 10) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,100,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0xb) {
      pvVar8 = (void *)FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
      NullCheck(pvVar8);
      FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7(pvVar8,0x7d,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0xd) {
      ControlGuanteEnSettings_Salir_m2580861CFF8C7D200B51CFBC0CE3F1AB08DFEB1D(local_28,0);
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 4) {
      pvVar8 = (void *)LanguageManager_get_instance_mEB943B4588389DD78CAFD810518FE7013B7F30E5(0);
      NullCheck(pvVar8);
      LanguageManager_CambiarIdioma_m74B4B4E9A230EA76529022161A5C1F67EFCFA1CA(pvVar8,0);
      local_39 = 1;
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x13) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarWall_mBC3958F36ACFC993E716C25EB88D80874605FEFA(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x14) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarPos_mADFE19E7C5CF17FD5BA65BCE3C4F6099DCCDFF84(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x15) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarDifManSim_mF430C1B02DF2C62CBD4D1C7D035364F6E16CDC6F(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x16) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarDifManKick_m58A8C886DF66723653AAE8C7EA776CBD0A19A24E(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x17) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarDifWomSim_mBB1596F044330B64297FB0449034E2F7295271E1(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x18) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarDifWomKick_mFA13A8506BD7156857DD65C5A821558BD0FA9372(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x19) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarClima_mFD34B05A4AA9AB7B4E2FCA377A815971A34E3284(pvVar8,0);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x1a) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pvVar8 = (void *)*puVar5;
        NullCheck(pvVar8);
        SettingsPanelNoTienda_SumarMultAlturaChute_mD1ECCBA35C662FDC418155D254356F0407B57904
                  (pvVar8,0);
      }
    }
    if ((local_39 & 1) != 0) {
      pvVar8 = *(void **)(local_28 + 0x28);
      NullCheck(pvVar8);
      ponerSettingsEnTV_refrescarTV_m476157FD30FA0ED0A2E5C5B11EF8AA56BEB3C8BD(pvVar8,0);
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x11) {
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar9 = *puVar5;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar9,0);
      if ((bVar4 & 1) != 0) {
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        pIVar7 = (Il2CppObject *)*puVar5;
        NullCheck(pIVar7);
        VirtualActionInvoker0::Invoke(0x13,pIVar7);
      }
    }
    pvVar8 = *(void **)(local_28 + 0x20);
    NullCheck(pvVar8);
    if (*(int *)((long)pvVar8 + 0x20) == 0x12) {
      ControlGuanteEnSettings_Salir_m2580861CFF8C7D200B51CFBC0CE3F1AB08DFEB1D(local_28,0);
    }
  }
  return;
}


