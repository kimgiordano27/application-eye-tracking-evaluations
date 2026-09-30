/*
FUNCTION_NAME: FUN_05c804ec
ENTRY_POINT: 05c804ec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05c80864) */

void FUN_05c804ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long **pplVar13;
  long local_40;
  long *local_38;
  
  if ((DAT_06a57a95 & 1) == 0) {
    FUN_02d4dc40(Method_PlayFab_PlayFabExperimentationAPI_GetExclusionGroups__);
    FUN_02d4dc40(Method_System_Linq_Enumerable_ElementAt<Column>__);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(Method_PlayFab_PlayFabExperimentationAPI_GetExperiments__);
    FUN_02d4dc40(Method_RootMotion_FinalIK_FABRIKBendGoal_OnPreIteration__);
    FUN_02d4dc40(Method_PlayFab_PlayFabExperimentationAPI_GetLatestScorecard__);
    FUN_02d4dc40(Method_PlayFab_PlayFabExperimentationAPI_GetTreatmentAssignment__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEventsAPI_SetTelemetryKeyActive__);
    FUN_02d4dc40(Method_PlayFab_PlayFabExperimentationAPI_CreateExperiment__);
    DAT_06a57a95 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  plVar2 = (long *)FUN_03356f78(param_2,param_5,&local_40,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabExperimentationAPI_CreateExperiment__,0x10f,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabExperimentationAPI_GetLatestScorecard__);
  lVar5 = *(long *)(param_2 + 0x58);
  pplVar13 = &local_38;
  uVar12 = 0;
  local_38 = plVar2;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x30);
  uVar10 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(local_40 + 0x20) = param_3;
  *(undefined8 *)(local_40 + 0x28) = param_4;
  *(undefined8 *)(local_40 + 0x18) = uVar11;
  *(undefined8 *)(local_40 + 0x10) = uVar10;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_RootMotion_FinalIK_FABRIKBendGoal_OnPreIteration__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05c80644;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d87540(plVar2,*(long *)Method_RootMotion_FinalIK_FABRIKBendGoal_OnPreIteration__,0)
  ;
LAB_05c80644:
  (*(code *)*puVar3)(plVar2,param_3,param_4,0,2,puVar3[1],param_7,param_8,uVar12,pplVar13);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar5 = *local_38;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<Column>__) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_05c806c0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d87540(local_38,*(long *)Method_System_Linq_Enumerable_ElementAt<Column>__,0xb);
LAB_05c806c0:
  (*(code *)*puVar3)(plVar2,0,puVar3[1]);
  plVar2 = local_38;
  puVar1 = Method_PlayFab_PlayFabEventsAPI_SetTelemetryKeyActive__;
  lVar5 = *(long *)Method_PlayFab_PlayFabEventsAPI_SetTelemetryKeyActive__;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar3[3];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar12 = *puVar3;
    lVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_PlayFab_PlayFabExperimentationAPI_GetExclusionGroups__);
    FUN_045acfb0(lVar8,uVar12,
                 *(undefined8 *)Method_PlayFab_PlayFabExperimentationAPI_GetTreatmentAssignment__,0)
    ;
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar4 = lVar8;
    thunk_FUN_02dc1ef0(plVar4,lVar8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar5 = *plVar2;
  lVar9 = *(long *)Method_PlayFab_PlayFabExperimentationAPI_GetExperiments__;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05c807b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02d87540(plVar2);
LAB_05c807b4:
  lVar5 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(plVar2,lVar8,lVar5);
  plVar2 = local_38;
  if (local_38 != (long *)0x0) {
    lVar5 = *local_38;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05c80838;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d87540(local_38,*(long *)PTR_DAT_066479a8,0);
LAB_05c80838:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return;
}


