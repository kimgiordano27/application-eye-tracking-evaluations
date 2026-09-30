/*
FUNCTION_NAME: FUN_05b25ad4
ENTRY_POINT: 05b25ad4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b25e88) */

void FUN_05b25ad4(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_38;
  long local_28;
  
  if ((DAT_06b81ab9 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_Dispose__
                );
    FUN_02d6084c(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_get_Current__
                );
    FUN_02d6084c(Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_Dispose__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<ManipulatorActivationFilter>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<MarkToBaseAdjustmentRecord>_get_Current__
                );
    DAT_06b81ab9 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0xd8) != 0)) {
    uVar2 = FUN_0335c1c4(*(long *)(param_2 + 0xd8),&local_28,
                         *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_get_Current__;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)
               Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_get_Current__
      ;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if ((lVar3 == 0) || (param_1 == 0)) goto LAB_05b25e80;
      plVar4 = (long *)FUN_03526ed8(param_1,*(undefined8 *)(lVar3 + 0x20),&local_38,lVar3,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<MarkToBaseAdjustmentRecord>_get_Current__
                                    ,0x116,*(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_get_Current__
                                   );
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(local_38 + 0x10) = *(undefined8 *)(local_28 + 0x90);
      thunk_FUN_02dd37b4();
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(local_38 + 0x18) = *(undefined8 *)(param_2 + 0x1a0);
      thunk_FUN_02dd37b4();
      puVar1 = 
      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
      ;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
            goto LAB_05b25c8c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02d9a5d4(plVar4,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0xb);
LAB_05b25c8c:
      (*(code *)*puVar5)(plVar4,0,puVar5[1]);
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
            goto LAB_05b25cec;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,0xc);
LAB_05b25cec:
      (*(code *)*puVar5)(plVar4,1,puVar5[1]);
      puVar1 = 
      Method_System_Collections_Generic_List_Enumerator<ManipulatorActivationFilter>_get_Current__;
      lVar3 = *(long *)
               Method_System_Collections_Generic_List_Enumerator<ManipulatorActivationFilter>_get_Current__
      ;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar3);
        lVar3 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar3);
          lVar3 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar3 + 0xb8);
        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_Dispose__
                                  );
        FUN_04180bc0(lVar8,uVar9,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_Dispose__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar6 = lVar8;
        thunk_FUN_02dd37b4(plVar6,lVar8);
      }
      lVar3 = *plVar4;
      lVar10 = *(long *)
                Method_System_Collections_Generic_List_Enumerator<MarkToMarkAdjustmentRecord>_MoveNext__
      ;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
            goto LAB_05b25de0;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      lVar3 = FUN_02d9a5d4(plVar4);
LAB_05b25de0:
      lVar3 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar3 + 8),lVar10);
      (**(code **)(lVar3 + 8))(plVar4,lVar8,lVar3);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05b25e5c;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b25e5c:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
    }
    return;
  }
LAB_05b25e80:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


