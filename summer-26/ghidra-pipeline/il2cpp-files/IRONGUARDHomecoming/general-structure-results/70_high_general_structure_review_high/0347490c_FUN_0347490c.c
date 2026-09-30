/*
FUNCTION_NAME: FUN_0347490c
ENTRY_POINT: 0347490c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong FUN_0347490c(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_04832a0d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04832a0d = 1;
  }
  if ((param_1 == (long *)0x0) ||
     (plVar2 = (long *)thunk_FUN_01ecaf38(param_1,0), plVar2 == (long *)0x0)) {
LAB_03474ab0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_035849ac(plVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03579868(uVar5,0);
    uVar3 = FUN_03582560(plVar2,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_035841e4(plVar2,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = (**(code **)(*plVar2 + 0x438))(plVar2,*(undefined8 *)(*plVar2 + 0x440));
        if (lVar4 == 0) goto LAB_03474ab0;
        uVar3 = FUN_035849ac(lVar4,0);
        if ((uVar3 & 1) != 0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                           + 0x130);
          if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(param_1);
          }
          uVar3 = thunk_FUN_01eca4a4(param_1,0);
          if ((int)uVar3 == 1) {
            return uVar3;
          }
        }
      }
      lVar4 = *param_1;
      if (lVar4 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
        return 1;
      }
      if (lVar4 == *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__) {
        return 1;
      }
      return (ulong)(lVar4 == *(long *)
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                    );
    }
  }
  return 1;
}


