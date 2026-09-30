/*
FUNCTION_NAME: FUN_0550e2e4
ENTRY_POINT: 0550e2e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0550e2e4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_06bbf59d & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_8_0_TypeInfo);
    DAT_06bbf59d = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (param_2 == 0) goto LAB_0550e3c4;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = FUN_054f6fe4(param_2,0);
    if (param_3 == 0) goto LAB_0550e3c4;
    FUN_0550dba0(param_3,uVar1,uVar2,uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (param_2 == 0) break;
      uVar1 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
      uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
      uVar3 = FUN_054f6fe4(param_2,0);
      if (param_3 == 0) break;
      lVar5 = lVar5 + 0x10;
      uVar6 = uVar6 + 1;
      FUN_0550dba0(param_3,uVar1,uVar2,uVar3);
      lVar4 = *(long *)(param_1 + 0x38);
    } while (lVar4 != 0);
  }
LAB_0550e3c4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


