/*
FUNCTION_NAME: FUN_04ed8c24
ENTRY_POINT: 04ed8c24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ed8ffc) */

long FUN_04ed8c24(long *param_1,long param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  long local_180;
  undefined8 *local_178;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  long local_110;
  long lStack_108;
  long local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_066c9599 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066c9599 = 1;
  }
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var;
  puVar2 = PTR_DAT_06312520;
  local_110 = 0;
  lStack_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0;
  local_c8 = 0;
  fStack_d0 = 0.0;
  local_cc = 0.0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_120 = 0;
  if (param_2 != 0) {
    FUN_03939f50(&local_180,param_2,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var);
    memcpy(&local_f0,&local_180,0x50);
    puVar3 = PTR_DAT_06312c90;
    local_180 = 0;
    lVar10 = 0;
    fVar15 = 3.4028235e+38;
    fVar16 = 3.4028235e+38;
    local_178 = &local_f0;
LAB_04ed8d3c:
    uVar8 = FUN_0476d0f8(&local_f0,*(undefined8 *)puVar4);
    uVar6 = local_c8;
    fVar1 = local_cc;
    fVar14 = fStack_d0;
    fVar13 = fStack_d4;
    fVar12 = fStack_d8;
    lVar5 = local_e0;
    lVar11 = local_180;
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_04ed91e8((int)param_1[0x2a],*(undefined4 *)((long)param_1 + 0x154),
                           (int)param_1[0x2b],param_1,local_e0);
      if (((uVar8 & 1) != 0) ||
         (uVar8 = FUN_04ed91e8(*(undefined4 *)((long)param_1 + 0x15c),(int)param_1[0x2c],
                               *(undefined4 *)((long)param_1 + 0x164),param_1,lVar5),
         (uVar8 & 1) != 0)) {
        fVar17 = *(float *)(param_1 + 0x2a);
        uVar18 = *(undefined8 *)((long)param_1 + 0x154);
        if (DAT_066c1d9c == '\0') {
          FUN_02b3c81c(puVar3);
          DAT_066c1d9c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar17 = fVar17 - fVar12;
        fVar13 = (float)uVar18 - fVar13;
        fVar14 = (float)((ulong)uVar18 >> 0x20) - fVar14;
        if ((SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar14 * fVar14) != 0.0) &&
           (0.0 < (float)((ulong)uVar6 >> 0x20) * fVar14 + fVar1 * fVar17 + (float)uVar6 * fVar13))
        {
          fVar12 = (float)FUN_04ed92d8((int)param_1[0x2a],*(undefined4 *)((long)param_1 + 0x154),
                                       (int)param_1[0x2b],param_1,lVar5);
          lVar11 = param_1[0x2d];
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar8 = FUN_05c8c45c(lVar11,lVar5,0);
          if ((uVar8 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            pfVar9 = (float *)(lVar5 + 0xe0);
          }
          else {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            pfVar9 = (float *)(lVar5 + 0xd8);
          }
          if (fVar12 <= *pfVar9) {
            fVar13 = (float)FUN_04ed92f8((int)param_1[0x2a],*(undefined4 *)((long)param_1 + 0x154),
                                         (int)param_1[0x2b],param_1,lVar5);
            lVar11 = param_1[0x2d];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar8 = FUN_05c8c45c(lVar11,lVar5,0);
            lVar11 = 0xdc;
            if ((uVar8 & 1) == 0) {
              lVar11 = 0xe4;
            }
            if (fVar13 <= *(float *)(lVar5 + lVar11)) {
              lVar11 = lVar10;
              fVar14 = fVar15;
              fVar1 = fVar16;
              if (ABS(fVar12 - fVar16) < *(float *)(param_1 + 0x25)) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar8 = FUN_05c8c45c(lVar10,0,0);
                if ((uVar8 & 1) != 0) {
                  iVar7 = (**(code **)(*param_1 + 0x548))
                                    (param_1,lVar5,lVar10,*(undefined8 *)(*param_1 + 0x550));
                  if (0 < iVar7) {
                    lVar11 = lVar5;
                    fVar1 = fVar12;
                    fVar14 = fVar13;
                  }
                  lVar10 = lVar11;
                  fVar15 = fVar14;
                  fVar16 = fVar1;
                  if (iVar7 != 0) goto LAB_04ed8d3c;
                }
              }
              lVar10 = lVar11;
              fVar15 = fVar14;
              fVar16 = fVar1;
              if (fVar12 <= fVar1 + *(float *)(lVar5 + 0x110)) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar8 = FUN_05c8e378(lVar11,0,0);
                lVar10 = lVar5;
                fVar15 = fVar13;
                fVar16 = fVar12;
                if ((uVar8 & 1) == 0) {
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  if ((fVar1 - *(float *)(lVar11 + 0x110) <= fVar12) &&
                     (lVar10 = lVar11, fVar15 = fVar14, fVar16 = fVar1, fVar13 < fVar14)) {
                    lVar10 = lVar5;
                    fVar15 = fVar13;
                    fVar16 = fVar12;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04ed8d3c;
    }
    FUN_0476d0f4(local_178,
                 *(undefined8 *)UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar11);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05c8c45c(lVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return lVar10;
    }
    if (param_1[0x40] != 0) {
      FUN_04edad9c(param_1[0x40],lVar10,&local_110,0);
      if (param_1[0x40] != 0) {
        FUN_04edab84(param_1[0x40],lVar10,&local_130,0);
        *(undefined4 *)((long)param_1 + 300) = local_130;
        param_1[0x27] = local_110;
        param_1[0x26] = CONCAT44(uStack_128,uStack_12c);
        param_1[0x29] = local_100;
        param_1[0x28] = lStack_108;
        return lVar10;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


