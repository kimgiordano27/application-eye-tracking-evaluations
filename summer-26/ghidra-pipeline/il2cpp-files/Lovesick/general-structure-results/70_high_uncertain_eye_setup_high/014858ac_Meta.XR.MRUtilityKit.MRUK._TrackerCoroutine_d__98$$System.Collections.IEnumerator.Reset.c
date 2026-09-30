/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__98$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 014858ac
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


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__98__System_Collections_IEnumerator_Reset
               (code *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  ulong uVar12;
  long unaff_x24;
  ulong uVar13;
  long unaff_x25;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while (uVar1 = (*param_1)(), unaff_x25 != 0) {
    if (*(uint *)(unaff_x25 + 0x18) < 2) {
LAB_014876c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(unaff_x25 + 0x24) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485930;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485930:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x28) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_014859c0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014859c0:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x2c) = uVar1;
    uVar8 = (ulong)*(uint *)(unaff_x20 + 200);
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)unaff_w23) {
      uVar12 = 0;
      do {
        if (0 < (int)uVar8) {
          uVar13 = 0;
          do {
            lVar7 = *(long *)(unaff_x20 + 0xe0);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01485a70;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485a70:
            uVar1 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
            lVar7 = *(long *)(unaff_x20 + 0xe8);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01485b04;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485b04:
            uVar1 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
            lVar7 = *(long *)(unaff_x20 + 0xf0);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x22;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar5 = *unaff_x22;
            }
            lVar6 = *unaff_x19;
            lVar5 = **(long **)(lVar5 + 0xb8);
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01485bb4;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485bb4:
            uVar2 = (*(code *)*puVar4)();
            if (lVar5 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_014876c8;
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) =
                 *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
            lVar7 = *(long *)(unaff_x20 + 0xf8);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01485c60;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485c60:
            uVar1 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
            lVar7 = *(long *)(unaff_x20 + 0x100);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01485cf4;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485cf4:
            iVar3 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(bool *)(lVar7 + uVar13 + 0x20) = iVar3 == 1;
            lVar7 = *(long *)(unaff_x20 + 0x100);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            if (*(char *)(lVar7 + uVar13 + 0x20) == '\0') {
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_014863a4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_014863a4:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01486448;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486448:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x24) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_014864f0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_014864f0:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x28) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x128);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01486580;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486580:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x130);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01486614;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486614:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x110);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = 0;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              uVar2 = *(uint *)(lVar7 + 0x18);
              if ((uVar2 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0, uVar2 == 1))
              goto LAB_014876c8;
              fVar14 = 0.0;
              *(undefined4 *)(lVar7 + 0x24) = 0;
              if (uVar2 < 3) goto LAB_014876c8;
            }
            else {
              lVar7 = *(long *)(unaff_x20 + 0x110);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01485e3c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485e3c:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x108);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01485ed0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485ed0:
              iVar3 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(bool *)(lVar7 + uVar13 + 0x20) = iVar3 == 1;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01485f84;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485f84:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01486028;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486028:
              uVar1 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x24) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + 0x28) = 0;
              lVar7 = *(long *)(unaff_x20 + 0x110);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              if (*(int *)(lVar7 + uVar13 * 4 + 0x20) == 2) {
                lVar7 = *(long *)(unaff_x20 + 0x108);
                if (lVar7 == 0) goto LAB_014876cc;
                if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
                lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_014876cc;
                if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
                if (*(char *)(lVar7 + uVar13 + 0x20) != '\0') goto LAB_01486108;
                lVar7 = *(long *)(unaff_x20 + 0x128);
                if (lVar7 == 0) goto LAB_014876cc;
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                if (uVar8 <= uVar12) goto LAB_014876c8;
                lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_014876cc;
                uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                if (uVar9 <= uVar13) goto LAB_014876c8;
                uVar1 = 0xc;
                uVar11 = 8;
              }
              else {
LAB_01486108:
                lVar7 = *(long *)(unaff_x20 + 0x128);
                if (lVar7 == 0) goto LAB_014876cc;
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                if (uVar8 <= uVar12) goto LAB_014876c8;
                lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_014876cc;
                uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                if (uVar9 <= uVar13) goto LAB_014876c8;
                uVar1 = 0xd;
                uVar11 = 7;
              }
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar11;
              lVar7 = *(long *)(unaff_x20 + 0x130);
              if (lVar7 == 0) goto LAB_014876cc;
              if (((*(uint *)(lVar7 + 0x18) <= uVar12) || (uVar8 <= uVar12)) || (uVar9 <= uVar13))
              goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_0148620c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148620c:
              iVar3 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
              *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_014862b8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_014862b8:
              iVar3 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
              *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
              lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
              lVar5 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_01486368;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486368:
              iVar3 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_014876cc;
              if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
              fVar14 = (float)iVar3 * unaff_s10;
            }
            *(float *)(lVar7 + 0x28) = fVar14;
            lVar7 = *(long *)(unaff_x20 + 0x138);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_0148673c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148673c:
            uVar1 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
            lVar7 = *(long *)(unaff_x20 + 0x140);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_014867d0;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_014867d0:
            iVar3 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(float *)(lVar7 + uVar13 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
            lVar7 = *(long *)(unaff_x20 + 0x148);
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_014876c8;
            lVar5 = *unaff_x19;
            lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                  goto LAB_01486870;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486870:
            uVar1 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_014876cc;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014876c8;
            *(undefined4 *)(lVar7 + uVar13 * 4 + 0x20) = uVar1;
            uVar8 = (ulong)*(int *)(unaff_x20 + 200);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)uVar8);
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == 2) {
          return;
        }
      } while( true );
    }
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    unaff_x24 = (long)(int)unaff_w23;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485814;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485814:
    uVar1 = (*(code *)*puVar4)();
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x20) = uVar1;
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    unaff_x25 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_014858a0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014858a0:
    param_1 = (code *)*puVar4;
  }
LAB_014876cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


