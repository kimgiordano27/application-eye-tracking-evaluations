/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 06aa7f34
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingLost(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  long unaff_x22;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000030;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_0338f71c();
      goto LAB_06aa7f5c;
    }
    plVar9 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar9 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
LAB_06aa7f5c:
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
        if (*(long *)(piVar7 + -2) == *(long *)(unaff_x22 + 0x310)) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06aa8008;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar9,*(long *)(unaff_x22 + 0x310),0);
LAB_06aa8008:
    bVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar10 = (uint *)(unaff_x19 + 0x74);
    *(byte *)(unaff_x19 + 0x71) = bVar3 & 1;
    if ((uVar11 & 0.5 < (fStack0000000000000010 * in_stack_00000030 +
                        fStack0000000000000018 * fStack000000000000001c +
                        fStack0000000000000014 * in_stack_00000008._4_4_) * 0.5 + 0.5 &
        *puVar10 >> 0x1f) == 0) {
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
            if (*(long *)(piVar7 + -2) == *(long *)(unaff_x22 + 0x310)) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06aa80cc;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar9,*(long *)(unaff_x22 + 0x310),0);
LAB_06aa80cc:
        uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if ((uVar5 & 1) != 0) {
          FUN_06aa7108();
          *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
          *(undefined1 *)(unaff_x19 + 0xb0) = 0;
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
          if (uVar1 <= uVar11) goto LAB_06aa81c0;
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
              if (uVar1 <= uVar2) goto LAB_06aa81c0;
              uVar5 = (ulong)(int)uVar2;
            }
            else {
              if ((int)uVar11 < 2) {
                uVar11 = 1;
              }
              uVar11 = uVar11 - 1;
              *puVar10 = uVar11;
              if (uVar1 <= uVar11) {
LAB_06aa81c0:
                    /* WARNING: Subroutine does not return */
                FUN_033d1d44();
              }
              uVar5 = (ulong)uVar11;
            }
            if (*(long *)(lVar6 + uVar5 * 8 + 0x20) != 0) goto LAB_06aa805c;
          }
        }
      }
    }
    else {
      lVar6 = FUN_06aa81c4(*(undefined4 *)(unaff_x19 + 0x7c));
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x18) == '\0') {
          *puVar10 = 0xffffffff;
          return;
        }
LAB_06aa805c:
        FUN_06aa7108();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


