/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$AddSegment
ENTRY_POINT: 06da41bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__AddSegment(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long lVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  do {
    lVar5 = *unaff_x19;
    lVar10 = *(long *)(in_x9 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4210;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
    uVar1 = (*(code *)*puVar4)();
    if (lVar10 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x22) break;
    *(undefined4 *)(lVar10 + unaff_x22 * 4 + 0x20) = uVar1;
    lVar5 = *(long *)(unaff_x20 + 0xe8);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x19;
    lVar5 = *(long *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da429c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
    uVar1 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
    lVar5 = *(long *)(unaff_x20 + 0xf0);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x23;
    lVar5 = *(long *)(lVar5 + 0x20);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar10 = *unaff_x23;
    }
    lVar6 = *unaff_x19;
    lVar10 = **(long **)(lVar10 + 0xb8);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4344;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
    uVar2 = (*(code *)*puVar4)();
    if (lVar10 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar10 + 0x18) <= uVar2) break;
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) =
         *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20);
    lVar5 = *(long *)(unaff_x20 + 0xf8);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x19;
    lVar5 = *(long *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da43e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
    uVar1 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
    lVar5 = *(long *)(unaff_x20 + 0x100);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x19;
    lVar5 = *(long *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4474;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
    iVar3 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(bool *)(lVar5 + unaff_x22 + 0x20) = iVar3 == 1;
    lVar5 = *(long *)(unaff_x20 + 0x100);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    if (*(char *)(lVar5 + unaff_x22 + 0x20) == '\0') {
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto FUN_06da4ab0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      *(undefined4 *)(lVar5 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4b4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 2) break;
      *(undefined4 *)(lVar5 + 0x24) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4bec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 3) break;
      *(undefined4 *)(lVar5 + 0x28) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x128);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4c74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x130);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4d00;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x110);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = 0;
      lVar5 = *(long *)(unaff_x20 + 0x120);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if ((uVar2 == 0) || (*(undefined4 *)(lVar5 + 0x20) = 0, uVar2 == 1)) break;
      fVar11 = 0.0;
      *(undefined4 *)(lVar5 + 0x24) = 0;
      if (uVar2 < 3) break;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + 0x110);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da45a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x108);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4630;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(bool *)(lVar5 + unaff_x22 + 0x20) = iVar3 == 1;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da46dc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      *(undefined4 *)(lVar5 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4778;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 2) break;
      *(undefined4 *)(lVar5 + 0x24) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 3) break;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      lVar5 = *(long *)(unaff_x20 + 0x110);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      if (*(int *)(lVar5 + unaff_x22 * 4 + 0x20) == 2) {
        lVar5 = *(long *)(unaff_x20 + 0x108);
        if (lVar5 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar5 + 0x18) == 0) break;
        lVar5 = *(long *)(lVar5 + 0x20);
        if (lVar5 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
        if (*(char *)(lVar5 + unaff_x22 + 0x20) != '\0') goto LAB_06da4840;
        lVar5 = *(long *)(unaff_x20 + 0x128);
        if (lVar5 == 0) goto LAB_06da4f18;
        iVar3 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar3 == 0) break;
        lVar5 = *(long *)(lVar5 + 0x20);
        if (lVar5 == 0) goto LAB_06da4f18;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar7 <= unaff_x22) break;
        uVar1 = 0xc;
        uVar9 = 8;
      }
      else {
LAB_06da4840:
        lVar5 = *(long *)(unaff_x20 + 0x128);
        if (lVar5 == 0) goto LAB_06da4f18;
        iVar3 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar3 == 0) break;
        lVar5 = *(long *)(lVar5 + 0x20);
        if (lVar5 == 0) goto LAB_06da4f18;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar7 <= unaff_x22) break;
        uVar1 = 0xd;
        uVar9 = 7;
      }
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar9;
      lVar5 = *(long *)(unaff_x20 + 0x130);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (((*(int *)(lVar5 + 0x18) == 0) || (iVar3 == 0)) || (uVar7 <= unaff_x22)) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
      lVar5 = *(long *)(unaff_x20 + 0x120);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4928;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      *(float *)(lVar5 + 0x20) = (float)iVar3 * unaff_s10;
      lVar5 = *(long *)(unaff_x20 + 0x120);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da49cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 2) break;
      *(float *)(lVar5 + 0x24) = (float)iVar3 * unaff_s10;
      lVar5 = *(long *)(unaff_x20 + 0x120);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar5 + 0x18) == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
      lVar10 = *unaff_x19;
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4a74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar5 + 0x18) < 3) break;
      fVar11 = (float)iVar3 * unaff_s10;
    }
    *(float *)(lVar5 + 0x28) = fVar11;
    lVar5 = *(long *)(unaff_x20 + 0x140);
    if (lVar5 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x19;
    lVar5 = *(long *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4e10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
    iVar3 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(float *)(lVar5 + unaff_x22 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar5 = *(long *)(unaff_x20 + 0x148);
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    lVar10 = *unaff_x19;
    lVar5 = *(long *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4ea8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
    uVar1 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) break;
    *(undefined4 *)(lVar5 + unaff_x22 * 4 + 0x20) = uVar1;
    unaff_x22 = unaff_x22 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x22) {
      return;
    }
    in_x9 = *(long *)(unaff_x20 + 0xe0);
    if (in_x9 == 0) goto LAB_06da4f18;
  } while (*(int *)(in_x9 + 0x18) != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


