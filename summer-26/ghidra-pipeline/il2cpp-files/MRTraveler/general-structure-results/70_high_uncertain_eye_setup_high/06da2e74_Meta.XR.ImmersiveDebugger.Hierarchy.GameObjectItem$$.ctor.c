/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem$$.ctor
ENTRY_POINT: 06da2e74
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


void Meta_XR_ImmersiveDebugger_Hierarchy_GameObjectItem___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool in_ZR;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  
  if (in_ZR) {
    if ((int)in_x9 != 0) {
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == param_3) {
          puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2f88;
        }
        in_x9 = in_x9 + -1;
        piVar11 = piVar11 + 4;
      } while (in_x9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2f88:
    uVar2 = (*(code *)*puVar5)();
    uVar6 = 1;
  }
  else {
    if ((int)in_x9 != 0) {
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == param_3) {
          puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2fb0;
        }
        in_x9 = in_x9 + -1;
        piVar11 = piVar11 + 4;
      } while (in_x9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da2fb0:
    uVar2 = (*(code *)*puVar5)();
    uVar6 = 2;
  }
  uVar3 = 0;
  *(undefined4 *)(unaff_x20 + 200) = uVar6;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar2;
  while (lVar8 = *(long *)(unaff_x20 + 0xd8), lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar3) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar7 = *unaff_x19;
    lVar13 = (long)(int)uVar3;
    lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da303c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da303c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + 0x20) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_06da4f14;
    lVar7 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da30c8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da30c8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + 0x24) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_06da4f14;
    lVar7 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3158;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da3158:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + 0x28) = uVar2;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_06da4f14;
    lVar7 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_06da31e8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da31e8:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da4f14;
    *(undefined4 *)(lVar8 + 0x2c) = uVar2;
    puVar1 = PTR_DAT_08e8fae8;
    uVar9 = (ulong)*(uint *)(unaff_x20 + 200);
    uVar3 = uVar3 + 1;
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)uVar3) {
      uVar12 = 0;
      do {
        if (0 < (int)uVar9) {
          uVar14 = 0;
          do {
            lVar8 = *(long *)(unaff_x20 + 0xe0);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *(long *)puVar1;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar7 = *(long *)puVar1;
            }
            lVar13 = *unaff_x19;
            lVar7 = **(long **)(lVar7 + 0xb8);
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da33f0;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
            uVar3 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_06da4f14;
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) =
                 *(undefined4 *)(lVar7 + (long)(int)uVar3 * 4 + 0x20);
            lVar8 = *(long *)(unaff_x20 + 0xf8);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            if (*(char *)(lVar8 + uVar14 + 0x20) == '\0') {
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = 0;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + 0x28) = 0;
              lVar8 = *(long *)(unaff_x20 + 0x110);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              if (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 2) {
                lVar8 = *(long *)(unaff_x20 + 0x108);
                if (lVar8 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
                if (*(char *)(lVar8 + uVar14 + 0x20) != '\0') goto LAB_06da3944;
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar12) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xc;
                uVar6 = 8;
              }
              else {
LAB_06da3944:
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar12) goto LAB_06da4f14;
                lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_06da4f18;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_06da4f14;
                uVar2 = 0xd;
                uVar6 = 7;
              }
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar6;
              lVar8 = *(long *)(unaff_x20 + 0x130);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (((*(uint *)(lVar8 + 0x18) <= uVar12) || (uVar9 <= uVar12)) || (uVar10 <= uVar14))
              goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              lVar8 = *(long *)(unaff_x20 + 0x120);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x21) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da4f14;
            lVar7 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
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
        uVar12 = uVar12 + 1;
        if (uVar12 == 2) {
          return;
        }
      } while( true );
    }
  }
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


