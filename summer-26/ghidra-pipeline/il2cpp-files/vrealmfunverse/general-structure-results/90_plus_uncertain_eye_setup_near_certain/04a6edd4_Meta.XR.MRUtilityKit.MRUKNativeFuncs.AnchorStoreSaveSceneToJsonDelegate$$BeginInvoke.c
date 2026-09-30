/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$BeginInvoke
ENTRY_POINT: 04a6edd4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__BeginInvoke
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_02b7654c();
      goto LAB_04a6edfc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_04a6edfc:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    if ((((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5
         )) || (uVar6 = FUN_04a70e74(), (uVar6 & 1) == 0)) ||
       ((int)unaff_x20[4] <= *(int *)(unaff_x21 + 0x20))) {
      uVar7 = FUN_04a70188();
      return uVar7;
    }
    uVar7 = 0;
  }
  return uVar7;
}


