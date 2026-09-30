/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorRemoved$$Invoke
ENTRY_POINT: 06dc7380
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorRemoved__Invoke(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e90d08);
    FUN_03c8f898(PTR_DAT_08e6c418);
    FUN_03c8f898(PTR_DAT_08e90d10);
    FUN_03c8f898(PTR_DAT_08e90d28);
    FUN_03c8f898(PTR_DAT_08e90d30);
    *(undefined1 *)(unaff_x20 + 0xc50) = 1;
  }
  FUN_06dc2b10();
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x518))();
  puVar1 = PTR_DAT_08e6c418;
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e90d08) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06dc744c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar2,*(long *)PTR_DAT_08e90d08,2);
LAB_06dc744c:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    if ((unaff_x19 == (long *)0x0) || (FUN_05d60b38(), lVar5 == 0)) goto LAB_06dc7508;
    FUN_05d68e9c(lVar5,uVar4,*(undefined8 *)PTR_DAT_08e90d28);
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x548))();
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x90);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90d10);
    FUN_05d60b38();
    if (lVar5 != 0) {
      FUN_05d68e9c(lVar5,uVar4,*(undefined8 *)PTR_DAT_08e90d30);
      return;
    }
  }
LAB_06dc7508:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


