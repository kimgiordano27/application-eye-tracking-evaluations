/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 04f4ce4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uVar3 = *unaff_x19;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_05c8e378(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined4 *)((long)unaff_x19 + 0x14);
    uVar5 = *(undefined4 *)(unaff_x19 + 3);
    uVar6 = *(undefined4 *)((long)unaff_x19 + 0x1c);
    uVar7 = *(undefined4 *)(unaff_x19 + 4);
    if (DAT_066c1d9f == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d9f = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    FUN_05c7bd38(uVar4,uVar5,uVar6,uVar7,*(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c)
                 ,*(undefined4 *)(lVar2 + 0x50),0);
    return;
  }
  FUN_04ef8cd4((undefined1 *)((long)&stack0x00000020 + 4),*unaff_x19,0,0);
  uStack0000000000000040 = uStack0000000000000024;
  uStack0000000000000054 = (undefined4)in_stack_00000038;
  uStack0000000000000058 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
  uStack000000000000004c = in_stack_00000030;
  FUN_04f0d050(&stack0x00000008,&stack0x00000040,unaff_x19 + 1,0);
  uVar5 = uStack0000000000000020;
  uVar4 = uStack0000000000000018;
  if (DAT_066c1d9f == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d9f = '\x01';
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  FUN_05c7bd38(in_stack_00000010._4_4_,uVar4,uStack000000000000001c,uVar5,
               *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
               *(undefined4 *)(lVar2 + 0x50),0);
  return;
}


