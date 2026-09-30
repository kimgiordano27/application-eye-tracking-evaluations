/*
FUNCTION_NAME: FUN_03adc628
ENTRY_POINT: 03adc628
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03adc628(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined2 local_a0 [2];
  undefined2 local_9c [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar5 = StringLiteral_3533;
  puVar4 = StringLiteral_3532;
  puVar3 = StringLiteral_1165;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_044ab7a6 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1165);
    FUN_01d7d918(StringLiteral_595);
    FUN_01d7d918(StringLiteral_4822);
    FUN_01d7d918(StringLiteral_1209);
    FUN_01d7d918(PTR_DAT_0423cd80);
    FUN_01d7d918(PTR_DAT_0423cd88);
    FUN_01d7d918(PTR_DAT_0423cd90);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field);
    FUN_01d7d918(
                Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
                );
    FUN_01d7d918(StringLiteral_3534);
    FUN_01d7d918(StringLiteral_3533);
    FUN_01d7d918(StringLiteral_3532);
    FUN_01d7d918(StringLiteral_1168);
    FUN_01d7d918(StringLiteral_1169);
    FUN_01d7d918(
                Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                );
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap)
    ;
    FUN_01d7d918(StringLiteral_1170);
    FUN_01d7d918(StringLiteral_1160);
    FUN_01d7d918(PTR_DAT_0423cd98);
    FUN_01d7d918(PTR_DAT_0422c5f8);
    FUN_01d7d918(PTR_DAT_0423cda0);
    FUN_01d7d918(StringLiteral_1172);
    FUN_01d7d918(StringLiteral_1173);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action);
    FUN_01d7d918(Field_UnityEngine_SecondarySpriteTexture_texture);
    FUN_01d7d918(StringLiteral_1175);
    FUN_01d7d918(StringLiteral_1325);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_1555);
    FUN_01d7d918(StringLiteral_1875);
    FUN_01d7d918(StringLiteral_1556);
    FUN_01d7d918(StringLiteral_1454);
    FUN_01d7d918(StringLiteral_1367);
    FUN_01d7d918(StringLiteral_842);
    FUN_01d7d918(StringLiteral_1710);
    FUN_01d7d918(Field_PaintCore_CwHashedModel_instance);
    FUN_01d7d918(StringLiteral_1711);
    FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
    FUN_01d7d918(StringLiteral_1712);
    FUN_01d7d918(StringLiteral_1221);
    DAT_044ab7a6 = 1;
  }
  lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar12,*(undefined8 *)puVar5);
  uVar16 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar16 = FUN_033a87c8(uVar16,0);
  puVar11 = StringLiteral_3534;
  puVar10 = StringLiteral_1556;
  puVar9 = StringLiteral_1555;
  puVar8 = StringLiteral_1367;
  puVar7 = StringLiteral_1325;
  puVar6 = StringLiteral_1172;
  puVar5 = StringLiteral_1170;
  puVar4 = StringLiteral_1168;
  puVar3 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
  puVar2 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State;
  if (lVar12 != 0) {
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)StringLiteral_3534);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar6,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar4,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar9,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar10,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar5,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar8,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)puVar3,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)
                           Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                          ,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
    FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
    **(long **)(*(long *)puVar7 + 0xb8) = lVar12;
    thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar7 + 0xb8),lVar12);
    puVar5 = StringLiteral_3532;
    lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
    puVar6 = StringLiteral_3533;
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar12,*(undefined8 *)StringLiteral_3533);
    uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
    puVar10 = PTR_DAT_0423cda0;
    puVar9 = PTR_DAT_0423cd98;
    puVar8 = PTR_DAT_0422c5f8;
    puVar4 = StringLiteral_1712;
    puVar3 = StringLiteral_1711;
    puVar2 = StringLiteral_1175;
    if (lVar12 != 0) {
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar3,0);
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar4,0);
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar8,0);
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar9,0);
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar10,0);
      FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
      plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar13 = lVar12;
      thunk_FUN_01e10808(plVar13,lVar12);
      lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar12,*(undefined8 *)puVar6);
      uVar16 = FUN_033a87c8(*(undefined8 *)puVar2,0);
      puVar6 = PTR_DAT_0423cd90;
      puVar5 = PTR_DAT_0423cd88;
      puVar2 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap;
      if (lVar12 != 0) {
        FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
        uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
        FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
        uVar16 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
        uVar16 = FUN_033a87c8(*(undefined8 *)puVar4,0);
        FUN_02f17d24(lVar12,uVar16,*(undefined8 *)puVar11);
        plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
        *plVar13 = lVar12;
        thunk_FUN_01e10808(plVar13,lVar12);
        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
        FUN_02b235c4(lVar12,*(undefined8 *)puVar5);
        uVar16 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                              ,0);
        local_84 = 0;
        uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar2,&local_84);
        puVar10 = PTR_DAT_0423cd80;
        puVar9 = StringLiteral_1875;
        puVar8 = StringLiteral_1454;
        puVar7 = StringLiteral_1209;
        puVar6 = StringLiteral_1173;
        puVar5 = StringLiteral_1169;
        puVar4 = StringLiteral_1160;
        puVar3 = StringLiteral_842;
        puVar2 = StringLiteral_595;
        if (lVar12 != 0) {
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)PTR_DAT_0423cd80);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
          local_88 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar8,&local_88);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
          local_90 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar4,&local_90);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
          local_98 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar3,&local_98);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1168,0);
          local_9c[0] = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar5,local_9c);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
          local_a0[0] = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar9,local_a0);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
          local_a4[0] = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar2,local_a4);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
          local_a8[0] = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)puVar6,local_a8);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)
                                 Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                ,0);
          local_ac = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)
                                       Field_UnityEngine_SecondarySpriteTexture_texture,&local_ac);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)
                                 Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                ,0);
          local_b8 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)
                                       Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
                                      ,&local_b8);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar15);
            lVar15 = *(long *)puVar7;
          }
          puVar4 = StringLiteral_1712;
          puVar3 = StringLiteral_1711;
          puVar2 = StringLiteral_1325;
          uStack_78 = (*(undefined8 **)(lVar15 + 0xb8))[1];
          local_80 = **(undefined8 **)(lVar15 + 0xb8);
          uVar14 = thunk_FUN_01de23e8(lVar15,&local_80);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
          local_c0 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)Field_PaintCore_CwHashedModel_instance,
                                      &local_c0);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)puVar3,0);
          local_c8 = 0;
          local_d0 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)
                                       Field_System_AppDomainSetup_domain_initializer_args,&local_d0
                                     );
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          uVar16 = FUN_033a87c8(*(undefined8 *)puVar4,0);
          local_e0 = 0;
          uStack_d8 = 0;
          uVar14 = thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1221,&local_e0);
          FUN_02b23db4(lVar12,uVar16,uVar14,*(undefined8 *)puVar10);
          plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *plVar13 = lVar12;
          thunk_FUN_01e10808(plVar13,lVar12);
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


