/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__447_0
ENTRY_POINT: 051aa8e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__447_0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar4 + 5) * 0x10 + 0x138);
      goto LAB_051aa91c;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa91c:
  (*(code *)*puVar3)();
  uVar1 = FUN_051aa470();
  uVar2 = FUN_051aabd4();
  uVar1 = (*(uint *)(unaff_x19 + 0x178) | uVar1) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar1;
  if ((uVar2 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
  return;
}


