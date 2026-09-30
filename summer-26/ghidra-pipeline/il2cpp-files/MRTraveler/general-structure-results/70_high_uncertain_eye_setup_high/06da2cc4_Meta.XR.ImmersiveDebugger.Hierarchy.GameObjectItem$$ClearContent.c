/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.GameObjectItem$$ClearContent
ENTRY_POINT: 06da2cc4
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


void Meta_XR_ImmersiveDebugger_Hierarchy_GameObjectItem__ClearContent
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  ulong uVar12;
  int *piVar13;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar7 = (undefined8 *)FUN_03cf1348();
      goto LAB_06da2cf8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
LAB_06da2cf8:
  iVar3 = (*(code *)*puVar7)();
  lVar8 = *unaff_x19;
  uVar1 = *(ushort *)(lVar8 + 0x12e);
  uVar11 = (ulong)uVar1;
  if (iVar3 == 10) {
    if (uVar1 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2d90;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2d90:
    uVar4 = (*(code *)*puVar7)();
    *(undefined4 *)(unaff_x20 + 0xd0) = uVar4;
    lVar8 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 6) * 0x10 + 0x138);
          goto LAB_06da2e58;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2e58:
    iVar3 = (*(code *)*puVar7)();
    lVar8 = *unaff_x19;
    uVar1 = *(ushort *)(lVar8 + 0x12e);
    uVar11 = (ulong)uVar1;
    if (iVar3 == 3) {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da2f88;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2f88:
      uVar4 = (*(code *)*puVar7)();
      uVar6 = 1;
    }
    else {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da2fb0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2fb0:
      uVar4 = (*(code *)*puVar7)();
      uVar6 = 2;
    }
    uVar5 = 0;
    *(undefined4 *)(unaff_x20 + 200) = uVar6;
    *(undefined4 *)(unaff_x20 + 0xcc) = uVar4;
    do {
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) {
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar5) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar9 = *unaff_x19;
      lVar15 = (long)(int)uVar5;
      lVar8 = *(long *)(lVar8 + lVar15 * 8 + 0x20);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da303c;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da303c:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x20) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + lVar15 * 8 + 0x20);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da30c8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da30c8:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x24) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + lVar15 * 8 + 0x20);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da3158;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3158:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x28) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + lVar15 * 8 + 0x20);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da31e8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da31e8:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + 0x2c) = uVar4;
      puVar2 = PTR_DAT_08e8fae8;
      uVar11 = (ulong)*(uint *)(unaff_x20 + 200);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)*(uint *)(unaff_x20 + 200));
    uVar14 = 0;
    do {
      if (0 < (int)uVar11) {
        uVar16 = 0;
        do {
          lVar8 = *(long *)(unaff_x20 + 0xe0);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da32ac;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
          uVar4 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
          lVar8 = *(long *)(unaff_x20 + 0xe8);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3340;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
          uVar4 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
          lVar8 = *(long *)(unaff_x20 + 0xf0);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *(long *)puVar2;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar9 = *(long *)puVar2;
          }
          lVar15 = *unaff_x19;
          lVar9 = **(long **)(lVar9 + 0xb8);
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da33f0;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
          uVar5 = (*(code *)*puVar7)();
          if (lVar9 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_06da4f14;
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) =
               *(undefined4 *)(lVar9 + (long)(int)uVar5 * 4 + 0x20);
          lVar8 = *(long *)(unaff_x20 + 0xf8);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da349c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
          uVar4 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
          lVar8 = *(long *)(unaff_x20 + 0x100);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3530;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
          iVar3 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(bool *)(lVar8 + uVar16 + 0x20) = iVar3 == 1;
          lVar8 = *(long *)(unaff_x20 + 0x100);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          if (*(char *)(lVar8 + uVar16 + 0x20) == '\0') {
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3be0;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3c84;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x24) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3d2c;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x28) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x128);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3dbc;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x130);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3e50;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x110);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = 0;
            lVar8 = *(long *)(unaff_x20 + 0x120);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            uVar5 = *(uint *)(lVar8 + 0x18);
            if ((uVar5 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar5 == 1)) goto LAB_06da4f14;
            fVar17 = 0.0;
            *(undefined4 *)(lVar8 + 0x24) = 0;
            if (uVar5 < 3) goto LAB_06da4f14;
          }
          else {
            lVar8 = *(long *)(unaff_x20 + 0x110);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3678;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x108);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da370c;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
            iVar3 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(bool *)(lVar8 + uVar16 + 0x20) = iVar3 == 1;
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da37c0;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3864;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
            uVar4 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x24) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x118);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + 0x28) = 0;
            lVar8 = *(long *)(unaff_x20 + 0x110);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            if (*(int *)(lVar8 + uVar16 * 4 + 0x20) == 2) {
              lVar8 = *(long *)(unaff_x20 + 0x108);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
              if (*(char *)(lVar8 + uVar16 + 0x20) != '\0') goto LAB_06da3944;
              lVar8 = *(long *)(unaff_x20 + 0x128);
              if (lVar8 == 0) goto LAB_06da4f18;
              uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
              if (uVar11 <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
              if (uVar12 <= uVar16) goto LAB_06da4f14;
              uVar4 = 0xc;
              uVar6 = 8;
            }
            else {
LAB_06da3944:
              lVar8 = *(long *)(unaff_x20 + 0x128);
              if (lVar8 == 0) goto LAB_06da4f18;
              uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
              if (uVar11 <= uVar14) goto LAB_06da4f14;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_06da4f18;
              uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
              if (uVar12 <= uVar16) goto LAB_06da4f14;
              uVar4 = 0xd;
              uVar6 = 7;
            }
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar6;
            lVar8 = *(long *)(unaff_x20 + 0x130);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (((*(uint *)(lVar8 + 0x18) <= uVar14) || (uVar11 <= uVar14)) || (uVar12 <= uVar16))
            goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
            lVar8 = *(long *)(unaff_x20 + 0x120);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3a48;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
            iVar3 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
            *(float *)(lVar8 + 0x20) = (float)iVar3 * -2.0;
            lVar8 = *(long *)(unaff_x20 + 0x120);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3af4;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
            iVar3 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
            *(float *)(lVar8 + 0x24) = (float)iVar3 * -2.0;
            lVar8 = *(long *)(unaff_x20 + 0x120);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
            lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
            lVar9 = *unaff_x19;
            lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da3ba4;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
            iVar3 = (*(code *)*puVar7)();
            if (lVar8 == 0) goto LAB_06da4f18;
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
            fVar17 = (float)iVar3 * -2.0;
          }
          *(float *)(lVar8 + 0x28) = fVar17;
          lVar8 = *(long *)(unaff_x20 + 0x138);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da3f78;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
          uVar4 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
          lVar8 = *(long *)(unaff_x20 + 0x140);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da400c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
          iVar3 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(float *)(lVar8 + uVar16 * 4 + 0x20) = ((float)iVar3 + 1.0) * 0.5;
          lVar8 = *(long *)(unaff_x20 + 0x148);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06da4f14;
          lVar9 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                goto LAB_06da40ac;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
          uVar4 = (*(code *)*puVar7)();
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_06da4f14;
          *(undefined4 *)(lVar8 + uVar16 * 4 + 0x20) = uVar4;
          uVar11 = (ulong)*(int *)(unaff_x20 + 200);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)uVar11);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 2);
  }
  else {
    if (uVar1 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_06da2df4;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2df4:
    uVar4 = (*(code *)*puVar7)();
    *(undefined4 *)(unaff_x20 + 0xd0) = uVar4;
    lVar8 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 6) * 0x10 + 0x138);
          goto LAB_06da2ef0;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da2ef0:
    iVar3 = (*(code *)*puVar7)();
    lVar8 = *unaff_x19;
    uVar1 = *(ushort *)(lVar8 + 0x12e);
    uVar11 = (ulong)uVar1;
    if (iVar3 == 3) {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da415c;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da415c:
      pcVar10 = (code *)*puVar7;
      uVar4 = 1;
    }
    else {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da417c;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da417c:
      pcVar10 = (code *)*puVar7;
      uVar4 = 2;
    }
    uVar6 = (*pcVar10)();
    *(undefined4 *)(unaff_x20 + 200) = uVar4;
    *(undefined4 *)(unaff_x20 + 0xcc) = uVar6;
    puVar2 = PTR_DAT_08e8fae8;
    uVar11 = 0;
    do {
      lVar8 = *(long *)(unaff_x20 + 0xe0);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4210;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0xe8);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da429c;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0xf0);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *(long *)puVar2;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar9 = *(long *)puVar2;
      }
      lVar15 = *unaff_x19;
      lVar9 = **(long **)(lVar9 + 0xb8);
      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4344;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
      uVar5 = (*(code *)*puVar7)();
      if (lVar9 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_06da4f14;
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) =
           *(undefined4 *)(lVar9 + (long)(int)uVar5 * 4 + 0x20);
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da43e8;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
      lVar8 = *(long *)(unaff_x20 + 0x100);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4474;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
      iVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(bool *)(lVar8 + uVar11 + 0x20) = iVar3 == 1;
      lVar8 = *(long *)(unaff_x20 + 0x100);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      if (*(char *)(lVar8 + uVar11 + 0x20) == '\0') {
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto FUN_06da4ab0;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4b4c;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x24) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4bec;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x28) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x128);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4c74;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x130);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4d00;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x110);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = 0;
        lVar8 = *(long *)(unaff_x20 + 0x120);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        uVar5 = *(uint *)(lVar8 + 0x18);
        if ((uVar5 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar5 == 1)) goto LAB_06da4f14;
        fVar17 = 0.0;
        *(undefined4 *)(lVar8 + 0x24) = 0;
        if (uVar5 < 3) goto LAB_06da4f14;
      }
      else {
        lVar8 = *(long *)(unaff_x20 + 0x110);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da45a4;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x108);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4630;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
        iVar3 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(bool *)(lVar8 + uVar11 + 0x20) = iVar3 == 1;
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da46dc;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4778;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
        uVar4 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x24) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x118);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + 0x28) = 0;
        lVar8 = *(long *)(unaff_x20 + 0x110);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        if (*(int *)(lVar8 + uVar11 * 4 + 0x20) == 2) {
          lVar8 = *(long *)(unaff_x20 + 0x108);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 == 0) goto LAB_06da4f18;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
          if (*(char *)(lVar8 + uVar11 + 0x20) != '\0') goto LAB_06da4840;
          lVar8 = *(long *)(unaff_x20 + 0x128);
          if (lVar8 == 0) goto LAB_06da4f18;
          iVar3 = (int)*(undefined8 *)(lVar8 + 0x18);
          if (iVar3 == 0) goto LAB_06da4f14;
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 == 0) goto LAB_06da4f18;
          uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
          if (uVar14 <= uVar11) goto LAB_06da4f14;
          uVar4 = 0xc;
          uVar6 = 8;
        }
        else {
LAB_06da4840:
          lVar8 = *(long *)(unaff_x20 + 0x128);
          if (lVar8 == 0) goto LAB_06da4f18;
          iVar3 = (int)*(undefined8 *)(lVar8 + 0x18);
          if (iVar3 == 0) goto LAB_06da4f14;
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 == 0) goto LAB_06da4f18;
          uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
          if (uVar14 <= uVar11) goto LAB_06da4f14;
          uVar4 = 0xd;
          uVar6 = 7;
        }
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar6;
        lVar8 = *(long *)(unaff_x20 + 0x130);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (((*(int *)(lVar8 + 0x18) == 0) || (iVar3 == 0)) || (uVar14 <= uVar11))
        goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
        lVar8 = *(long *)(unaff_x20 + 0x120);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4928;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
        iVar3 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        *(float *)(lVar8 + 0x20) = (float)iVar3 * -2.0;
        lVar8 = *(long *)(unaff_x20 + 0x120);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da49cc;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
        iVar3 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da4f14;
        *(float *)(lVar8 + 0x24) = (float)iVar3 * -2.0;
        lVar8 = *(long *)(unaff_x20 + 0x120);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
        lVar9 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4a74;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
        iVar3 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_06da4f18;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da4f14;
        fVar17 = (float)iVar3 * -2.0;
      }
      *(float *)(lVar8 + 0x28) = fVar17;
      lVar8 = *(long *)(unaff_x20 + 0x140);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4e10;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
      iVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(float *)(lVar8 + uVar11 * 4 + 0x20) = ((float)iVar3 + 1.0) * 0.5;
      lVar8 = *(long *)(unaff_x20 + 0x148);
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da4f14;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_06da4ea8;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
      uVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_06da4f18;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_06da4f14;
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar4;
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(unaff_x20 + 200));
  }
  return;
}


