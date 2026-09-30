/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 090bf65c
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


float OVRPermissionsRequester__RequestPermissions
                (undefined8 param_1,int *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long unaff_x22;
  long unaff_x24;
  long *plVar12;
  int iVar13;
  ushort uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  uint uStack000000000000001c;
  
  plVar12 = *(long **)(unaff_x24 + 0x960);
  if ((*(byte *)(unaff_x22 + 0x476) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75960);
    FUN_04947ee4(PTR_DAT_0ac77098);
    *(undefined1 *)(unaff_x22 + 0x476) = 1;
  }
  uVar17 = *(undefined8 *)(param_2 + 2);
  uVar16 = *(undefined8 *)param_2;
  iVar5 = param_2[4];
  if (*(int *)(*plVar12 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar6 = PTR_DAT_0ac77098;
  fVar18 = 0.0;
  uStack000000000000001c = 0;
  fVar19 = 1.0;
  iVar11 = 0;
  do {
    if ((param_3 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_090bf9c8;
      lVar8 = *param_4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_090bf720;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(param_4,*(long *)puVar6,0);
LAB_090bf720:
      uVar9 = (*(code *)*puVar7)(param_4,iVar11,puVar7[1]);
      if ((uVar9 & 1) == 0) goto LAB_090bf734;
    }
    else {
LAB_090bf734:
      iVar13 = param_2[4];
      iVar1 = *param_2;
      iVar3 = param_2[1];
      iVar2 = param_2[2];
      iVar4 = param_2[3];
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (iVar11 < 2) {
        iVar13 = iVar1;
        if ((iVar11 == 0) || (iVar13 = iVar3, iVar11 == 1)) goto joined_r0x090bf7f0;
      }
      else if ((iVar11 == 4) || ((iVar13 = iVar4, iVar11 == 3 || (iVar13 = iVar2, iVar11 == 2)))) {
joined_r0x090bf7f0:
        if (iVar13 != 0) {
          iVar13 = param_2[4];
          iVar1 = *param_2;
          iVar3 = param_2[1];
          iVar2 = param_2[2];
          iVar4 = param_2[3];
          if (*(int *)(*plVar12 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if (iVar11 < 2) {
            iVar13 = iVar1;
            if ((iVar11 == 0) || (iVar13 = iVar3, iVar11 == 1)) goto LAB_090bf804;
          }
          else if ((iVar11 == 4) || ((iVar13 = iVar4, iVar11 == 3 || (iVar13 = iVar2, iVar11 == 2)))
                  ) {
LAB_090bf804:
            if (iVar13 == 1) {
              if (param_4 == (long *)0x0) goto LAB_090bf9c8;
              lVar8 = *param_4;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
                    puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_090bf8b8;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_04980e68(param_4,*(long *)puVar6,2);
LAB_090bf8b8:
              fVar15 = (float)(*(code *)*puVar7)(param_4,iVar11,puVar7[1]);
              if (fVar18 <= fVar15) {
                fVar18 = fVar15;
              }
              goto LAB_090bf95c;
            }
          }
          iVar13 = param_2[4];
          iVar1 = *param_2;
          iVar3 = param_2[1];
          iVar2 = param_2[2];
          iVar4 = param_2[3];
          if (*(int *)(*plVar12 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if (iVar11 < 2) {
            iVar13 = iVar1;
            if ((iVar11 != 0) && (iVar13 = iVar3, iVar11 != 1)) break;
          }
          else if ((iVar11 != 4) && ((iVar13 = iVar4, iVar11 != 3 && (iVar13 = iVar2, iVar11 != 2)))
                  ) break;
          if (iVar13 == 2) {
            if (param_4 == (long *)0x0) {
LAB_090bf9c8:
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            lVar8 = *param_4;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_090bf93c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_04980e68(param_4,*(long *)puVar6,2);
LAB_090bf93c:
            fVar15 = (float)(*(code *)*puVar7)(param_4,iVar11,puVar7[1]);
            uStack000000000000001c = 1;
            if (fVar15 <= fVar19) {
              fVar19 = fVar15;
            }
          }
        }
      }
    }
LAB_090bf95c:
    iVar11 = iVar11 + 1;
                    /* try { // try from 090bf960 to 091bfa63 has its CatchHandler @ 090bf960
                       catch() { ... } // from try @ 090bf960 with catch @ 090bf960
                       catch() { ... } // from try @ 090bfa94 with catch @ 090bf960
                       catch() { ... } // from try @ 090bfac4 with catch @ 090bf960
                       catch() { ... } // from try @ 090bfb00 with catch @ 090bf960
                       catch() { ... } // from try @ 090bfb24 with catch @ 090bf960 */
  } while (iVar11 != 5);
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


