/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationDiscovery
ENTRY_POINT: 05d52a5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_103_0__ovrp_StartColocationDiscovery(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar6;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
                    /* try { // try from 05d52a64 to 05e52a9b has its CatchHandler @ 05d52bdc */
  FUN_02fe925c(PTR_DAT_06f6d758);
  *(undefined1 *)(unaff_x21 + 0xbd6) = 1;
  lVar3 = thunk_FUN_0301080c(*unaff_x22);
  FUN_052bbc7c(lVar3,*unaff_x20);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05d52b28();
  iVar2 = FUN_05b4a5dc(uVar4,0);
  puVar1 = PTR_DAT_06f7c0f0;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 05d52ac8 to 05e52acf has its CatchHandler @ 05d52b94 */
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_05d52ba4();
      uVar5 = FUN_05d52c0c();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_052bc618(lVar3,uVar4,uVar5,*(undefined8 *)puVar1);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return lVar3;
}


