/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarPerformanceAnalytics$$toByteArray
ENTRY_POINT: 05b7a994
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b7aa9c) */

void Oculus_Avatar2_OvrAvatarPerformanceAnalytics__toByteArray(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float extraout_var;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x598));
  thunk_FUN_032e1da0(PTR_DAT_072a5d60);
  thunk_FUN_032e1da0(PTR_DAT_072a5d58);
  *(undefined1 *)(unaff_x20 + 0x858) = 1;
  lVar4 = FUN_04ae8948();
  if (lVar4 == 0) goto LAB_05b7ab60;
  plVar5 = (long *)FUN_05aa0b08(lVar4,0);
  if (plVar5 == (long *)0x0) {
LAB_05b7a9f8:
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_072a5d60 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_05b7a9f8;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_072a5d60) {
      plVar5 = (long *)0x0;
    }
  }
  fVar9 = (*(float *)(unaff_x19 + 0x34) - *(float *)(unaff_x19 + 0x3c)) /
          (*(float *)(unaff_x19 + 0x40) - *(float *)(unaff_x19 + 0x3c));
  fVar10 = fVar9;
  if (1.0 < fVar9) {
    fVar10 = 1.0;
  }
  if (fVar9 < 0.0) {
    fVar10 = 0.0;
  }
  if ((plVar5 != (long *)0x0) && (plVar5[0x15] != 0)) {
    uVar6 = thunk_FUN_05b8b114(plVar5[0x15],0);
    puVar3 = PTR_DAT_072a1de8;
    puVar2 = PTR_DAT_072794f0;
    if (plVar5[0x15] != 0) {
      uVar7 = FUN_05b8b2cc(plVar5[0x15],0);
      FUN_05ba1de8(uVar7,0);
      fVar10 = fVar10 * (1.0 - extraout_var);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_05ba05c4(fVar10,uVar6,0);
      lVar4 = plVar5[0x17];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar8 = FUN_06be9890(lVar4,0,0);
      if ((uVar8 & 1) != 0) {
        lVar4 = plVar5[0x17];
        uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
        in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x34);
        uVar6 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279598,(long)&stack0x00000008 + 4);
        uVar6 = FUN_057a25c4(uVar7,uVar6,0);
        if ((lVar4 == 0) || (plVar5 = (long *)FUN_05b88530(lVar4,0), plVar5 == (long *)0x0))
        goto LAB_05b7ab60;
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
      }
      return;
    }
  }
LAB_05b7ab60:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


