/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$Initialize
ENTRY_POINT: 05b81660
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__Initialize(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar5;
  ulong unaff_d15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  
  do {
    lVar1 = FUN_06be6b04();
    if (lVar1 == 0) {
LAB_05b81768:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    fVar2 = (float)FUN_06bf6070(unaff_d8,unaff_d15,unaff_d9,lVar1,0);
    if (((((float)unaff_d15 < unaff_s12) && (fStack0000000000000010 <= (float)unaff_d15)) &&
        (fStack000000000000000c <= fVar2)) && (fVar2 < fStack0000000000000008)) {
LAB_05b81724:
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05b8c78c(unaff_d13,unaff_d14,0,*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 05b81748 to 05c8174f has its CatchHandler @ 05b81a10 */
                    /* try { // try from 05b81764 to 05c8176b has its CatchHandler @ 05b81970 */
        return;
      }
      goto LAB_05b81768;
    }
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x21;
    }
                    /* try { // try from 05b816bc to 05c816c3 has its CatchHandler @ 05b81a1c */
    lVar1 = **(long **)(lVar1 + 0xb8);
    if (lVar1 == 0) goto LAB_05b81768;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
                    /* try { // try from 05b816d8 to 05c816df has its CatchHandler @ 05b81a14 */
    fVar5 = *(float *)(lVar1 + unaff_x22 + 0x28);
    fVar4 = *(float *)(lVar1 + unaff_x22 + 0x2c);
    fVar2 = fStack00000000000001a8;
    fVar3 = (float)FUN_05b81800(uStack000000000000001c,fStack00000000000001a8,uStack00000000000001ac
                                ,fVar5,fVar4);
    fVar3 = fStack0000000000000018 + fVar5 * (unaff_s10 + fVar3);
    unaff_d13 = (ulong)(uint)fVar3;
                    /* try { // try from 05b81714 to 05c8173f has its CatchHandler @ 05b81a20 */
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 8;
    fVar2 = fStack0000000000000014 + fVar4 * (unaff_s11 + fVar2);
    unaff_d14 = (ulong)(uint)fVar2;
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x21;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_05b81768;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x23) goto LAB_05b81724;
    unaff_d15 = (ulong)(uint)(fVar2 + unaff_s11 * fVar4);
    unaff_d9 = 0;
    unaff_d8 = FUN_06bdb610(fVar3 + unaff_s10 * fVar5,&stack0x00000120,0);
  } while( true );
}


