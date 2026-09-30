/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.EditorSettings$$get_frameRate
ENTRY_POINT: 02403e74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Timeline_TimelineAsset_EditorSettings__get_frameRate(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  uint uVar12;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x28;
  ulong unaff_x29;
  undefined8 unaff_d8;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  do {
    uVar2 = *(undefined4 *)unaff_x28;
    uVar3 = *(undefined4 *)((long)unaff_x28 + 4);
    uVar1 = param_1 + 1;
    uVar12 = 0;
    if (uVar1 != unaff_x27) {
      uVar12 = (uint)uVar1;
    }
    uStack0000000000000028 = uVar2;
    uStack000000000000002c = uVar3;
    uStack0000000000000030 = uVar2;
    uStack0000000000000034 = uVar3;
    uVar9 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000028);
    if (unaff_x26 == 0) {
LAB_02404390:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((ulong)*(uint *)(unaff_x26 + 0x18) <= unaff_x29 + 1) {
LAB_0240438c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar11 = unaff_x26 + (unaff_x22 >> 0x20) * 0x18;
    *(undefined4 *)(lVar11 + 0x20) = uVar2;
    *(undefined4 *)(lVar11 + 0x24) = uVar3;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = uVar9;
    if ((*(uint *)(unaff_x25 + 0x18) <= param_1) || (*(uint *)(unaff_x25 + 0x18) <= uVar12))
    goto LAB_0240438c;
    uVar15 = *unaff_x28;
    uVar16 = *(undefined8 *)(unaff_x25 + (long)(int)uVar12 * 0xc + 0x20);
    in_stack_00000040 = uVar15;
    in_stack_00000048 = uVar16;
    uVar9 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000040);
    unaff_x29 = unaff_x29 + 2;
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x29) goto LAB_0240438c;
    lVar11 = unaff_x22 + 0x100000000;
    unaff_x22 = unaff_x22 + 0x200000000;
    lVar11 = unaff_x26 + (lVar11 >> 0x20) * 0x18;
    *(ulong *)(lVar11 + 0x20) =
         CONCAT44(((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar16 >> 0x20)) *
                  (float)((ulong)unaff_d8 >> 0x20),((float)uVar15 + (float)uVar16) * (float)unaff_d8
                 );
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = uVar9;
    if (uVar1 == unaff_x27) {
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<XRLoader>_Contains__);
      puVar5 = UnityEngine_EventSystems_EventSystem_TypeInfo;
      if (lVar11 != 0) {
        FUN_02455744(lVar11,0);
        FUN_02456c48(lVar11);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        puVar5 = System_Collections_Generic_List<XRReferenceImage>_TypeInfo;
        if (lVar10 != 0) {
          FUN_02456fe4(lVar10,0,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                       ,0);
          FUN_02456e28(lVar11,0,0,3,lVar10,0);
          lVar10 = *(long *)puVar5;
          uVar9 = *(undefined8 *)(lVar11 + 0x80);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar5;
          }
          uVar15 = in_stack_00000058;
          puVar4 = StringLiteral_8567;
          lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar13 == 0) {
            FUN_02414be8(*(undefined4 *)(lVar10 + 0xe0));
            return;
          }
          uVar9 = FUN_010dcdb8(uVar9,lVar13,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                              );
          uVar9 = FUN_010df6b8(uVar9,*(undefined8 *)puVar4);
          lVar10 = *(long *)puVar5;
          uVar16 = *(undefined8 *)(lVar11 + 0x70);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
            lVar10 = *(long *)puVar5;
          }
          puVar4 = PTR_DAT_033eedf8;
          lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar13 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
              lVar10 = *(long *)puVar5;
            }
            uVar15 = **(undefined8 **)(lVar10 + 0xb8);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar13 == 0) goto LAB_02404390;
            FUN_012d239c(lVar13,uVar15,*(undefined8 *)PTR_DAT_033f0718,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar13;
            uVar15 = in_stack_00000058;
          }
          puVar4 = 
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
          ;
          uVar16 = FUN_010dcdb8(uVar16,lVar13,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                               );
          uVar16 = FUN_010df6b8(uVar16,*(undefined8 *)puVar4);
          lVar10 = *(long *)puVar5;
          uVar14 = *(undefined8 *)(lVar11 + 0x70);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
            lVar10 = *(long *)puVar5;
          }
          puVar4 = StringLiteral_1507;
          lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
          if (lVar11 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
              lVar10 = *(long *)puVar5;
            }
            uVar15 = **(undefined8 **)(lVar10 + 0xb8);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar11 == 0) goto LAB_02404390;
            FUN_012d239c(lVar11,uVar15,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                         ,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar11;
            uVar15 = in_stack_00000058;
          }
          puVar8 = StringLiteral_10491;
          puVar7 = StringLiteral_9135;
          puVar6 = StringLiteral_2811;
          puVar4 = Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__;
          puVar5 = PTR_DAT_033f1c70;
          uVar14 = FUN_010dcdb8(uVar14,lVar11,
                                *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_37__);
          uVar14 = FUN_010df6b8(uVar14,*(undefined8 *)puVar8);
          FUN_01322050(in_stack_00000010,uVar16,*(undefined8 *)puVar5);
          FUN_01322050(uVar15,uVar9,*(undefined8 *)puVar6);
          FUN_01322050(in_stack_00000000,uVar14,*(undefined8 *)puVar4);
          FUN_0240394c(*(undefined4 *)(in_stack_00000010 + 0x18),in_stack_00000008);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          puVar7 = StringLiteral_12929;
          puVar6 = StringLiteral_10837;
          puVar4 = Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__;
          puVar5 = System_Collections_Generic_ICollection<IList<int>>_TypeInfo;
          if (lVar11 != 0) {
            FUN_01320e50(lVar11,*(undefined8 *)
                                 UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                        );
            UnityEngine_Timeline_TimelineAsset__DeleteTrack(in_stack_00000010,uVar15,lVar11);
            FUN_02403688(lVar11);
            FUN_024036d8(in_stack_00000010,in_stack_00000000,uVar15,in_stack_00000008,lVar11);
            uVar9 = FUN_01325140(in_stack_00000000,*(undefined8 *)puVar4);
            uVar16 = FUN_01325140(in_stack_00000010,*(undefined8 *)puVar7);
            uVar15 = FUN_01325140(uVar15,*(undefined8 *)puVar6);
            uVar14 = FUN_01325140(in_stack_00000008,*(undefined8 *)puVar5);
            if (in_stack_00000018 != 0) {
              FUN_0266ed50(in_stack_00000018,0);
              FUN_0266b9c4(in_stack_00000018,uVar16,0);
              FUN_0266db2c(in_stack_00000018,uVar15,0);
              FUN_0266bb1c(in_stack_00000018,uVar14,0);
              FUN_0266c128(in_stack_00000018,uVar9,0);
              FUN_024039f8(&stack0x00000028,uVar16);
              in_stack_00000020[2] = in_stack_00000038;
              in_stack_00000020[1] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
              *in_stack_00000020 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
              return;
            }
          }
        }
      }
      goto LAB_02404390;
    }
    param_1 = uVar1;
    unaff_x28 = (undefined8 *)((long)unaff_x28 + 0xc);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) goto LAB_0240438c;
  } while( true );
}


