/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Shutdown
ENTRY_POINT: 05be3ab4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
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
  
code_r0x05be3ab4:
  puVar5 = (undefined8 *)FUN_031c0d08();
  do {
    uVar6 = (*(code *)*puVar5)();
    if ((uVar6 & 1) != 0) goto LAB_05be3d04;
    do {
      iVar9 = unaff_x21[4];
      iVar1 = *unaff_x21;
      iVar3 = unaff_x21[1];
      iVar2 = unaff_x21[2];
      iVar4 = unaff_x21[3];
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (unaff_w22 < 2) {
        iVar9 = iVar1;
        if ((unaff_w22 == 0) || (iVar9 = iVar3, unaff_w22 == 1)) goto joined_r0x05be3b98;
      }
      else if ((unaff_w22 == 4) ||
              ((iVar9 = iVar4, unaff_w22 == 3 || (iVar9 = iVar2, unaff_w22 == 2)))) {
joined_r0x05be3b98:
        if (iVar9 != 0) {
          iVar9 = unaff_x21[4];
          iVar1 = *unaff_x21;
          iVar3 = unaff_x21[1];
          iVar2 = unaff_x21[2];
          iVar4 = unaff_x21[3];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (unaff_w22 < 2) {
            iVar9 = iVar1;
            if ((unaff_w22 == 0) || (iVar9 = iVar3, unaff_w22 == 1)) goto LAB_05be3bac;
          }
          else if ((unaff_w22 == 4) ||
                  ((iVar9 = iVar4, unaff_w22 == 3 || (iVar9 = iVar2, unaff_w22 == 2)))) {
LAB_05be3bac:
            if (iVar9 == 1) {
              if (unaff_x19 != (long *)0x0) {
                lVar7 = *unaff_x19;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *unaff_x25) {
                      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                      goto LAB_05be3c60;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar6 != 0);
                }
                puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3c60:
                fVar12 = (float)(*(code *)*puVar5)();
                if (unaff_s8 <= fVar12) {
                  unaff_s8 = fVar12;
                }
                goto LAB_05be3d04;
              }
              goto LAB_05be3d70;
            }
          }
          iVar9 = unaff_x21[4];
          iVar1 = *unaff_x21;
          iVar3 = unaff_x21[1];
          iVar2 = unaff_x21[2];
          iVar4 = unaff_x21[3];
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (unaff_w22 < 2) {
            iVar9 = iVar1;
            if ((unaff_w22 != 0) && (iVar9 = iVar3, unaff_w22 != 1)) goto LAB_05be3d10;
          }
          else if ((unaff_w22 != 4) &&
                  ((iVar9 = iVar4, unaff_w22 != 3 && (iVar9 = iVar2, unaff_w22 != 2))))
          goto LAB_05be3d10;
          if (iVar9 == 2) {
            if (unaff_x19 == (long *)0x0) goto LAB_05be3d70;
            lVar7 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x25) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_05be3ce4;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3ce4:
            fVar12 = (float)(*(code *)*puVar5)();
            uStack000000000000001c = 1;
            if (fVar12 <= unaff_s9) {
              unaff_s9 = fVar12;
            }
          }
        }
      }
LAB_05be3d04:
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == 5) {
LAB_05be3d10:
        if ((uStack000000000000001c & 1) == 0) {
          unaff_s9 = 0.0;
        }
        uVar10 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)in_stack_00000008 >> 0x20) == 2),
                                     CONCAT24(-(ushort)((int)in_stack_00000008 == 2),
                                              CONCAT22(-(ushort)((int)((ulong)in_stack_00000000 >>
                                                                      0x20) == 2),
                                                       -(ushort)((int)in_stack_00000000 == 2)))),2);
        uVar11 = SUB42(unaff_s9,0);
        uVar13 = (undefined2)((uint)unaff_s9 >> 0x10);
        if ((uVar10 & 1) == 0 && iStack0000000000000018 != 2) {
          uVar11 = SUB42(unaff_s8,0);
          uVar13 = (undefined2)((uint)unaff_s8 >> 0x10);
        }
        return CONCAT22(uVar13,uVar11);
      }
    } while ((unaff_x20 & 1) != 0);
    if (unaff_x19 == (long *)0x0) {
LAB_05be3d70:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar7 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 == 0) goto code_r0x05be3ab4;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != *unaff_x25) {
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
      if (uVar6 == 0) goto code_r0x05be3ab4;
    }
    puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
}


