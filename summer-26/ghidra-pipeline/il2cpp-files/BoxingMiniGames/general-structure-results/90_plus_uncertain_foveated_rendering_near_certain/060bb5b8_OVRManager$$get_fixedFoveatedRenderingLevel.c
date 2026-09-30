/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 060bb5b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_0367cd30();
      goto LAB_060bb5e4;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
                    /* try { // try from 060bb5d8 to 061bb5df has its CatchHandler @ 060bb984 */
  puVar5 = (undefined8 *)(param_1 + (long)(*piVar2 + 5) * 0x10 + 0x138);
LAB_060bb5e4:
  (*(code *)*puVar5)();
  uVar3 = FUN_060bb158();
  uVar4 = FUN_060bb8a8();
  uVar3 = (*(uint *)(unaff_x19 + 0x178) | uVar3) & (uVar4 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar3;
  if ((uVar4 != 0) && (uVar3 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
  return;
}


