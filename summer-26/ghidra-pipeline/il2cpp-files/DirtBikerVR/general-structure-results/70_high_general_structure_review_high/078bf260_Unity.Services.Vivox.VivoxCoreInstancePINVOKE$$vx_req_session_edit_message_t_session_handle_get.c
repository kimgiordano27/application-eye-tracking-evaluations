/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_edit_message_t_session_handle_get
ENTRY_POINT: 078bf260
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_edit_message_t_session_handle_get
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_03afed3c();
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo);
  FUN_078e2b14();
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)System_Collections_Generic_List<EngineComponent_PowerModifier>_TypeInfo;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = uVar2;
        thunk_FUN_03afed3c(puVar5,uVar2);
      }
      else {
        FUN_04de85b0(lVar3,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


