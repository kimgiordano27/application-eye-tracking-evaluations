/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 076e0938
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  long *unaff_x22;
  float unaff_s12;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000028;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* catch() { ... } // from try @ 076e0934 with catch @ 076e0944 */
                    /* try { // try from 076e0948 to 077e094f has its CatchHandler @ 076e0958 */
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076e0974;
    }
    in_x9 = in_x9 + -1;
                    /* try { // try from 076e0950 to 077e095b has its CatchHandler @ 076e058c */
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 076e0948 with catch @ 076e0958
                        */
                    /* try { // try from 076e095c to 077e09fb has its CatchHandler @ 076e095c
                       catch() { ... } // from try @ 076e095c with catch @ 076e095c
                       catch() { ... } // from try @ 076e0b54 with catch @ 076e095c
                       catch() { ... } // from try @ 076e0bf8 with catch @ 076e095c
                       catch() { ... } // from try @ 076e0c0c with catch @ 076e095c
                       catch() { ... } // from try @ 076e0c84 with catch @ 076e095c */
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_076e0974:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(byte *)(unaff_x19 + 0x71) ^ 1;
  }
  plVar9 = *(long **)(unaff_x19 + 0x48);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076e0a18;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*unaff_x22,0);
LAB_076e0a18:
    bVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar10 = (uint *)(unaff_x19 + 0x74);
    *(byte *)(unaff_x19 + 0x71) = bVar3 & 1;
    if (((fStack0000000000000014 * fStack0000000000000010 +
         fStack000000000000001c * unaff_s12 + fStack0000000000000018 * in_stack_00000028._4_4_) *
         0.5 + 0.5 <= 0.5) || ((uVar11 & *puVar10 >> 0x1f) == 0)) {
      if ((int)*puVar10 < 0) {
        return;
      }
      plVar9 = *(long **)(unaff_x19 + 0x58);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076e0ad8;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*unaff_x22,0);
LAB_076e0ad8:
        uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if ((uVar5 & 1) != 0) {
          FUN_076dfc50();
          *(undefined1 *)(unaff_x19 + 0xb0) = 0;
          *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
          return;
        }
        uVar11 = *puVar10;
        if ((int)uVar11 < 0) {
          return;
        }
        if (*(char *)(unaff_x19 + 0xb0) != '\0') {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x38);
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 <= uVar11) goto LAB_076e0bcc;
          lVar8 = *(long *)(lVar6 + (ulong)uVar11 * 8 + 0x20);
          if (lVar8 != 0) {
            if (*(float *)(lVar8 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
              if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar8 + 0x14)) {
                return;
              }
              uVar2 = uVar1 - 1;
              if ((int)(uVar11 + 1) <= (int)uVar2) {
                uVar2 = uVar11 + 1;
              }
              *puVar10 = uVar2;
              if (uVar1 <= uVar2) goto LAB_076e0bcc;
              uVar5 = (ulong)(int)uVar2;
            }
            else {
              if ((int)uVar11 < 2) {
                uVar11 = 1;
              }
              uVar11 = uVar11 - 1;
              *puVar10 = uVar11;
              if (uVar1 <= uVar11) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar5 = (ulong)uVar11;
            }
            if (*(long *)(lVar6 + uVar5 * 8 + 0x20) != 0) goto LAB_076e0a68;
          }
        }
      }
    }
    else {
      lVar6 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x18) == '\0') {
          *puVar10 = 0xffffffff;
          return;
        }
LAB_076e0a68:
        FUN_076dfc50();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


