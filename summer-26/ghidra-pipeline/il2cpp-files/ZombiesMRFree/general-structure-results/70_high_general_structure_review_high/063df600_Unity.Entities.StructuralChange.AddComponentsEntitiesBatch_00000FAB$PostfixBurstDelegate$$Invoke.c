/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddComponentsEntitiesBatch_00000FAB$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 063df600
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x063df858) */
/* WARNING: Removing unreachable block (ram,0x063df850) */

long Unity_Entities_StructuralChange_AddComponentsEntitiesBatch_00000FAB_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar2 = thunk_FUN_0301080c();
  FUN_05ac807c(uVar2,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  thunk_FUN_02fc2c1c();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  thunk_FUN_03048534(puVar3,uVar2);
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0301ce48();
  }
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x23;
  }
  plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x30);
  thunk_FUN_02fc2c1c();
  puVar1 = PTR_DAT_06f8d050;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = (**(code **)(*plVar7 + 0x2f8))(plVar7);
  if (lVar4 == 0) {
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x23;
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x78);
    in_stack_00000008._4_1_ = '\0';
    FUN_05b54040(uVar2,(long)&stack0x00000008 + 4,0);
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x23;
    }
    plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x30);
    thunk_FUN_02fc2c1c();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar4 = (**(code **)(*plVar7 + 0x2f8))(plVar7);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)PTR_DAT_06fae1b8;
      if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar6 = FUN_05afde1c(uVar6,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8(uVar6,uVar6);
      }
      lVar4 = (**(code **)(*unaff_x19 + 0x218))();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar5 = FUN_02fe9340(*(undefined8 *)puVar1,*(undefined4 *)(lVar4 + 0x18));
      NodeCanvas_Tasks_Actions_FadeIn__OnUpdate(lVar4,lVar5,0,0);
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *unaff_x23;
      }
      plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x30);
      thunk_FUN_02fc2c1c();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar7 + 0x308))(plVar7);
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_03010710(lVar4,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar4,uVar6);
      }
    }
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_0301ce48(uVar2,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_03010710(lVar4,uVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar4,uVar2);
    }
  }
  return lVar5;
}


