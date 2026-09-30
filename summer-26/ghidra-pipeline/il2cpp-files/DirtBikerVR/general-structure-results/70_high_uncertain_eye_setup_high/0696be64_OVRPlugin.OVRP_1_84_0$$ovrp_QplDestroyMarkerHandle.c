/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 0696be64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  while( true ) {
                    /* try { // try from 0696be64 to 06a6be6b has its CatchHandler @ 0696c454 */
    if ((uint)in_x10 < in_w11) {
      *(uint *)(unaff_x22 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_03afed3c();
    }
    else {
                    /* try { // try from 0696be88 to 06a6be93 has its CatchHandler @ 0696c4d8 */
      FUN_04de85b0(unaff_x22,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    do {
                    /* try { // try from 0696be9c to 06a6bebb has its CatchHandler @ 0696c4e4 */
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0696bec0;
      lVar7 = *(long *)(unaff_x27 + unaff_x23 * 8);
      uVar2 = FUN_04de894c(*(long *)(unaff_x19 + 0x78),lVar7,*unaff_x24);
    } while ((uVar2 & 1) != 0);
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) break;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar6 = *unaff_x25;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar7;
      thunk_FUN_03afed3c(plVar5,lVar7);
    }
    else {
      FUN_04de85b0(lVar3,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar7 == 0) break;
    unaff_x22 = *(long *)(unaff_x19 + 0x80);
    param_3 = FUN_07c6dc88(lVar7,0);
    if (unaff_x22 == 0) break;
    param_1 = *(long *)(unaff_x22 + 0x10);
    in_x9 = *unaff_x26;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(unaff_x22 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  }
LAB_0696bec0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


