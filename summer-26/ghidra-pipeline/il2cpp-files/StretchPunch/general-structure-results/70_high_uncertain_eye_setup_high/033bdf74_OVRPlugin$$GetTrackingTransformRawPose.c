/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 033bdf74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRawPose(ulong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  
  if ((param_1 & 1) != 0) {
    lVar7 = *(long *)StringLiteral_1183;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      lVar8 = *unaff_x19;
      if (*(byte *)(lVar8 + 0x130) < bVar1) goto LAB_033be0c0;
      unaff_x20 = (long *)0x0;
                    /* try { // try from 033bdfac to 034bdfcb has its CatchHandler @ 033be064 */
    }
    else {
      lVar8 = *unaff_x19;
                    /* try { // try from 033bdfd8 to 034bdfdb has its CatchHandler @ 033be05c */
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        unaff_x20 = (long *)0x0;
      }
      if (*(byte *)(lVar8 + 0x130) < bVar1) {
        if (unaff_x20 != (long *)0x0) {
          FUN_033aadfc(unaff_x20,0);
        }
        goto LAB_033be0c0;
      }
    }
                    /* try { // try from 033bdff4 to 034bdff7 has its CatchHandler @ 033be04c */
                    /* try { // try from 033be004 to 034be00f has its CatchHandler @ 033be058 */
    if (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      unaff_x19 = (long *)0x0;
    }
                    /* try { // try from 033be014 to 034be01f has its CatchHandler @ 033be054 */
    if ((unaff_x20 == (long *)0x0) || (iVar2 = FUN_033aadfc(unaff_x20,0), unaff_x19 == (long *)0x0))
    {
LAB_033be0c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    iVar3 = FUN_033aadfc(unaff_x19,0);
                    /* try { // try from 033be030 to 034be037 has its CatchHandler @ 033be050 */
    if (iVar2 == iVar3) {
      iVar2 = FUN_033aadfc(unaff_x20,0);
      if (0 < iVar2) {
                    /* try { // try from 033be048 to 034be04b has its CatchHandler @ 033be060 */
        iVar2 = 0;
        do {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bdff4 with catch @ 033be04c
                       try { // try from 033be04c to 034be07b has its CatchHandler @ 033bdf48 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033be030 with catch @ 033be050
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033be014 with catch @ 033be054
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033be004 with catch @ 033be058
                        */
          uVar4 = FUN_033aae5c(unaff_x20,iVar2,0);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bdfd8 with catch @ 033be05c
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033be048 with catch @ 033be060
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bdfac with catch @ 033be064
                        */
          uVar5 = FUN_033aae5c(unaff_x19,iVar2,0);
          uVar6 = FUN_033bded8(uVar4,uVar5);
                    /* try { // try from 033be07c to 034be093 has its CatchHandler @ 033be128 */
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_033aadfc(unaff_x20,0);
        } while (iVar2 < iVar3);
      }
      return 1;
    }
  }
  return 0;
}


