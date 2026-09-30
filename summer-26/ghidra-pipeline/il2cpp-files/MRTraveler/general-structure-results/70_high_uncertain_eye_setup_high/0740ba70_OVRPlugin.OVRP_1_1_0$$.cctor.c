/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$.cctor
ENTRY_POINT: 0740ba70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___cctor(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_w8;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
      in_w8 = unaff_w22;
    }
                    /* try { // try from 0740ba84 to 0750baff has its CatchHandler @ 0740bd48 */
    FUN_0712485c();
    iVar4 = in_w8 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = iVar4;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0740bb44;
    unaff_w22 = unaff_w22 - in_w8;
    iVar5 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    if (iVar5 < iVar4) {
      thunk_FUN_03ce5214(PTR_DAT_08e695a0);
      uVar2 = thunk_FUN_03cf5234();
      FUN_071396c0(uVar2,0);
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08eb6488);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar2,uVar3);
    }
    if (iVar4 == iVar5) {
      iVar4 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) break;
    in_w8 = iVar5 - iVar4;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = unaff_w22 - in_w8 < 0;
    in_ZR = unaff_w22 == in_w8;
  }
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_018b0108;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = FUN_08593408(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
    UnityEngine_UI_FontData__set_minSize(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_0740bb44:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


