/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$.ctor
ENTRY_POINT: 05627720
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056278c0) */

void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager___ctor(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
code_r0x05627720:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(), (uVar2 & 1) != 0) {
    lVar6 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_05627788;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
LAB_05627788:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar1 = *(byte *)(*unaff_x25 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar4);
    }
    lVar6 = thunk_FUN_032f181c(*(undefined8 *)
                                (*plVar4 + (ulong)*(ushort *)
                                                   (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20)
                                                                       + 0xc0) + 0x20) + 0x50) *
                                           0x10 + 0x140));
    uVar5 = (**(code **)(lVar6 + 8))(plVar4,0,lVar6);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8(uVar5,uVar5);
    }
    FUN_03d0b564();
    param_1 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          in_x9 = (long)*piVar7;
          goto code_r0x05627720;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
  }
  plVar4 = (long *)thunk_FUN_032a55a4();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05627880;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar4,*unaff_x23,0);
LAB_05627880:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


