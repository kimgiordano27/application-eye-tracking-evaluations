/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreFreeJsonDelegate$$EndInvoke
ENTRY_POINT: 04a6ef48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreFreeJsonDelegate__EndInvoke(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  plVar6 = (long *)thunk_FUN_02b79548();
  if (plVar6 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a6efc8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar6,lVar8,0);
LAB_04a6efc8:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar4 == 0) {
      return 1;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218();
    }
    if (((*(byte *)(lVar8 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)
        ) && (uVar10 = FUN_04a70e74(), (uVar10 & 1) != 0)) {
      if (*(int *)(unaff_x20 + 0x20) <= (int)unaff_x21[4]) {
        return 0;
      }
      uVar10 = FUN_04a70188();
      return uVar10;
    }
  }
  uVar10 = FUN_04a70754();
  iVar4 = *(int *)(unaff_x20 + 0x20);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (uVar10 >> 0x20 == 0) {
    iVar5 = (int)uVar10;
    bVar3 = SBORROW4(iVar4,iVar5);
    bVar1 = iVar4 - iVar5 < 0;
    bVar2 = iVar4 == iVar5;
  }
  return (ulong)(!bVar2 && bVar1 == bVar3);
}


