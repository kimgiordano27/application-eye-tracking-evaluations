/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorAdded$$.ctor
ENTRY_POINT: 06dc70d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorAdded___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e90d10);
  FUN_03c8f898(PTR_DAT_08e90d18);
  FUN_03c8f898(PTR_DAT_08e6c420);
  *(undefined1 *)(unaff_x20 + 0xc4e) = 1;
  FUN_06dc292c();
  uVar2 = FUN_06dc5fa4();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_06dc5de4();
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08e90c10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dc4bf0();
    }
  }
  else {
    FUN_06dc7288();
  }
  plVar3 = (long *)(**(code **)(*unaff_x19 + 0x518))();
  puVar1 = PTR_DAT_08e6c418;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e90d08) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06dc71c8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e90d08,2);
LAB_06dc71c8:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    if ((unaff_x19 == (long *)0x0) || (FUN_05d60b38(), lVar6 == 0))
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__Invoke;
    FUN_05d68e60(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e6c420);
  }
  lVar6 = (**(code **)(*unaff_x19 + 0x548))();
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x90);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90d10);
    FUN_05d60b38();
    if (lVar6 != 0) {
      FUN_05d68e60(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e90d18);
      return;
    }
  }
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__Invoke:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


