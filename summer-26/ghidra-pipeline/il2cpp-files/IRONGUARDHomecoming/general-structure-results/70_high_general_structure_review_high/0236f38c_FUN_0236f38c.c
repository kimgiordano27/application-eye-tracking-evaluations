/*
FUNCTION_NAME: FUN_0236f38c
ENTRY_POINT: 0236f38c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0236f38c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar8 = *(undefined8 **)(param_3 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
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
    puVar8 = *(undefined8 **)(param_3 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar8 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar10 = *puVar8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_03579868(uVar10,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar3 = FUN_03916c60(uVar10,0);
  if ((uVar3 & 1) == 0) {
    uVar10 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar5 = (long *)FUN_03579868(uVar10,0);
    FUN_01bc50c0();
    uVar10 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar10 = FUN_0340ebc0(uVar7,uVar10,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar7,uVar10,0);
  }
  else {
    if (param_2 != 0) {
      lVar11 = param_1[7];
      uVar10 = **(undefined8 **)(param_3 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03579868(uVar10,0);
      if (lVar11 != 0) {
        lVar11 = FUN_02b6b264(lVar11,uVar10,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                             );
        lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        if (lVar11 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_01f116d0(lVar11,lVar12);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar11,lVar12);
          }
        }
        (**(code **)(*param_1 + 0x538))
                  (param_1,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__,
                   (long)*(int *)(param_2 + 0x18),*(undefined8 *)(*param_1 + 0x540));
        FUN_038ebe74(param_1,*(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRSceneManager>__,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                     ,0);
        *(undefined1 *)((long)param_1 + 0x31) = 1;
        FUN_038d84c4(param_1,0);
        if (0 < (int)*(ulong *)(param_2 + 0x18)) {
          uVar3 = 0;
          uVar9 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar3) goto LAB_0236f604;
            if (lVar4 == 0) goto LAB_0236f600;
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(param_2 + 0x20 + uVar3 * 8),
                       *(undefined8 *)(lVar4 + 0x28));
            uVar9 = (ulong)*(uint *)(param_2 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(param_2 + 0x18));
        }
        FUN_038d8644(param_1,0);
        FUN_038ec3a8(param_1,1,0);
        FUN_038ec564(param_1,1,0);
        uVar1 = *(uint *)(param_1 + 10);
        lVar11 = param_1[9];
        *(uint *)(param_1 + 10) = uVar1 + 1;
        if (lVar11 != 0) {
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + (int)uVar1 + 0x20) = 0x5d;
            return;
          }
LAB_0236f604:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
      }
LAB_0236f600:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                               );
    FUN_034efd20(uVar7,uVar10,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_3);
}


