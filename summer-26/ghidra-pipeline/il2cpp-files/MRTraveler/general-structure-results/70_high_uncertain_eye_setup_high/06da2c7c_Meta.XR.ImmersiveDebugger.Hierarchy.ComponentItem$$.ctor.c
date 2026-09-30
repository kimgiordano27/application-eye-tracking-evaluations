/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ComponentItem$$.ctor
ENTRY_POINT: 06da2c7c
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


void Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem___ctor(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  
  FUN_03c8f898(PTR_DAT_08e8fb10);
  FUN_03c8f898(PTR_DAT_08e8fae8);
  *(undefined1 *)(unaff_x21 + 0xadc) = 1;
  puVar3 = PTR_DAT_08e8fb10;
  if (unaff_x19 == (long *)0x0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar9 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e8fb10) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 4) * 0x10 + 0x138);
        goto LAB_06da2cf8;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2cf8:
  iVar4 = (*(code *)*puVar8)();
  lVar9 = *unaff_x19;
  uVar1 = *(ushort *)(lVar9 + 0x12e);
  uVar12 = (ulong)uVar1;
  if (iVar4 == 10) {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2d90;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2d90:
    uVar5 = (*(code *)*puVar8)();
    *(undefined4 *)(unaff_x20 + 0xd0) = uVar5;
    lVar9 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 6) * 0x10 + 0x138);
          goto LAB_06da2e58;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2e58:
    iVar4 = (*(code *)*puVar8)();
    lVar9 = *unaff_x19;
    uVar1 = *(ushort *)(lVar9 + 0x12e);
    uVar12 = (ulong)uVar1;
    if (iVar4 == 3) {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da2f88;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2f88:
      uVar5 = (*(code *)*puVar8)();
      uVar7 = 1;
    }
    else {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da2fb0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2fb0:
      uVar5 = (*(code *)*puVar8)();
      uVar7 = 2;
    }
    uVar6 = 0;
    *(undefined4 *)(unaff_x20 + 200) = uVar7;
    *(undefined4 *)(unaff_x20 + 0xcc) = uVar5;
    do {
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar10 = *unaff_x19;
      lVar16 = (long)(int)uVar6;
      lVar9 = *(long *)(lVar9 + lVar16 * 8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da303c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da303c:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + 0x20) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + lVar16 * 8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da30c8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da30c8:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + 0x24) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + lVar16 * 8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3158;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3158:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + 0x28) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0xd8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + lVar16 * 8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da31e8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da31e8:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + 0x2c) = uVar5;
      puVar2 = PTR_DAT_08e8fae8;
      uVar12 = (ulong)*(uint *)(unaff_x20 + 200);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)*(uint *)(unaff_x20 + 200));
    uVar15 = 0;
    do {
      if (0 < (int)uVar12) {
        uVar17 = 0;
        do {
          lVar9 = *(long *)(unaff_x20 + 0xe0);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da32ac;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
          uVar5 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
          lVar9 = *(long *)(unaff_x20 + 0xe8);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3340;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
          uVar5 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
          lVar9 = *(long *)(unaff_x20 + 0xf0);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *(long *)puVar2;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar10 = *(long *)puVar2;
          }
          lVar16 = *unaff_x19;
          lVar10 = **(long **)(lVar10 + 0xb8);
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da33f0;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
          uVar6 = (*(code *)*puVar8)();
          if (lVar10 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_06da4f14;
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) =
               *(undefined4 *)(lVar10 + (long)(int)uVar6 * 4 + 0x20);
          lVar9 = *(long *)(unaff_x20 + 0xf8);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da349c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
          uVar5 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
          lVar9 = *(long *)(unaff_x20 + 0x100);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3530;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
          iVar4 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(bool *)(lVar9 + uVar17 + 0x20) = iVar4 == 1;
          lVar9 = *(long *)(unaff_x20 + 0x100);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          if (*(char *)(lVar9 + uVar17 + 0x20) == '\0') {
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3be0;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3c84;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x24) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3d2c;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x28) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x128);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3dbc;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x130);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3e50;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x110);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = 0;
            lVar9 = *(long *)(unaff_x20 + 0x120);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            uVar6 = *(uint *)(lVar9 + 0x18);
            if ((uVar6 == 0) || (*(undefined4 *)(lVar9 + 0x20) = 0, uVar6 == 1)) goto LAB_06da4f14;
            fVar18 = 0.0;
            *(undefined4 *)(lVar9 + 0x24) = 0;
            if (uVar6 < 3) goto LAB_06da4f14;
          }
          else {
            lVar9 = *(long *)(unaff_x20 + 0x110);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3678;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x108);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da370c;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
            iVar4 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(bool *)(lVar9 + uVar17 + 0x20) = iVar4 == 1;
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da37c0;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3864;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
            uVar5 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x24) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x118);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + 0x28) = 0;
            lVar9 = *(long *)(unaff_x20 + 0x110);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            if (*(int *)(lVar9 + uVar17 * 4 + 0x20) == 2) {
              lVar9 = *(long *)(unaff_x20 + 0x108);
              if (lVar9 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
              lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
              if (*(char *)(lVar9 + uVar17 + 0x20) != '\0') goto LAB_06da3944;
              lVar9 = *(long *)(unaff_x20 + 0x128);
              if (lVar9 == 0) goto LAB_06da4f18;
              uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
              if (uVar12 <= uVar15) goto LAB_06da4f14;
              lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_06da4f18;
              uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
              if (uVar13 <= uVar17) goto LAB_06da4f14;
              uVar5 = 0xc;
              uVar7 = 8;
            }
            else {
LAB_06da3944:
              lVar9 = *(long *)(unaff_x20 + 0x128);
              if (lVar9 == 0) goto LAB_06da4f18;
              uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
              if (uVar12 <= uVar15) goto LAB_06da4f14;
              lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_06da4f18;
              uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
              if (uVar13 <= uVar17) goto LAB_06da4f14;
              uVar5 = 0xd;
              uVar7 = 7;
            }
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar7;
            lVar9 = *(long *)(unaff_x20 + 0x130);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (((*(uint *)(lVar9 + 0x18) <= uVar15) || (uVar12 <= uVar15)) || (uVar13 <= uVar17))
            goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
            lVar9 = *(long *)(unaff_x20 + 0x120);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3a48;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
            iVar4 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
            *(float *)(lVar9 + 0x20) = (float)iVar4 * -2.0;
            lVar9 = *(long *)(unaff_x20 + 0x120);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3af4;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
            iVar4 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
            *(float *)(lVar9 + 0x24) = (float)iVar4 * -2.0;
            lVar9 = *(long *)(unaff_x20 + 0x120);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
            lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
            lVar10 = *unaff_x19;
            lVar9 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3ba4;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
            iVar4 = (*(code *)*puVar8)();
            if (lVar9 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
            fVar18 = (float)iVar4 * -2.0;
          }
          *(float *)(lVar9 + 0x28) = fVar18;
          lVar9 = *(long *)(unaff_x20 + 0x138);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3f78;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
          uVar5 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
          lVar9 = *(long *)(unaff_x20 + 0x140);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da400c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
          iVar4 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(float *)(lVar9 + uVar17 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
          lVar9 = *(long *)(unaff_x20 + 0x148);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_06da4f14;
          lVar10 = *unaff_x19;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da40ac;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
          uVar5 = (*(code *)*puVar8)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_06da4f14;
          *(undefined4 *)(lVar9 + uVar17 * 4 + 0x20) = uVar5;
          uVar12 = (ulong)*(int *)(unaff_x20 + 200);
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)uVar12);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 2);
  }
  else {
    if (uVar1 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2df4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2df4:
    uVar5 = (*(code *)*puVar8)();
    *(undefined4 *)(unaff_x20 + 0xd0) = uVar5;
    lVar9 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 6) * 0x10 + 0x138);
          goto LAB_06da2ef0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da2ef0:
    iVar4 = (*(code *)*puVar8)();
    lVar9 = *unaff_x19;
    uVar1 = *(ushort *)(lVar9 + 0x12e);
    uVar12 = (ulong)uVar1;
    if (iVar4 == 3) {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da415c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da415c:
      pcVar11 = (code *)*puVar8;
      uVar5 = 1;
    }
    else {
      if (uVar1 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da417c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da417c:
      pcVar11 = (code *)*puVar8;
      uVar5 = 2;
    }
    uVar7 = (*pcVar11)();
    *(undefined4 *)(unaff_x20 + 200) = uVar5;
    *(undefined4 *)(unaff_x20 + 0xcc) = uVar7;
    puVar2 = PTR_DAT_08e8fae8;
    uVar12 = 0;
    do {
      lVar9 = *(long *)(unaff_x20 + 0xe0);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4210;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0xe8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da429c;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0xf0);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *(long *)puVar2;
      lVar9 = *(long *)(lVar9 + 0x20);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *(long *)puVar2;
      }
      lVar16 = *unaff_x19;
      lVar10 = **(long **)(lVar10 + 0xb8);
      uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4344;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
      uVar6 = (*(code *)*puVar8)();
      if (lVar10 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_06da4f14;
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) =
           *(undefined4 *)(lVar10 + (long)(int)uVar6 * 4 + 0x20);
      lVar9 = *(long *)(unaff_x20 + 0xf8);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da43e8;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
      lVar9 = *(long *)(unaff_x20 + 0x100);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4474;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
      iVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(bool *)(lVar9 + uVar12 + 0x20) = iVar4 == 1;
      lVar9 = *(long *)(unaff_x20 + 0x100);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *(long *)(lVar9 + 0x20);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      if (*(char *)(lVar9 + uVar12 + 0x20) == '\0') {
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto FUN_06da4ab0;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4b4c;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x24) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4bec;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x28) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x128);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4c74;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x130);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4d00;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x110);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = 0;
        lVar9 = *(long *)(unaff_x20 + 0x120);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        uVar6 = *(uint *)(lVar9 + 0x18);
        if ((uVar6 == 0) || (*(undefined4 *)(lVar9 + 0x20) = 0, uVar6 == 1)) goto LAB_06da4f14;
        fVar18 = 0.0;
        *(undefined4 *)(lVar9 + 0x24) = 0;
        if (uVar6 < 3) goto LAB_06da4f14;
      }
      else {
        lVar9 = *(long *)(unaff_x20 + 0x110);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da45a4;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x108);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4630;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
        iVar4 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(bool *)(lVar9 + uVar12 + 0x20) = iVar4 == 1;
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da46dc;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4778;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
        uVar5 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x24) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x118);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + 0x28) = 0;
        lVar9 = *(long *)(unaff_x20 + 0x110);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        if (*(int *)(lVar9 + uVar12 * 4 + 0x20) == 2) {
          lVar9 = *(long *)(unaff_x20 + 0x108);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
          lVar9 = *(long *)(lVar9 + 0x20);
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
          if (*(char *)(lVar9 + uVar12 + 0x20) != '\0') goto LAB_06da4840;
          lVar9 = *(long *)(unaff_x20 + 0x128);
          if (lVar9 == 0) goto LAB_06da4f18;
          iVar4 = (int)*(undefined8 *)(lVar9 + 0x18);
          if (iVar4 == 0) goto LAB_06da4f14;
          lVar9 = *(long *)(lVar9 + 0x20);
          if (lVar9 == 0) goto LAB_06da4f18;
          uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
          if (uVar15 <= uVar12) goto LAB_06da4f14;
          uVar5 = 0xc;
          uVar7 = 8;
        }
        else {
LAB_06da4840:
          lVar9 = *(long *)(unaff_x20 + 0x128);
          if (lVar9 == 0) goto LAB_06da4f18;
          iVar4 = (int)*(undefined8 *)(lVar9 + 0x18);
          if (iVar4 == 0) goto LAB_06da4f14;
          lVar9 = *(long *)(lVar9 + 0x20);
          if (lVar9 == 0) goto LAB_06da4f18;
          uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
          if (uVar15 <= uVar12) goto LAB_06da4f14;
          uVar5 = 0xd;
          uVar7 = 7;
        }
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar7;
        lVar9 = *(long *)(unaff_x20 + 0x130);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (((*(int *)(lVar9 + 0x18) == 0) || (iVar4 == 0)) || (uVar15 <= uVar12))
        goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
        lVar9 = *(long *)(unaff_x20 + 0x120);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4928;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
        iVar4 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        *(float *)(lVar9 + 0x20) = (float)iVar4 * -2.0;
        lVar9 = *(long *)(unaff_x20 + 0x120);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da49cc;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
        iVar4 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_06da4f14;
        *(float *)(lVar9 + 0x24) = (float)iVar4 * -2.0;
        lVar9 = *(long *)(unaff_x20 + 0x120);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
        lVar10 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4a74;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
        iVar4 = (*(code *)*puVar8)();
        if (lVar9 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_06da4f14;
        fVar18 = (float)iVar4 * -2.0;
      }
      *(float *)(lVar9 + 0x28) = fVar18;
      lVar9 = *(long *)(unaff_x20 + 0x140);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4e10;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
      iVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(float *)(lVar9 + uVar12 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
      lVar9 = *(long *)(unaff_x20 + 0x148);
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06da4f14;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4ea8;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
      uVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_06da4f14;
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar5;
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*(int *)(unaff_x20 + 200));
  }
  return;
}


