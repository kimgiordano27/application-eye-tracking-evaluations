/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$set_parent
ENTRY_POINT: 05b5f814
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */

void UnityEngine_Timeline_TrackAsset__set_parent(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined4 in_stack_00000000;
  long in_stack_00000068;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05b5f83c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
LAB_05b5f83c:
  (*(code *)*puVar3)();
  uVar4 = *unaff_x22;
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(in_stack_00000068 + 0x28) = unaff_x22[1];
  *(undefined8 *)(in_stack_00000068 + 0x20) = uVar4;
  lVar5 = *unaff_x23;
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
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5f8c4:
  (*(code *)*puVar3)();
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
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                              );
    FUN_04180bc0(uVar4,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                 ,0);
    puVar3 = (undefined8 *)
             (*(long *)(*(long *)
                         Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                       + 0xb8) + 0x10);
    *puVar3 = uVar4;
    thunk_FUN_02dd37b4(puVar3,uVar4);
  }
  lVar9 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
  ;
  lVar5 = *unaff_x23;
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
  lVar5 = FUN_02d9a5d4();
LAB_05b5f9f8:
  lVar5 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))();
  if (unaff_x23 != (long *)0x0) {
    lVar5 = *unaff_x23;
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
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05b5fa78:
    (*(code *)*puVar3)();
  }
  lVar5 = *(long *)(unaff_x19 + 0x200);
  uVar2 = FUN_06063868(0);
  if (lVar5 != 0) {
    FUN_05b14d60(lVar5,in_stack_00000000,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


