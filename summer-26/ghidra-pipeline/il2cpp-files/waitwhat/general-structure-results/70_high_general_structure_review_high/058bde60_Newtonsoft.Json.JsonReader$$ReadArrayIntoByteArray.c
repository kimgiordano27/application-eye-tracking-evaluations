/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 058bde60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  int unaff_w24;
  undefined4 unaff_w25;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  iVar2 = (**(code **)(*unaff_x27 + 0x208))();
  if ((unaff_w24 < 1) || (iVar2 < unaff_w24)) {
    thunk_FUN_031edd38(PTR_DAT_070c2058);
    FUN_02d35640();
    uVar3 = FUN_058c5ab8(0);
    uVar4 = thunk_FUN_031edd38(PTR_DAT_071024d8);
    uVar4 = FUN_05971908(uVar4,0);
    puVar1 = PTR_DAT_070c1958;
    iStack000000000000000c = iVar2;
    uVar5 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),(long)&stack0x00000008 + 4);
    uStack0000000000000008 = unaff_w19;
    uVar6 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    uVar3 = FUN_057c046c(uVar3,uVar4,uVar5,uVar6,0);
    thunk_FUN_031edd38(PTR_DAT_070c5c08);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar4 = thunk_FUN_031edd38(PTR_DAT_07101b10);
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar7 = FUN_058bcfc0(unaff_w25,unaff_w19,unaff_w24);
    if (-1 < lVar7) {
      lVar8 = FUN_058b1e7c(unaff_w23,unaff_w22,unaff_w21,unaff_w20);
      in_stack_00000018 = 0;
      FUN_0590dbd4(&stack0x00000018,lVar8 + lVar7 * 864000000000,0);
      return in_stack_00000018;
    }
    uVar3 = thunk_FUN_031edd38(PTR_DAT_071023e8);
    uVar3 = FUN_05971908(uVar3,0);
    thunk_FUN_031edd38(PTR_DAT_070c5c08);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar4 = 0;
  }
  FUN_0589ed08(uVar5,uVar4,uVar3,0);
  uVar3 = thunk_FUN_031edd38(PTR_DAT_07102720);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5,uVar3);
}


