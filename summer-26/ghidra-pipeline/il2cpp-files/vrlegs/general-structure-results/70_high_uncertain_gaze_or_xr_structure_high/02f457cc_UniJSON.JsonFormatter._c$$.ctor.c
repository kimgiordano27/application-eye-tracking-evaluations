/*
FUNCTION_NAME: UniJSON.JsonFormatter.<>c$$.ctor
ENTRY_POINT: 02f457cc
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

long UniJSON_JsonFormatter_<>c___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar6 = *plVar3;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar6);
  }
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x23;
  }
  plVar3 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cfb838;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = (**(code **)(*plVar3 + 0x308))(plVar3);
  if (lVar6 == 0) {
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x23;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(uVar4,(long)&stack0x00000008 + 4,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x23;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x30);
    thunk_FUN_01a4b338();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = (**(code **)(*plVar3 + 0x308))(plVar3);
    if (lVar6 == 0) {
      uVar5 = *(undefined8 *)PTR_DAT_03ce45f0;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_0277b678(uVar5,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar5,uVar5);
      }
      lVar6 = (**(code **)(*unaff_x19 + 0x278))();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = FUN_01ab6a94(*(undefined8 *)puVar1,*(undefined4 *)(lVar6 + 0x18));
      FUN_02793c34(lVar6,lVar2,0,0);
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x23;
      }
      plVar3 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x30);
      thunk_FUN_01a4b338();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x318))(plVar3);
    }
    else {
      uVar5 = *(undefined8 *)puVar1;
      lVar2 = thunk_FUN_01a89d6c(lVar6,uVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar6,uVar5);
      }
    }
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
  }
  else {
    uVar4 = *(undefined8 *)puVar1;
    lVar2 = thunk_FUN_01a89d6c(lVar6,uVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar6,uVar4);
    }
  }
  return lVar2;
}


