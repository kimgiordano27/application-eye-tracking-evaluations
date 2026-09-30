/*
FUNCTION_NAME: SampleAvatarEntity.<Retry_HasAvatarRequest>d__33$$System.IDisposable.Dispose
ENTRY_POINT: 0550e008
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void SampleAvatarEntity_<Retry_HasAvatarRequest>d__33__System_IDisposable_Dispose(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined *puVar4;
  
  if ((param_1 & 1) == 0) {
    iVar1 = *(int *)(unaff_x20 + 0x18);
    if (iVar1 < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar6 = thunk_FUN_02dd3144();
      puVar4 = PTR_DAT_06a23228;
    }
    else {
      if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
        lVar7 = 8;
        do {
          if (-iVar1 + (int)lVar7 == 8) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          uVar2 = *(uint *)(unaff_x20 + lVar7 * 4);
          if ((int)uVar2 < 0) {
            thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
            uVar6 = thunk_FUN_02dd3144();
            uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a22ff8);
            puVar4 = PTR_DAT_06a23210;
LAB_0550e0e8:
            uVar3 = thunk_FUN_02dfd288(puVar4);
            FUN_0544f840(uVar6,uVar5,uVar3,0);
            goto LAB_0550e100;
          }
          if (0x7fffffff < (long)((long)*(int *)(unaff_x19 + lVar7 * 4) + (ulong)uVar2)) {
            thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
            uVar6 = thunk_FUN_02dd3144();
            uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a22ff8);
            puVar4 = PTR_DAT_06a23208;
            goto LAB_0550e0e8;
          }
          lVar7 = lVar7 + 1;
        } while (-iVar1 + (int)lVar7 != 8);
        if (iVar1 < 0x100) {
          FUN_02da5130();
          return;
        }
        thunk_FUN_02dfd288(PTR_DAT_06a0e030);
        uVar6 = thunk_FUN_02dd3144();
        FUN_0552b538(uVar6,0);
        goto LAB_0550e100;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar6 = thunk_FUN_02dd3144();
      puVar4 = PTR_DAT_06a23230;
    }
    uVar5 = thunk_FUN_02dfd288(puVar4);
    FUN_05452924(uVar6,uVar5,0);
  }
  else {
    thunk_FUN_02dfd288(PTR_DAT_069fba18);
    uVar6 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a23018);
    FUN_054e3304(uVar6,uVar5,0);
  }
LAB_0550e100:
  uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a23218);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar5);
}


