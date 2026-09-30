/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 07c9c54c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 07c9c554 to 07d9c55b has its CatchHandler @ 07c9c890 */
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f4d1c0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x11) * 0x10 + 0x138);
        goto LAB_07c9c5ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 07c9c590 to 07d9c5bb has its CatchHandler @ 07c9c89c */
  puVar1 = (undefined8 *)FUN_044822ac(param_1,*(long *)PTR_DAT_09f4d1c0,0x11);
LAB_07c9c5ac:
                    /* WARNING: Could not recover jumptable at 0x07c9c5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,puVar1[1]);
  return;
}


