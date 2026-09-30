/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 060e425c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__RetrieveSpaceQueryResults(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x25;
  int iVar9;
  ushort uVar10;
  undefined2 uVar11;
  float fVar12;
  undefined2 uVar13;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  uint uStack000000000000001c;
  
  do {
    if ((unaff_x20 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_060e4558;
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x25) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_060e42b0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30();
LAB_060e42b0:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) == 0) goto LAB_060e42c4;
    }
    else {
LAB_060e42c4:
      iVar9 = unaff_x21[4];
      iVar1 = *unaff_x21;
      iVar3 = unaff_x21[1];
      iVar2 = unaff_x21[2];
      iVar4 = unaff_x21[3];
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (unaff_w22 < 2) {
        iVar9 = iVar1;
        if ((unaff_w22 == 0) || (iVar9 = iVar3, unaff_w22 == 1)) goto joined_r0x060e4380;
      }
      else if ((unaff_w22 == 4) ||
              ((iVar9 = iVar4, unaff_w22 == 3 || (iVar9 = iVar2, unaff_w22 == 2)))) {
joined_r0x060e4380:
        if (iVar9 != 0) {
          iVar9 = unaff_x21[4];
          iVar1 = *unaff_x21;
          iVar3 = unaff_x21[1];
          iVar2 = unaff_x21[2];
          iVar4 = unaff_x21[3];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (unaff_w22 < 2) {
            iVar9 = iVar1;
            if ((unaff_w22 == 0) || (iVar9 = iVar3, unaff_w22 == 1)) goto LAB_060e4394;
          }
          else if ((unaff_w22 == 4) ||
                  ((iVar9 = iVar4, unaff_w22 == 3 || (iVar9 = iVar2, unaff_w22 == 2)))) {
LAB_060e4394:
            if (iVar9 == 1) {
              if (unaff_x19 == (long *)0x0) goto LAB_060e4558;
              lVar6 = *unaff_x19;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x25) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto LAB_060e4448;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_0367cd30();
LAB_060e4448:
              fVar12 = (float)(*(code *)*puVar5)();
              if (unaff_s8 <= fVar12) {
                unaff_s8 = fVar12;
              }
              goto LAB_060e44ec;
            }
          }
          iVar9 = unaff_x21[4];
          iVar1 = *unaff_x21;
          iVar3 = unaff_x21[1];
          iVar2 = unaff_x21[2];
          iVar4 = unaff_x21[3];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (unaff_w22 < 2) {
            iVar9 = iVar1;
            if ((unaff_w22 != 0) && (iVar9 = iVar3, unaff_w22 != 1)) break;
          }
          else if ((unaff_w22 != 4) &&
                  ((iVar9 = iVar4, unaff_w22 != 3 && (iVar9 = iVar2, unaff_w22 != 2)))) break;
          if (iVar9 == 2) {
            if (unaff_x19 == (long *)0x0) {
LAB_060e4558:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar6 = *unaff_x19;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x25) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_060e44cc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_0367cd30();
LAB_060e44cc:
            fVar12 = (float)(*(code *)*puVar5)();
            uStack000000000000001c = 1;
            if (fVar12 <= unaff_s9) {
              unaff_s9 = fVar12;
            }
          }
        }
      }
    }
LAB_060e44ec:
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 != 5);
  if ((uStack000000000000001c & 1) == 0) {
    unaff_s9 = 0.0;
  }
  uVar10 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)in_stack_00000008 >> 0x20) == 2),
                               CONCAT24(-(ushort)((int)in_stack_00000008 == 2),
                                        CONCAT22(-(ushort)((int)((ulong)in_stack_00000000 >> 0x20)
                                                          == 2),
                                                 -(ushort)((int)in_stack_00000000 == 2)))),2);
  uVar11 = SUB42(unaff_s9,0);
  uVar13 = (undefined2)((uint)unaff_s9 >> 0x10);
  if ((uVar10 & 1) == 0 && iStack0000000000000018 != 2) {
    uVar11 = SUB42(unaff_s8,0);
    uVar13 = (undefined2)((uint)unaff_s8 >> 0x10);
  }
  return CONCAT22(uVar13,uVar11);
}


