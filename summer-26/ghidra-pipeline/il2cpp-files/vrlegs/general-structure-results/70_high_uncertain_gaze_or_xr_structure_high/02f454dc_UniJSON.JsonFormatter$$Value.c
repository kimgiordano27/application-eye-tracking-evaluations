/*
FUNCTION_NAME: UniJSON.JsonFormatter$$Value
ENTRY_POINT: 02f454dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f4576c) */
/* WARNING: Removing unreachable block (ram,0x02f45764) */

long UniJSON_JsonFormatter__Value(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  FUN_027e0bd8(param_1,param_2,0);
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x23;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar3,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    thunk_FUN_01a4b338();
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
    *puVar4 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x23;
  }
  plVar7 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cfb838;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = (**(code **)(*plVar7 + 0x308))(plVar7);
  if (lVar2 == 0) {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x78);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(uVar3,(long)&stack0x00000008 + 4,0);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    plVar7 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
    thunk_FUN_01a4b338();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = (**(code **)(*plVar7 + 0x308))(plVar7);
    if (lVar2 == 0) {
      uVar6 = *(undefined8 *)PTR_DAT_03ce45f0;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0277b678(uVar6,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar6,uVar6);
      }
      lVar2 = (**(code **)(*unaff_x19 + 0x278))();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = FUN_01ab6a94(*(undefined8 *)puVar1,*(undefined4 *)(lVar2 + 0x18));
      FUN_02793c34(lVar2,lVar5,0,0);
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x23;
      }
      plVar7 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
      thunk_FUN_01a4b338();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar7 + 0x318))(plVar7);
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_01a89d6c(lVar2,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar2,uVar6);
      }
    }
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_01a89d6c(lVar2,uVar3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar2,uVar3);
    }
  }
  return lVar5;
}


