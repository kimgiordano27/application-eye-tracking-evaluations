/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$InitGizmos
ENTRY_POINT: 04a59314
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__InitGizmos(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
  }
  lVar4 = FUN_02b3c908(param_1,unaff_w20);
  lVar5 = FUN_02b3c908(*unaff_x22,unaff_w20);
  iVar9 = *(int *)(unaff_x19 + 0x24);
  if (iVar9 < 1) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) {
LAB_04a5948c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_04a59488;
      if (-1 < *(int *)(lVar10 + lVar7 + 0x20)) {
        if (lVar4 == 0) goto LAB_04a5948c;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_04a59488:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar12 = *(undefined8 *)(lVar10 + lVar7 + 0x20);
        uVar1 = *(undefined4 *)(lVar10 + lVar7 + 0x28);
        lVar10 = lVar4 + (long)(int)uVar6 * 0xc;
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        *(undefined4 *)(lVar10 + 0x28) = uVar1;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04a59488;
        if (lVar5 == 0) goto LAB_04a5948c;
        iVar9 = 0;
        iVar11 = (int)uVar12;
        if (unaff_w20 != 0) {
          iVar9 = iVar11 / unaff_w20;
        }
        uVar2 = iVar11 - iVar9 * unaff_w20;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04a59488;
        lVar10 = lVar5 + (long)(int)uVar2 * 4;
        lVar3 = (long)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(int *)(lVar4 + lVar3 * 0xc + 0x24) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar6;
        iVar9 = *(int *)(unaff_x19 + 0x24);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((long)uVar8 < (long)iVar9);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar6;
  *(long *)(unaff_x19 + 0x18) = lVar4;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar4);
  *(long *)(unaff_x19 + 0x10) = lVar5;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar5);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


