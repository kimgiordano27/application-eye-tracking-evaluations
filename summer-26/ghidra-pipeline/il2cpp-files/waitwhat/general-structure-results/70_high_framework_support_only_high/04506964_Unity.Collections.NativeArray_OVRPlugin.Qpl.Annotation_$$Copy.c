/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 04506964
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_04505df8();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
  if (iVar1 != 0 && (int)unaff_w20 <= *(int *)(unaff_x19 + 0x18)) {
                    /* try { // try from 04506998 to 0460699b has its CatchHandler @ 045069bc */
    FUN_0595261c(lVar2,unaff_w20,lVar2,unaff_w20 + 1,iVar1,0);
                    /* try { // try from 0450699c to 0460699f has its CatchHandler @ 045069b8 */
    lVar2 = *(long *)(unaff_x19 + 0x10);
  }
                    /* try { // try from 045069a0 to 046069a7 has its CatchHandler @ 045069c4 */
  if (lVar2 != 0) {
                    /* try { // try from 045069a8 to 046069e7 has its CatchHandler @ 045066d0 */
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 045068cc with catch @ 045069b4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0450699c with catch @ 045069b8
                        */
      uVar4 = unaff_x21[1];
      uVar3 = *unaff_x21;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04506998 with catch @ 045069bc
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0450690c with catch @ 045069c0
                        */
      lVar2 = lVar2 + (long)(int)unaff_w20 * 0x18;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 045069a0 with catch @ 045069c4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 045067f0 with catch @ 045069c8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0450683c with catch @ 045069cc
                        */
      *(undefined8 *)(lVar2 + 0x30) = unaff_x21[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


