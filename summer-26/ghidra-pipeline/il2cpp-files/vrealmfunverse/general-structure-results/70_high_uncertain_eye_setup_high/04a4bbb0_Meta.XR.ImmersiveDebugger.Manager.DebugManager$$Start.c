/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$Start
ENTRY_POINT: 04a4bbb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__Start(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar3 + 0x130)) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)
    {
      uVar7 = FUN_04a4f4d8();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((uVar7 & 1) != 0) {
        FUN_04a4bde0();
        return;
      }
    }
  }
  lVar3 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar3);
  }
  plVar4 = (long *)thunk_FUN_02b79548();
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a4bce0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar4,lVar3,0);
LAB_04a4bce0:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  FUN_04a4e154();
  FUN_04a4cca4();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_04a4df54();
      return;
    }
  }
  return;
}


