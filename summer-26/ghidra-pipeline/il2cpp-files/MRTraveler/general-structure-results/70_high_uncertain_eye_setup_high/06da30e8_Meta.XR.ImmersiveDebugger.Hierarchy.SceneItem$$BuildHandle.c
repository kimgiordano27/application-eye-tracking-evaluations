/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.SceneItem$$BuildHandle
ENTRY_POINT: 06da30e8
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


void Meta_XR_ImmersiveDebugger_Hierarchy_SceneItem__BuildHandle(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  ulong uVar13;
  long unaff_x23;
  long unaff_x24;
  ulong uVar14;
  float fVar15;
  
  do {
    *(undefined4 *)(unaff_x24 + 0x24) = param_1;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w22) break;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3158;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3158:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) < 3) break;
    *(undefined4 *)(lVar8 + 0x28) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w22) break;
    lVar6 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da31e8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da31e8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) < 4) break;
    *(undefined4 *)(lVar8 + 0x2c) = uVar2;
    puVar1 = PTR_DAT_08e8fae8;
    uVar9 = (ulong)*(uint *)(unaff_x20 + 200);
    unaff_w22 = unaff_w22 + 1;
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)unaff_w22) {
      uVar13 = 0;
      do {
        if (0 < (int)uVar9) {
          uVar14 = 0;
          do {
            lVar8 = *(long *)(unaff_x20 + 0xe0);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da32ac;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            lVar8 = *(long *)(unaff_x20 + 0xe8);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3340;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            lVar8 = *(long *)(unaff_x20 + 0xf0);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *(long *)puVar1;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar6 = *(long *)puVar1;
            }
            lVar7 = *unaff_x19;
            lVar6 = **(long **)(lVar6 + 0xb8);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da33f0;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
            uVar3 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_06da4f14;
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) =
                 *(undefined4 *)(lVar6 + (long)(int)uVar3 * 4 + 0x20);
            lVar8 = *(long *)(unaff_x20 + 0xf8);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da349c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            lVar8 = *(long *)(unaff_x20 + 0x100);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3530;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
            iVar4 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(bool *)(lVar8 + uVar14 + 0x20) = iVar4 == 1;
            lVar8 = *(long *)(unaff_x20 + 0x100);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            if (*(char *)(lVar8 + uVar14 + 0x20) == '\0') {
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3be0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3c84;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x24) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3d2c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x28) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x128);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3dbc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x130);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3e50;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x110);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = 0;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              uVar3 = *(uint *)(lVar8 + 0x18);
              if ((uVar3 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar3 == 1))
              goto LAB_06da4f14;
              fVar15 = 0.0;
              *(undefined4 *)(lVar8 + 0x24) = 0;
              if (uVar3 < 3) goto LAB_06da4f14;
            }
            else {
              lVar8 = *(long *)(unaff_x20 + 0x110);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3678;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x108);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da370c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(bool *)(lVar8 + uVar14 + 0x20) = iVar4 == 1;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da37c0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3864;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x24) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x28) = 0;
              lVar8 = *(long *)(unaff_x20 + 0x110);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              if (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 2) {
                lVar8 = *(long *)(unaff_x20 + 0x108);
                if (lVar8 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
                if (*(char *)(lVar8 + uVar14 + 0x20) != '\0') goto LAB_06da3944;
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar13) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xc;
                uVar12 = 8;
              }
              else {
LAB_06da3944:
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar13) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xd;
                uVar12 = 7;
              }
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar12;
              lVar8 = *(long *)(unaff_x20 + 0x130);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (((*(uint *)(lVar8 + 0x18) <= uVar13) || (uVar9 <= uVar13)) || (uVar10 <= uVar14))
              goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3a48;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
              *(float *)(lVar8 + 0x20) = (float)iVar4 * -2.0;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3af4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
              *(float *)(lVar8 + 0x24) = (float)iVar4 * -2.0;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3ba4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
              fVar15 = (float)iVar4 * -2.0;
            }
            *(float *)(lVar8 + 0x28) = fVar15;
            lVar8 = *(long *)(unaff_x20 + 0x138);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3f78;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            lVar8 = *(long *)(unaff_x20 + 0x140);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da400c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
            iVar4 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(float *)(lVar8 + uVar14 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
            lVar8 = *(long *)(unaff_x20 + 0x148);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_06da4f14;
            lVar6 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da40ac;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            uVar9 = (ulong)*(int *)(unaff_x20 + 200);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)uVar9);
        }
        uVar13 = uVar13 + 1;
        if (uVar13 == 2) {
          return;
        }
      } while( true );
    }
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w22) break;
    lVar6 = *unaff_x19;
    unaff_x23 = (long)(int)unaff_w22;
    lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da303c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da303c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar8 + 0x18) == 0) break;
    *(undefined4 *)(lVar8 + 0x20) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w22) break;
    lVar6 = *unaff_x19;
    unaff_x24 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da30c8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da30c8:
    param_1 = (*(code *)*puVar5)();
    if (unaff_x24 == 0) goto LAB_06da4f18;
  } while (1 < *(uint *)(unaff_x24 + 0x18));
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


