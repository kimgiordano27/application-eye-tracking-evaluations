/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 060c4648
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__SetAppSpaceRotation(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 060c464c to 061c464f has its CatchHandler @ 060c4a00 */
                    /* try { // try from 060c4650 to 061c4657 has its CatchHandler @ 060c4a14 */
  if ((DAT_07ee0a10 & 1) == 0) {
                    /* try { // try from 060c4668 to 061c468b has its CatchHandler @ 060c4ac0 */
    FUN_03642964(PTR_DAT_07a240a0);
    DAT_07ee0a10 = 1;
  }
  plVar5 = *(long **)(param_2 + 0xb8);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a240a0) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_060c46dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
                    /* try { // try from 060c46b8 to 061c46db has its CatchHandler @ 060c4a24 */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a240a0,2);
LAB_060c46dc:
    param_1 = (*(code *)*puVar1)(param_1,plVar5,puVar1[1]);
    if ((plVar5 == (long *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 060c4710 to 061c471b has its CatchHandler @ 060c4a08 */
      FUN_03642c18();
    }
  }
  *(undefined4 *)(param_2 + 0xf0) = param_1;
                    /* try { // try from 060c4704 to 061c470b has its CatchHandler @ 060c4a10 */
  return param_1;
}


