/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartQueryByLocalGroupDelegate$$EndInvoke
ENTRY_POINT: 04a6eb50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate__EndInvoke
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04a6eb84;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04a6eb84:
  uVar3 = (*(code *)*puVar2)();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if (*(int *)(unaff_x20 + 0x20) == 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a6ecd8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04a6ecd8:
    iVar1 = (*(code *)*puVar2)();
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    if (((*(byte *)(lVar5 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)
        ) && (uVar3 = FUN_04a70e74(), (uVar3 & 1) != 0)) {
      if ((int)unaff_x21[4] <= *(int *)(unaff_x20 + 0x20)) {
        return 0;
      }
      uVar3 = FUN_04a70468();
      return uVar3;
    }
    uVar4 = FUN_04a70754();
    if (*(int *)(unaff_x20 + 0x20) != (int)uVar4) {
      return 0;
    }
    iVar1 = (int)((ulong)uVar4 >> 0x20);
  }
  return (ulong)(0 < iVar1);
}


