/*
FUNCTION_NAME: UnityEngine.UIElements.VisualTreeBindingsUpdater$$Update
ENTRY_POINT: 0387971c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03879a44) */
/* WARNING: Removing unreachable block (ram,0x03879bdc) */
/* WARNING: Removing unreachable block (ram,0x03879ae4) */

void UnityEngine_UIElements_VisualTreeBindingsUpdater__Update(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  long local_68;
  
  if ((DAT_03efbf97 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_Dictionary<object,_object>_Clear___03cf0088);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_FirstOrDefault<VisualElement>___03cf0090);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_Dispose___03cf0098
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_MoveNext___03cf00a0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_get_Current___03cf00a8
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_HashSet<VisualElement>_Remove___03cefd48);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_HashSet<VisualElement>_get_Count___03cefc40);
    FUN_01c5c92c(PTR_UnityEngine_UIElements_IBindingRequest_TypeInfo_03cf00b0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<IBindingRequest>_GetEnumerator___03cf00b8
                );
    FUN_01c5c92c(PTR_System_Collections_Generic_List<IBindingRequest>_TypeInfo_03cf00c0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release___03cf00c8
                );
    FUN_01c5c92c(PTR_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo_03cf00d0);
    FUN_01c5c92c(PTR_UnityEngine_UIElements_VisualTreeBindingsUpdater_TypeInfo_03cf0078);
    DAT_03efbf97 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__Update(param_1,0);
  puVar3 = PTR_UnityEngine_UIElements_VisualTreeBindingsUpdater_TypeInfo_03cf0078;
  if (*(long *)(param_1 + 0x60) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x60) + 0x20)) {
      lVar9 = *(long *)PTR_UnityEngine_UIElements_VisualTreeBindingsUpdater_TypeInfo_03cf0078;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar9 = *(long *)puVar3;
      }
      lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar15 != 0) {
        Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(lVar15,0);
        lVar9 = *(long *)puVar3;
      }
      local_88 = &local_68;
      local_90 = 0;
      local_68 = lVar15;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar10 = UnityEngine_UIElements_VisualTreeBindingsUpdater__CurrentTime();
      puVar7 = PTR_System_Collections_Generic_List<IBindingRequest>_TypeInfo_03cf00c0;
      puVar6 = PTR_UnityEngine_UIElements_IBindingRequest_TypeInfo_03cf00b0;
      puVar5 = 
      PTR_Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_MoveNext___03cf00a0;
      puVar4 = PTR_Method_System_Linq_Enumerable_FirstOrDefault<VisualElement>___03cf0090;
      puVar2 = PTR_Method_System_Collections_Generic_HashSet<VisualElement>_Remove___03cefd48;
      lVar9 = *(long *)(param_1 + 0x60);
      while( true ) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        if (*(int *)(lVar9 + 0x20) < 1) break;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar11 = UnityEngine_UIElements_VisualTreeBindingsUpdater__ShouldProcessBindings(uVar10);
        if (((uVar11 & 1) == 0) ||
           (lVar9 = System_Linq_Enumerable__FirstOrDefault<object>
                              (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)puVar4), lVar9 == 0))
        break;
        if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        System_Collections_Generic_HashSet<object>__Remove
                  (*(long *)(param_1 + 0x60),lVar9,*(undefined8 *)puVar2);
        lVar15 = *(long *)puVar3;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar15 = *(long *)puVar3;
        }
        plVar12 = (long *)UnityEngine_UIElements_VisualElement__GetProperty
                                    (lVar9,**(undefined4 **)(lVar15 + 0xb8),0);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            lVar15 = *(long *)puVar3;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar15 = *(long *)puVar3;
            }
            UnityEngine_UIElements_VisualElement__SetProperty
                      (lVar9,**(undefined4 **)(lVar15 + 0xb8),0,0);
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a8,plVar12,
                       *(undefined8 *)
                        PTR_Method_System_Collections_Generic_List<IBindingRequest>_GetEnumerator___03cf00b8
                      );
            local_70 = local_98;
            puStack_78 = puStack_a0;
            local_80 = local_a8;
            local_a8 = 0;
            puStack_a0 = &local_80;
            while (uVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (&local_80,*(undefined8 *)puVar5), plVar8 = local_70,
                  (uVar11 & 1) != 0) {
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5cbd4();
              }
              lVar15 = *local_70;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_03879a08;
                  }
                  uVar11 = uVar11 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar11 != 0);
              }
              puVar13 = (undefined8 *)FUN_01c8cb54(local_70,*(long *)puVar6,0);
LAB_03879a08:
              (*(code *)*puVar13)(plVar8,lVar9,puVar13[1]);
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       *(undefined8 *)
                        PTR_Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_Dispose___03cf0098
                      );
            if (*(int *)(*(long *)
                          PTR_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo_03cf00d0
                        + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_UIElements_ObjectListPool<object>__Release
                      (plVar12,*(undefined8 *)
                                PTR_Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release___03cf00c8
                      );
          }
        }
        lVar9 = *(long *)(param_1 + 0x60);
      }
      if (*local_88 != 0) {
        Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(*local_88,0);
      }
      if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbcc();
      }
    }
    UnityEngine_UIElements_VisualTreeBindingsUpdater__PerformTrackingOperations(param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x40) + 0x20)) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        lVar9 = UnityEngine_UIElements_VisualTreeBindingsUpdater__CurrentTime();
        if (DAT_03efc07f == '\0') {
          FUN_01c5c92c(PTR_UnityEngine_UIElements_VisualTreeBindingsUpdater_TypeInfo_03cf0078);
          DAT_03efc07f = '\x01';
        }
        lVar15 = *(long *)puVar3;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar15 = *(long *)puVar3;
        }
                    /* try { // try from 03879b54 to 03979b73 has its CatchHandler @ 03879c0c */
        if ((*(char *)(*(long *)(lVar15 + 0xb8) + 0x30) != '\0') ||
           (*(long *)(param_1 + 0x58) + 100 < lVar9)) {
          UnityEngine_UIElements_VisualTreeBindingsUpdater__UpdateBindings(param_1);
          *(long *)(param_1 + 0x58) = lVar9;
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x60) + 0x20) == 0) {
                    /* try { // try from 03879b88 to 03979b8f has its CatchHandler @ 03879c04 */
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_03879bc8;
          System_Collections_Generic_Dictionary<object,_object>__Clear
                    (*(long *)(param_1 + 0x68),
                     *(undefined8 *)
                      PTR_Method_System_Collections_Generic_Dictionary<object,_object>_Clear___03cf0088
                    );
        }
                    /* try { // try from 03879ba8 to 03979bbb has its CatchHandler @ 03879c08 */
        return;
      }
    }
  }
LAB_03879bc8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


