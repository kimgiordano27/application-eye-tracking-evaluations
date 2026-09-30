/*
FUNCTION_NAME: Unity.Entities.ScratchpadAllocator.Try_00000F31$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 063d9068
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x063d9000) */

long Unity_Entities_ScratchpadAllocator_Try_00000F31_PostfixBurstDelegate__Invoke(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *plVar6;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0301ce48();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fc8594();
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x23;
  }
  plVar6 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_02fc2c1c();
  puVar1 = PTR_DAT_06f8d050;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
  if (lVar2 == 0) {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x23;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x78);
    in_stack_00000008._4_1_ = '\0';
    FUN_05b54040(uVar4,(long)&stack0x00000008 + 4,0);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x23;
    }
    plVar6 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
    thunk_FUN_02fc2c1c();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar2 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)PTR_DAT_06fae1b8;
      if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar5 = FUN_05afde1c(uVar5,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8(uVar5,uVar5);
      }
      lVar2 = (**(code **)(*unaff_x19 + 0x218))();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar3 = FUN_02fe9340(*(undefined8 *)puVar1,*(undefined4 *)(lVar2 + 0x18));
      NodeCanvas_Tasks_Actions_FadeIn__OnUpdate(lVar2,lVar3,0,0);
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *unaff_x23;
      }
      plVar6 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x30);
      thunk_FUN_02fc2c1c();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar6 + 0x308))(plVar6);
    }
    else {
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_03010710(lVar2,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar2,uVar5);
      }
    }
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_0301ce48(uVar4,0);
    }
  }
  else {
    uVar4 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_03010710(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar2,uVar4);
    }
  }
  return lVar3;
}


