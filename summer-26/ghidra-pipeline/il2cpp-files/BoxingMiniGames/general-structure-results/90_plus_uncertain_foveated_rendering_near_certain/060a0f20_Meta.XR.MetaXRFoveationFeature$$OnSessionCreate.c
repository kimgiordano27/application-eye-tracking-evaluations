/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 060a0f20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x740));
                    /* try { // try from 060a0f28 to 061a0f37 has its CatchHandler @ 060a0fb4 */
  *(undefined1 *)(unaff_x21 + 0x898) = 1;
  plVar4 = (long *)(unaff_x19 + 0xa8);
                    /* try { // try from 060a0f3c to 061a0f5b has its CatchHandler @ 060a0fb0 */
  lVar2 = FUN_05e5e514(*plVar4);
  puVar1 = PTR_DAT_07a23740;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_07a23740;
    lVar3 = thunk_FUN_0367fd24(lVar2,uVar5);
    if (lVar3 != 0) {
                    /* try { // try from 060a0f60 to 061a0f7f has its CatchHandler @ 060a0fac */
      uVar5 = *(undefined8 *)puVar1;
      *plVar4 = lVar3;
      lVar3 = thunk_FUN_0367fd24(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_060a0f90;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_060a0f90:
  thunk_FUN_036b7ad0(plVar4,lVar3);
  return;
}


