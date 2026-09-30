/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry.RenderGraphResourcesData$$.ctor
ENTRY_POINT: 05ec8664
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RenderGraphResourcesData___ctor
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x940));
  FUN_02d965b8(
              Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
              );
  FUN_02d965b8(
              Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
              );
  FUN_02d965b8(Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__);
  FUN_02d965b8(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
  FUN_02d965b8(Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__);
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__);
  FUN_02d965b8(Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xe8b) = 1;
  puVar6 = Method_Unity_Collections_NativeArray<uint>_Dispose__;
  puVar5 = Method_Unity_Collections_NativeArray<uint>__ctor__;
  puVar4 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
  ;
  puVar3 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  if (unaff_x19 == 0) goto LAB_05ec8994;
  if (*(char *)(unaff_x19 + 0x99) == '\0') {
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_05ec8994;
    if (*(int *)(*(long *)(unaff_x20 + 0x50) + 0x9c) == 1) {
      FUN_05e6f7ec(*(undefined8 *)
                    Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__,0)
      ;
      return;
    }
  }
  if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_05ec8994;
  FUN_04010c90(&stack0x00000008,*(long *)(unaff_x20 + 0x40),
               *(undefined8 *)Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  while (uVar7 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar4), lVar8 = in_stack_00000030,
        (uVar7 & 1) != 0) {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(in_stack_00000030 + 0xb0) != '\0') {
      if (*(long *)(in_stack_00000030 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c5f798(*(long *)(in_stack_00000030 + 0xd0),*(undefined8 *)(unaff_x19 + 0x88),
                   *(undefined8 *)puVar2);
    }
    if (*(char *)(unaff_x19 + 0xb0) != '\0') {
      if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c5f798(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(lVar8 + 0x88),*(undefined8 *)puVar2);
    }
  }
  FUN_05156800(&stack0x00000020,*(undefined8 *)puVar3);
  if (*(char *)(unaff_x19 + 0xb0) == '\0') {
    lVar8 = *(long *)(unaff_x20 + 0x50);
    if (lVar8 == 0) goto LAB_05ec8994;
    if ((*(char *)(lVar8 + 0x30) != '\0') &&
       (lVar8 = FUN_05e5e724(lVar8,0), lVar8 == *(long *)(unaff_x19 + 0x88))) goto LAB_05ec87f4;
  }
  else {
LAB_05ec87f4:
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05ec8994;
    FUN_03c5f798(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2
                );
  }
  lVar8 = *(long *)(unaff_x20 + 0x40);
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = unaff_x19;
        LeanTween__value(plVar11);
      }
      else {
        FUN_040101ec();
      }
      if (*(long *)(unaff_x20 + 0x48) != 0) {
        uVar7 = FUN_04ff1c80(*(long *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x19 + 0x88),
                             *(undefined8 *)puVar5);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)(unaff_x20 + 0x48);
          uVar12 = *(undefined8 *)(unaff_x19 + 0x88);
          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                                    );
          FUN_0400f984(uVar9,*(undefined8 *)
                              Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
                      );
          if (lVar8 == 0) goto LAB_05ec8994;
          FUN_04ff1a8c(lVar8,uVar12,uVar9,
                       *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
        }
        if ((*(long *)(unaff_x20 + 0x48) != 0) &&
           (lVar8 = FUN_04ff19ec(*(long *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x19 + 0x88),
                                 *(undefined8 *)puVar6), lVar8 != 0)) {
          lVar10 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = unaff_x19;
              LeanTween__value(plVar11);
            }
            else {
              FUN_040101ec();
            }
            return;
          }
        }
      }
    }
  }
LAB_05ec8994:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


