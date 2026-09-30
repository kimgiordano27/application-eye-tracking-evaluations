/*
FUNCTION_NAME: FUN_033767f0
ENTRY_POINT: 033767f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_033767f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_04832129 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_TimerCallback__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_get_ContentType__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_set_ContentType__);
    DAT_04832129 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar1 = FUN_030bdc1c(*(long *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),
                         *(undefined8 *)Method_System_Net_FtpWebRequest_TimerCallback__);
    lVar3 = *(long *)(param_1 + 0x48);
    if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x20), lVar4 != 0)) {
      iVar1 = iVar1 + 1;
      if (*(int *)(lVar3 + 0x18) <= iVar1) {
        iVar1 = 0;
      }
      uVar2 = FUN_030bcd8c(lVar3,iVar1,
                           *(undefined8 *)Method_System_Net_FtpWebRequest_set_ContentType__);
      *(undefined4 *)(lVar4 + 0x58) = uVar2;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_033b669c(*(long *)(param_1 + 0x20),0);
        FUN_033766b8(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


