/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 0571868c
PROGRAM: Untangled-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam00000000071c3808 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d060e0);
    FUN_02f07e70(PTR_DAT_06d580b0);
    FUN_02f07e70(PTR_DAT_06d38800);
    FUN_02f07e70(PTR_DAT_06d580b8);
    FUN_02f07e70(PTR_DAT_06d37b88);
    FUN_02f07e70(PTR_DAT_06d580a8);
    FUN_02f07e70(PTR_DAT_06d58098);
    bRam00000000071c3808 = 1;
  }
  puVar1 = PTR_DAT_06d58098;
  if (param_2 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar8 = FUN_055b5920(0);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d580c8);
      uVar8 = FUN_056f1630(uVar4,uVar8,uVar7,0);
      thunk_FUN_02f239f0(PTR_DAT_06d55148);
      uVar4 = thunk_FUN_02ef1808();
      FUN_05693110(uVar4,uVar8,0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58030);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,uVar8);
    }
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  else {
    lVar5 = *(long *)PTR_DAT_06d58098;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar5);
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar5);
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d580b8);
      FUN_0513ca78(lVar6,uVar8,*(undefined8 *)PTR_DAT_06d580a8,0);
      plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar2 = lVar6;
      thunk_FUN_02f411dc(plVar2,lVar6);
    }
    uVar8 = FUN_03a26eb0(param_2,lVar6,*(undefined8 *)PTR_DAT_06d580b0);
    uVar8 = FUN_03a2ed10(uVar8,*(undefined8 *)PTR_DAT_06d38800);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0(0,uVar8);
    }
    uVar8 = FUN_0561c1fc(*(long *)(param_1 + 0x10),uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_06d060e0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_0552db84(uVar8,0,0);
    if ((uVar3 & 1) == 0) {
      lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar8 = FUN_055b5920(0);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d580c0);
      uVar8 = FUN_056f1630(uVar4,uVar8,uVar7,0);
      thunk_FUN_02f239f0(PTR_DAT_06d55148);
      uVar4 = thunk_FUN_02ef1808();
      FUN_05693110(uVar4,uVar8,0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58030);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,uVar8);
    }
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar2 = (long *)FUN_05717f90();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 400));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),param_2,*(undefined8 *)(lVar5 + 0x28))
    ;
  }
  return;
}


