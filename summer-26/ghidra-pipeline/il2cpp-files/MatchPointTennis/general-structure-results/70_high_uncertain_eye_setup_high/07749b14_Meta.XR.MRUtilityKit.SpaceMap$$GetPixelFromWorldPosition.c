/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetPixelFromWorldPosition
ENTRY_POINT: 07749b14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SpaceMap__GetPixelFromWorldPosition(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  undefined1 auVar8 [16];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_0771ec00();
  if (1 < *(int *)(unaff_x20 + 0x10)) {
    uVar7 = *(undefined8 *)PTR_DAT_09f31b40;
    uVar4 = (**(code **)(*unaff_x19 + 0x168))();
    uVar4 = FUN_078b4f58(uVar7,uVar4,*(undefined8 *)PTR_DAT_09f31b50,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c33b0(uVar4,0);
  }
  uVar4 = FUN_094f613c();
  auVar8 = FUN_0774a980();
  uVar7 = FUN_077497e4();
  uVar1 = FUN_094f3ae4();
  uVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31688,uVar1);
  iVar2 = FUN_094d3ba4();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar6 = FUN_094f934c();
      FUN_0774aa0c(uVar6,uVar6,uVar4,auVar8._0_8_,auVar8._8_8_,uVar7,uVar5);
      iVar2 = iVar2 + 1;
      iVar3 = FUN_094d3ba4();
    } while (iVar2 < iVar3);
  }
  return uVar5;
}


