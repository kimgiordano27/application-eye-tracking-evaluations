/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 06da3ec8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x06da3ec8:
  if (param_1 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(uint *)(param_1 + 0x18) <= unaff_x24) goto LAB_06da4f14;
  lVar11 = *(long *)(param_1 + unaff_x24 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_06da4f18;
  uVar1 = *(uint *)(lVar11 + 0x18);
  if ((uVar1 != 0) && (*(undefined4 *)(lVar11 + 0x20) = 0, uVar1 != 1)) {
    fVar12 = 0.0;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    if (2 < uVar1) {
      do {
        *(float *)(lVar11 + 0x28) = fVar12;
        lVar11 = *(long *)(unaff_x20 + 0x138);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3f78;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x140);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da400c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(float *)(lVar11 + unaff_x24 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
        lVar11 = *(long *)(unaff_x20 + 0x148);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da40ac;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        unaff_x24 = unaff_x24 + 1;
        if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x24) {
          do {
            unaff_x22 = unaff_x22 + 1;
            if (unaff_x22 == 2) {
              return;
            }
          } while (*(int *)(unaff_x20 + 200) < 1);
          unaff_x24 = 0;
        }
        lVar11 = *(long *)(unaff_x20 + 0xe0);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da32ac;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0xe8);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3340;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0xf0);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x23;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x23;
        }
        lVar5 = *unaff_x19;
        lVar6 = **(long **)(lVar6 + 0xb8);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da33f0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
        uVar1 = (*(code *)*puVar4)();
        if (lVar6 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) =
             *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
        lVar11 = *(long *)(unaff_x20 + 0xf8);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da349c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x100);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3530;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(bool *)(lVar11 + unaff_x24 + 0x20) = iVar3 == 1;
        lVar11 = *(long *)(unaff_x20 + 0x100);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        if (*(char *)(lVar11 + unaff_x24 + 0x20) == '\0') goto LAB_06da35f4;
        lVar11 = *(long *)(unaff_x20 + 0x110);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3678;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x108);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da370c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(bool *)(lVar11 + unaff_x24 + 0x20) = iVar3 == 1;
        lVar11 = *(long *)(unaff_x20 + 0x118);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da37c0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar11 + 0x18) == 0) break;
        *(undefined4 *)(lVar11 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x118);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3864;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
        uVar2 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) < 2) break;
        *(undefined4 *)(lVar11 + 0x24) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x118);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) < 3) break;
        *(undefined4 *)(lVar11 + 0x28) = 0;
        lVar11 = *(long *)(unaff_x20 + 0x110);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        if (*(int *)(lVar11 + unaff_x24 * 4 + 0x20) == 2) {
          lVar11 = *(long *)(unaff_x20 + 0x108);
          if (lVar11 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
          lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
          if (*(char *)(lVar11 + unaff_x24 + 0x20) != '\0') goto LAB_06da3944;
          lVar11 = *(long *)(unaff_x20 + 0x128);
          if (lVar11 == 0) goto LAB_06da4f18;
          uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
          if (uVar7 <= unaff_x22) break;
          lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_06da4f18;
          uVar8 = (ulong)*(uint *)(lVar11 + 0x18);
          if (uVar8 <= unaff_x24) break;
          uVar2 = 0xc;
          uVar10 = 8;
        }
        else {
LAB_06da3944:
          lVar11 = *(long *)(unaff_x20 + 0x128);
          if (lVar11 == 0) goto LAB_06da4f18;
          uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
          if (uVar7 <= unaff_x22) break;
          lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_06da4f18;
          uVar8 = (ulong)*(uint *)(lVar11 + 0x18);
          if (uVar8 <= unaff_x24) break;
          uVar2 = 0xd;
          uVar10 = 7;
        }
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar10;
        lVar11 = *(long *)(unaff_x20 + 0x130);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (((*(uint *)(lVar11 + 0x18) <= unaff_x22) || (uVar7 <= unaff_x22)) ||
           (uVar8 <= unaff_x24)) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x120);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3a48;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar11 + 0x18) == 0) break;
        *(float *)(lVar11 + 0x20) = (float)iVar3 * unaff_s10;
        lVar11 = *(long *)(unaff_x20 + 0x120);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3af4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) < 2) break;
        *(float *)(lVar11 + 0x24) = (float)iVar3 * unaff_s10;
        lVar11 = *(long *)(unaff_x20 + 0x120);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x22) break;
        lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
        lVar6 = *unaff_x19;
        lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3ba4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
        iVar3 = (*(code *)*puVar4)();
        if (lVar11 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar11 + 0x18) < 3) break;
        fVar12 = (float)iVar3 * unaff_s10;
      } while( true );
    }
  }
  goto LAB_06da4f14;
LAB_06da35f4:
  lVar11 = *(long *)(unaff_x20 + 0x118);
  if (lVar11 == 0) goto LAB_06da4f18;
  if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
    if (lVar11 == 0) goto LAB_06da4f18;
    if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
      lVar6 = *unaff_x19;
      lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3be0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar11 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined4 *)(lVar11 + 0x20) = uVar2;
        lVar11 = *(long *)(unaff_x20 + 0x118);
        if (lVar11 == 0) goto LAB_06da4f18;
        if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_06da4f18;
          if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
            lVar6 = *unaff_x19;
            lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3c84;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
            uVar2 = (*(code *)*puVar4)();
            if (lVar11 == 0) goto LAB_06da4f18;
            if (1 < *(uint *)(lVar11 + 0x18)) {
              *(undefined4 *)(lVar11 + 0x24) = uVar2;
              lVar11 = *(long *)(unaff_x20 + 0x118);
              if (lVar11 == 0) goto LAB_06da4f18;
              if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_06da4f18;
                if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
                  lVar6 = *unaff_x19;
                  lVar11 = *(long *)(lVar11 + unaff_x24 * 8 + 0x20);
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar7 != 0) {
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x21) {
                        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                        goto LAB_06da3d2c;
                      }
                      uVar7 = uVar7 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
                  uVar2 = (*(code *)*puVar4)();
                  if (lVar11 == 0) goto LAB_06da4f18;
                  if (2 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined4 *)(lVar11 + 0x28) = uVar2;
                    lVar11 = *(long *)(unaff_x20 + 0x128);
                    if (lVar11 == 0) goto LAB_06da4f18;
                    if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
                      lVar6 = *unaff_x19;
                      lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar7 != 0) {
                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *unaff_x21) {
                            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                            goto LAB_06da3dbc;
                          }
                          uVar7 = uVar7 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
                      uVar2 = (*(code *)*puVar4)();
                      if (lVar11 == 0) goto LAB_06da4f18;
                      if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                        lVar11 = *(long *)(unaff_x20 + 0x130);
                        if (lVar11 == 0) goto LAB_06da4f18;
                        if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
                          lVar6 = *unaff_x19;
                          lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
                          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar7 != 0) {
                            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3e50;
                              }
                              uVar7 = uVar7 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar11 == 0) goto LAB_06da4f18;
                          if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                            lVar11 = *(long *)(unaff_x20 + 0x110);
                            if (lVar11 == 0) goto LAB_06da4f18;
                            if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
                              lVar11 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
                              if (lVar11 == 0) goto LAB_06da4f18;
                              if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = 0;
                                lVar11 = *(long *)(unaff_x20 + 0x120);
                                if (lVar11 == 0) goto LAB_06da4f18;
                                if (unaff_x22 < *(uint *)(lVar11 + 0x18)) {
                                  param_1 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
                                  goto code_r0x06da3ec8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


