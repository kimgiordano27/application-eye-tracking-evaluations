/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetVirtualKeyboardScale
ENTRY_POINT: 0697781c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetVirtualKeyboardScale(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int in_w8;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 0697781c to 06a77843 has its CatchHandler @ 06977988 */
  if (in_w8 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
LAB_069778cc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x30) == 0) ||
          (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar3 == 0)) ||
         (lVar3 = FUN_0447b578(lVar3,*(undefined8 *)PTR_DAT_08497b78), lVar3 == 0))
      goto LAB_069778cc;
      uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 06977880 to 06a778a7 has its CatchHandler @ 06977984 */
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar4 = *(long *)(lVar3 + 0x20 + lVar6 * 8);
          if (lVar4 == 0) goto LAB_069778cc;
          FUN_07c62298(lVar4,2,0);
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
    }
  }
  return;
}


