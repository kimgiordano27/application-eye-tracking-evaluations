/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsAddMembersResultEvent
ENTRY_POINT: 0525c4dc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0525c7bc) */
/* WARNING: Removing unreachable block (ram,0x0525ca14) */
/* WARNING: Removing unreachable block (ram,0x0525c8dc) */
/* WARNING: Removing unreachable block (ram,0x0525ca2c) */
/* WARNING: Removing unreachable block (ram,0x0525c830) */

void PlayFab_Events_PlayFabEvents__add_OnGroupsAddMembersResultEvent(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int unaff_w19;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 *unaff_x21;
  long *plVar16;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined1 uStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  if ((param_1 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648110);
    FUN_02d4dc40(System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo);
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_02d4dc40(System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    FUN_02d4dc40(System_Func<JsonParser_JsonValue,_string>_TypeInfo);
    FUN_02d4dc40(System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_02d4dc40(System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                );
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b728);
    FUN_02d4dc40(
                Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                );
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06648098);
    FUN_02d4dc40(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066480a8);
    FUN_02d4dc40(PTR_DAT_066480b0);
    FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x3b7) = 1;
  }
  lVar7 = *(long *)(unaff_x22 + 0x88);
  in_stack_000000c0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  unaff_x21[1] = 0;
  *unaff_x21 = 0;
  unaff_x21[3] = 0;
  unaff_x21[2] = 0;
  puVar5 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
  puVar4 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar3 = 
  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
  ;
  puVar2 = PTR_DAT_06648098;
  in_stack_00000078 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  _uStack0000000000000080 = 0;
  in_stack_00000060 = 0;
  if (lVar7 != 0) {
    FUN_047cea60(&stack0x00000028,lVar7,
                 *(undefined8 *)
                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo)
    ;
    in_stack_000000c0 = in_stack_00000048;
    unaff_x21[1] = in_stack_00000030;
    *unaff_x21 = in_stack_00000028;
    unaff_x21[3] = in_stack_00000040;
    unaff_x21[2] = in_stack_00000038;
    while (uVar8 = FUN_04a12944(&stack0x000000a0,
                                *(undefined8 *)
                                 System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo),
          lVar7 = in_stack_000000b8, (uVar8 & 1) != 0) {
      lVar9 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
      FUN_03610fb4(lVar9,*(undefined8 *)PTR_DAT_066480a8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a870(&stack0x00000028,lVar7,
                   *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
      in_stack_00000070 = in_stack_00000028;
      in_stack_00000028 = 0;
      in_stack_00000078 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000040;
      _uStack0000000000000080 = in_stack_00000038;
      in_stack_00000090 = in_stack_00000048;
      in_stack_00000030 = &stack0x00000070;
LAB_0525c6f0:
      uVar8 = FUN_04a08dd8(&stack0x00000070,*(undefined8 *)puVar4);
      lVar13 = in_stack_00000088;
      if ((uVar8 & 1) != 0) {
        if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(int *)(in_stack_00000088 + 0x98) == unaff_w19) {
          lVar12 = *(long *)(in_stack_00000088 + 0x48);
          uVar6 = uStack0000000000000080;
          uVar8 = _uStack0000000000000080 & 0xff;
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
          }
          FUN_05254740(lVar13);
          if (lVar9 != 0) {
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined1 *)(lVar13 + (int)uVar1 + 0x20) = uVar6;
              }
              else {
                FUN_03611844(lVar9,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0525c6f0;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_0525c6f0;
      }
      FUN_04a08efc(&stack0x00000070,
                   *(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_036122c4(&stack0x00000028,lVar9,
                   *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo)
      ;
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000028 = 0;
      in_stack_00000058 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000038;
      in_stack_00000030 = &stack0x00000050;
      while (uVar8 = FUN_049b0478(&stack0x00000050,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        FUN_0479b8e4(lVar7,in_stack_00000060 & 0xff,*(undefined8 *)puVar5);
      }
      FUN_049b0474(&stack0x00000050,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                  );
    }
    FUN_04a12a68(&stack0x000000a0,
                 *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    plVar16 = *(long **)(unaff_x22 + 0x18);
    uVar10 = FUN_0524ff40(unaff_x22,unaff_w19);
    uVar10 = FUN_04e80678(*(undefined8 *)
                           Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo,
                          uVar10,*(undefined8 *)
                                  Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo
                          ,0);
    lVar9 = *(long *)PTR_DAT_06648110;
    lVar7 = *(long *)(lVar9 + 0x38);
    if (lVar7 == 0) {
      FUN_02d87268(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c();
    }
    if (plVar16 != (long *)0x0) {
      lVar9 = *plVar16;
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0525c9d8;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar16,*(long *)PTR_DAT_0664b728,1);
LAB_0525c9d8:
      (*(code *)*puVar11)(plVar16,3,uVar10,uVar15,puVar11[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


