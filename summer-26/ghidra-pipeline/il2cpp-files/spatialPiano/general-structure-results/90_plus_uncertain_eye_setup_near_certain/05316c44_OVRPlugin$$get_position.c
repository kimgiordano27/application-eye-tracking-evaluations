/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 05316c44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f08768();
  FUN_02f08768(UnityEngine_Rendering_Universal_DecalCulledChunk_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x203) = 1;
  FUN_037d8f44();
  plVar5 = *(long **)(unaff_x20 + 0xb8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 05316c84 to 05416c8b has its CatchHandler @ 05316d00 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)UnityEngine_Rendering_Universal_DecalCreateDrawCallSystem_TypeInfo) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05316cd8;
      }
                    /* try { // try from 05316ca0 to 05416cb3 has its CatchHandler @ 05316cfc */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 05316cb4 to 05416cdf has its CatchHandler @ 05316b8c */
  puVar1 = (undefined8 *)
           FUN_02f421d0(plVar5,*(long *)
                                UnityEngine_Rendering_Universal_DecalCreateDrawCallSystem_TypeInfo,0
                       );
LAB_05316cd8:
                    /* WARNING: Could not recover jumptable at 0x05316cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


