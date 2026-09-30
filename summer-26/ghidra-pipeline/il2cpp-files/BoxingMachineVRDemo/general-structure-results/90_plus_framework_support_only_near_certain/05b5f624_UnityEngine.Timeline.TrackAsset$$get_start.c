/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$get_start
ENTRY_POINT: 05b5f624
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 190
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void UnityEngine_Timeline_TrackAsset__get_start(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *unaff_x22;
  int unaff_w25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_04180bc0();
  *(undefined8 *)
   (*(long *)(*(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
             + 0xb8) + 8) = unaff_x27;
  thunk_FUN_02dd37b4();
  lVar9 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
  ;
  lVar6 = *unaff_x26;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b5f6ac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02d9a5d4();
LAB_05b5f6ac:
  lVar6 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar6 + 8),lVar9);
  (**(code **)(lVar6 + 8))();
  if (unaff_x26 != (long *)0x0) {
    lVar6 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f72c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f72c:
    (*(code *)*puVar3)();
  }
  if (iStack0000000000000004 == unaff_w25) {
    return;
  }
  if ((in_stack_00000008 != 0) && (lVar6 = FUN_06036b0c(in_stack_00000008,0), lVar6 != 0)) {
    iVar1 = FUN_06036024(lVar6,0);
    FUN_034e36d4(0x2f,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    plVar4 = (long *)FUN_03526ed8();
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x18) = in_stack_00000088;
    *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000080;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f83c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar4,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                          ,0);
LAB_05b5f83c:
    (*(code *)*puVar3)(plVar4,in_stack_00000080,in_stack_00000088,0,2,puVar3[1]);
    uVar10 = *unaff_x22;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000068 + 0x20) = uVar10;
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
           ) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f8c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar4,*(long *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ,0);
LAB_05b5f8c4:
    (*(code *)*puVar3)(plVar4);
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(long *)(in_stack_00000068 + 0x60) = in_stack_00000008;
    thunk_FUN_02dd37b4((long *)(in_stack_00000068 + 0x60),in_stack_00000008);
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(int *)(in_stack_00000068 + 0x68) = iVar1 + -1;
    lVar6 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar6);
        lVar6 = *(long *)
                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      uVar10 = **(undefined8 **)(lVar6 + 0xb8);
      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                );
      FUN_04180bc0(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                   ,0);
      plVar5 = (long *)(*(long *)(*(long *)
                                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                 + 0xb8) + 0x10);
      *plVar5 = lVar9;
      thunk_FUN_02dd37b4(plVar5,lVar9);
    }
    lVar11 = *(long *)
              Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
    ;
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b5f9f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_02d9a5d4(plVar4);
LAB_05b5f9f8:
    lVar6 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar6 + 8),lVar11);
    (**(code **)(lVar6 + 8))(plVar4,lVar9,lVar6);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05b5fa78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    lVar6 = *(long *)(unaff_x19 + 0x200);
    uVar2 = FUN_06063868(0);
    if (lVar6 != 0) {
      FUN_05b14d60(lVar6,uStack0000000000000000,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


