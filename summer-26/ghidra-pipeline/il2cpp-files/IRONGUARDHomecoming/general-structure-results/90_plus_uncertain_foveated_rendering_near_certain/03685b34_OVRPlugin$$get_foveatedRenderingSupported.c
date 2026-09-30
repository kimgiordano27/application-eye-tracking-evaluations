/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 03685b34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(void)

{
  uint in_w8;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long unaff_x19;
  uint unaff_w20;
  
  if (in_w8 != unaff_w20) {
    if ((unaff_w20 & 1) == 0) {
      puVar1 = (undefined4 *)(unaff_x19 + 0x40);
      puVar2 = (undefined4 *)(unaff_x19 + 0x44);
      puVar3 = (undefined4 *)(unaff_x19 + 0x48);
      puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    else {
      puVar1 = (undefined4 *)(unaff_x19 + 0x50);
      puVar2 = (undefined4 *)(unaff_x19 + 0x54);
      puVar3 = (undefined4 *)(unaff_x19 + 0x58);
      puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0404e03c(*puVar1,*puVar2,*puVar3,*puVar4,*(long *)(unaff_x19 + 0xa0),0);
    *(char *)(unaff_x19 + 0xa8) = (char)unaff_w20;
  }
                    /* try { // try from 03685b88 to 03785b8f has its CatchHandler @ 03685bac */
                    /* try { // try from 03685b90 to 03785bc3 has its CatchHandler @ 03685b30 */
  return;
}


