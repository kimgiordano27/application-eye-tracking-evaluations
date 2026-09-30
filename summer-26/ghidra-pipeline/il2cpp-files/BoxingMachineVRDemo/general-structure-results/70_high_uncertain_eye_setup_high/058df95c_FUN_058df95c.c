/*
FUNCTION_NAME: FUN_058df95c
ENTRY_POINT: 058df95c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058df95c(long param_1)

{
  float fVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_260 [544];
  
  if ((DAT_06b80b46 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_06b80b46 = 1;
  }
  if (*(char *)(param_1 + 0xd9) != '\0') {
    FUN_058dec08(param_1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x38) + 0x48) == '\0') &&
       (uVar3 = FUN_058dc30c(), puVar2 = OVRPlugin_OVRP_1_36_0_TypeInfo, (uVar3 & 1) == 0)) {
      if (0 < *(int *)(param_1 + 0x160)) {
        iVar5 = 0;
        do {
          FUN_03799508(auStack_260,(int *)(param_1 + 0x160),iVar5,*(undefined8 *)puVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x160));
      }
    }
    else {
      FUN_058dba44(param_1,param_1 + 0x390);
      FUN_058df630(param_1);
      fVar1 = DAT_01208240;
      if (0 < *(int *)(param_1 + 0x160)) {
        iVar5 = 0;
        do {
          puVar4 = (undefined1 *)FUN_058ddbdc(param_1,iVar5);
          FUN_058d9d18(param_1,puVar4);
          if (*(long *)(puVar4 + 0x1d0) == 0) goto LAB_058dfaf4;
          if (((*(int *)(*(long *)(puVar4 + 0x1d0) + 0x194) == 2) && (puVar4[8] == '\0')) &&
             (1 < *(int *)(puVar4 + 0xc) - 1U)) {
            FUN_058de990(param_1,iVar5);
            iVar5 = iVar5 + -1;
          }
          else {
            *puVar4 = 0;
            if (fVar1 <= *(float *)(puVar4 + 0x1e0) * *(float *)(puVar4 + 0x1e0) +
                         *(float *)(puVar4 + 0x1e4) * *(float *)(puVar4 + 0x1e4)) {
              *puVar4 = 1;
              *(undefined8 *)(puVar4 + 0x1e0) = 0;
            }
            *(undefined4 *)(puVar4 + 0xc) = 3;
            *(undefined4 *)(puVar4 + 0xa4) = 3;
            *(undefined4 *)(puVar4 + 0x13c) = 3;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x160));
      }
    }
    return;
  }
LAB_058dfaf4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


