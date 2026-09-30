/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnOpenXrEvent
ENTRY_POINT: 04a7b118
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__OnOpenXrEvent(long param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 *unaff_x22;
  
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
    lVar7 = 0;
    uVar8 = 0;
    uVar5 = 0;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) {
LAB_04a7b29c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_04a7b298;
      if (-1 < *(int *)(lVar10 + lVar7 + 0x20)) {
        if (lVar6 == 0) goto LAB_04a7b29c;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_04a7b298:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar12 = *(undefined8 *)(lVar10 + lVar7 + 0x20);
        uVar1 = *(undefined4 *)(lVar10 + lVar7 + 0x28);
        lVar10 = lVar6 + (long)(int)uVar5 * 0xc;
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        *(undefined4 *)(lVar10 + 0x28) = uVar1;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04a7b298;
        if (lVar4 == 0) goto LAB_04a7b29c;
        iVar9 = 0;
        iVar11 = (int)uVar12;
        if (param_2 != 0) {
          iVar9 = iVar11 / param_2;
        }
        uVar2 = iVar11 - iVar9 * param_2;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_04a7b298;
        lVar10 = lVar4 + (long)(int)uVar2 * 4;
        lVar3 = (long)(int)uVar5;
        uVar5 = uVar5 + 1;
        *(int *)(lVar6 + lVar3 * 0xc + 0x24) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar5;
        iVar9 = *(int *)(unaff_x19 + 0x24);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((long)uVar8 < (long)iVar9);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar5;
  *(long *)(unaff_x19 + 0x18) = lVar6;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar6);
  *(long *)(unaff_x19 + 0x10) = lVar4;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar4);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


