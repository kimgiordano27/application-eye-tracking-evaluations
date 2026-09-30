/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 076c291c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000028;
  
  if ((DAT_0a522d6b & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2dc38);
    FUN_04447ba8(PTR_DAT_09f20018);
    FUN_04447ba8(PTR_DAT_09f1e590);
    FUN_04447ba8(PTR_DAT_09f1e5a0);
    DAT_0a522d6b = 1;
  }
  puVar2 = PTR_DAT_09f20018;
  puVar1 = PTR_DAT_09f1e5a0;
  in_stack_00000028 = 0;
  in_stack_00000008 = 0;
  if (*param_1 == 0) {
    in_stack_00000028 = (undefined1)param_1[0xb];
    *(undefined1 *)(param_1 + 0xb) = 0;
    *param_1 = -1;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    fVar6 = (float)param_1[10];
    fVar7 = *(float *)(lVar4 + 0x28);
    fVar5 = (float)FUN_095329e8(0);
    if (fVar6 <= fVar7 - (fVar5 - *(float *)(lVar4 + 0x24))) goto LAB_076c2a7c;
    if (*(int *)(*(long *)PTR_DAT_09f1e590 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    in_stack_00000008 = FUN_07aba228(0);
    in_stack_00000028 = FUN_0795c844(&stack0x00000008,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_0795c84c(&stack0x00000028,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 0xb) = in_stack_00000028;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04b655d8(param_1 + 2,&stack0x00000028,param_1,*(undefined8 *)PTR_DAT_09f2dc38);
      return;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795cbf4(&stack0x00000028,0);
LAB_076c2a7c:
  *param_1 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(param_1 + 2,0);
  return;
}


