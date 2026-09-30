/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 05d4eed0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_07398ba0 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06fb9390);
                    /* try { // try from 05d4ef00 to 05e4ef2b has its CatchHandler @ 05d4ef70 */
    FUN_02fe925c(PTR_DAT_06fb4e90);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07398ba0 = 1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
                    /* try { // try from 05d4ef2c to 05e4ef5b has its CatchHandler @ 05d4ee14 */
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_068f8810(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x28);
      uVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
      FUN_05a645d0(uVar5,param_1,*(undefined8 *)PTR_DAT_06fb9390,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar3 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4e90) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 10) * 0x10 + 0x138);
            goto LAB_05d4eff0;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4e90,10);
LAB_05d4eff0:
                    /* WARNING: Could not recover jumptable at 0x05d4f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,uVar5,puVar2[1]);
      return;
    }
  }
  return;
}


