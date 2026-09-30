/*
FUNCTION_NAME: FUN_058df630
ENTRY_POINT: 058df630
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058df630(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_270 [464];
  long local_a0;
  
  if ((DAT_06b80b45 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_06b80b45 = 1;
  }
  if (0 < *(int *)(param_1 + 0x160)) {
    iVar7 = 0;
    iVar6 = 0;
    piVar1 = (int *)(param_1 + 0x160);
    do {
      pcVar4 = (char *)FUN_058ddbdc(param_1,iVar6);
      if (*(long *)(pcVar4 + 0x1d0) == 0) goto LAB_058df890;
      FUN_058d89fc();
      FUN_058df894(pcVar4,*(undefined8 *)(pcVar4 + 0x1d0));
      puVar3 = OVRPlugin_OVRP_1_36_0_TypeInfo;
      if ((iVar7 == 0) && (*pcVar4 != '\0')) {
        if (*(long *)(pcVar4 + 0x1d0) == 0) goto LAB_058df890;
        iVar7 = *(int *)(*(long *)(pcVar4 + 0x1d0) + 0x194);
      }
      iVar2 = *piVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0xcc) == 0)) {
      if (iVar7 == 1) {
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            lVar5 = FUN_058ddbdc(param_1,iVar6);
            FUN_03799508(auStack_270,piVar1,iVar6,*(undefined8 *)puVar3);
            if (local_a0 == 0) {
LAB_058df890:
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if ((*(int *)(local_a0 + 0x194) == 2) && (*(char *)(lVar5 + 8) != '\0')) {
              *(undefined1 *)(lVar5 + 8) = 0;
              if (*(int *)(lVar5 + 0xc) == 0) {
                *(undefined4 *)(lVar5 + 0xc) = 2;
              }
              else if (*(int *)(lVar5 + 0xc) == 3) {
                *(undefined4 *)(lVar5 + 0xc) = 1;
              }
            }
            FUN_03799508(auStack_270,piVar1,iVar6,*(undefined8 *)puVar3);
            if (local_a0 == 0) goto LAB_058df890;
            if (*(int *)(local_a0 + 0x194) == 1) {
LAB_058df7b4:
              FUN_03799508(auStack_270,piVar1,iVar6,*(undefined8 *)puVar3);
              if (local_a0 == 0) goto LAB_058df890;
              if (((*(int *)(local_a0 + 0x194) == 2) && (*(char *)(lVar5 + 8) == '\0')) &&
                 (1 < *(int *)(lVar5 + 0xc) - 1U)) goto LAB_058df7f4;
            }
            else {
              FUN_03799508(auStack_270,piVar1,iVar6,*(undefined8 *)puVar3);
              if (local_a0 == 0) goto LAB_058df890;
              if (*(int *)(local_a0 + 0x194) == 2) goto LAB_058df7b4;
LAB_058df7f4:
              FUN_058ddb10(param_1,iVar6);
              iVar6 = iVar6 + -1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *piVar1);
        }
      }
      else if (0 < iVar2) {
        iVar6 = 0;
        do {
          FUN_03799508(auStack_270,piVar1,iVar6,*(undefined8 *)puVar3);
          if (local_a0 == 0) goto LAB_058df890;
          if (*(int *)(local_a0 + 0x194) == 1) {
            FUN_058ddb10(param_1,iVar6);
            iVar6 = iVar6 + -1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *piVar1);
      }
    }
  }
  return;
}


