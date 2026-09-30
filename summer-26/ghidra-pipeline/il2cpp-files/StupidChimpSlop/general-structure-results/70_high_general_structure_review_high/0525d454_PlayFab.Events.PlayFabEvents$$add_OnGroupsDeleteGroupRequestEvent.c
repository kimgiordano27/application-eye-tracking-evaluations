/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsDeleteGroupRequestEvent
ENTRY_POINT: 0525d454
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_Events_PlayFabEvents__add_OnGroupsDeleteGroupRequestEvent(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 uStack0000000000000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x170));
  FUN_02d4dc40(System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
  FUN_02d4dc40(
              UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
              );
  FUN_02d4dc40(
              Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
              );
  FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_06648098);
  FUN_02d4dc40(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_066480a8);
  FUN_02d4dc40(PTR_DAT_066480b0);
  *(undefined1 *)(unaff_x21 + 0x3bd) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  _uStack0000000000000050 = 0;
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    uVar5 = FUN_047d0100(*(long *)(unaff_x20 + 0x88),unaff_w19,&stack0x00000068,
                         *(undefined8 *)
                          Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
    FUN_03610fb4(lVar6,*(undefined8 *)PTR_DAT_066480a8);
    if (in_stack_00000068 != 0) {
      FUN_0479a870(in_stack_00000068,
                   *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
      puVar3 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
      puVar2 = PTR_DAT_06648098;
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      in_stack_00000058 = in_stack_00000018;
      _uStack0000000000000050 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000020;
      while (uVar5 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar3), lVar8 = in_stack_00000058
            , (uVar5 & 1) != 0) {
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar7 = *(long *)(in_stack_00000058 + 0x48);
        uVar4 = uStack0000000000000050;
        uVar5 = _uStack0000000000000050 & 0xff;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        FUN_05254740(lVar8);
        if (lVar6 == 0) {
LAB_0525d6a0:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0525d6a0;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined1 *)(lVar8 + (int)uVar1 + 0x20) = uVar4;
        }
        else {
          FUN_03611844(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      FUN_04a08efc(&stack0x00000040,
                   *(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
      if (lVar6 != 0) {
        FUN_036122c4(&stack0x00000028,lVar6,
                     *(undefined8 *)
                      UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
        puVar3 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
        puVar2 = 
        UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
        ;
        while( true ) {
          uVar5 = FUN_049b0478(&stack0x00000028,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            FUN_049b0474(&stack0x00000028,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                        );
            return;
          }
          if (in_stack_00000068 == 0) break;
          FUN_0479b8e4(in_stack_00000068,in_stack_00000038 & 0xff,*(undefined8 *)puVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


