/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 076e0a00
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  uint unaff_w21;
  long *plVar11;
  long *unaff_x22;
  double unaff_d8;
  
  puVar5 = (undefined8 *)FUN_0406ae20(param_1,param_2,0);
                    /* try { // try from 076e0a1c to 077e0a23 has its CatchHandler @ 076e0c48 */
  bVar4 = (*(code *)*puVar5)();
  puVar10 = (uint *)(unaff_x19 + 0x74);
  *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
                    /* try { // try from 076e0a38 to 077e0a3f has its CatchHandler @ 076e0c34 */
  if ((unaff_d8 <= 0.5) || ((unaff_w21 & *puVar10 >> 0x1f) == 0)) {
    if ((int)*puVar10 < 0) {
      return;
    }
    plVar11 = *(long **)(unaff_x19 + 0x58);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076e0ad8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*unaff_x22,0);
LAB_076e0ad8:
      uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar7 & 1) != 0) {
        FUN_076dfc50();
        *(undefined1 *)(unaff_x19 + 0xb0) = 0;
        *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
        return;
      }
      uVar1 = *puVar10;
      if ((int)uVar1 < 0) {
        return;
      }
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 <= uVar1) goto LAB_076e0bcc;
        lVar9 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
        if (lVar9 != 0) {
          if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
              return;
            }
            uVar3 = uVar2 - 1;
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *puVar10 = uVar3;
            if (uVar2 <= uVar3) goto LAB_076e0bcc;
            uVar7 = (ulong)(int)uVar3;
          }
          else {
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            uVar1 = uVar1 - 1;
            *puVar10 = uVar1;
            if (uVar2 <= uVar1) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar7 = (ulong)uVar1;
          }
          if (*(long *)(lVar6 + uVar7 * 8 + 0x20) != 0) goto LAB_076e0a68;
        }
      }
    }
  }
  else {
    lVar6 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
                    /* try { // try from 076e0a58 to 077e0a63 has its CatchHandler @ 076e0c3c */
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x18) == '\0') {
        *puVar10 = 0xffffffff;
        return;
      }
LAB_076e0a68:
                    /* try { // try from 076e0a68 to 077e0a77 has its CatchHandler @ 076e0c38 */
      FUN_076dfc50();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


