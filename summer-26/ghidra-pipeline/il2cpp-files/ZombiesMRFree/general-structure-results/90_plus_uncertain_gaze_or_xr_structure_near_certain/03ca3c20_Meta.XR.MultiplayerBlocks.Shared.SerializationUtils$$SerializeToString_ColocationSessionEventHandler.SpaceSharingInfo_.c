/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 03ca3c20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<ColocationSessionEventHandler_SpaceSharingInfo>
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long lStack0000000000000048;
  
  lVar1 = tpidr_el0;
  lStack0000000000000048 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02fe925c(PTR_DAT_06f998e0);
    FUN_02fe925c(PTR_DAT_06f99910);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_02feb320(param_4);
    }
  }
  if ((*(int *)(param_2 + 0x28) == 1) && (*(char *)(param_2 + 0x60) == '\0')) {
    bVar2 = false;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar2 = true;
  }
  FUN_06611608(param_2,0);
  if (bVar2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    bVar3 = false;
  }
  plVar4 = (long *)FUN_049d4e60();
  lVar7 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02feb2c4(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(lVar7 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) == lVar7)) {
      if (bVar3) {
        lVar7 = FUN_06612ab8();
      }
      else {
        lVar7 = FUN_06612ac0(param_3,0);
      }
      uVar9 = plVar4[2];
      if (*(int *)(*(long *)PTR_DAT_06f998e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_040418f0(&stack0x00000010,plVar4,lVar7 - (uVar9 >> 0x20),
                   *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
      param_1[6] = in_stack_00000040;
      param_1[3] = in_stack_00000028;
      param_1[2] = in_stack_00000020;
      param_1[5] = in_stack_00000038;
      param_1[4] = in_stack_00000030;
      param_1[1] = in_stack_00000018;
      *param_1 = in_stack_00000010;
      if (*(long *)(lVar1 + 0x28) != lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
  thunk_FUN_03037804(PTR_DAT_06f6d6a0);
  FUN_02b0e39c();
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar8 = FUN_0655b7b0(uVar8,0);
  FUN_02b03c7c(plVar4);
  uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  uVar5 = FUN_0655b7b0(uVar5,0);
  uVar6 = thunk_FUN_03037804(PTR_DAT_06f99ac0);
  uVar8 = FUN_0597263c(uVar6,uVar8,plVar4,uVar5,0);
  thunk_FUN_03037804(PTR_DAT_06f6d640);
  uVar5 = thunk_FUN_0301080c();
  FUN_05aeefcc(uVar5,uVar8,0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar5,param_4);
}


