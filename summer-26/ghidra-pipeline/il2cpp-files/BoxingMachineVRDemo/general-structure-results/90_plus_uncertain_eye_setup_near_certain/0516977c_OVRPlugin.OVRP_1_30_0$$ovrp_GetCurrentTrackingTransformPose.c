/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 0516977c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
               (undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5
               ,long *param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_06b79e71 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782640);
    FUN_02d6084c(PTR_DAT_06782540);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(PTR_DAT_0677d900);
    DAT_06b79e71 = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05169840;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_067823f0,0);
LAB_05169840:
    iVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
    puVar1 = PTR_DAT_0677d900;
    if (iVar2 == 9) {
      thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      FUN_028f4b80();
      uVar4 = FUN_04f8e414(0);
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06782730);
      uVar4 = FUN_050f0ec0(uVar5,uVar4,param_4,0);
      uVar4 = FUN_050924a8(param_1,uVar4,0);
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06782738);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar5);
    }
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0566d8ec(param_5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar5 = FUN_05167dbc(param_1);
    uVar10 = FUN_050f0eb8(param_7,0);
    if ((uVar10 & 1) == 0) {
      if (param_6 != (long *)0x0) {
        uVar6 = (**(code **)(*param_6 + 0x238))(param_6,param_7,*(undefined8 *)(*param_6 + 0x240));
        if (param_2 != (long *)0x0) {
          lVar8 = *param_2;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
                puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
                goto LAB_051699a4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_06782640,0xb);
LAB_051699a4:
          uVar4 = (*(code *)*puVar3)(param_2,uVar4,uVar6,uVar5,puVar3[1]);
          goto LAB_051699bc;
        }
      }
    }
    else if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 10) * 0x10 + 0x138);
            goto LAB_0516997c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_06782640,10);
LAB_0516997c:
      uVar4 = (*(code *)*puVar3)(param_2,uVar4,uVar5,puVar3[1]);
LAB_051699bc:
      puVar1 = PTR_DAT_06782540;
      uVar5 = *(undefined8 *)PTR_DAT_06782540;
      lVar8 = thunk_FUN_02d9d438(param_3,uVar5);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_3,uVar5);
      }
      lVar8 = *(long *)puVar1;
      plVar7 = (long *)thunk_FUN_02d9d438(param_3,lVar8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_3,lVar8);
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05169a40;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar8,0);
LAB_05169a40:
                    /* WARNING: Could not recover jumptable at 0x05169a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar4,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


