/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 060c4574
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


void OVRManager__SetAppSpacePosition(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_07a240b0;
  if ((DAT_07ee0a0f & 1) == 0) {
                    /* try { // try from 060c4598 to 061c464b has its CatchHandler @ 060c4598
                       catch() { ... } // from try @ 060c4598 with catch @ 060c4598
                       catch() { ... } // from try @ 060c4924 with catch @ 060c4598
                       catch() { ... } // from try @ 060c49f8 with catch @ 060c4598
                       catch() { ... } // from try @ 060c4a84 with catch @ 060c4598
                       catch() { ... } // from try @ 060c4abc with catch @ 060c4598
                       catch() { ... } // from try @ 060c4af4 with catch @ 060c4598
                       catch() { ... } // from try @ 060c4b40 with catch @ 060c4598 */
    FUN_03642964(PTR_DAT_07a240a0);
    FUN_03642964(PTR_DAT_07a240b0);
    DAT_07ee0a0f = 1;
  }
  FUN_042b2200(param_1,param_2,*(undefined8 *)puVar1);
  plVar6 = *(long **)(param_1 + 0xb8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a240a0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_060c4630;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a240a0,1);
LAB_060c4630:
                    /* WARNING: Could not recover jumptable at 0x060c4644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


