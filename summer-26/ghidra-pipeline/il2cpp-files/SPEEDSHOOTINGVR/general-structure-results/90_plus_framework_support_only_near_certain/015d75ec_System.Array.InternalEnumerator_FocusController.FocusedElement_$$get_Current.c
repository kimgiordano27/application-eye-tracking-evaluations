/*
FUNCTION_NAME: System.Array.InternalEnumerator<FocusController.FocusedElement>$$get_Current
ENTRY_POINT: 015d75ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 120
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


long * System_Array_InternalEnumerator<FocusController_FocusedElement>__get_Current(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x428))();
  uVar10 = *(undefined8 *)PTR_DAT_0234cb98;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x25);
  }
  uVar10 = FUN_01d5e86c(uVar10,0);
  uVar4 = FUN_01d603ec(uVar3,uVar10,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x448))();
    if (lVar5 == 0) {
LAB_015d78b8:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_015d78bc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar9 = *(long **)(lVar5 + 0x20);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar9);
      }
    }
    uVar3 = *(undefined8 *)PTR_DAT_0234cf38;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    plVar6 = (long *)FUN_01d5e86c(uVar3,0);
    plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
    if (plVar7 == (long *)0x0) goto LAB_015d78b8;
    if ((plVar9 != (long *)0x0) &&
       (lVar5 = thunk_FUN_0103ffe0(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
      uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar3,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_015d78bc;
    plVar7[4] = (long)plVar9;
    thunk_FUN_0106e12c(plVar7 + 4,plVar9);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x898))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x8a0)),
       plVar6 == (long *)0x0)) goto LAB_015d78b8;
    uVar4 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x290));
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar3 = FUN_01d5e86c(uVar3,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
      goto LAB_015d7548;
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x568))();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = OVRPlugin__get_positionSupported();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    uVar2 = FUN_01d62dc0(uVar3,0);
    switch(uVar2) {
    case 5:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto switchD_015d7814_default;
    }
    uVar3 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01d5e86c(uVar3,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
LAB_015d7548:
    plVar9 = (long *)FUN_01d8868c(uVar3);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar9);
      }
    }
    return plVar9;
  }
switchD_015d7814_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  plVar9 = (long *)thunk_FUN_010400dc();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  FUN_01955110(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}


