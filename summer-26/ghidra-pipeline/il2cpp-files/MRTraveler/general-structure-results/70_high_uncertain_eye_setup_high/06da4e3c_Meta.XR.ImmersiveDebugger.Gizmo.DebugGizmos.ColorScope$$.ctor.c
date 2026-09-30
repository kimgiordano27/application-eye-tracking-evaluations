/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$.ctor
ENTRY_POINT: 06da4e3c
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


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope___ctor(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while( true ) {
    *(float *)(unaff_x24 + unaff_x22 * 4 + 0x20) = param_1;
    lVar7 = *(long *)(unaff_x20 + 0x148);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4ea8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
    uVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
    unaff_x22 = unaff_x22 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x22) {
      return;
    }
    lVar7 = *(long *)(unaff_x20 + 0xe0);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4210;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
    uVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
    lVar7 = *(long *)(unaff_x20 + 0xe8);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da429c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
    uVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
    lVar7 = *(long *)(unaff_x20 + 0xf0);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x23;
    lVar7 = *(long *)(lVar7 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar6 = *unaff_x23;
    }
    lVar5 = *unaff_x19;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4344;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
    uVar1 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_06da4f14;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) =
         *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    lVar7 = *(long *)(unaff_x20 + 0xf8);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da43e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
    uVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4474;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
    iVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    *(bool *)(lVar7 + unaff_x22 + 0x20) = iVar2 == 1;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
    lVar7 = *(long *)(lVar7 + 0x20);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    if (*(char *)(lVar7 + unaff_x22 + 0x20) == '\0') {
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto FUN_06da4ab0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4b4c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x24) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4bec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x28) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x128);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4c74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4d00;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((uVar1 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0, uVar1 == 1)) goto LAB_06da4f14;
      fVar11 = 0.0;
      *(undefined4 *)(lVar7 + 0x24) = 0;
      if (uVar1 < 3) goto LAB_06da4f14;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da45a4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x108);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4630;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
      iVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(bool *)(lVar7 + unaff_x22 + 0x20) = iVar2 == 1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da46dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4778;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
      uVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x24) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x28) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      if (*(int *)(lVar7 + unaff_x22 * 4 + 0x20) == 2) {
        lVar7 = *(long *)(unaff_x20 + 0x108);
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
        if (*(char *)(lVar7 + unaff_x22 + 0x20) != '\0') goto LAB_06da4840;
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) break;
        iVar2 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar2 == 0) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) break;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x22) goto LAB_06da4f14;
        uVar3 = 0xc;
        uVar10 = 8;
      }
      else {
LAB_06da4840:
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) break;
        iVar2 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar2 == 0) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) break;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x22) goto LAB_06da4f14;
        uVar3 = 0xd;
        uVar10 = 7;
      }
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar10;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) break;
      if (((*(int *)(lVar7 + 0x18) == 0) || (iVar2 == 0)) || (uVar8 <= unaff_x22))
      goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) = uVar3;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4928;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
      iVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(float *)(lVar7 + 0x20) = (float)iVar2 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da49cc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
      iVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(float *)(lVar7 + 0x24) = (float)iVar2 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4a74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
      iVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      fVar11 = (float)iVar2 * unaff_s10;
    }
    *(float *)(lVar7 + 0x28) = fVar11;
    lVar7 = *(long *)(unaff_x20 + 0x140);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar6 = *unaff_x19;
    unaff_x24 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4e10;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
    iVar2 = (*(code *)*puVar4)();
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    param_1 = ((float)iVar2 + unaff_s8) * unaff_s9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


