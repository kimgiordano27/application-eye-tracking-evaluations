/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$SetState
ENTRY_POINT: 076f3614
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__SetState(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long lVar7;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_09f2f8a8;
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    lVar7 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2f8a8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076f3678;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_076f3678:
    uVar3 = (*(code *)*puVar2)();
    if (lVar7 != 0) {
      uVar5 = FUN_07442b80(lVar7,uVar3,*(undefined8 *)PTR_DAT_09f2f8a0);
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x21;
        }
        lVar7 = *unaff_x19;
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076f370c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac();
LAB_076f370c:
        uVar3 = (*(code *)*puVar2)();
        if (lVar4 == 0) goto LAB_076f3774;
        FUN_07443e70(lVar4,uVar3,*(undefined8 *)PTR_DAT_09f2f8b0);
        lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076f3760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
          return;
        }
      }
      return;
    }
  }
LAB_076f3774:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


