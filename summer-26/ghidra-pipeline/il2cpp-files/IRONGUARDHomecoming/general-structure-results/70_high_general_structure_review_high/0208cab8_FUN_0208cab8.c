/*
FUNCTION_NAME: FUN_0208cab8
ENTRY_POINT: 0208cab8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0208cab8(float param_1,float param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  
  if ((DAT_0482f768 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_float,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_0482f768 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  local_38 = 0;
  plVar2 = *(long **)(param_3 + 0x40);
  uVar6 = 0x3f800000;
  if ((param_4 & 1) == 0) {
    uVar6 = DAT_00c92974;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))
              (uVar6,uVar6,uVar6,0x3f800000,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    fVar7 = *(float *)(param_3 + 0x24);
    if (param_1 <= *(float *)(param_3 + 0x24)) {
      fVar7 = param_1;
    }
    if (param_1 < *(float *)(param_3 + 0x20)) {
      fVar7 = *(float *)(param_3 + 0x20);
    }
    fVar8 = *(float *)(param_3 + 0x2c);
    if (param_2 <= *(float *)(param_3 + 0x2c)) {
      fVar8 = param_2;
    }
    if (param_2 < *(float *)(param_3 + 0x28)) {
      fVar8 = *(float *)(param_3 + 0x28);
    }
    local_38 = CONCAT44(fVar8,fVar7);
    plVar2 = *(long **)(param_3 + 0x38);
    lVar3 = FUN_01f08890(*(undefined8 *)puVar1,5);
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_float,_Vector2>__ctor__;
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0208cc98 with catch @ 0208cbc8
                       catch() { ... } // from try @ 0208ccf0 with catch @ 0208cbc8 */
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) =
             *(undefined8 *)
              Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
        thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x20));
        uVar4 = FUN_0357d174(&local_38,*(undefined8 *)puVar1,0);
                    /* try { // try from 0208cc0c to 0218cc17 has its CatchHandler @ 0208cd28 */
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x30));
            uVar4 = FUN_0357d174((ulong)&local_38 | 4,*(undefined8 *)puVar1,0);
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x38),uVar4);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) =
                     *(undefined8 *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                ;
                thunk_FUN_01f51358();
                uVar4 = FUN_0340efe8(lVar3,0);
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x558))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x560));
                  if (((*(long *)(param_3 + 0x40) != 0) &&
                      (lVar3 = FUN_04070398(*(long *)(param_3 + 0x40),0), lVar3 != 0)) &&
                     (lVar3 = FUN_0407d2c4(lVar3,0),
                     puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
                     lVar3 != 0)) {
                    lVar3 = FUN_022c59ec(lVar3,*(undefined8 *)
                                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                                        );
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)puVar1);
                    }
                    uVar5 = FUN_04073094(lVar3,0,0);
                    if ((uVar5 & 1) == 0) {
                      fVar7 = *(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x20);
                      fVar8 = *(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x28);
                    }
                    else {
                      if (lVar3 == 0) goto LAB_0208cdc4;
                      fVar7 = (float)FUN_0407c660(lVar3,0);
                      FUN_0407c660(lVar3,0);
                    }
                    if ((*(long *)(param_3 + 0x40) != 0) &&
                       (lVar3 = FUN_04070398(*(long *)(param_3 + 0x40),0), lVar3 != 0)) {
                      FUN_0407c958(ABS(fVar7) * (float)local_38 * 0.5,
                                   ABS(fVar8) * local_38._4_4_ * 0.5,0,lVar3,0);
                      return;
                    }
                  }
                }
                goto LAB_0208cdc4;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_0208cdc4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


