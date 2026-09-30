/*
FUNCTION_NAME: FUN_05ec8610
ENTRY_POINT: 05ec8610
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ec8610(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_06dc3e8b & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>_Dispose__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__);
    FUN_02d965b8(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
    FUN_02d965b8(Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__)
    ;
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__);
    FUN_02d965b8(Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__);
    DAT_06dc3e8b = 1;
  }
  puVar7 = Method_Unity_Collections_NativeArray<uint>_Dispose__;
  puVar6 = Method_Unity_Collections_NativeArray<uint>__ctor__;
  puVar5 = Method_Oculus_Platform_Message<DestinationList>_get_Data__;
  puVar4 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
  ;
  puVar3 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (param_2 == 0) goto LAB_05ec8994;
  if (*(char *)(param_2 + 0x99) == '\0') {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ec8994;
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) == 1) {
      FUN_05e6f7ec(*(undefined8 *)
                    Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__,0)
      ;
      return;
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_05ec8994;
  FUN_04010c90(&local_88,*(long *)(param_1 + 0x40),
               *(undefined8 *)Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
  local_60 = local_78;
  puStack_68 = puStack_80;
  local_70 = local_88;
  local_88 = 0;
  puStack_80 = &local_70;
  while (uVar8 = FUN_05156804(&local_70,*(undefined8 *)puVar4), lVar9 = local_60, (uVar8 & 1) != 0)
  {
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(local_60 + 0xb0) != '\0') {
      if (*(long *)(local_60 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c5f798(*(long *)(local_60 + 0xd0),*(undefined8 *)(param_2 + 0x88),*(undefined8 *)puVar2)
      ;
    }
    if (*(char *)(param_2 + 0xb0) != '\0') {
      if (*(long *)(param_2 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c5f798(*(long *)(param_2 + 0xd0),*(undefined8 *)(lVar9 + 0x88),*(undefined8 *)puVar2);
    }
  }
  FUN_05156800(&local_70,*(undefined8 *)puVar3);
  if (*(char *)(param_2 + 0xb0) == '\0') {
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 == 0) goto LAB_05ec8994;
    if ((*(char *)(lVar9 + 0x30) != '\0') &&
       (lVar9 = FUN_05e5e724(lVar9,0), lVar9 == *(long *)(param_2 + 0x88))) goto LAB_05ec87f4;
  }
  else {
LAB_05ec87f4:
    if (*(long *)(param_2 + 0xd0) == 0) goto LAB_05ec8994;
    FUN_03c5f798(*(long *)(param_2 + 0xd0),*(undefined8 *)(param_2 + 0x88),*(undefined8 *)puVar2);
  }
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)puVar5;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar12 = param_2;
        LeanTween__value(plVar12,param_2);
      }
      else {
        FUN_040101ec(lVar9,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar8 = FUN_04ff1c80(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                             *(undefined8 *)puVar6);
        if ((uVar8 & 1) == 0) {
          lVar9 = *(long *)(param_1 + 0x48);
          uVar14 = *(undefined8 *)(param_2 + 0x88);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                                     );
          FUN_0400f984(uVar10,*(undefined8 *)
                               Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
                      );
          if (lVar9 == 0) goto LAB_05ec8994;
          FUN_04ff1a8c(lVar9,uVar14,uVar10,
                       *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
        }
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar9 = FUN_04ff19ec(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                                 *(undefined8 *)puVar7), lVar9 != 0)) {
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar12 = param_2;
              LeanTween__value(plVar12,param_2);
            }
            else {
              FUN_040101ec(lVar9,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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


