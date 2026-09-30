/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 060df17c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SendVirtualKeyboardInput
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 060df188 to 061df19b has its CatchHandler @ 060df3b8 */
  if (param_5 != 0) {
    uVar6 = *(ulong *)(param_5 + 0x18);
                    /* try { // try from 060df1a0 to 061df1ab has its CatchHandler @ 060df3a8 */
    if ((long)((uVar6 << 0x20) + -0x100000000) < 1) {
      fVar5 = INFINITY;
    }
    else {
      fVar5 = INFINITY;
      uVar7 = 0;
      do {
        if ((uVar6 & 0xffffffff) <= uVar7) {
LAB_060df298:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_060df294;
        lVar1 = param_5 + uVar7 * 4;
        FUN_060f7ab8((long)&stack0x00000010 + 4,*(long *)(param_4 + 0x40),
                     *(undefined4 *)(lVar1 + 0x20),0);
        uVar4 = uStack000000000000001c;
        uVar3 = uStack0000000000000018;
        uVar2 = in_stack_00000010._4_4_;
                    /* try { // try from 060df1ec to 061df223 has its CatchHandler @ 060df3ac */
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_5 + 0x18) <= (uint)uVar7) goto LAB_060df298;
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_060df294;
        FUN_060f7ab8((long)&stack0x00000010 + 4,*(long *)(param_4 + 0x40),
                     *(undefined4 *)(lVar1 + 0x24),0);
        fVar8 = (float)FUN_060dfc08(param_1,param_2,param_3,uVar2,uVar3,uVar4);
        uVar6 = *(ulong *)(param_5 + 0x18);
        if (fVar8 <= fVar5) {
          fVar5 = fVar8;
        }
      } while ((long)uVar7 < (long)((int)uVar6 + -1));
    }
                    /* try { // try from 060df270 to 061df297 has its CatchHandler @ 060df3f0 */
    return fVar5;
  }
LAB_060df294:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


