/*
FUNCTION_NAME: FUN_02370784
ENTRY_POINT: 02370784
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02370784(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *__dest;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 *puStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar9 = *(undefined8 **)(param_3 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSceneManager>__);
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar9 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(puVar9[3] + 0xfc);
  __dest = auStack_80 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  uVar11 = *puVar9;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar4 = FUN_03916c60(uVar11,0);
  if ((uVar4 & 1) == 0) {
    uVar11 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar6 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar11 = FUN_0340ebc0(uVar8,uVar11,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar8,uVar11,0);
  }
  else {
    if (param_2 != (long *)0x0) {
      lVar12 = param_1[7];
      uVar11 = **(undefined8 **)(param_3 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      if (lVar12 != 0) {
        lVar12 = FUN_02b6b264(lVar12,uVar11,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                             );
        lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
        }
        if (lVar12 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar12,lVar13);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar12,lVar13);
          }
        }
        (**(code **)(*param_1 + 0x538))
                  (param_1,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__,
                   (long)(int)param_2[3],*(undefined8 *)(*param_1 + 0x540));
        FUN_038ebe74(param_1,*(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRSceneManager>__,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                     ,0);
        *(undefined1 *)((long)param_1 + 0x31) = 1;
        FUN_038d84c4(param_1,0);
        if (0 < (int)param_2[3]) {
          uVar4 = 0;
          uVar10 = param_2[3] & 0xffffffff;
          do {
            if (uVar10 <= uVar4) goto LAB_02370a80;
            memcpy(__dest,(void *)((long)param_2 + uVar4 * *(uint *)(*param_2 + 0x104) + 0x20),
                   (ulong)uVar1);
            if (lVar5 == 0) goto LAB_02370a7c;
            puVar9 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
            local_78 = 0;
            puStack_70 = __dest;
            (*(code *)puVar9[2])(*puVar9,puVar9,lVar5,&local_78,__dest);
            uVar10 = (ulong)*(uint *)(param_2 + 3);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 3));
        }
        FUN_038d8644(param_1,0);
        FUN_038ec3a8(param_1,1,0);
        FUN_038ec564(param_1,1,0);
        uVar1 = *(uint *)(param_1 + 10);
        lVar12 = param_1[9];
        *(uint *)(param_1 + 10) = uVar1 + 1;
        if (lVar12 != 0) {
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(undefined1 *)(lVar12 + (int)uVar1 + 0x20) = 0x5d;
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
LAB_02370a80:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
      }
LAB_02370a7c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                               );
    FUN_034efd20(uVar8,uVar11,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,param_3);
}


