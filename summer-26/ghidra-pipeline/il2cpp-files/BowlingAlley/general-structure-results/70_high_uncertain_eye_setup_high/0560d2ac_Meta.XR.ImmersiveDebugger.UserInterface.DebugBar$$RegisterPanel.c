/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$RegisterPanel
ENTRY_POINT: 0560d2ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__RegisterPanel(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  lVar1 = thunk_FUN_032a56a0();
  FUN_03c68208(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
  if ((unaff_x21 != 0) && (lVar2 = FUN_039eedfc(), lVar1 != 0)) {
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = lVar2;
    thunk_FUN_0333a630(plVar6,lVar2);
    if (*plVar6 != 0) {
      uVar3 = FUN_039f067c(*plVar6,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8(lVar2);
      }
      uVar4 = thunk_FUN_032a56a0(lVar2);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      FUN_055d2e5c(uVar4,lVar1,*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x70));
      uVar3 = FUN_039a8198(uVar3,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_032934b8(lVar1);
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar1);
      }
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_032934b8();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar1 == 0) {
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_032934b8();
        }
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar1 = *(long *)(lVar2 + 0x98);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_032934b8();
          lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        lVar2 = *(long *)(lVar2 + 0x90);
        uVar4 = **(undefined8 **)(lVar1 + 0xb8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8(lVar2);
        }
        lVar1 = thunk_FUN_032a56a0(lVar2);
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                  (lVar1,uVar4,*(undefined8 *)(lVar2 + 0xa0),*(undefined8 *)(lVar2 + 0xa8));
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar2 = *(long *)(lVar5 + 0x98);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
          lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
        lVar2 = *(long *)(lVar5 + 0x98);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        thunk_FUN_0333a630(*(long *)(lVar2 + 0xb8) + 8,lVar1);
      }
      uVar3 = FUN_0399a7bc(uVar3,lVar1,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
      FUN_039a6ef0(uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


