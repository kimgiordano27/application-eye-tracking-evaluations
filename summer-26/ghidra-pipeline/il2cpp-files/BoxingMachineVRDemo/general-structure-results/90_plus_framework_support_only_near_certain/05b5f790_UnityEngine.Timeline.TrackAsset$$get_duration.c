/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$get_duration
ENTRY_POINT: 05b5f790
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */

void UnityEngine_Timeline_TrackAsset__get_duration(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 *unaff_x22;
  int unaff_w24;
  undefined4 in_stack_00000000;
  long in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  plVar2 = (long *)FUN_03526ed8();
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000068 + 0x18) = in_stack_00000088;
  *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000080;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05b5f83c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d9a5d4(plVar2,*(long *)
                                Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                        ,0);
LAB_05b5f83c:
  (*(code *)*puVar3)(plVar2,in_stack_00000080,in_stack_00000088,0,2,puVar3[1]);
  uVar8 = *unaff_x22;
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
  *(undefined8 *)(in_stack_00000068 + 0x20) = uVar8;
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05b5f8c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d9a5d4(plVar2,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0);
LAB_05b5f8c4:
  (*(code *)*puVar3)(plVar2);
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000068 + 0x60) = unaff_x21;
  thunk_FUN_02dd37b4();
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(int *)(in_stack_00000068 + 0x68) = unaff_w24 + -1;
  lVar5 = *(long *)
           Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar5);
    lVar5 = *(long *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
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
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b5f9f8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02d9a5d4(plVar2);
LAB_05b5f9f8:
  lVar5 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(plVar2,lVar10,lVar5);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05b5fa78;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar2,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  lVar5 = *(long *)(unaff_x19 + 0x200);
  uVar1 = FUN_06063868(0);
  if (lVar5 != 0) {
    FUN_05b14d60(lVar5,in_stack_00000000,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


