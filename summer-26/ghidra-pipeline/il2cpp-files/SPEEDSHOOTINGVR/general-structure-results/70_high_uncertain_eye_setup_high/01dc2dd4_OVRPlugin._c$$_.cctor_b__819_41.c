/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_41
ENTRY_POINT: 01dc2dd4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_41(ulong param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  undefined2 *unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
                    /* try { // try from 01dc2dd4 to 01ec2e0b has its CatchHandler @ 01dc2e0c */
  do {
    if (in_x9 <= param_1) goto LAB_01dc2e8c;
    *(undefined1 *)(unaff_x25 + 0x20 + param_1) = *(undefined1 *)(unaff_x24 + param_1);
    param_1 = param_1 + 1;
  } while ((unaff_x21 & 0xffffffff) != param_1);
  lVar4 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c0b8,unaff_w20);
                    /* catch() { ... } // from try @ 01dc2dd4 with catch @ 01dc2e0c
                       try { // try from 01dc2e0c to 01ec2eeb has its CatchHandler @ 01dc2750 */
                    /* catch() { ... } // from try @ 01dc2d70 with catch @ 01dc2e10 */
                    /* catch() { ... } // from try @ 01dc2ccc with catch @ 01dc2e14 */
                    /* catch() { ... } // from try @ 01dc2db8 with catch @ 01dc2e18 */
                    /* catch() { ... } // from try @ 01dc2d54 with catch @ 01dc2e1c */
                    /* catch() { ... } // from try @ 01dc2cb0 with catch @ 01dc2e20 */
                    /* catch() { ... } // from try @ 01dc2c0c with catch @ 01dc2e24 */
                    /* catch() { ... } // from try @ 01dc2bf0 with catch @ 01dc2e28 */
                    /* catch() { ... } // from try @ 01dc2b70 with catch @ 01dc2e2c
                       catch() { ... } // from try @ 01dc2c7c with catch @ 01dc2e2c
                       catch() { ... } // from try @ 01dc2d2c with catch @ 01dc2e2c
                       catch() { ... } // from try @ 01dc2db0 with catch @ 01dc2e2c */
                    /* catch() { ... } // from try @ 01dc2b30 with catch @ 01dc2e30
                       catch() { ... } // from try @ 01dc2c68 with catch @ 01dc2e30
                       catch() { ... } // from try @ 01dc2d0c with catch @ 01dc2e30
                       catch() { ... } // from try @ 01dc2d4c with catch @ 01dc2e30 */
                    /* catch() { ... } // from try @ 01dc2ad8 with catch @ 01dc2e34 */
  uVar3 = (**(code **)(*unaff_x23 + 0x1c8))();
                    /* catch() { ... } // from try @ 01dc2a90 with catch @ 01dc2e38
                       catch() { ... } // from try @ 01dc2c54 with catch @ 01dc2e38
                       catch() { ... } // from try @ 01dc2c88 with catch @ 01dc2e38 */
                    /* catch() { ... } // from try @ 01dc29ac with catch @ 01dc2e3c */
  if ((int)unaff_w20 <= (int)uVar3) {
    uVar3 = unaff_w20;
  }
  if (0 < (int)uVar3) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = *(uint *)(lVar4 + 0x18);
    uVar5 = 0;
    do {
      if (uVar2 <= uVar5) {
LAB_01dc2e8c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar1 = uVar5 * 2;
      uVar5 = uVar5 + 1;
      *unaff_x19 = *(undefined2 *)(lVar4 + 0x20 + lVar1);
      unaff_x19 = unaff_x19 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}


