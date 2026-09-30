/*
FUNCTION_NAME: thunk_FUN_0525c4ac
ENTRY_POINT: 0525d11c
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
/* WARNING: Removing unreachable block (ram,0x0525c830) */
/* WARNING: Removing unreachable block (ram,0x0525ca2c) */

void thunk_FUN_0525c4ac(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((DAT_06a523b7 & 1) == 0) {
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
    DAT_06a523b7 = 1;
  }
  puVar5 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
  puVar4 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
  puVar3 = 
  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
  ;
  puVar2 = PTR_DAT_06648098;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_047cea60(&uStack_108,*(long *)(param_1 + 0x88),
                 *(undefined8 *)
                  System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo)
    ;
    uStack_70 = uStack_e8;
    puStack_88 = puStack_100;
    uStack_90 = uStack_108;
    lStack_78 = lStack_f0;
    uStack_80 = uStack_f8;
    while (uVar7 = FUN_04a12944(&uStack_90,
                                *(undefined8 *)
                                 System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo),
          lVar13 = lStack_78, (uVar7 & 1) != 0) {
      lVar8 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
      FUN_03610fb4(lVar8,*(undefined8 *)PTR_DAT_066480a8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a870(&uStack_108,lVar13,
                   *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
      uStack_c0 = uStack_108;
      uStack_108 = 0;
      puStack_b8 = puStack_100;
      lStack_a8 = lStack_f0;
      uStack_b0 = uStack_f8;
      uStack_a0 = uStack_e8;
      puStack_100 = &uStack_c0;
LAB_0525c6f0:
      uVar7 = FUN_04a08dd8(&uStack_c0,*(undefined8 *)puVar4);
      lVar12 = lStack_a8;
      if ((uVar7 & 1) != 0) {
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(int *)(lStack_a8 + 0x98) == param_2) {
          lVar11 = *(long *)(lStack_a8 + 0x48);
          uVar6 = (undefined1)uStack_b0;
          uVar7 = uStack_b0 & 0xff;
          if (lVar11 != 0) {
            (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
          }
          FUN_05254740(lVar12);
          if (lVar8 != 0) {
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined1 *)(lVar12 + (int)uVar1 + 0x20) = uVar6;
              }
              else {
                FUN_03611844(lVar8,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0525c6f0;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_0525c6f0;
      }
      FUN_04a08efc(&uStack_c0,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_036122c4(&uStack_108,lVar8,
                   *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo)
      ;
      uStack_e0 = uStack_108;
      uStack_108 = 0;
      puStack_d8 = puStack_100;
      uStack_d0 = uStack_f8;
      puStack_100 = &uStack_e0;
      while (uVar7 = FUN_049b0478(&uStack_e0,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
        FUN_0479b8e4(lVar13,uStack_d0 & 0xff,*(undefined8 *)puVar5);
      }
      FUN_049b0474(&uStack_e0,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                  );
    }
    FUN_04a12a68(&uStack_90,
                 *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    plVar16 = *(long **)(param_1 + 0x18);
    uVar9 = FUN_0524ff40(param_1,param_2);
    uVar9 = FUN_04e80678(*(undefined8 *)
                          Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo,
                         uVar9,*(undefined8 *)
                                Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo
                         ,0);
    lVar8 = *(long *)PTR_DAT_06648110;
    lVar13 = *(long *)(lVar8 + 0x38);
    if (lVar13 == 0) {
      FUN_02d87268(lVar8);
      lVar13 = *(long *)(lVar8 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d8720c();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d8720c();
    }
    if (plVar16 != (long *)0x0) {
      lVar8 = *plVar16;
      uVar15 = **(undefined8 **)(lVar13 + 0xb8);
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0525c9d8;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar16,*(long *)PTR_DAT_0664b728,1);
LAB_0525c9d8:
      (*(code *)*puVar10)(plVar16,3,uVar9,uVar15,puVar10[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


