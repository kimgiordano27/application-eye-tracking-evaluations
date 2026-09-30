/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$UpdateDuration
ENTRY_POINT: 05b5f684
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void UnityEngine_Timeline_TrackAsset__UpdateDuration
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x22;
  int unaff_w25;
  long *unaff_x26;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      lVar3 = FUN_02d9a5d4();
      goto LAB_05b5f6ac;
    }
    plVar5 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar5 != param_3);
  lVar3 = param_1 + (long)(*piVar8 + param_4) * 0x10 + 0x138;
LAB_05b5f6ac:
  lVar3 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar3 + 8));
  (**(code **)(lVar3 + 8))();
  if (unaff_x26 != (long *)0x0) {
    lVar3 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f72c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f72c:
    (*(code *)*puVar4)();
  }
  if (iStack0000000000000004 == unaff_w25) {
    return;
  }
  if ((in_stack_00000008 != 0) && (lVar3 = FUN_06036b0c(in_stack_00000008,0), lVar3 != 0)) {
    iVar1 = FUN_06036024(lVar3,0);
    FUN_034e36d4(0x2f,*(undefined8 *)Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    plVar5 = (long *)FUN_03526ed8();
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x18) = in_stack_00000088;
    *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000080;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f83c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                          ,0);
LAB_05b5f83c:
    (*(code *)*puVar4)(plVar5,in_stack_00000080,in_stack_00000088,0,2,puVar4[1]);
    uVar9 = *unaff_x22;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000068 + 0x20) = uVar9;
    lVar3 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
           ) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b5f8c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ,0);
LAB_05b5f8c4:
    (*(code *)*puVar4)(plVar5);
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
    lVar3 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    lVar11 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar11 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar3);
        lVar3 = *(long *)
                 Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      uVar9 = **(undefined8 **)(lVar3 + 0xb8);
      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                 );
      FUN_04180bc0(lVar11,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)
                                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                 + 0xb8) + 0x10);
      *plVar6 = lVar11;
      thunk_FUN_02dd37b4(plVar6,lVar11);
    }
    lVar10 = *(long *)
              Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
    ;
    lVar3 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b5f9f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar3 = FUN_02d9a5d4(plVar5);
LAB_05b5f9f8:
    lVar3 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar3 + 8),lVar10);
    (**(code **)(lVar3 + 8))(plVar5,lVar11,lVar3);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05b5fa78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    lVar3 = *(long *)(unaff_x19 + 0x200);
    uVar2 = FUN_06063868(0);
    if (lVar3 != 0) {
      FUN_05b14d60(lVar3,uStack0000000000000000,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


