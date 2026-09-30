/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$ovrp_QplMarkerStartForJoin
ENTRY_POINT: 05d42120
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


void OVRPlugin_OVRP_1_105_0__ovrp_QplMarkerStartForJoin
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xb06) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b60);
    *(undefined1 *)(unaff_x22 + 0xb06) = 1;
  }
  plVar1 = (long *)FUN_05d41138(param_1);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_05d421b0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06fb4b60,10);
LAB_05d421b0:
                    /* WARNING: Could not recover jumptable at 0x05d421cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,param_3,puVar2[1]);
  return;
}


