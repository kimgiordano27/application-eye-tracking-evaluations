/*
FUNCTION_NAME: FUN_020b80c4
ENTRY_POINT: 020b80c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020b80c4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if ((DAT_0482f925 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitResponseClass>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Stack<EventDispatcher_DispatchContext>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_Invoke__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
    DAT_0482f925 = 1;
  }
  puVar6 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__;
  puVar5 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__;
  puVar4 = Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__;
  puVar3 = Method_System_Collections_Generic_Stack<EventDispatcher_DispatchContext>__ctor__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ea2c(*(undefined8 *)puVar6,0);
  lVar7 = FUN_022c6694(param_1,*(undefined8 *)puVar3);
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_030f2380(lVar8,*(undefined8 *)puVar4);
  puVar4 = Method_UnityEngine_Events_UnityEvent<WitResponseNode>_AddListener__;
  puVar3 = Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar13 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar12 = *(long *)(lVar7 + 0x20 + uVar13 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_04073094(lVar12,0,0);
        if ((uVar10 & 1) != 0) {
          if (((lVar12 == 0) || (lVar12 = FUN_040703d4(lVar12,0), lVar12 == 0)) ||
             (uVar9 = FUN_023360e0(lVar12,*(undefined8 *)puVar3), lVar8 == 0)) goto LAB_020b8320;
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_020b8320;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    puVar2 = Method_UnityEngine_Events_UnityEvent<WitResponseClass>__ctor__;
    if (lVar8 != 0) {
      uVar9 = FUN_030f4630(lVar8,*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<WitResponseNode>_Invoke__);
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      thunk_FUN_01f51358();
      uVar9 = FUN_022c59ec(param_1,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar9);
      return;
    }
  }
LAB_020b8320:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


