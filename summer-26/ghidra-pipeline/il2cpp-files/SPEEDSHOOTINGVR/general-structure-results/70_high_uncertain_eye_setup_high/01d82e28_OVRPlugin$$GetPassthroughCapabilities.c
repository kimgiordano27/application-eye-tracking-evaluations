/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 01d82e28
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


long * OVRPlugin__GetPassthroughCapabilities(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  long unaff_x21;
  long *plVar6;
  long *unaff_x23;
  uint uVar7;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14(param_1);
  }
  if (unaff_x21 != 0) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
                    /* try { // try from 01d82e58 to 01e82e6f has its CatchHandler @ 01d82c64 */
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar6 = *(long **)(unaff_x21 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_01d82f88;
                    /* try { // try from 01d82e70 to 01e82e7f has its CatchHandler @ 01d82e88 */
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
                    /* catch() { ... } // from try @ 01d82df8 with catch @ 01d82e80 */
                    /* catch() { ... } // from try @ 01d82dd8 with catch @ 01d82e88
                       catch() { ... } // from try @ 01d82e70 with catch @ 01d82e88 */
                    /* try { // try from 01d82e90 to 01e82e93 has its CatchHandler @ 01d82f18 */
                    /* try { // try from 01d82e94 to 01e82eb7 has its CatchHandler @ 01d82c64 */
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar6);
        }
                    /* catch() { ... } // from try @ 01d82e00 with catch @ 01d82e9c */
        uVar3 = FUN_01d615a0(plVar6,0);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 01d82eb8 to 01e82ebb has its CatchHandler @ 01d82ed4 */
          uVar3 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
          if ((uVar3 & 1) != 0) {
            uVar3 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
                    /* catch() { ... } // from try @ 01d82eb8 with catch @ 01d82ed4 */
            if ((uVar3 & 0xc) == 0) goto LAB_01d82ee0;
          }
          plVar5 = plVar6;
        }
LAB_01d82ee0:
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
    }
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar4 = *unaff_x23;
    }
    if (plVar5 == *(long **)(*(long *)(lVar4 + 0xb8) + 0x10)) {
      uVar2 = (**(code **)(*unaff_x19 + 0x468))();
      if ((uVar2 >> 3 & 1) != 0) {
        lVar4 = *unaff_x23;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar4 = *unaff_x23;
        }
        plVar5 = (long *)**(undefined8 **)(lVar4 + 0xb8);
      }
    }
    return plVar5;
  }
LAB_01d82f88:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


