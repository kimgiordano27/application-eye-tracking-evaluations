/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0141b128
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  puVar5 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0122e7a4();
    puVar5 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  uVar6 = *puVar5;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar6 = FUN_01f7d8a0(uVar6,0);
  uVar3 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f00,0);
  uVar4 = FUN_01f7f404(uVar6,uVar3,0);
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
  if ((uVar4 & 1) == 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))(&stack0x00000010);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))
                      (in_stack_00000000,in_stack_00000008);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))();
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30))(uVar6,uVar1,uVar3,uVar2);
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))(&stack0x00000010);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))
                      (in_stack_00000000,in_stack_00000008);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))();
    FUN_01f7af3c(uVar6,uVar1,uVar3,uVar2,0);
  }
  return;
}


