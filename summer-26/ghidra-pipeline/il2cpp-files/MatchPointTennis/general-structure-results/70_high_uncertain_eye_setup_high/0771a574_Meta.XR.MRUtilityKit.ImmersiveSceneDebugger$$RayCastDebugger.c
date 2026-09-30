/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$RayCastDebugger
ENTRY_POINT: 0771a574
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__RayCastDebugger(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  
  FUN_04447ba8(PTR_DAT_09f30d90);
  FUN_04447ba8(PTR_DAT_09f30d98);
  FUN_04447ba8(PTR_DAT_09f30ba0);
  *(undefined1 *)(unaff_x19 + 0x147) = 1;
  puVar1 = PTR_DAT_09f30d98;
  plVar5 = (long *)(unaff_x20 + 0xb8);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
    FUN_05bad610(lVar4,*(undefined8 *)PTR_DAT_09f1e860);
    *plVar5 = lVar4;
    thunk_FUN_044bb4b4(plVar5,lVar4);
    lVar4 = *plVar5;
  }
  puVar2 = PTR_DAT_09f30ba0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  uVar6 = *(undefined8 *)puVar2;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30b88);
    FUN_062fafbc(lVar7,uVar8,*(undefined8 *)PTR_DAT_09f30d90,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_044bb4b4(plVar5,lVar7);
  }
  puVar1 = PTR_DAT_09f1e540;
  if (lVar4 != 0) {
    uStack000000000000000c = FUN_05baf4c0(lVar4,lVar7,*(undefined8 *)PTR_DAT_09f30b80);
    uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x0000000c);
    uVar6 = FUN_078ab14c(uVar6,uVar8,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    FUN_094c652c(uVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


