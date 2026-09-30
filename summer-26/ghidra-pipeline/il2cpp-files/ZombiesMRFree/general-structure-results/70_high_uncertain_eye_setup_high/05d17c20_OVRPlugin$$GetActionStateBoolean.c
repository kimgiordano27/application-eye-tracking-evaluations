/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 05d17c20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_06fb8900;
  if ((DAT_07398888 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8900);
    FUN_02fe925c(PTR_DAT_06fb8710);
    DAT_07398888 = 1;
  }
  plVar2 = (long *)FUN_03bbec8c(param_1,*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb8710) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05d17cd8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06fb8710,0);
LAB_05d17cd8:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_03048534((undefined8 *)(param_1 + 0x30));
  return;
}


