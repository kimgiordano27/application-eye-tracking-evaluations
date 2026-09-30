/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 01dadd4c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daddf4) */

void OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000050;
  
  do {
                    /* try { // try from 01dadd4c to 01eadd5b has its CatchHandler @ 01dae068 */
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 01dadd68 to 01eadd6f has its CatchHandler @ 01dae028 */
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
                    /* try { // try from 01dadd8c to 01eadd93 has its CatchHandler @ 01dae014 */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_01dadd98;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
                    /* try { // try from 01dadd78 to 01eadd7f has its CatchHandler @ 01dae020 */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0103c348(unaff_x21,*unaff_x25,0);
LAB_01dadd98:
                    /* try { // try from 01dadda4 to 01eaddbb has its CatchHandler @ 01dae04c */
    (*(code *)*puVar1)(unaff_x21,unaff_x23,unaff_x22,1,puVar1[1]);
    do {
      do {
        uVar3 = FUN_0150a200(&stack0x00000040,*unaff_x24);
        unaff_x21 = in_stack_00000050;
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 01daddc0 to 01eaddc7 has its CatchHandler @ 01dae024 */
          FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
                    /* try { // try from 01daddd0 to 01eaddd7 has its CatchHandler @ 01dae01c */
                    /* try { // try from 01dadde4 to 01eaddeb has its CatchHandler @ 01dae018 */
          return;
        }
        in_stack_00000028 = 0;
      } while (((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x38) != 0)) &&
              (uVar3 = FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                                    *unaff_x26), (uVar3 & 1) != 0));
      in_stack_00000020 = 0;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),unaff_x21,&stack0x00000020,*unaff_x26);
      }
    } while (in_stack_00000028 == in_stack_00000020);
    unaff_x22 = in_stack_00000020;
    unaff_x23 = in_stack_00000028;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  } while( true );
}


