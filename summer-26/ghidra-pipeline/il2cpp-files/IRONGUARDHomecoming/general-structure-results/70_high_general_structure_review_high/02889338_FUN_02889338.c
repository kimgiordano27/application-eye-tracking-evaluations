/*
FUNCTION_NAME: FUN_02889338
ENTRY_POINT: 02889338
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_02889338(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  if ((DAT_04830990 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__);
    DAT_04830990 = 1;
  }
  lVar2 = FUN_01f08890(*(undefined8 *)puVar1,5);
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      uVar4 = FUN_034f92ac(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200));
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar4;
        thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28),uVar4);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
          ;
          thunk_FUN_01f51358();
          plVar5 = *(long **)(param_1 + 8);
          if (plVar5 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            if (plVar5 == (long *)0x0)
            goto 
            UnityEngine_UIElements_BaseSlider<int>__UnityEngine_UIElements_IValueField<TValueType>_StartDragging
            ;
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar4;
            thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
              thunk_FUN_01f51358();
              FUN_0340efe8(lVar2,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
UnityEngine_UIElements_BaseSlider<int>__UnityEngine_UIElements_IValueField<TValueType>_StartDragging
  :
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


