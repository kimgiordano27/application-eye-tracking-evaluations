/*
FUNCTION_NAME: OVRPlugin.Media$$Shutdown
ENTRY_POINT: 05be39f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_Media__Shutdown(undefined8 param_1,int *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  uint uStack000000000000001c;
  
  puVar6 = PTR_DAT_07112240;
  if ((DAT_0754ecee & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112240);
    FUN_03188a78(PTR_DAT_07114768);
    DAT_0754ecee = 1;
  }
  uVar17 = *(undefined8 *)(param_2 + 2);
  uVar16 = *(undefined8 *)param_2;
  iVar5 = param_2[4];
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar7 = PTR_DAT_07114768;
  fVar18 = 0.0;
  uStack000000000000001c = 0;
  fVar19 = 1.0;
  iVar12 = 0;
  do {
    if ((param_3 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_05be3d70;
      lVar9 = *param_4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05be3ac8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(param_4,*(long *)puVar7,0);
LAB_05be3ac8:
      uVar10 = (*(code *)*puVar8)(param_4,iVar12,puVar8[1]);
      if ((uVar10 & 1) == 0) goto LAB_05be3adc;
    }
    else {
LAB_05be3adc:
      iVar13 = param_2[4];
      iVar1 = *param_2;
      iVar3 = param_2[1];
      iVar2 = param_2[2];
      iVar4 = param_2[3];
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (iVar12 < 2) {
        iVar13 = iVar1;
        if ((iVar12 == 0) || (iVar13 = iVar3, iVar12 == 1)) goto joined_r0x05be3b98;
      }
      else if ((iVar12 == 4) || ((iVar13 = iVar4, iVar12 == 3 || (iVar13 = iVar2, iVar12 == 2)))) {
joined_r0x05be3b98:
        if (iVar13 != 0) {
          iVar13 = param_2[4];
          iVar1 = *param_2;
          iVar3 = param_2[1];
          iVar2 = param_2[2];
          iVar4 = param_2[3];
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (iVar12 < 2) {
            iVar13 = iVar1;
            if ((iVar12 == 0) || (iVar13 = iVar3, iVar12 == 1)) goto LAB_05be3bac;
          }
          else if ((iVar12 == 4) || ((iVar13 = iVar4, iVar12 == 3 || (iVar13 = iVar2, iVar12 == 2)))
                  ) {
LAB_05be3bac:
            if (iVar13 == 1) {
              if (param_4 == (long *)0x0) goto LAB_05be3d70;
              lVar9 = *param_4;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_05be3c60;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_031c0d08(param_4,*(long *)puVar7,2);
LAB_05be3c60:
              fVar15 = (float)(*(code *)*puVar8)(param_4,iVar12,puVar8[1]);
              if (fVar18 <= fVar15) {
                fVar18 = fVar15;
              }
              goto LAB_05be3d04;
            }
          }
          iVar13 = param_2[4];
          iVar1 = *param_2;
          iVar3 = param_2[1];
          iVar2 = param_2[2];
          iVar4 = param_2[3];
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (iVar12 < 2) {
            iVar13 = iVar1;
            if ((iVar12 != 0) && (iVar13 = iVar3, iVar12 != 1)) break;
          }
          else if ((iVar12 != 4) && ((iVar13 = iVar4, iVar12 != 3 && (iVar13 = iVar2, iVar12 != 2)))
                  ) break;
          if (iVar13 == 2) {
            if (param_4 == (long *)0x0) {
LAB_05be3d70:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar9 = *param_4;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_05be3ce4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_031c0d08(param_4,*(long *)puVar7,2);
LAB_05be3ce4:
            fVar15 = (float)(*(code *)*puVar8)(param_4,iVar12,puVar8[1]);
            uStack000000000000001c = 1;
            if (fVar15 <= fVar19) {
              fVar19 = fVar15;
            }
          }
        }
      }
    }
LAB_05be3d04:
    iVar12 = iVar12 + 1;
  } while (iVar12 != 5);
  if ((uStack000000000000001c & 1) == 0) {
    fVar19 = 0.0;
  }
  uVar14 = NEON_umaxv(CONCAT26(-(ushort)((int)((ulong)uVar17 >> 0x20) == 2),
                               CONCAT24(-(ushort)((int)uVar17 == 2),
                                        CONCAT22(-(ushort)((int)((ulong)uVar16 >> 0x20) == 2),
                                                 -(ushort)((int)uVar16 == 2)))),2);
  if ((uVar14 & 1) == 0 && iVar5 != 2) {
    fVar19 = fVar18;
  }
  return fVar19;
}


