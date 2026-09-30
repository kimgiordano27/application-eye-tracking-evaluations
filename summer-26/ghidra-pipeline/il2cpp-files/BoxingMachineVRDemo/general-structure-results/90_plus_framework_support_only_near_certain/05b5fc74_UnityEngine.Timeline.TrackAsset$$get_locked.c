/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$get_locked
ENTRY_POINT: 05b5fc74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fd2c) */

void UnityEngine_Timeline_TrackAsset__get_locked(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x22;
  int unaff_w25;
  long *unaff_x26;
  long lVar11;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if (param_2 != 1) {
    if (unaff_x26 != (long *)0x0) {
      lVar11 = *unaff_x26;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x05b5fd14;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
code_r0x05b5fd14:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e42304(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar11 = *plVar5;
  __cxa_end_catch();
  if (unaff_x26 != (long *)0x0) {
    lVar10 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05b5f72c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f72c:
    (*(code *)*puVar3)();
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar11);
  }
  if (iStack0000000000000004 == unaff_w25) {
    return;
  }
  if ((in_stack_00000008 != 0) && (lVar11 = FUN_06036b0c(in_stack_00000008,0), lVar11 != 0)) {
    iVar1 = FUN_06036024(lVar11,0);
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
    lVar11 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05b5f83c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                          ,0);
LAB_05b5f83c:
    (*(code *)*puVar3)(plVar5,in_stack_00000080,in_stack_00000088,0,2,puVar3[1]);
    uVar8 = *unaff_x22;
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000068 + 0x20) = uVar8;
    lVar11 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
           ) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05b5f8c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d9a5d4(plVar5,*(long *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ,0);
LAB_05b5f8c4:
    (*(code *)*puVar3)(plVar5);
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
    lVar11 = *(long *)
              Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar11);
      lVar11 = *(long *)
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar10 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar11);
        lVar11 = *(long *)
                  Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
      }
      uVar8 = **(undefined8 **)(lVar11 + 0xb8);
      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                 );
      FUN_04180bc0(lVar10,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)
                                   Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                 + 0xb8) + 0x10);
      *plVar4 = lVar10;
      thunk_FUN_02dd37b4(plVar4,lVar10);
    }
    lVar9 = *(long *)
             Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
    ;
    lVar11 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar11 = lVar11 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_05b5f9f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar11 = FUN_02d9a5d4(plVar5);
LAB_05b5f9f8:
    lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar11 + 8),lVar9);
    (**(code **)(lVar11 + 8))(plVar5,lVar10,lVar11);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05b5fa78;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
      (*(code *)*puVar3)(plVar5,puVar3[1]);
    }
    lVar11 = *(long *)(unaff_x19 + 0x200);
    uVar2 = FUN_06063868(0);
    if (lVar11 != 0) {
      FUN_05b14d60(lVar11,uStack0000000000000000,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


