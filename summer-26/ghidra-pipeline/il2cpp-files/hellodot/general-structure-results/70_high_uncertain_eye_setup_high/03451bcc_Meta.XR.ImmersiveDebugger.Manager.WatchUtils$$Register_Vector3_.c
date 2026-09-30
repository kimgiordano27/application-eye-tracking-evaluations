/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 03451bcc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar8;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  int in_stack_00000078;
  undefined1 uStack000000000000007c;
  long in_stack_00000288;
  
  uVar8 = (**(code **)(param_1 + 0x138))();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  iVar2 = FUN_058da6e4();
  if (iVar2 != 0xc) {
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    uVar8 = FUN_02ce7ad4(uVar8,4);
    puVar1 = PTR_DAT_065c8c08;
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,0xc);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8c08);
    uVar5 = thunk_FUN_02cea4e8(uVar5,&stack0x00000040);
    FUN_028be474(uVar8);
    FUN_028c2238(uVar8,uVar5);
    FUN_028c226c(uVar8,0,uVar5);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    thunk_FUN_02c7737c(PTR_DAT_065c89e8);
    FUN_028be084();
    plVar6 = (long *)FUN_04f3fb68(uVar5,0);
    FUN_028be474();
    uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    FUN_028be474(uVar8);
    FUN_028c2238(uVar8,uVar5);
    FUN_028c226c(uVar8,1,uVar5);
    FUN_028be474(uVar8);
    FUN_028c2238(uVar8);
    FUN_028c226c(uVar8,2);
    FUN_028be474();
    thunk_FUN_02c7737c(PTR_DAT_065dd4c0);
    FUN_028be084();
    uVar3 = FUN_058da6e4();
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar3);
    uVar5 = thunk_FUN_02c7737c(puVar1);
    uVar5 = thunk_FUN_02cea4e8(uVar5,&stack0x00000028);
    FUN_028be474(uVar8);
    FUN_028c2238(uVar8,uVar5);
    FUN_028c226c(uVar8,3,uVar5);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065dd710);
    uVar8 = FUN_04db9b3c(uVar5,uVar8,0);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar5 = thunk_FUN_02cea894();
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065dd718);
    FUN_04e97fd8(uVar5,uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5);
  }
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_058d13cc(uVar8,&stack0x00000028,0x444c5441,0x28,*(undefined4 *)(unaff_x21 + 0xe0),0);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uStack0000000000000074 = (undefined4)uVar8;
  in_stack_00000078 = *(int *)(unaff_x20 + 0x14) - *(int *)(unaff_x21 + 0x14);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = 0;
  FUN_05eaa79c(&stack0x0000007c,&stack0x00000018,0xc,0);
  puVar1 = PTR_DAT_065dd510;
  lVar4 = *(long *)PTR_DAT_065dd510;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    FUN_058943f0(lVar4,&stack0x00000060,0);
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000288) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


