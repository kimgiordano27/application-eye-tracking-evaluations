/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_9
ENTRY_POINT: 076eb8dc
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


void OVRPlugin_<>c__<_cctor>b__657_9
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,long param_7)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_7) {
                    /* try { // try from 076eb920 to 077eb937 has its CatchHandler @ 076eba1c */
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_076eb92c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* try { // try from 076eb8e8 to 077eb8eb has its CatchHandler @ 076eb908 */
  puVar1 = (undefined8 *)FUN_0406ae20();
                    /* try { // try from 076eb8ec to 077eb91f has its CatchHandler @ 076eb504 */
LAB_076eb92c:
  (*(code *)*puVar1)();
  lVar2 = FUN_085849e0();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x50);
    uVar7 = FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
    uVar8 = FUN_08594c28(0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_076eb9d4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x21,2);
LAB_076eb9d4:
      (*(code *)*puVar1)(uVar7,param_3,param_4,param_5,uVar8,plVar6,puVar1[1]);
      if (lVar2 != 0) {
        FUN_08598b14(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


