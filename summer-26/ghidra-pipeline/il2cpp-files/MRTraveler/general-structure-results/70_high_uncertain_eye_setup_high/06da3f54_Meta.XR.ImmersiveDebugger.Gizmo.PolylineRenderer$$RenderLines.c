/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 06da3f54
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *in_x10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x06da3f54:
  if (!(bool)in_ZR) goto LAB_06da3f40;
LAB_06da3f58:
  puVar4 = (undefined8 *)FUN_03cf1348();
  do {
    uVar2 = (*(code *)*puVar4)();
    if (unaff_x25 == 0) goto LAB_06da4f18;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(unaff_x25 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x140);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da400c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(float *)(lVar7 + unaff_x24 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar7 = *(long *)(unaff_x20 + 0x148);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da40ac;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
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
    lVar7 = *(long *)(unaff_x20 + 0xe0);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da32ac;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0xe8);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3340;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0xf0);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x23;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar6 = *unaff_x23;
    }
    lVar5 = *unaff_x19;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da33f0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
    uVar1 = (*(code *)*puVar4)();
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_06da4f14;
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) =
         *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    lVar7 = *(long *)(unaff_x20 + 0xf8);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da349c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3530;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(bool *)(lVar7 + unaff_x24 + 0x20) = iVar3 == 1;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    if (*(char *)(lVar7 + unaff_x24 + 0x20) == '\0') {
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3be0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3c84;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3d2c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x28) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x128);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3dbc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3e50;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((uVar1 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0, uVar1 == 1)) goto LAB_06da4f14;
      fVar12 = 0.0;
      *(undefined4 *)(lVar7 + 0x24) = 0;
      if (uVar1 < 3) goto LAB_06da4f14;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3678;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x108);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da370c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(bool *)(lVar7 + unaff_x24 + 0x20) = iVar3 == 1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da37c0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3864;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + 0x28) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      if (*(int *)(lVar7 + unaff_x24 * 4 + 0x20) == 2) {
        lVar7 = *(long *)(unaff_x20 + 0x108);
        if (lVar7 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
        if (*(char *)(lVar7 + unaff_x24 + 0x20) != '\0') goto LAB_06da3944;
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_06da4f18;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x22) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_06da4f18;
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar9 <= unaff_x24) goto LAB_06da4f14;
        uVar2 = 0xc;
        uVar11 = 8;
      }
      else {
LAB_06da3944:
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_06da4f18;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x22) goto LAB_06da4f14;
        lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_06da4f18;
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar9 <= unaff_x24) goto LAB_06da4f14;
        uVar2 = 0xd;
        uVar11 = 7;
      }
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar11;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (((*(uint *)(lVar7 + 0x18) <= unaff_x22) || (uVar8 <= unaff_x22)) || (uVar9 <= unaff_x24))
      goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3a48;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06da4f14;
      *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3af4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06da4f14;
      *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3ba4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_06da4f14;
      fVar12 = (float)iVar3 * unaff_s10;
    }
    *(float *)(lVar7 + 0x28) = fVar12;
    lVar7 = *(long *)(unaff_x20 + 0x138);
    if (lVar7 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    param_1 = *unaff_x19;
    unaff_x25 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
    param_3 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_06da3f58;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06da3f40:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x06da3f54;
    }
    puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xe) * 0x10 + 0x138);
  } while( true );
}


