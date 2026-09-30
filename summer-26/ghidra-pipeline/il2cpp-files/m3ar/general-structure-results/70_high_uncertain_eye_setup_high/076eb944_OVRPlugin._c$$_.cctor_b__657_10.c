/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_10
ENTRY_POINT: 076eb944
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__657_10
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = FUN_085849e0();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x50);
                    /* try { // try from 076eb958 to 077eb95b has its CatchHandler @ 076eba14 */
    uVar7 = FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 076eb96c to 077eb973 has its CatchHandler @ 076eba10 */
                    /* try { // try from 076eb974 to 077eb983 has its CatchHandler @ 076eba0c */
    uVar8 = FUN_08594c28(0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 076eb984 to 077eb9a7 has its CatchHandler @ 076eba08 */
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_076eb9d4;
          }
          uVar4 = uVar4 - 1;
                    /* try { // try from 076eb9ac to 077eb9bb has its CatchHandler @ 076eba04 */
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x21,2);
LAB_076eb9d4:
      (*(code *)*puVar2)(uVar7,param_2,param_3,param_4,uVar8,plVar6,puVar2[1]);
      if (lVar1 != 0) {
        FUN_08598b14(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


