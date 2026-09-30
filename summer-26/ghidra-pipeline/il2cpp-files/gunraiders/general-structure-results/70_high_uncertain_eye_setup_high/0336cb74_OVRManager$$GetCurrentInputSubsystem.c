/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 0336cb74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(long param_1,long param_2,int param_3,int *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((DAT_0453356f & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f930);
    DAT_0453356f = 1;
  }
  uVar1 = *param_4 % 3;
  if ((int)uVar1 < 1) {
LAB_0336cc78:
    *(uint *)(param_1 + 0x28) = uVar1;
    return;
  }
  *param_4 = *param_4 - uVar1;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,3);
    *(long *)(param_1 + 0x20) = lVar2;
  }
  if (param_2 == 0) {
LAB_0336cc8c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar4 = *param_4 + param_3;
  if (uVar4 < *(uint *)(param_2 + 0x18)) {
    uVar3 = 0;
    do {
      if (lVar2 == 0) goto LAB_0336cc8c;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) break;
      *(undefined1 *)(lVar2 + uVar3 + 0x20) = *(undefined1 *)(param_2 + (int)uVar4 + 0x20);
      if ((ulong)uVar1 - 1 == uVar3) goto LAB_0336cc78;
      lVar2 = *(long *)(param_1 + 0x20);
      uVar3 = uVar3 + 1;
      uVar4 = (int)uVar3 + param_3 + *param_4;
    } while ((uint)(param_3 + *param_4 + (int)uVar3) < *(uint *)(param_2 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


