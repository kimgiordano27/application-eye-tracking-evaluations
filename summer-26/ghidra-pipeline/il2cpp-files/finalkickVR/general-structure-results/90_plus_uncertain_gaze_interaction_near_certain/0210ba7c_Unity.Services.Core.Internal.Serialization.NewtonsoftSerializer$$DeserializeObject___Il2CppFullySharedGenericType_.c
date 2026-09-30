/*
FUNCTION_NAME: Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer$$DeserializeObject<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0210ba7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 181
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Unity_Services_Core_Internal_Serialization_NewtonsoftSerializer__DeserializeObject<__Il2CppFullySharedGenericType>
               (undefined1 param_1 [16],undefined4 param_2,float param_3,void *param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  long unaff_x29;
  undefined4 uVar8;
  float fVar9;
  MethodInfo *in_stack_00000060;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  int iStack0000000000000094;
  int iStack00000000000000bc;
  byte bStack00000000000000d7;
  int iStack00000000000000f4;
  int iStack000000000000011c;
  int iStack0000000000000144;
  int iStack000000000000016c;
  int iStack0000000000000194;
  int iStack00000000000001bc;
  int iStack00000000000001e4;
  undefined4 in_stack_00000330;
  undefined4 in_stack_00000334;
  
  NullCheck(param_4);
  uVar8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1
                    (in_stack_00000070[0x5c],in_stack_00000060);
  *(undefined4 *)(unaff_x29 + -0x8c) = uVar8;
  *(undefined4 *)(unaff_x29 + -0x88) = param_2;
  *(float *)(unaff_x29 + -0x84) = param_3;
  in_stack_00000070[0x5a] = *(long *)(unaff_x29 + -0x8c);
  *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x84);
  *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x7c);
  *(undefined4 *)(unaff_x29 + -0x24) = *(undefined4 *)(unaff_x29 + -0x90);
  *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x24);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  lVar2 = OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D(in_stack_00000060);
  in_stack_00000070[0x56] = lVar2;
  NullCheck((void *)in_stack_00000070[0x56]);
  uVar8 = OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1
                    (in_stack_00000070[0x56],in_stack_00000060);
  *(undefined4 *)(unaff_x29 + -0xa4) = uVar8;
  fVar9 = *(float *)(unaff_x29 + -0xa4);
  uVar8 = il2cpp_codegen_add<float,float>(*(float *)(unaff_x29 + -0x94),fVar9);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar8;
  lVar2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                    (in_stack_00000070[0x69],in_stack_00000060);
  in_stack_00000070[0x54] = lVar2;
  NullCheck((void *)in_stack_00000070[0x54]);
  lVar2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                    (in_stack_00000070[0x54],in_stack_00000060);
  in_stack_00000070[0x53] = lVar2;
  lVar2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                    (in_stack_00000070[0x69],in_stack_00000060);
  in_stack_00000070[0x52] = lVar2;
  NullCheck((void *)in_stack_00000070[0x52]);
  lVar2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                    (in_stack_00000070[0x52],in_stack_00000060);
  in_stack_00000070[0x51] = lVar2;
  NullCheck((void *)in_stack_00000070[0x51]);
  uVar8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95
                    (in_stack_00000070[0x51],in_stack_00000060);
  *(undefined4 *)(unaff_x29 + -0xe4) = uVar8;
  *(float *)(unaff_x29 + -0xe0) = fVar9;
  *(float *)(unaff_x29 + -0xdc) = param_3;
  in_stack_00000070[0x4f] = *(long *)(unaff_x29 + -0xe4);
  *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0xdc);
  *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0xd8);
  *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x24);
  lVar2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                    (in_stack_00000070[0x69],in_stack_00000060);
  in_stack_00000070[0x4b] = lVar2;
  NullCheck((void *)in_stack_00000070[0x4b]);
  lVar2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                    (in_stack_00000070[0x4b],in_stack_00000060);
  in_stack_00000070[0x4a] = lVar2;
  NullCheck((void *)in_stack_00000070[0x4a]);
  uVar8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95
                    (in_stack_00000070[0x4a],in_stack_00000060);
  in_stack_00000070[0x48] = CONCAT44(fVar9,uVar8);
  in_stack_00000070[0x44] = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            (&stack0x00000340,*(float *)(unaff_x29 + -0xe8),*(float *)(unaff_x29 + -0xec),param_3,
             in_stack_00000060);
  NullCheck((void *)in_stack_00000070[0x53]);
  in_stack_00000070[0x42] = in_stack_00000070[0x44];
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (in_stack_00000330,in_stack_00000334,0,in_stack_00000070[0x53],in_stack_00000060);
  *(undefined1 *)(unaff_x29 + -0x19) = 1;
  in_stack_00000070[0x41] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x41]);
  if (*(int *)(in_stack_00000070[0x41] + 0x20) == 1) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x3f] = lVar2;
    NullCheck((void *)in_stack_00000070[0x3f]);
    FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6
              (in_stack_00000070[0x3f],0x32,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x3e] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x3e]);
  if (*(int *)(in_stack_00000070[0x3e] + 0x20) == 2) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x3c] = lVar2;
    NullCheck((void *)in_stack_00000070[0x3c]);
    FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6
              (in_stack_00000070[0x3c],0x4b,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x3b] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x3b]);
  if (*(int *)(in_stack_00000070[0x3b] + 0x20) == 3) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x39] = lVar2;
    NullCheck((void *)in_stack_00000070[0x39]);
    FGVariables_SetCalidadGrafica_m1B393D2928ECD939CF8F23DC2C9EEFA8676C6AC6
              (in_stack_00000070[0x39],100,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x38] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x38]);
  if (*(int *)(in_stack_00000070[0x38] + 0x20) == 5) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x36] = lVar2;
    NullCheck((void *)in_stack_00000070[0x36]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x36],0,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x35] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x35]);
  if (*(int *)(in_stack_00000070[0x35] + 0x20) == 6) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x33] = lVar2;
    NullCheck((void *)in_stack_00000070[0x33]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x33],0x14,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x32] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x32]);
  if (*(int *)(in_stack_00000070[0x32] + 0x20) == 7) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x30] = lVar2;
    NullCheck((void *)in_stack_00000070[0x30]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x30],0x28,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x2f] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x2f]);
  if (*(int *)(in_stack_00000070[0x2f] + 0x20) == 8) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x2d] = lVar2;
    NullCheck((void *)in_stack_00000070[0x2d]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x2d],0x3c,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x2c] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x2c]);
  if (*(int *)(in_stack_00000070[0x2c] + 0x20) == 9) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x2a] = lVar2;
    NullCheck((void *)in_stack_00000070[0x2a]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x2a],0x50,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x29] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x29]);
  if (*(int *)(in_stack_00000070[0x29] + 0x20) == 10) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x27] = lVar2;
    NullCheck((void *)in_stack_00000070[0x27]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x27],100,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x26] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x26]);
  if (*(int *)(in_stack_00000070[0x26] + 0x20) == 0xb) {
    lVar2 = FGVariables_get_instance_m147FC1157F4A1D1FAA6ACEB3B30CA861A42F507A(0);
    in_stack_00000070[0x24] = lVar2;
    NullCheck((void *)in_stack_00000070[0x24]);
    FGVariables_SetAyudaDesplazamiento_m030482FD938194D62987B4F5FF763FB630667CB7
              (in_stack_00000070[0x24],0x7d,0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x23] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x23]);
  if (*(int *)(in_stack_00000070[0x23] + 0x20) == 0xd) {
    ControlGuanteEnSettings_Salir_m2580861CFF8C7D200B51CFBC0CE3F1AB08DFEB1D
              (in_stack_00000070[0x69],0);
  }
  in_stack_00000070[0x21] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x21]);
  if (*(int *)(in_stack_00000070[0x21] + 0x20) == 4) {
    lVar2 = LanguageManager_get_instance_mEB943B4588389DD78CAFD810518FE7013B7F30E5(0);
    in_stack_00000070[0x1f] = lVar2;
    NullCheck((void *)in_stack_00000070[0x1f]);
    LanguageManager_CambiarIdioma_m74B4B4E9A230EA76529022161A5C1F67EFCFA1CA
              (in_stack_00000070[0x1f],0);
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
  }
  in_stack_00000070[0x1e] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x1e]);
  if (*(int *)(in_stack_00000070[0x1e] + 0x20) == 0x13) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[0x1c] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[0x1c],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[0x1a] = *plVar3;
      NullCheck((void *)in_stack_00000070[0x1a]);
      SettingsPanelNoTienda_SumarWall_mBC3958F36ACFC993E716C25EB88D80874605FEFA
                (in_stack_00000070[0x1a],0);
    }
  }
  in_stack_00000070[0x19] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x19]);
  iStack00000000000001e4 = *(int *)(in_stack_00000070[0x19] + 0x20);
  if (iStack00000000000001e4 == 0x14) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[0x17] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[0x17],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[0x15] = *plVar3;
      NullCheck((void *)in_stack_00000070[0x15]);
      SettingsPanelNoTienda_SumarPos_mADFE19E7C5CF17FD5BA65BCE3C4F6099DCCDFF84
                (in_stack_00000070[0x15],0);
    }
  }
  in_stack_00000070[0x14] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0x14]);
  iStack00000000000001bc = *(int *)(in_stack_00000070[0x14] + 0x20);
  if (iStack00000000000001bc == 0x15) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[0x12] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[0x12],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[0x10] = *plVar3;
      NullCheck((void *)in_stack_00000070[0x10]);
      SettingsPanelNoTienda_SumarDifManSim_mF430C1B02DF2C62CBD4D1C7D035364F6E16CDC6F
                (in_stack_00000070[0x10],0);
    }
  }
  in_stack_00000070[0xf] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[0xf]);
  iStack0000000000000194 = *(int *)(in_stack_00000070[0xf] + 0x20);
  if (iStack0000000000000194 == 0x16) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[0xd] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[0xd],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[0xb] = *plVar3;
      NullCheck((void *)in_stack_00000070[0xb]);
      SettingsPanelNoTienda_SumarDifManKick_m58A8C886DF66723653AAE8C7EA776CBD0A19A24E
                (in_stack_00000070[0xb],0);
    }
  }
  in_stack_00000070[10] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[10]);
  iStack000000000000016c = *(int *)(in_stack_00000070[10] + 0x20);
  if (iStack000000000000016c == 0x17) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[8] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[8],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[6] = *plVar3;
      NullCheck((void *)in_stack_00000070[6]);
      SettingsPanelNoTienda_SumarDifWomSim_mBB1596F044330B64297FB0449034E2F7295271E1
                (in_stack_00000070[6],0);
    }
  }
  in_stack_00000070[5] = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)in_stack_00000070[5]);
  iStack0000000000000144 = *(int *)(in_stack_00000070[5] + 0x20);
  if (iStack0000000000000144 == 0x18) {
    plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    in_stack_00000070[3] = *plVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(in_stack_00000070[3],0);
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_00000070[1] = *plVar3;
      NullCheck((void *)in_stack_00000070[1]);
      SettingsPanelNoTienda_SumarDifWomKick_mFA13A8506BD7156857DD65C5A821558BD0FA9372
                (in_stack_00000070[1],0);
    }
  }
  *in_stack_00000070 = *(long *)(in_stack_00000070[0x69] + 0x20);
  NullCheck((void *)*in_stack_00000070);
  iStack000000000000011c = *(int *)(*in_stack_00000070 + 0x20);
  if (iStack000000000000011c == 0x19) {
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    uVar7 = *puVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar7,0);
    if ((bVar1 & 1) != 0) {
      puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      pvVar5 = (void *)*puVar4;
      NullCheck(pvVar5);
      SettingsPanelNoTienda_SumarClima_mFD34B05A4AA9AB7B4E2FCA377A815971A34E3284(pvVar5,0);
    }
  }
  pvVar5 = *(void **)(in_stack_00000070[0x69] + 0x20);
  NullCheck(pvVar5);
  iStack00000000000000f4 = *(int *)((long)pvVar5 + 0x20);
  if (iStack00000000000000f4 == 0x1a) {
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
    uVar7 = *puVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar7,0);
    if ((bVar1 & 1) != 0) {
      puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      pvVar5 = (void *)*puVar4;
      NullCheck(pvVar5);
      SettingsPanelNoTienda_SumarMultAlturaChute_mD1ECCBA35C662FDC418155D254356F0407B57904(pvVar5,0)
      ;
    }
  }
  bStack00000000000000d7 = *(byte *)(unaff_x29 + -0x19) & 1;
  if (bStack00000000000000d7 != 0) {
    pvVar5 = *(void **)(in_stack_00000070[0x69] + 0x28);
    NullCheck(pvVar5);
    ponerSettingsEnTV_refrescarTV_m476157FD30FA0ED0A2E5C5B11EF8AA56BEB3C8BD(pvVar5,0);
  }
  pvVar5 = *(void **)(in_stack_00000070[0x69] + 0x20);
  NullCheck(pvVar5);
  iStack00000000000000bc = *(int *)((long)pvVar5 + 0x20);
  if (iStack00000000000000bc == 0x11) {
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000078);
    uVar7 = *puVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar7,0);
    if ((bVar1 & 1) != 0) {
      puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000078);
      pIVar6 = (Il2CppObject *)*puVar4;
      NullCheck(pIVar6);
      VirtualActionInvoker0::Invoke(0x13,pIVar6);
    }
  }
  pvVar5 = *(void **)(in_stack_00000070[0x69] + 0x20);
  NullCheck(pvVar5);
  iStack0000000000000094 = *(int *)((long)pvVar5 + 0x20);
  if (iStack0000000000000094 == 0x12) {
    ControlGuanteEnSettings_Salir_m2580861CFF8C7D200B51CFBC0CE3F1AB08DFEB1D
              (in_stack_00000070[0x69],0);
  }
  return;
}


