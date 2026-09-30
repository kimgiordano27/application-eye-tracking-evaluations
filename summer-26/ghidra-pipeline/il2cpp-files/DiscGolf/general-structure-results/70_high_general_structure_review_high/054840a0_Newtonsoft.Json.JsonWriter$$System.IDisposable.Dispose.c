/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$System.IDisposable.Dispose
ENTRY_POINT: 054840a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__System_IDisposable_Dispose
               (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    sVar2 = FUN_053674f8(param_2,0,0);
    if (sVar2 == 0x2d) {
      iStack000000000000000c = param_3;
      uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),(long)&stack0x00000008 + 4
                                );
      puVar6 = PTR_DAT_06a205a8;
LAB_054841b4:
      uVar5 = thunk_FUN_02dfd288(puVar6);
      uVar4 = FUN_0536388c(uVar5,uVar4,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar5 = thunk_FUN_02dd3144();
      FUN_05452924(uVar5,uVar4,0);
      uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a205a0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar4);
    }
    if (0 < *(int *)(param_2 + 0x10)) {
      sVar2 = FUN_053674f8(param_2,*(int *)(param_2 + 0x10) + -1,0);
      if (sVar2 == 0x2d) {
        FUN_02979e58(param_2);
        iStack0000000000000008 = param_3 + *(int *)(param_2 + 0x10) + -1;
        uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000008);
        puVar6 = PTR_DAT_06a205b0;
        goto LAB_054841b4;
      }
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar7 = 0;
        do {
          uVar3 = FUN_053674f8(param_2,iVar7,0);
          if (uVar3 != 0x2d) {
            if (0x2f < uVar3) {
              uVar1 = uVar3 - 0x5b;
              if (((0x24 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x1f0000003fU) == 0)) &&
                 (6 < uVar3 - 0x3a)) goto LAB_05484168;
            }
            in_stack_00000000._4_4_ = param_3 + iVar7;
            uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                       (long)&stack0x00000000 + 4);
            puVar6 = PTR_DAT_06a20598;
            goto LAB_054841b4;
          }
LAB_05484168:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 0x10));
      }
    }
  }
  return;
}


