/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 027ea240
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined2 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  FUN_020a1890();
  *(long **)(unaff_x20 + 0x58) = unaff_x21;
  *(undefined2 *)(unaff_x20 + 0x60) = unaff_w19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 027ea258 to 028ea25b has its CatchHandler @ 027ea270 */
                    /* try { // try from 027ea25c to 028ea25f has its CatchHandler @ 027ea264 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea218 with catch @ 027ea260
                       try { // try from 027ea260 to 028ea28b has its CatchHandler @ 027ea1c0 */
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea204 with catch @ 027ea264
                       catch(type#1 @ 03abd138) { ... } // from try @ 027ea25c with catch @ 027ea264
                        */
    thunk_FUN_01a58e78();
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea1ec with catch @ 027ea26c
                        */
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea258 with catch @ 027ea270
                        */
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 027ea28c to 028ea2a3 has its CatchHandler @ 027ea2d8 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03cf0d80) {
                    /* try { // try from 027ea2c0 to 028ea2cf has its CatchHandler @ 027ea2d8 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_027ea2d0;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 027ea2a8 to 028ea2ab has its CatchHandler @ 027ea2d0 */
      piVar4 = piVar4 + 4;
                    /* try { // try from 027ea2ac to 028ea2bf has its CatchHandler @ 027ea1c0 */
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec();
LAB_027ea2d0:
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea2a8 with catch @ 027ea2d0
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea28c with catch @ 027ea2d8
                       catch(type#1 @ 03abd138) { ... } // from try @ 027ea2c0 with catch @ 027ea2d8
                        */
                    /* try { // try from 027ea2e0 to 028ea2e3 has its CatchHandler @ 027ea344 */
                    /* try { // try from 027ea2e4 to 028ea307 has its CatchHandler @ 027ea1c0 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027ea1d8 with catch @ 027ea2ec
                        */
                    /* WARNING: Could not recover jumptable at 0x027ea2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


