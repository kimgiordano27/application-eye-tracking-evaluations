/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$set_GlobalMesh
ENTRY_POINT: 0148692c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__set_GlobalMesh(code *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
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
  long *unaff_x22;
  ulong uVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  uVar1 = (*param_1)();
  uVar11 = 0;
  *(undefined4 *)(unaff_x20 + 200) = 2;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar1;
  do {
    lVar7 = *(long *)(unaff_x20 + 0xe0);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_014869a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014869a4:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0xe8);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_01486a30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486a30:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0xf0);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x22;
    lVar7 = *(long *)(lVar7 + 0x20);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *unaff_x22;
    }
    lVar6 = *unaff_x19;
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_01486ad8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486ad8:
    uVar2 = (*(code *)*puVar4)();
    if (lVar5 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_014876c8;
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) =
         *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
    lVar7 = *(long *)(unaff_x20 + 0xf8);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_01486b7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486b7c:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_01486c08;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486c08:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(bool *)(lVar7 + uVar11 + 0x20) = iVar3 == 1;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    if (*(char *)(lVar7 + uVar11 + 0x20) == '\0') {
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487244;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487244:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_014872e0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_014872e0:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x24) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487380;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487380:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x28) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x128);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487408;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487408:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487494;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487494:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if ((uVar2 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0, uVar2 == 1)) goto LAB_014876c8;
      fVar12 = 0.0;
      *(undefined4 *)(lVar7 + 0x24) = 0;
      if (uVar2 < 3) goto LAB_014876c8;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01486d38;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486d38:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x108);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01486dc4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486dc4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(bool *)(lVar7 + uVar11 + 0x20) = iVar3 == 1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01486e70;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486e70:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01486f0c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486f0c:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x24) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x28) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      if (*(int *)(lVar7 + uVar11 * 4 + 0x20) == 2) {
        lVar7 = *(long *)(unaff_x20 + 0x108);
        if (lVar7 == 0) goto LAB_014876cc;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
        if (*(char *)(lVar7 + uVar11 + 0x20) != '\0') goto LAB_01486fd4;
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_014876cc;
        iVar3 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar3 == 0) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= uVar11) goto LAB_014876c8;
        uVar1 = 0xc;
        uVar10 = 8;
      }
      else {
LAB_01486fd4:
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_014876cc;
        iVar3 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar3 == 0) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= uVar11) goto LAB_014876c8;
        uVar1 = 0xd;
        uVar10 = 7;
      }
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar10;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 == 0) goto LAB_014876cc;
      if (((*(int *)(lVar7 + 0x18) == 0) || (iVar3 == 0)) || (uVar8 <= uVar11)) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_014870bc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_014870bc:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487160;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487160:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
      *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
      lVar7 = *(long *)(unaff_x20 + 0x120);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487208;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487208:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
      fVar12 = (float)iVar3 * unaff_s10;
    }
    *(float *)(lVar7 + 0x28) = fVar12;
    lVar7 = *(long *)(unaff_x20 + 0x140);
    if (lVar7 == 0) {
LAB_014876cc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_014876c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_014875a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014875a4:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(float *)(lVar7 + uVar11 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar7 = *(long *)(unaff_x20 + 0x148);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_0148763c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148763c:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + uVar11 * 4 + 0x20) = uVar1;
    uVar11 = uVar11 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)uVar11) {
      return;
    }
  } while( true );
}


