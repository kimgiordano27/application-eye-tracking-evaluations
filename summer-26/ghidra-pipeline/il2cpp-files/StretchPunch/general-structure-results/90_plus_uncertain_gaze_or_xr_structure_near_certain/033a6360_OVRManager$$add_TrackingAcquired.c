/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 033a6360
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int OVRManager__add_TrackingAcquired(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar17;
  int unaff_w22;
  int unaff_w23;
  long unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_8436);
  *(undefined1 *)(unaff_x21 + 0x87a) = 1;
  iVar8 = unaff_w23 - unaff_w22;
  iVar10 = iVar8;
  if (unaff_x20 != unaff_x19) {
    if (unaff_w22 <= unaff_w23) {
      unaff_w23 = unaff_w22;
    }
    uVar11 = FUN_033dc8e0(unaff_w23,0);
    lVar12 = FUN_033dc8e0(0,0);
    uVar13 = FUN_033dc8f8(uVar11,0);
    if (3 < uVar13) {
      uVar13 = FUN_0331bf08(0);
      if ((uVar13 & 1) != 0) {
        uVar13 = FUN_033dc8f8(uVar11,0);
        puVar9 = StringLiteral_8436;
        if (*(int *)(*(long *)StringLiteral_8436 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8436);
        }
        lVar17 = *(long *)StringLiteral_8434;
        lVar14 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01dde7f8();
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01dde7f8();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar14 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01dde7f8();
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01dde7f8();
        }
        if ((ulong)(long)**(int **)(lVar14 + 0xb8) <= uVar13) {
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar17 = *(long *)StringLiteral_8434;
          lVar14 = *(long *)(lVar17 + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01dde7f8();
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01dde7f8();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar14 = *(long *)(lVar17 + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01dde7f8();
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01dde7f8();
          }
          uVar15 = FUN_033dc90c(uVar11,**(undefined4 **)(lVar14 + 0xb8),0);
          do {
            puVar1 = (undefined8 *)(unaff_x20 + lVar12 * 2);
            puVar2 = (undefined8 *)(unaff_x19 + lVar12 * 2);
            uVar3 = *puVar1;
            uVar5 = puVar1[1];
            uVar4 = *puVar2;
            uVar6 = puVar2[1];
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar17 = *(long *)StringLiteral_8435;
            lVar14 = *(long *)(lVar17 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar14 = *(long *)(lVar17 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar17 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x58);
            lVar14 = *(long *)(lVar17 + 0x20);
            in_stack_00000018 = uVar3;
            in_stack_00000020 = uVar5;
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar14 = *(long *)(lVar17 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            uVar13 = FUN_028549c8(&stack0x00000018,uVar4,uVar6,
                                  *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x38));
            if ((uVar13 & 1) == 0) break;
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar17 = *(long *)StringLiteral_8434;
            lVar14 = *(long *)(lVar17 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar14 = *(long *)(lVar17 + 0x20);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01dde7f8();
            }
            lVar12 = FUN_033dc904(lVar12,**(undefined4 **)(lVar14 + 0xb8),0);
            uVar13 = FUN_033dc8f8(uVar15,0);
            uVar16 = FUN_033dc8f8(lVar12,0);
          } while (uVar16 <= uVar13);
        }
      }
      uVar13 = FUN_033dc8f8(uVar11,0);
      uVar15 = FUN_033dc904(lVar12,4,0);
      uVar16 = FUN_033dc8f8(uVar15,0);
      if (uVar16 <= uVar13) {
        do {
          uVar13 = OVRPlugin_UnityOpenXR__OnSessionStateChange
                             (*(undefined8 *)(unaff_x20 + lVar12 * 2),
                              *(undefined8 *)(unaff_x19 + lVar12 * 2),0);
          if ((uVar13 & 1) != 0) break;
          lVar12 = FUN_033dc904(lVar12,4,0);
          uVar13 = FUN_033dc8f8(uVar11,0);
          uVar15 = FUN_033dc904(lVar12,4,0);
          uVar16 = FUN_033dc8f8(uVar15,0);
        } while (uVar16 <= uVar13);
      }
    }
    uVar13 = FUN_033dc8f8(uVar11,0);
    uVar15 = FUN_033dc904(lVar12,2,0);
    uVar16 = FUN_033dc8f8(uVar15,0);
    if ((uVar16 <= uVar13) && (*(int *)(unaff_x20 + lVar12 * 2) == *(int *)(unaff_x19 + lVar12 * 2))
       ) {
      lVar12 = FUN_033dc904(lVar12,2,0);
    }
    uVar13 = FUN_033dc8f8(lVar12,0);
    uVar16 = FUN_033dc8f8(uVar11,0);
    puVar9 = StringLiteral_1167;
    if (uVar13 < uVar16) {
      do {
        uVar7 = *(undefined2 *)(unaff_x19 + lVar12 * 2);
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar10 = FUN_032931ec(unaff_x20 + lVar12 * 2,uVar7,0);
        if (iVar10 != 0) break;
        lVar12 = FUN_033dc904(lVar12,1,0);
        uVar13 = FUN_033dc8f8(lVar12,0);
        uVar16 = FUN_033dc8f8(uVar11,0);
        iVar10 = iVar8;
      } while (uVar13 < uVar16);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}


