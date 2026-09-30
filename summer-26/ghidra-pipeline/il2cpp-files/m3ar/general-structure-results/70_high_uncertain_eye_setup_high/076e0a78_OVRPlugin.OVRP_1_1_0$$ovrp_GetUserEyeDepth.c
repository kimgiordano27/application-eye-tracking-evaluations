/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 076e0a78
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  uint *unaff_x20;
  long *plVar9;
  long *unaff_x22;
  
  plVar9 = *(long **)(unaff_x19 + 0x58);
  if (plVar9 == (long *)0x0) goto LAB_076e0bc8;
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
                    /* try { // try from 076e0a90 to 077e0a97 has its CatchHandler @ 076e0c28 */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
                    /* try { // try from 076e0acc to 077e0ad3 has its CatchHandler @ 076e0c40 */
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076e0ad8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 076e0aac to 077e0abf has its CatchHandler @ 076e0c20 */
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*unaff_x22,0);
LAB_076e0ad8:
  uVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if ((uVar6 & 1) == 0) {
    uVar1 = *unaff_x20;
    if ((-1 < (int)uVar1) && (*(char *)(unaff_x19 + 0xb0) == '\0')) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 <= uVar1) goto LAB_076e0bcc;
        lVar8 = *(long *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
        if (lVar8 != 0) {
          if (*(float *)(lVar8 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar8 + 0x14)) {
              return;
            }
            uVar3 = uVar2 - 1;
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *unaff_x20 = uVar3;
            if (uVar2 <= uVar3) goto LAB_076e0bcc;
            uVar6 = (ulong)(int)uVar3;
          }
          else {
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            uVar1 = uVar1 - 1;
            *unaff_x20 = uVar1;
            if (uVar2 <= uVar1) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar6 = (ulong)uVar1;
          }
          if (*(long *)(lVar5 + uVar6 * 8 + 0x20) != 0) {
            FUN_076dfc50();
            return;
          }
        }
      }
LAB_076e0bc8:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
  else {
    FUN_076dfc50();
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
  }
  return;
}


