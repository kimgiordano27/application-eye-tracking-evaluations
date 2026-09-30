/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 033c11c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__OverrideExternalCameraFov(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  long lVar11;
  uint unaff_w23;
  long lVar12;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  
  while( true ) {
    puVar3 = StringLiteral_8523;
                    /* try { // try from 033c11c4 to 034c11d3 has its CatchHandler @ 033c1228 */
    unaff_w24 = unaff_w24 + 1;
    uVar9 = (uint)unaff_x19[3];
    if ((int)uVar9 <= (int)unaff_w24) break;
    if (uVar9 <= unaff_w24) goto LAB_033c1378;
    plVar5 = (long *)unaff_x19[(long)(int)unaff_w24 + 4];
    if (plVar5 == (long *)0x0) goto LAB_033c13e0;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x25);
    }
    uVar6 = FUN_033aa3b4(plVar5);
    if ((uVar6 & 1) != 0) goto LAB_033c1178;
    lVar12 = *unaff_x26;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar12 = *unaff_x26;
    }
    if (**(long **)(lVar12 + 0xb8) == unaff_x20) {
      if (plVar5 == (long *)0x0) goto LAB_033c13e0;
      uVar6 = FUN_033ac528(plVar5,0);
      if ((uVar6 & 1) != 0) goto LAB_033c1178;
    }
    uVar7 = *unaff_x27;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar7 = FUN_033a87c8(uVar7,0);
    uVar6 = FUN_033aa3b4(plVar5,uVar7,0);
    if ((uVar6 & 1) != 0) goto LAB_033c1178;
                    /* try { // try from 033c11d8 to 034c11db has its CatchHandler @ 033c11f4 */
    if (plVar5 == (long *)0x0) {
LAB_033c13e0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033c11dc to 034c11e3 has its CatchHandler @ 033c0b38 */
                    /* try { // try from 033c11e4 to 034c11e7 has its CatchHandler @ 033c11f0 */
    uVar6 = FUN_033ac7d8(plVar5,0);
                    /* try { // try from 033c11e8 to 034c123b has its CatchHandler @ 033c0b38 */
    if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c123c with catch @ 033c1250 */
                    /* try { // try from 033c1258 to 034c12cb has its CatchHandler @ 033c1374 */
      uVar6 = (**(code **)(*plVar5 + 0x288))(plVar5);
    }
    else {
                    /* catch() { ... } // from try @ 033c11e4 with catch @ 033c11f0 */
                    /* catch() { ... } // from try @ 033c11d8 with catch @ 033c11f4 */
                    /* catch() { ... } // from try @ 033c0e0c with catch @ 033c11f8 */
                    /* catch() { ... } // from try @ 033c10c8 with catch @ 033c11fc */
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 033c11b8 with catch @ 033c1200 */
        thunk_FUN_01dc4f30();
      }
                    /* catch() { ... } // from try @ 033c103c with catch @ 033c1204 */
                    /* catch() { ... } // from try @ 033c0df8 with catch @ 033c1208 */
                    /* catch() { ... } // from try @ 033c11ac with catch @ 033c120c */
                    /* catch() { ... } // from try @ 033c11a8 with catch @ 033c1210 */
                    /* catch() { ... } // from try @ 033c11a4 with catch @ 033c1214 */
                    /* catch() { ... } // from try @ 033c1004 with catch @ 033c1218 */
      bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                    /* catch() { ... } // from try @ 033c0dc0 with catch @ 033c121c */
                    /* catch() { ... } // from try @ 033c0fa8 with catch @ 033c1220 */
                    /* catch() { ... } // from try @ 033c0ce8 with catch @ 033c1224 */
                    /* catch() { ... } // from try @ 033c11c4 with catch @ 033c1228 */
                    /* catch() { ... } // from try @ 033c1050 with catch @ 033c122c */
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1157
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar5);
      }
                    /* try { // try from 033c123c to 034c123f has its CatchHandler @ 033c1250 */
      uVar6 = FUN_033c0b48();
    }
    if ((uVar6 & 1) != 0) {
LAB_033c1178:
      uVar9 = *(uint *)(unaff_x19 + 3);
      if (uVar9 <= unaff_w24) goto LAB_033c1378;
      lVar12 = unaff_x19[(long)(int)unaff_w24 + 4];
      if (lVar12 != 0) {
        lVar10 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar10 == 0) {
          uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar7,0);
        }
        uVar9 = *(uint *)(unaff_x19 + 3);
      }
      if (uVar9 <= unaff_w23) goto LAB_033c1378;
      lVar10 = (long)(int)unaff_w23;
      unaff_x19[lVar10 + 4] = lVar12;
      unaff_w23 = unaff_w23 + 1;
      thunk_FUN_01e10808(unaff_x19 + lVar10 + 4,lVar12);
    }
  }
  if (unaff_w23 == 1) {
    if (uVar9 != 0) goto LAB_033c1358;
  }
  else {
    if (unaff_w23 == 0) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8806);
      uVar8 = FUN_033d6e4c(uVar7,0);
      thunk_FUN_01dd295c(StringLiteral_8807);
      uVar7 = thunk_FUN_01de27b8();
      FUN_033b3ed4(uVar7,uVar8,0);
LAB_033c1428:
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8805);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
    if ((int)unaff_w23 < 2) {
      uVar9 = 0;
    }
    else {
      lVar12 = 0;
      uVar9 = 0;
      bVar2 = false;
      do {
        if (((uint)unaff_x19[3] <= uVar9) || ((unaff_x19[3] & 0xffffffffU) <= lVar12 + 1U))
        goto LAB_033c1378;
        lVar10 = unaff_x19[(long)(int)uVar9 + 4];
        lVar11 = unaff_x19[lVar12 + 5];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar4 = FUN_033c1450(lVar10,lVar11);
        if (iVar4 == 0) {
          bVar2 = true;
        }
        else if (iVar4 == 2) {
          bVar2 = false;
          uVar9 = (int)lVar12 + 1;
        }
        lVar12 = lVar12 + 1;
      } while ((ulong)unaff_w23 - 1 != lVar12);
      if (bVar2) {
        uVar7 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar8 = FUN_033d6e4c(uVar7,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar7,uVar8,0);
        goto LAB_033c1428;
      }
    }
    if (uVar9 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19 = unaff_x19 + (int)uVar9;
LAB_033c1358:
      return unaff_x19[4];
    }
  }
LAB_033c1378:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


