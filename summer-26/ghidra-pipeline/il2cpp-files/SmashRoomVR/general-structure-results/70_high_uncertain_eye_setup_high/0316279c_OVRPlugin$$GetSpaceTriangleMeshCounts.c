/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 0316279c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceTriangleMeshCounts(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s14;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  plVar10 = *(long **)(unaff_x19 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x80) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0x84) = unaff_s14;
  *(undefined4 *)(unaff_x19 + 0x88) = unaff_s11;
  *(undefined8 *)(unaff_x19 + 0xa0) = uStack0000000000000054;
  *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,in_stack_00000048._4_4_);
  *(undefined8 *)(unaff_x19 + 0x94) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
  puVar3 = StringLiteral_3771;
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_3771) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03162810;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)StringLiteral_3771,0);
LAB_03162810:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(byte *)(unaff_x19 + 0x71) ^ 1;
    }
    plVar10 = *(long **)(unaff_x19 + 0x48);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
                    /* try { // try from 031628ac to 032628b3 has its CatchHandler @ 03162b90 */
                    /* try { // try from 031628b4 to 032628e3 has its CatchHandler @ 0316273c */
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_031628b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar10,lVar6,0);
LAB_031628b8:
      bVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      puVar11 = (uint *)(unaff_x19 + 0x74);
                    /* try { // try from 031628e4 to 032628ef has its CatchHandler @ 03162b10 */
      *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
      if ((uVar12 & 0.5 < (fStack0000000000000014 * fStack0000000000000010 +
                          fStack000000000000001c * fStack0000000000000024 +
                          fStack0000000000000018 * fStack0000000000000020) * 0.5 + 0.5 &
          *puVar11 >> 0x1f) == 0) {
        if ((int)*puVar11 < 0) {
          return;
        }
        plVar10 = *(long **)(unaff_x19 + 0x58);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          lVar6 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto FUN_03162978;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ae9f78(plVar10,lVar6,0);
FUN_03162978:
          uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
          if ((uVar8 & 1) != 0) {
            *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
            goto LAB_03162998;
          }
          lVar6 = *(long *)(unaff_x19 + 0x38);
          if (lVar6 != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x74);
            uVar12 = *(uint *)(lVar6 + 0x18);
            if (uVar12 <= uVar1) goto LAB_03162a58;
            lVar7 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar7 != 0) {
              if (*(float *)(lVar7 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar7 + 0x14)) {
                  return;
                }
                uVar2 = uVar12 - 1;
                if ((int)(uVar1 + 1) <= (int)uVar2) {
                  uVar2 = uVar1 + 1;
                }
                *puVar11 = uVar2;
                if (uVar12 <= uVar2) goto LAB_03162a58;
                uVar8 = (ulong)(int)uVar2;
              }
              else {
                uVar1 = uVar1 - 1 & ((int)(uVar1 - 1) >> 0x1f ^ 0xffffffffU);
                *puVar11 = uVar1;
                if (uVar12 <= uVar1) {
LAB_03162a58:
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                uVar8 = (ulong)uVar1;
              }
              if (*(long *)(lVar6 + uVar8 * 8 + 0x20) != 0) goto LAB_03162998;
            }
          }
        }
      }
      else {
                    /* try { // try from 031628f0 to 03262b27 has its CatchHandler @ 0316273c */
        lVar6 = FUN_03162a5c(*(undefined4 *)(unaff_x19 + 0x7c));
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0x18) == '\0') {
            *puVar11 = 0xffffffff;
            return;
          }
LAB_03162998:
          FUN_03161b4c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


