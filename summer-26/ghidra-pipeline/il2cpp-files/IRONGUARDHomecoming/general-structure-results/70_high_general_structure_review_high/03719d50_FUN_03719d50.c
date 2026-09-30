/*
FUNCTION_NAME: FUN_03719d50
ENTRY_POINT: 03719d50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03719d50(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_04836144 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_WaitUntilUnit_<Await>d__5_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_WheelEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_While_<LoopCoroutine>d__8_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
    DAT_04836144 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = FUN_036dae98(param_2,0);
    if ((uVar2 & 1) == 0) {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_Unity_VisualScripting_While_<LoopCoroutine>d__8_System_Collections_IEnumerator_Reset__
                  );
      lVar5 = param_2[5];
      lVar3 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,6);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) =
               *(undefined8 *)
                Method_Unity_VisualScripting_WaitUntilUnit_<Await>d__5_System_Collections_IEnumerator_Reset__
          ;
          thunk_FUN_01f51358();
          if (lVar5 == 0) goto OVR_OpenVR_CVRSystem__GetControllerStatePacked__BeginInvoke;
          uVar4 = FUN_03587f1c(lVar5 + 0x18,0);
          if (1 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
            thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x28),uVar4);
            puVar1 = Method_System_DateTimeParse_ParseExact__;
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) =
                   *(undefined8 *)Method_System_DateTimeParse_ParseExact__;
              thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x30));
              if (3 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar5 + 0x28);
                thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x38));
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)puVar1;
                  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x40));
                  if (5 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar5 + 0x30);
                    thunk_FUN_01f51358();
                    uVar4 = FUN_0340efe8(lVar3,0);
                    goto LAB_03719f38;
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
    }
    else {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_WheelEvent_<>c_<_cctor>b__0_0__);
      lVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (lVar3 != 0) {
        uVar4 = FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                             *(undefined8 *)(lVar3 + 0x18),0);
LAB_03719f38:
        FUN_037184fc(param_1,uVar4);
        return;
      }
    }
  }
OVR_OpenVR_CVRSystem__GetControllerStatePacked__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


