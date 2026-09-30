/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<TryParseResponse>d__16<FontRoot>$$System.IDisposable.Dispose
ENTRY_POINT: 06f15070
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<FontRoot>__System_IDisposable_Dispose
               (ulong param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910cf80);
    *(undefined1 *)(unaff_x22 + 0xbfa) = 1;
  }
  lVar7 = FUN_03f13470(*unaff_x23,param_3);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1a8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f4b260(lVar8);
  }
  lVar8 = FUN_03f13470(lVar8,param_3);
  uVar2 = *(uint *)(param_2 + 0x20);
  FUN_074d96b0(*(undefined8 *)(param_2 + 0x18),0,lVar8,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_06f151a4:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar9 = 0;
    do {
      if (uVar9 == uVar3) {
LAB_06f151a0:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      iVar4 = *(int *)(lVar8 + 0x20 + uVar9 * 0x24);
      if (-1 < iVar4) {
        if (lVar7 == 0) goto LAB_06f151a4;
        iVar6 = 0;
        if (param_3 != 0) {
          iVar6 = iVar4 / param_3;
        }
        uVar5 = iVar4 - iVar6 * param_3;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_06f151a0;
        lVar1 = lVar7 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + 0x20 + uVar9 * 0x24 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  *(long *)(param_2 + 0x10) = lVar7;
  thunk_FUN_03f86000((long *)(param_2 + 0x10),lVar7);
  *(long *)(param_2 + 0x18) = lVar8;
  thunk_FUN_03f86000((undefined8 *)(param_2 + 0x18),lVar8);
  return;
}


