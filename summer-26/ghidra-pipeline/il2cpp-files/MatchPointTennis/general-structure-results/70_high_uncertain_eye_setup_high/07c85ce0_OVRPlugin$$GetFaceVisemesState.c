/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 07c85ce0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceVisemesState(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x8a0);
  *(undefined4 *)(param_2 + 0x10) = 7;
  *(undefined8 *)(param_2 + 0x14) = uVar8;
  FUN_07a80df4(param_2,0);
  if (unaff_x20 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar4 = PTR_DAT_09f50a50;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = param_2;
        thunk_FUN_044bb4b4(plVar5,param_2);
      }
      else {
        FUN_05bade44();
      }
      *(long *)(unaff_x19 + 0x40) = unaff_x20;
      thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x40));
      *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar6 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_09f50a38;
      puVar2 = PTR_DAT_09f50a30;
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar6 = *(long *)puVar4;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f205c8);
        FUN_0554c1d8(lVar7,uVar8,*(undefined8 *)PTR_DAT_09f50a48,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar5 = lVar7;
        thunk_FUN_044bb4b4(plVar5,lVar7);
      }
      *(long *)(unaff_x19 + 0x50) = lVar7;
      thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x50),lVar7);
      uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_074760a4(uVar8,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar8;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x58),uVar8);
      FUN_0952dd08();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


