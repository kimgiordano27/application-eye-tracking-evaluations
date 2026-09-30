/*
FUNCTION_NAME: FUN_05aefde4
ENTRY_POINT: 05aefde4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_13
*/


void FUN_05aefde4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_066d454b & 1) == 0) {
    FUN_02b3c81c(Method_System_Net_FtpWebRequest_SyncRequestCallback__);
    FUN_02b3c81c(Method_System_Net_FtpWebRequest_EndGetResponse__);
    FUN_02b3c81c(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    FUN_02b3c81c(Method_System_Net_FtpWebRequest_TimerCallback__);
    FUN_02b3c81c(Method_System_Net_FtpWebRequest_SubmitRequest__);
    DAT_066d454b = 1;
  }
  local_48 = 0;
  local_50 = param_2;
  thunk_FUN_02bb0e9c(&local_50,param_2);
  uVar2 = local_50;
  puVar1 = Method_System_Net_FtpWebRequest_SyncRequestCallback__;
  lVar4 = *(long *)(param_1 + 0x70);
  local_48 = CONCAT44(local_48._4_4_,param_3);
  uVar3 = local_48;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    if ((lVar5 == 0) || (param_3 < *(int *)(lVar5 + 0x30))) {
      FUN_0362f640(lVar4,local_50,local_48,
                   *(undefined8 *)Method_System_Net_FtpWebRequest_TimerCallback__);
      return;
    }
    do {
      lVar4 = FUN_03628718(lVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) {
LAB_05aefef0:
        if (*(long *)(param_1 + 0x70) != 0) {
          FUN_0362f5a4(*(long *)(param_1 + 0x70),lVar5,uVar2,uVar3,
                       *(undefined8 *)Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
          return;
        }
        break;
      }
      lVar4 = FUN_03628718(lVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (param_3 < *(int *)(lVar4 + 0x30)) goto LAB_05aefef0;
      lVar5 = FUN_03628718(lVar5,*(undefined8 *)puVar1);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


