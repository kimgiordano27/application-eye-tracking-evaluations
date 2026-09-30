/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<TryParseResponse>d__16<FigmaProject>$$System.IDisposable.Dispose
ENTRY_POINT: 06f14448
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<FigmaProject>__System_IDisposable_Dispose
               (long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  int iVar6;
  uint uVar7;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_074b2774((long)&stack0x00000008 + 4,*(undefined8 *)(param_1 + 0x188));
  uVar2 = *(uint *)(unaff_x22 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar6 = 0;
  if (uVar2 != 0) {
    iVar6 = (int)uVar3 / (int)uVar2;
  }
  uVar7 = uVar3 - iVar6 * uVar2;
  if (uVar7 < uVar2) {
    if (unaff_x23 == 0) {
LAB_06f14688:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = *(int *)(unaff_x22 + (ulong)uVar7 * 4 + 0x20) - 1;
    if (uVar7 < uVar2) {
      iVar6 = 0;
      lVar1 = unaff_x23 + 0x20;
      do {
        if (*(uint *)(lVar1 + (long)(int)uVar7 * 0x24) == uVar3) {
          plVar4 = (long *)FUN_044a15f0(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_06f14684;
          if (plVar4 == (long *)0x0) goto LAB_06f14688;
          uVar5 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined4 *)(lVar1 + (long)(int)uVar7 * 0x24 + 8),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar5 & 1) != 0) {
            return uVar7;
          }
          uVar2 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar2 <= uVar7) goto LAB_06f14684;
        uVar7 = *(uint *)(lVar1 + (long)(int)uVar7 * 0x24 + 4);
        if ((int)uVar2 <= iVar6) {
          FUN_074d7eb0(0);
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        iVar6 = iVar6 + 1;
      } while (uVar7 < uVar2);
    }
    return uVar7;
  }
LAB_06f14684:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


