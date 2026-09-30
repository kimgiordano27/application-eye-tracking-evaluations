/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.SceneItem$$get_Label
ENTRY_POINT: 06da3068
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


void Meta_XR_ImmersiveDebugger_Hierarchy_SceneItem__get_Label(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint in_w8;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  ulong uVar12;
  long unaff_x23;
  long lVar13;
  ulong uVar14;
  float fVar15;
  
  while (unaff_w22 < in_w8) {
    lVar6 = *unaff_x19;
    lVar13 = *(long *)(in_x9 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da30c8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da30c8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar13 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar13 + 0x18) < 2) break;
    *(undefined4 *)(lVar13 + 0x24) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w22) break;
    lVar13 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3158;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3158:
    uVar2 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) < 3) break;
    *(undefined4 *)(lVar6 + 0x28) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w22) break;
    lVar13 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da31e8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da31e8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) < 4) break;
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    puVar1 = PTR_DAT_08e8fae8;
    uVar8 = (ulong)*(uint *)(unaff_x20 + 200);
    unaff_w22 = unaff_w22 + 1;
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)unaff_w22) {
      uVar12 = 0;
      do {
        if (0 < (int)uVar8) {
          uVar14 = 0;
          do {
            lVar6 = *(long *)(unaff_x20 + 0xe0);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da32ac;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            lVar6 = *(long *)(unaff_x20 + 0xe8);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3340;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            lVar6 = *(long *)(unaff_x20 + 0xf0);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *(long *)puVar1;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar13 = *(long *)puVar1;
            }
            lVar7 = *unaff_x19;
            lVar13 = **(long **)(lVar13 + 0xb8);
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da33f0;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
            uVar3 = (*(code *)*puVar5)();
            if (lVar13 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_06da4f14;
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) =
                 *(undefined4 *)(lVar13 + (long)(int)uVar3 * 4 + 0x20);
            lVar6 = *(long *)(unaff_x20 + 0xf8);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da349c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            lVar6 = *(long *)(unaff_x20 + 0x100);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3530;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
            iVar4 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(bool *)(lVar6 + uVar14 + 0x20) = iVar4 == 1;
            lVar6 = *(long *)(unaff_x20 + 0x100);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            if (*(char *)(lVar6 + uVar14 + 0x20) == '\0') {
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3be0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3c84;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x24) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3d2c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x28) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x128);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3dbc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x130);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3e50;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x110);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = 0;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              uVar3 = *(uint *)(lVar6 + 0x18);
              if ((uVar3 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar3 == 1))
              goto LAB_06da4f14;
              fVar15 = 0.0;
              *(undefined4 *)(lVar6 + 0x24) = 0;
              if (uVar3 < 3) goto LAB_06da4f14;
            }
            else {
              lVar6 = *(long *)(unaff_x20 + 0x110);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3678;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x108);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da370c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
              iVar4 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(bool *)(lVar6 + uVar14 + 0x20) = iVar4 == 1;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da37c0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3864;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x24) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + 0x28) = 0;
              lVar6 = *(long *)(unaff_x20 + 0x110);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              if (*(int *)(lVar6 + uVar14 * 4 + 0x20) == 2) {
                lVar6 = *(long *)(unaff_x20 + 0x108);
                if (lVar6 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
                lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
                if (*(char *)(lVar6 + uVar14 + 0x20) != '\0') goto LAB_06da3944;
                lVar6 = *(long *)(unaff_x20 + 0x128);
                if (lVar6 == 0) goto LAB_06da4f18;
                uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                if (uVar8 <= uVar12) goto LAB_06da4f14;
                lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
                if (uVar9 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xc;
                uVar11 = 8;
              }
              else {
LAB_06da3944:
                lVar6 = *(long *)(unaff_x20 + 0x128);
                if (lVar6 == 0) goto LAB_06da4f18;
                uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                if (uVar8 <= uVar12) goto LAB_06da4f14;
                lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
                if (uVar9 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xd;
                uVar11 = 7;
              }
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar11;
              lVar6 = *(long *)(unaff_x20 + 0x130);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (((*(uint *)(lVar6 + 0x18) <= uVar12) || (uVar8 <= uVar12)) || (uVar9 <= uVar14))
              goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3a48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
              iVar4 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
              *(float *)(lVar6 + 0x20) = (float)iVar4 * -2.0;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3af4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
              iVar4 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
              *(float *)(lVar6 + 0x24) = (float)iVar4 * -2.0;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar13 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + uVar14 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3ba4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
              iVar4 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
              fVar15 = (float)iVar4 * -2.0;
            }
            *(float *)(lVar6 + 0x28) = fVar15;
            lVar6 = *(long *)(unaff_x20 + 0x138);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3f78;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            lVar6 = *(long *)(unaff_x20 + 0x140);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da400c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
            iVar4 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(float *)(lVar6 + uVar14 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
            lVar6 = *(long *)(unaff_x20 + 0x148);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar13 = *unaff_x19;
            lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da40ac;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            uVar8 = (ulong)*(int *)(unaff_x20 + 200);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)uVar8);
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == 2) {
          return;
        }
      } while( true );
    }
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w22) break;
    lVar13 = *unaff_x19;
    unaff_x23 = (long)(int)unaff_w22;
    lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da303c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da303c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar6 + 0x18) == 0) break;
    *(undefined4 *)(lVar6 + 0x20) = uVar2;
    in_x9 = *(long *)(unaff_x20 + 0xd8);
    if (in_x9 == 0) goto LAB_06da4f18;
    in_w8 = *(uint *)(in_x9 + 0x18);
  }
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


