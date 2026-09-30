/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$SpawnPrefabs
ENTRY_POINT: 04a608fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__SpawnPrefabs(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x118);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
  }
  lVar6 = FUN_02b3c908(lVar6,param_2);
  lVar4 = FUN_02b3c908(*unaff_x22,param_2);
  iVar9 = *(int *)(unaff_x19 + 0x24);
  if (iVar9 < 1) {
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    lVar8 = 0x20;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) {
LAB_04a60a6c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_04a60a68;
      if (-1 < *(int *)(lVar11 + lVar8)) {
        if (lVar6 == 0) goto LAB_04a60a6c;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_04a60a68:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar10 = (long)(int)uVar5;
        uVar12 = *(undefined8 *)(lVar11 + lVar8);
        lVar1 = lVar6 + lVar10 * 0x10;
        *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar11 + lVar8))[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar12;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04a60a68;
        if (lVar4 == 0) goto LAB_04a60a6c;
        iVar3 = (int)uVar12;
        iVar9 = 0;
        if (param_2 != 0) {
          iVar9 = iVar3 / param_2;
        }
        uVar2 = iVar3 - iVar9 * param_2;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_04a60a68;
        lVar11 = lVar4 + (long)(int)uVar2 * 4;
        uVar5 = uVar5 + 1;
        *(int *)(lVar6 + lVar10 * 0x10 + 0x24) = *(int *)(lVar11 + 0x20) + -1;
        *(uint *)(lVar11 + 0x20) = uVar5;
        iVar9 = *(int *)(unaff_x19 + 0x24);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar7 < (long)iVar9);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar5;
  *(long *)(unaff_x19 + 0x18) = lVar6;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar6);
  *(long *)(unaff_x19 + 0x10) = lVar4;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar4);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


