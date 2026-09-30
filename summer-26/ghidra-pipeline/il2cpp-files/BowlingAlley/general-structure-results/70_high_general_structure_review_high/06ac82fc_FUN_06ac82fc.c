/*
FUNCTION_NAME: FUN_06ac82fc
ENTRY_POINT: 06ac82fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void FUN_06ac82fc(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 local_48 [16];
  long local_38;
  
  if ((DAT_076e31aa & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__
                      );
    DAT_076e31aa = 1;
  }
  local_48._8_8_ = 0;
  local_38 = 0;
  local_48._0_8_ = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
           ) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_06ac83b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_032937ac(param_2,*(long *)
                                   Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                          ,6);
LAB_06ac83b4:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    puVar1 = Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__;
    if (param_1[0x22] != 0) {
      local_48 = FUN_03fdb010(param_1[0x22],&local_38,
                              *(undefined8 *)
                               Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__
                             );
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(long *)(local_38 + 0x28) = (long)param_1;
      thunk_FUN_0333a630((long *)(local_38 + 0x28),param_1);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(undefined8 *)(local_38 + 0x10) = uVar3;
      thunk_FUN_0333a630((undefined8 *)(local_38 + 0x10),uVar3);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(undefined8 *)(local_38 + 0x18) = param_3;
      thunk_FUN_0333a630((undefined8 *)(local_38 + 0x18),param_3);
      if (local_38 != 0) {
        *(long *)(local_38 + 0x20) = (long)param_2;
        thunk_FUN_0333a630((long *)(local_38 + 0x20),param_2);
        if (local_38 != 0) {
          *(undefined1 *)(local_38 + 0x30) = 0;
          (**(code **)(*param_1 + 0x438))
                    (param_1,param_2,param_3,local_38,*(undefined8 *)(*param_1 + 0x440));
          FUN_0479c18c(local_48,*(undefined8 *)puVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


