/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 078980e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  if ((DAT_0989374c & 1) == 0) {
    FUN_04077588(PTR_DAT_092e71d8);
    FUN_04077588(PTR_DAT_092e72e8);
    DAT_0989374c = 1;
  }
  puVar2 = PTR_DAT_092e72e8;
  puVar1 = PTR_DAT_092e71d8;
  if ((param_2 != 0) && (plVar7 = *(long **)(param_2 + 0x58), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092e72e8;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092e71d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto FUN_0789818c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092e71d8,3);
FUN_0789818c:
    uVar5 = (*(code *)*puVar3)(plVar7,uVar9,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      in_stack_00000008._4_4_ = *(undefined4 *)(param_1 + 0x10);
      plVar7 = *(long **)(param_2 + 0x58);
      uVar9 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),(long)&stack0x00000008 + 4
                                );
      if (plVar7 == (long *)0x0) goto LAB_07898244;
      lVar4 = *plVar7;
      uVar8 = *(undefined8 *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0789821c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar1,1);
LAB_0789821c:
      (*(code *)*puVar3)(plVar7,uVar8,uVar9,puVar3[1]);
    }
    return;
  }
LAB_07898244:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


