/*
FUNCTION_NAME: Unity.Networking.Transport.UDPNetworkInterface.FlushSendJob$$ProcessSendRequests
ENTRY_POINT: 06d70e78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_UDPNetworkInterface_FlushSendJob__ProcessSendRequests
               (undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_w9;
  int in_w10;
  int in_w11;
  int in_w12;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = in_w10 / param_3;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = in_w9 / param_3;
  }
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = in_w12 / param_3;
  }
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = in_w11 / param_3;
  }
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = *(int *)(param_2 + 0x10) / param_3;
  }
  iVar6 = 0;
  if (param_3 != 0) {
    iVar6 = *(int *)(param_2 + 0x14) / param_3;
  }
  iVar7 = 0;
  if (param_3 != 0) {
    iVar7 = *(int *)(param_2 + 0x18) / param_3;
  }
  iVar8 = 0;
  if (param_3 != 0) {
    iVar8 = *(int *)(param_2 + 0x1c) / param_3;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = CONCAT44(iVar2,iVar1);
  param_1[1] = CONCAT44(iVar4,iVar3);
  param_1[2] = CONCAT44(iVar6,iVar5);
  param_1[3] = CONCAT44(iVar8,iVar7);
  return;
}


