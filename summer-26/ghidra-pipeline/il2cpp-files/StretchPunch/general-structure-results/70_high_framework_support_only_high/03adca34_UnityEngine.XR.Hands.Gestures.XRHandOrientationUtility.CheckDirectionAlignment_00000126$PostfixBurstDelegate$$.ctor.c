/*
FUNCTION_NAME: UnityEngine.XR.Hands.Gestures.XRHandOrientationUtility.CheckDirectionAlignment_00000126$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 03adca34
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_00000126_PostfixBurstDelegate___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x26;
  long *unaff_x28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000044;
  undefined1 in_stack_00000048;
  undefined1 uStack000000000000004c;
  undefined2 in_stack_00000050;
  undefined2 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  
  **(undefined8 **)(param_1 + 0xb8) = unaff_x19;
  thunk_FUN_01e10808(*(undefined8 *)(*unaff_x26 + 0xb8));
  puVar4 = StringLiteral_3532;
  lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
  puVar5 = StringLiteral_3533;
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar10,*(undefined8 *)StringLiteral_3533);
  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
  puVar8 = PTR_DAT_0423cda0;
  puVar7 = PTR_DAT_0423cd98;
  puVar6 = PTR_DAT_0422c5f8;
  puVar3 = StringLiteral_1712;
  puVar2 = StringLiteral_1711;
  puVar1 = StringLiteral_1175;
  if (lVar10 != 0) {
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar6,0);
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar7,0);
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar8,0);
    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
    plVar12 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    *plVar12 = lVar10;
    thunk_FUN_01e10808(plVar12,lVar10);
    lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar10,*(undefined8 *)puVar5);
    uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
    puVar5 = PTR_DAT_0423cd90;
    puVar4 = PTR_DAT_0423cd88;
    puVar1 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap;
    if (lVar10 != 0) {
      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
      uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
      uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
      uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
      plVar12 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
      *plVar12 = lVar10;
      thunk_FUN_01e10808(plVar12,lVar10);
      lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
      FUN_02b235c4(lVar10,*(undefined8 *)puVar4);
      uVar11 = FUN_033a87c8(*(undefined8 *)
                             Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                            ,0);
      uStack000000000000006c = 0;
      uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,(long)&stack0x00000068 + 4);
      puVar9 = PTR_DAT_0423cd80;
      puVar8 = StringLiteral_1875;
      puVar7 = StringLiteral_1454;
      puVar6 = StringLiteral_1209;
      puVar5 = StringLiteral_1173;
      puVar4 = StringLiteral_1169;
      puVar3 = StringLiteral_1160;
      puVar2 = StringLiteral_842;
      puVar1 = StringLiteral_595;
      if (lVar10 != 0) {
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)PTR_DAT_0423cd80);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
        uStack0000000000000068 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar7,&stack0x00000068);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
        in_stack_00000060 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar3,&stack0x00000060);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
        in_stack_00000058 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar2,&stack0x00000058);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1168,0);
        uStack0000000000000054 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar4,&stack0x00000054);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
        in_stack_00000050 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar8,&stack0x00000050);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
        uStack000000000000004c = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar1,&stack0x0000004c);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
        in_stack_00000048 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)puVar5,&stack0x00000048);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                              ,0);
        uStack0000000000000044 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)Field_UnityEngine_SecondarySpriteTexture_texture,
                                    &stack0x00000044);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                              ,0);
        in_stack_00000038 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)
                                     Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_m_State
                                    ,&stack0x00000038);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
        lVar14 = *(long *)puVar6;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar14);
          lVar14 = *(long *)puVar6;
        }
        puVar3 = StringLiteral_1712;
        puVar2 = StringLiteral_1711;
        puVar1 = StringLiteral_1325;
        in_stack_00000078 = (*(undefined8 **)(lVar14 + 0xb8))[1];
        in_stack_00000070 = **(undefined8 **)(lVar14 + 0xb8);
        uVar13 = thunk_FUN_01de23e8(lVar14,&stack0x00000070);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1710,0);
        in_stack_00000030 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)Field_PaintCore_CwHashedModel_instance,
                                    &stack0x00000030);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
        in_stack_00000028 = 0;
        in_stack_00000020 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)
                                     Field_System_AppDomainSetup_domain_initializer_args,
                                    &stack0x00000020);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        uVar13 = thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1221,&stack0x00000010);
        FUN_02b23db4(lVar10,uVar11,uVar13,*(undefined8 *)puVar9);
        plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
        *plVar12 = lVar10;
        thunk_FUN_01e10808(plVar12,lVar10);
        if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000088) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


