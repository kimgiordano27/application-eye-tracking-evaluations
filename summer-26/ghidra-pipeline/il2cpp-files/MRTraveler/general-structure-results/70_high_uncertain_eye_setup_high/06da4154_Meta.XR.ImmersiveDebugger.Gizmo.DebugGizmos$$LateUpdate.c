/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$LateUpdate
ENTRY_POINT: 06da4154
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__LateUpdate(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int in_w9;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar12;
  float fVar13;
  
  uVar2 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  *(undefined4 *)(unaff_x20 + 200) = 1;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar2;
  puVar1 = PTR_DAT_08e8fae8;
  uVar12 = 0;
  do {
    lVar8 = *(long *)(unaff_x20 + 0xe0);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4210;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xe8);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da429c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xf0);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *(long *)puVar1;
    lVar8 = *(long *)(lVar8 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *unaff_x19;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4344;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
    uVar3 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_06da4f14;
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) =
         *(undefined4 *)(lVar6 + (long)(int)uVar3 * 4 + 0x20);
    lVar8 = *(long *)(unaff_x20 + 0xf8);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da43e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0x100);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4474;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
    iVar4 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(bool *)(lVar8 + uVar12 + 0x20) = iVar4 == 1;
    lVar8 = *(long *)(unaff_x20 + 0x100);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar8 = *(long *)(lVar8 + 0x20);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    if (*(char *)(lVar8 + uVar12 + 0x20) == '\0') {
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto FUN_06da4ab0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4b4c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x24) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4bec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x28) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x128);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4c74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x130);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4d00;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x110);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = 0;
      lVar8 = *(long *)(unaff_x20 + 0x120);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      uVar3 = *(uint *)(lVar8 + 0x18);
      if ((uVar3 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar3 == 1)) goto LAB_06da4f14;
      fVar13 = 0.0;
      *(undefined4 *)(lVar8 + 0x24) = 0;
      if (uVar3 < 3) goto LAB_06da4f14;
    }
    else {
      lVar8 = *(long *)(unaff_x20 + 0x110);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da45a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x108);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4630;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
      iVar4 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(bool *)(lVar8 + uVar12 + 0x20) = iVar4 == 1;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da46dc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4778;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
      uVar2 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x24) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x28) = 0;
      lVar8 = *(long *)(unaff_x20 + 0x110);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      if (*(int *)(lVar8 + uVar12 * 4 + 0x20) == 2) {
        lVar8 = *(long *)(unaff_x20 + 0x108);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
        if (*(char *)(lVar8 + uVar12 + 0x20) != '\0') goto LAB_06da4840;
        lVar8 = *(long *)(unaff_x20 + 0x128);
        if (lVar8 == 0) goto LAB_06da4f18;
        iVar4 = (int)*(undefined8 *)(lVar8 + 0x18);
        if (iVar4 == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar9 <= uVar12) goto LAB_06da4f14;
        uVar2 = 0xc;
        uVar11 = 8;
      }
      else {
LAB_06da4840:
        lVar8 = *(long *)(unaff_x20 + 0x128);
        if (lVar8 == 0) goto LAB_06da4f18;
        iVar4 = (int)*(undefined8 *)(lVar8 + 0x18);
        if (iVar4 == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar9 <= uVar12) goto LAB_06da4f14;
        uVar2 = 0xd;
        uVar11 = 7;
      }
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar11;
      lVar8 = *(long *)(unaff_x20 + 0x130);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (((*(int *)(lVar8 + 0x18) == 0) || (iVar4 == 0)) || (uVar9 <= uVar12)) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
      lVar8 = *(long *)(unaff_x20 + 0x120);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4928;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
      iVar4 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      *(float *)(lVar8 + 0x20) = (float)iVar4 * -2.0;
      lVar8 = *(long *)(unaff_x20 + 0x120);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da49cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
      iVar4 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
      *(float *)(lVar8 + 0x24) = (float)iVar4 * -2.0;
      lVar8 = *(long *)(unaff_x20 + 0x120);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
      lVar6 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4a74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
      iVar4 = (*(code *)*puVar5)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
      fVar13 = (float)iVar4 * -2.0;
    }
    *(float *)(lVar8 + 0x28) = fVar13;
    lVar8 = *(long *)(unaff_x20 + 0x140);
    if (lVar8 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4e10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
    iVar4 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(float *)(lVar8 + uVar12 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
    lVar8 = *(long *)(unaff_x20 + 0x148);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da4ea8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + uVar12 * 4 + 0x20) = uVar2;
    uVar12 = uVar12 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)uVar12) {
      return;
    }
  } while( true );
}


