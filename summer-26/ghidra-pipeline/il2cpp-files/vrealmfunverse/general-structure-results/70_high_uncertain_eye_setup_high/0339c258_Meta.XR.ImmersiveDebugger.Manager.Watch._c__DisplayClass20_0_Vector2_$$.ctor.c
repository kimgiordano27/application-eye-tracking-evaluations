/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$.ctor
ENTRY_POINT: 0339c258
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>___ctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = (**(code **)(param_1 + 0x218))();
  if (*(int *)(unaff_x19 + 0x98) <= *(int *)(unaff_x19 + 0xb8)) {
    uVar4 = FUN_03c44d90();
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xa0),uVar4);
    return;
  }
  uVar1 = FUN_032c0bc8();
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_0314f938(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,auVar8._0_8_,auVar8._8_8_,0,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        uVar4 = FUN_03c44d90();
        plVar3 = (long *)FUN_05d22bd4(uVar4,0);
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0631fef8) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0339c424;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_0631fef8,0);
LAB_0339c424:
        (*(code *)*puVar5)(plVar3);
        return;
      }
    }
    FUN_032e3234();
  }
  return;
}


