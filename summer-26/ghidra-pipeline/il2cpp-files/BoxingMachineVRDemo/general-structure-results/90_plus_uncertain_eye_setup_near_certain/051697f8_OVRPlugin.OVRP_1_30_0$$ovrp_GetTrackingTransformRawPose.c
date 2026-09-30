/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 051697f8
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


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *in_x10;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x24;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05169840;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05169840:
  iVar2 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_0677d900;
  if (iVar2 == 9) {
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar4 = FUN_04f8e414(0);
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782730);
    FUN_050f0ec0(uVar6,uVar4);
    uVar4 = FUN_050924a8();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782738);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0566d8ec();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  FUN_05167dbc();
  uVar9 = FUN_050f0eb8();
  if ((uVar9 & 1) == 0) {
    if (unaff_x24 != (long *)0x0) {
      (**(code **)(*unaff_x24 + 0x238))();
      if (unaff_x20 != (long *)0x0) {
        lVar7 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782640) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
              goto LAB_051699a4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051699a4:
        uVar4 = (*(code *)*puVar3)();
        goto LAB_051699bc;
      }
    }
  }
  else if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782640) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_0516997c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516997c:
    uVar4 = (*(code *)*puVar3)();
LAB_051699bc:
    puVar1 = PTR_DAT_06782540;
    lVar7 = thunk_FUN_02d9d438();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    lVar7 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02d9d438();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05169a40;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar7,0);
LAB_05169a40:
                    /* WARNING: Could not recover jumptable at 0x05169a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar5,uVar4,puVar3[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


