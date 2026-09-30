/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton2
ENTRY_POINT: 076ceca4
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


void OVRPlugin__GetSkeleton2
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  long unaff_x23;
  long lVar9;
  long lVar10;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
        goto LAB_076cecec;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_076cecec:
  uVar5 = (*(code *)*puVar4)();
  lVar10 = unaff_x23;
  if ((uVar5 & 1) == 0) {
    lVar10 = 0;
  }
  if ((uVar5 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if ((lVar9 == 0) || (plVar8 = *(long **)(unaff_x19 + 0x38), plVar8 == (long *)0x0))
    goto LAB_076cef18;
    lVar6 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fac2c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076ced78;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fac2c0,0);
LAB_076ced78:
    bVar2 = (*(code *)*puVar4)(plVar8,lVar9 + 0x18,puVar4[1]);
    unaff_x23 = lVar10;
  }
  if (unaff_x23 != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x58);
    *(byte *)(unaff_x23 + 0x10) = bVar2 & 1;
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x10) == '\0') {
                    /* catch() { ... } // from try @ 076ce88c with catch @ 076cef08 */
                    /* catch() { ... } // from try @ 076ce9d8 with catch @ 076cef0c */
                    /* catch() { ... } // from try @ 076ce7c0 with catch @ 076cef10 */
                    /* catch() { ... } // from try @ 076ce974 with catch @ 076cef14 */
        return;
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076cedf8;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x21,0);
LAB_076cedf8:
        uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        plVar8 = *(long **)(unaff_x19 + 0x48);
        *(undefined4 *)(lVar10 + 0x14) = uVar3;
        puVar1 = PTR_DAT_08fabd18;
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          lVar9 = *(long *)(unaff_x19 + 0x58);
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fabd18) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076cee68;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fabd18,0);
LAB_076cee68:
                    /* try { // try from 076cee6c to 077cee6f has its CatchHandler @ 076cef04 */
                    /* try { // try from 076cee70 to 077cee73 has its CatchHandler @ 076cef00 */
          lVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
                    /* try { // try from 076cee74 to 077cee77 has its CatchHandler @ 076ceefc */
                    /* try { // try from 076cee78 to 077cee7b has its CatchHandler @ 076ceef4 */
                    /* try { // try from 076cee7c to 077cee7f has its CatchHandler @ 076ceef0 */
                    /* try { // try from 076cee80 to 077cee83 has its CatchHandler @ 076ceeec */
          if ((lVar10 != 0) && (uVar3 = FUN_08598d98(lVar10,0), lVar9 != 0)) {
                    /* try { // try from 076cee84 to 077cee87 has its CatchHandler @ 076ceee0 */
            *(undefined4 *)(lVar9 + 0x50) = uVar3;
            *(undefined4 *)(lVar9 + 0x54) = param_3;
                    /* try { // try from 076cee88 to 077cee8b has its CatchHandler @ 076ceed4 */
            *(undefined4 *)(lVar9 + 0x58) = param_4;
                    /* try { // try from 076cee8c to 077cee8f has its CatchHandler @ 076ceebc */
            plVar8 = *(long **)(unaff_x19 + 0x48);
                    /* try { // try from 076cee90 to 077cee93 has its CatchHandler @ 076ce304 */
            if (plVar8 != (long *)0x0) {
                    /* try { // try from 076cee94 to 077cee97 has its CatchHandler @ 076ceeb0 */
              lVar10 = *plVar8;
                    /* try { // try from 076cee98 to 077cef43 has its CatchHandler @ 076ce304 */
              lVar9 = *(long *)(unaff_x19 + 0x58);
                    /* catch() { ... } // from try @ 076cec0c with catch @ 076ceea0 */
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* catch() { ... } // from try @ 076cebb8 with catch @ 076ceea4 */
              if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 076ce878 with catch @ 076ceea8 */
                    /* catch() { ... } // from try @ 076cebc8 with catch @ 076ceeac */
                piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                    /* catch() { ... } // from try @ 076cee94 with catch @ 076ceeb0 */
                    /* catch() { ... } // from try @ 076cec28 with catch @ 076ceeb4 */
                    /* catch() { ... } // from try @ 076ceb38 with catch @ 076ceeb8 */
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 076ceaa4 with catch @ 076ceed8 */
                    /* catch() { ... } // from try @ 076cea28 with catch @ 076ceedc */
                    /* catch() { ... } // from try @ 076cee84 with catch @ 076ceee0 */
                    puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076ceee4;
                  }
                    /* catch() { ... } // from try @ 076cee8c with catch @ 076ceebc */
                  uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 076ce81c with catch @ 076ceec0 */
                  piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 076ceb14 with catch @ 076ceec4 */
                } while (uVar5 != 0);
              }
                    /* catch() { ... } // from try @ 076cea24 with catch @ 076ceec8 */
                    /* catch() { ... } // from try @ 076ceac8 with catch @ 076ceecc */
                    /* catch() { ... } // from try @ 076ceb48 with catch @ 076ceed0 */
              puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 076cee88 with catch @ 076ceed4 */
LAB_076ceee4:
                    /* catch() { ... } // from try @ 076cea44 with catch @ 076ceee4 */
                    /* catch() { ... } // from try @ 076cead0 with catch @ 076ceee8 */
                    /* catch() { ... } // from try @ 076cee80 with catch @ 076ceeec */
              lVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
                    /* catch() { ... } // from try @ 076cee7c with catch @ 076ceef0 */
                    /* catch() { ... } // from try @ 076cee78 with catch @ 076ceef4 */
                    /* catch() { ... } // from try @ 076cea5c with catch @ 076ceef8 */
                    /* catch() { ... } // from try @ 076cee74 with catch @ 076ceefc */
              if ((lVar10 != 0) && (uVar3 = FUN_08598e98(lVar10,0), lVar9 != 0)) {
                    /* catch() { ... } // from try @ 076cee70 with catch @ 076cef00 */
                *(undefined4 *)(lVar9 + 0x5c) = uVar3;
                *(undefined4 *)(lVar9 + 0x60) = param_3;
                    /* catch() { ... } // from try @ 076cee6c with catch @ 076cef04 */
                *(undefined4 *)(lVar9 + 100) = param_4;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_076cef18:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


