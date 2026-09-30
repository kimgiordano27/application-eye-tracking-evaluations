/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem._PollNextEventPacked$$BeginInvoke
ENTRY_POINT: 03719dbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void OVR_OpenVR_CVRSystem__PollNextEventPacked__BeginInvoke(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xfa8));
  *(undefined1 *)(unaff_x21 + 0x144) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar2 = FUN_036dae98();
    if ((uVar2 & 1) == 0) {
      FUN_037184fc();
      lVar5 = unaff_x20[5];
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
                    FUN_0340efe8(lVar3,0);
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
      FUN_037184fc();
      lVar3 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar3 != 0) {
        FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                     *(undefined8 *)(lVar3 + 0x18),0);
LAB_03719f38:
        FUN_037184fc();
        return;
      }
    }
  }
OVR_OpenVR_CVRSystem__GetControllerStatePacked__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


