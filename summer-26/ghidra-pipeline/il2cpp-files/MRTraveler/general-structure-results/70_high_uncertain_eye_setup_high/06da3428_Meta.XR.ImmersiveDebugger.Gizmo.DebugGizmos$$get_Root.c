/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Root
ENTRY_POINT: 06da3428
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


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Root(undefined4 param_1)

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
  long unaff_x25;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while( true ) {
    *(undefined4 *)(unaff_x25 + unaff_x24 * 4 + 0x20) = param_1;
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da349c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0x100);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3530;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
    iVar3 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(bool *)(lVar6 + unaff_x24 + 0x20) = iVar3 == 1;
    lVar6 = *(long *)(unaff_x20 + 0x100);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    if (*(char *)(lVar6 + unaff_x24 + 0x20) == '\0') {
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3be0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3c84;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x24) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3d2c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x28) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x128);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3dbc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x130);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3e50;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = 0;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 == 1)) goto LAB_06da4f14;
      fVar11 = 0.0;
      *(undefined4 *)(lVar6 + 0x24) = 0;
      if (uVar1 < 3) goto LAB_06da4f14;
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3678;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x108);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da370c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(bool *)(lVar6 + unaff_x24 + 0x20) = iVar3 == 1;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da37c0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3864;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x24) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + 0x28) = 0;
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      if (*(int *)(lVar6 + unaff_x24 * 4 + 0x20) == 2) {
        lVar6 = *(long *)(unaff_x20 + 0x108);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
        lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
        if (*(char *)(lVar6 + unaff_x24 + 0x20) != '\0') goto LAB_06da3944;
        lVar6 = *(long *)(unaff_x20 + 0x128);
        if (lVar6 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar7 <= unaff_x22) goto LAB_06da4f14;
        lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
        if (lVar6 == 0) break;
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar8 <= unaff_x24) goto LAB_06da4f14;
        uVar2 = 0xc;
        uVar10 = 8;
      }
      else {
LAB_06da3944:
        lVar6 = *(long *)(unaff_x20 + 0x128);
        if (lVar6 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar7 <= unaff_x22) goto LAB_06da4f14;
        lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
        if (lVar6 == 0) break;
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar8 <= unaff_x24) goto LAB_06da4f14;
        uVar2 = 0xd;
        uVar10 = 7;
      }
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar10;
      lVar6 = *(long *)(unaff_x20 + 0x130);
      if (lVar6 == 0) break;
      if (((*(uint *)(lVar6 + 0x18) <= unaff_x22) || (uVar7 <= unaff_x22)) || (uVar8 <= unaff_x24))
      goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3a48;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
      *(float *)(lVar6 + 0x20) = (float)iVar3 * unaff_s10;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3af4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
      *(float *)(lVar6 + 0x24) = (float)iVar3 * unaff_s10;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3ba4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
      fVar11 = (float)iVar3 * unaff_s10;
    }
    *(float *)(lVar6 + 0x28) = fVar11;
    lVar6 = *(long *)(unaff_x20 + 0x138);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3f78;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0x140);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da400c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
    iVar3 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(float *)(lVar6 + unaff_x24 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar6 = *(long *)(unaff_x20 + 0x148);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da40ac;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
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
    lVar6 = *(long *)(unaff_x20 + 0xe0);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da32ac;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xe8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3340;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xf0);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar5 = *unaff_x23;
    unaff_x25 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *unaff_x23;
    }
    lVar6 = *unaff_x19;
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da33f0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
    uVar1 = (*(code *)*puVar4)();
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_06da4f14;
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    param_1 = *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


