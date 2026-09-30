/*
FUNCTION_NAME: FUN_033a62fc
ENTRY_POINT: 033a62fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int FUN_033a62fc(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if ((DAT_044a687a & 1) == 0) {
    FUN_01d7d918(StringLiteral_1167);
    FUN_01d7d918(StringLiteral_8434);
    FUN_01d7d918(StringLiteral_8435);
    FUN_01d7d918(StringLiteral_8436);
    DAT_044a687a = 1;
  }
  iVar8 = param_2 - param_4;
  iVar11 = iVar8;
  if (param_1 != param_3) {
    if (param_4 <= param_2) {
      param_2 = param_4;
    }
    uVar12 = FUN_033dc8e0(param_2,0);
    lVar13 = FUN_033dc8e0(0,0);
    uVar14 = FUN_033dc8f8(uVar12,0);
    if (3 < uVar14) {
      uVar14 = FUN_0331bf08(0);
      if ((uVar14 & 1) != 0) {
        uVar14 = FUN_033dc8f8(uVar12,0);
        puVar10 = StringLiteral_8436;
        if (*(int *)(*(long *)StringLiteral_8436 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8436);
        }
        lVar18 = *(long *)StringLiteral_8434;
        lVar15 = *(long *)(lVar18 + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01dde7f8();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01dde7f8();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar15 = *(long *)(lVar18 + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01dde7f8();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01dde7f8();
        }
        if ((ulong)(long)**(int **)(lVar15 + 0xb8) <= uVar14) {
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar18 = *(long *)StringLiteral_8434;
          lVar15 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01dde7f8();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01dde7f8();
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar15 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01dde7f8();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01dde7f8();
          }
          uVar16 = FUN_033dc90c(uVar12,**(undefined4 **)(lVar15 + 0xb8),0);
          do {
            puVar1 = (undefined8 *)(param_1 + lVar13 * 2);
            puVar2 = (undefined8 *)(param_3 + lVar13 * 2);
            uVar3 = *puVar1;
            uVar5 = puVar1[1];
            uVar4 = *puVar2;
            uVar6 = puVar2[1];
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar18 = *(long *)StringLiteral_8435;
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar18 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
            lVar15 = *(long *)(lVar18 + 0x20);
            local_78 = uVar3;
            uStack_70 = uVar5;
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            uVar14 = FUN_028549c8(&local_78,uVar4,uVar6,
                                  *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38));
            if ((uVar14 & 1) == 0) break;
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar18 = *(long *)StringLiteral_8434;
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01dde7f8();
            }
            lVar13 = FUN_033dc904(lVar13,**(undefined4 **)(lVar15 + 0xb8),0);
            uVar14 = FUN_033dc8f8(uVar16,0);
            uVar17 = FUN_033dc8f8(lVar13,0);
          } while (uVar17 <= uVar14);
        }
      }
      uVar14 = FUN_033dc8f8(uVar12,0);
      uVar16 = FUN_033dc904(lVar13,4,0);
      uVar17 = FUN_033dc8f8(uVar16,0);
      if (uVar17 <= uVar14) {
        do {
          uVar14 = OVRPlugin_UnityOpenXR__OnSessionStateChange
                             (*(undefined8 *)(param_1 + lVar13 * 2),
                              *(undefined8 *)(param_3 + lVar13 * 2),0);
          if ((uVar14 & 1) != 0) break;
          lVar13 = FUN_033dc904(lVar13,4,0);
          uVar14 = FUN_033dc8f8(uVar12,0);
          uVar16 = FUN_033dc904(lVar13,4,0);
          uVar17 = FUN_033dc8f8(uVar16,0);
        } while (uVar17 <= uVar14);
      }
    }
    uVar14 = FUN_033dc8f8(uVar12,0);
    uVar16 = FUN_033dc904(lVar13,2,0);
    uVar17 = FUN_033dc8f8(uVar16,0);
    if ((uVar17 <= uVar14) && (*(int *)(param_1 + lVar13 * 2) == *(int *)(param_3 + lVar13 * 2))) {
      lVar13 = FUN_033dc904(lVar13,2,0);
    }
    uVar14 = FUN_033dc8f8(lVar13,0);
    uVar17 = FUN_033dc8f8(uVar12,0);
    puVar10 = StringLiteral_1167;
    if (uVar14 < uVar17) {
      do {
        uVar7 = *(undefined2 *)(param_3 + lVar13 * 2);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar11 = FUN_032931ec(param_1 + lVar13 * 2,uVar7,0);
        if (iVar11 != 0) break;
        lVar13 = FUN_033dc904(lVar13,1,0);
        uVar14 = FUN_033dc8f8(lVar13,0);
        uVar17 = FUN_033dc8f8(uVar12,0);
        iVar11 = iVar8;
      } while (uVar14 < uVar17);
    }
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}


