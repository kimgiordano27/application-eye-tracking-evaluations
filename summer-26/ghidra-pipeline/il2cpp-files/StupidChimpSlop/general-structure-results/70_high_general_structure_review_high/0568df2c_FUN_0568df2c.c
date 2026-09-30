/*
FUNCTION_NAME: FUN_0568df2c
ENTRY_POINT: 0568df2c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0568e480) */

void FUN_0568df2c(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_06a548ae & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var);
    FUN_02d4dc40(PlayFab_EconomyModels_DeleteItemRequest_var);
    FUN_02d4dc40(PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_DeleteInventoryCollectionResponse_var);
    FUN_02d4dc40(PTR_DAT_06646708);
    DAT_06a548ae = 1;
  }
  puVar2 = PTR_DAT_066462a0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    uVar15 = *(undefined8 *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var;
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar15 = FUN_050121a8(uVar15,0);
    uVar7 = FUN_0501afe8(uVar14,uVar15,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_0568e474;
      uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
      uVar15 = *(undefined8 *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar15 = FUN_050121a8(uVar15,0);
      uVar7 = FUN_0501afe8(uVar14,uVar15,0);
      if ((uVar7 & 1) == 0) {
        if (param_3 == (long *)0x0) goto LAB_0568e474;
        goto LAB_0568e0c0;
      }
    }
    plVar8 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
    if (plVar8 != (long *)0x0) {
      if ((param_3 != (long *)0x0) &&
         (lVar9 = thunk_FUN_02d8a53c(param_3,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
        uVar14 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar14,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar8[4] = (long)param_3;
      thunk_FUN_02dc1ef0(plVar8 + 4,param_3);
      param_3 = plVar8;
LAB_0568e0c0:
      lVar9 = *(long *)(puVar2 + 0xa0);
      bVar1 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(param_3);
      }
      plVar8 = (long *)FUN_05028464(param_3,0);
      puVar6 = PlayFab_EconomyModels_DeleteItemRequest_var;
      puVar5 = PlayFab_EconomyModels_DeleteInventoryCollectionResponse_var;
      puVar4 = PTR_DAT_066479b0;
      puVar2 = PTR_DAT_06646708;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar12 = *plVar8;
        lVar9 = *(long *)puVar4;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0568e180;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar8,lVar9,0);
LAB_0568e180:
        uVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        puVar3 = PTR_DAT_066479a8;
        if ((uVar7 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_02d8a53c(plVar8,*(undefined8 *)PTR_DAT_066479a8);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 == 0) goto LAB_0568e34c;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0568e334;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar12 = *plVar8;
        lVar9 = *(long *)puVar4;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0568e1e8;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar8,lVar9,1);
LAB_0568e1e8:
        plVar11 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
        if (plVar11 == (long *)0x0) {
          uVar14 = thunk_FUN_02db45e8(
                                     Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                     );
          uVar15 = 0;
LAB_0568e3d0:
          uVar14 = FUN_04e762a8(uVar14,uVar15,0);
          thunk_FUN_02db45e8(PTR_DAT_066463b8);
          uVar15 = thunk_FUN_02d8a638();
          FUN_05002ed0(uVar15,uVar14,0);
          uVar14 = thunk_FUN_02db45e8(
                                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar15,uVar14);
        }
        lVar9 = *plVar11;
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
          uVar14 = thunk_FUN_02db45e8(
                                     Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                     );
          uVar15 = thunk_FUN_02d5dae8(plVar11,0);
          goto LAB_0568e3d0;
        }
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
          (**(code **)(lVar9 + 1000))
                    (plVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar9 + 0x3f0));
        }
        else {
          uVar14 = (**(code **)(lVar9 + 0x198))(plVar11,*(undefined8 *)(lVar9 + 0x1a0));
          uVar15 = (**(code **)(*plVar11 + 0x348))(plVar11,*(undefined8 *)(*plVar11 + 0x350));
          uVar7 = FUN_056900c0(param_2,uVar14,uVar15);
          if ((uVar7 & 1) == 0) {
            uVar14 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
            uVar15 = (**(code **)(*plVar11 + 0x348))(plVar11,*(undefined8 *)(*plVar11 + 0x350));
            uVar14 = FUN_056874b8(param_1,uVar14,uVar15,0);
            uVar15 = thunk_FUN_02db45e8(
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar14,uVar15);
          }
          uVar14 = *(undefined8 *)puVar2;
          if (*(int *)(param_1 + 0x50) == 1) {
            FUN_05687c70(param_1,plVar11,uVar14,uVar14,0,1,0);
          }
          else {
            FUN_05687abc(param_1,plVar11,uVar14,uVar14,0,1,0);
          }
        }
      } while( true );
    }
  }
LAB_0568e474:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0568e334:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0568e368;
    }
  }
LAB_0568e34c:
  puVar10 = (undefined8 *)FUN_02d87540(plVar8,*(long *)puVar3,0);
LAB_0568e368:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  return;
}


