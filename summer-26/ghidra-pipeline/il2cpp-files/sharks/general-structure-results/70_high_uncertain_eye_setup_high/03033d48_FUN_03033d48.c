/*
FUNCTION_NAME: FUN_03033d48
ENTRY_POINT: 03033d48
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03033d48(long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar4 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb1d0);
                    /* try { // try from 03033df8 to 03133dfb has its CatchHandler @ 03033dfc */
                    /* catch() { ... } // from try @ 03033df8 with catch @ 03033dfc
                       try { // try from 03033dfc to 03133f07 has its CatchHandler @ 03032ebc */
                    /* catch() { ... } // from try @ 03033dcc with catch @ 03033e00 */
                    /* catch() { ... } // from try @ 03033d98 with catch @ 03033e04 */
    FUN_02b3cbec(uVar4,uVar5,0);
                    /* catch() { ... } // from try @ 03033d64 with catch @ 03033e08 */
    goto LAB_03033e90;
  }
  if (param_3 < 0) {
LAB_03033e0c:
                    /* catch() { ... } // from try @ 03033d30 with catch @ 03033e0c */
                    /* catch() { ... } // from try @ 03033cfc with catch @ 03033e10 */
                    /* catch() { ... } // from try @ 03033cc8 with catch @ 03033e14 */
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
                    /* catch() { ... } // from try @ 03033c94 with catch @ 03033e18 */
    uVar4 = thunk_FUN_01861bbc();
    puVar3 = PTR_DAT_03800d90;
                    /* catch() { ... } // from try @ 03033c60 with catch @ 03033e1c */
                    /* catch() { ... } // from try @ 03033c2c with catch @ 03033e20 */
                    /* catch() { ... } // from try @ 03033bf8 with catch @ 03033e24 */
                    /* catch() { ... } // from try @ 03033bc4 with catch @ 03033e28 */
  }
  else {
                    /* try { // try from 03033d64 to 03133d83 has its CatchHandler @ 03033e08 */
    if (*(int *)(param_2 + 0x18) < param_3) goto LAB_03033e0c;
    if ((-1 < param_4) && (param_4 <= *(int *)(param_2 + 0x18) - param_3)) {
      uVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 03033d98 to 03133db7 has its CatchHandler @ 03033e04 */
        if (param_1[10] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0303357c with catch @ 03033ea8 */
          FUN_017fc5a8();
        }
        FUN_03036778(param_1[10],0);
        lVar2 = FUN_02b55310(param_1,param_2,param_3,param_4,0);
        if (lVar2 != 0) {
          OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar2,0);
                    /* try { // try from 03033dcc to 03133deb has its CatchHandler @ 03033e00 */
          return;
        }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0303354c with catch @ 03033eac */
        FUN_017fc5a8();
      }
                    /* catch() { ... } // from try @ 030338ec with catch @ 03033e60 */
                    /* catch() { ... } // from try @ 030338b8 with catch @ 03033e64 */
                    /* catch() { ... } // from try @ 03033884 with catch @ 03033e68 */
      thunk_FUN_01851c08(PTR_DAT_037f2dc8);
                    /* catch() { ... } // from try @ 03033854 with catch @ 03033e6c */
      uVar4 = thunk_FUN_01861bbc();
                    /* catch() { ... } // from try @ 03033824 with catch @ 03033e70 */
                    /* catch() { ... } // from try @ 030337f0 with catch @ 03033e74 */
                    /* catch() { ... } // from try @ 030337bc with catch @ 03033e78 */
                    /* catch() { ... } // from try @ 0303378c with catch @ 03033e7c */
      uVar5 = thunk_FUN_01851c08(PTR_DAT_03822878);
                    /* catch() { ... } // from try @ 0303375c with catch @ 03033e80 */
                    /* catch() { ... } // from try @ 0303372c with catch @ 03033e84 */
                    /* catch() { ... } // from try @ 030336fc with catch @ 03033e88 */
                    /* catch() { ... } // from try @ 030336cc with catch @ 03033e8c */
      FUN_02bcb04c(uVar4,uVar5,0);
      goto LAB_03033e90;
    }
                    /* catch() { ... } // from try @ 03033b90 with catch @ 03033e2c */
                    /* catch() { ... } // from try @ 03033b5c with catch @ 03033e30 */
                    /* catch() { ... } // from try @ 03033b28 with catch @ 03033e34 */
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
                    /* catch() { ... } // from try @ 03033af4 with catch @ 03033e38 */
    uVar4 = thunk_FUN_01861bbc();
                    /* catch() { ... } // from try @ 03033ac0 with catch @ 03033e3c */
                    /* catch() { ... } // from try @ 03033a8c with catch @ 03033e40 */
                    /* catch() { ... } // from try @ 03033a58 with catch @ 03033e44 */
    puVar3 = PTR_DAT_037f86c8;
  }
                    /* catch() { ... } // from try @ 03033a24 with catch @ 03033e48 */
  uVar5 = thunk_FUN_01851c08(puVar3);
                    /* catch() { ... } // from try @ 030339f0 with catch @ 03033e4c */
                    /* catch() { ... } // from try @ 030339bc with catch @ 03033e50 */
                    /* catch() { ... } // from try @ 03033988 with catch @ 03033e54 */
                    /* catch() { ... } // from try @ 03033954 with catch @ 03033e58 */
  FUN_02b44e38(uVar4,uVar5,0);
                    /* catch() { ... } // from try @ 03033920 with catch @ 03033e5c */
LAB_03033e90:
                    /* catch() { ... } // from try @ 0303369c with catch @ 03033e90 */
                    /* catch() { ... } // from try @ 0303366c with catch @ 03033e94 */
                    /* catch() { ... } // from try @ 0303363c with catch @ 03033e98 */
  uVar5 = thunk_FUN_01851c08(PTR_DAT_03822890);
                    /* catch() { ... } // from try @ 0303360c with catch @ 03033e9c */
                    /* catch() { ... } // from try @ 030335dc with catch @ 03033ea0 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 030335ac with catch @ 03033ea4 */
  FUN_017fc474(uVar4,uVar5);
}


