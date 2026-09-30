/*
FUNCTION_NAME: System.Array.InternalEnumerator<RaycastHit>$$.ctor
ENTRY_POINT: 015cdf60
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 127
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long * System_Array_InternalEnumerator<RaycastHit>___ctor(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  lVar2 = thunk_FUN_0103ffe0();
  if (lVar2 == 0) {
    uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6,0);
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
  thunk_FUN_0106e12c();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*unaff_x22 + 0x898))(), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar4 = (**(code **)(*plVar3 + 0x288))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar4 & 1) == 0) {
switchD_015ce090_default:
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      plVar3 = (long *)thunk_FUN_010400dc();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244(lVar2);
      }
      FUN_01951ee0(plVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
      return plVar3;
    }
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar6 = OVRPlugin__get_positionSupported();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    uVar1 = FUN_01d62dc0(uVar6,0);
    switch(uVar1) {
    case 5:
      lVar2 = *unaff_x25;
      puVar5 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar2 = *unaff_x25;
      puVar5 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar2 = *unaff_x25;
      puVar5 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar2 = *unaff_x25;
      puVar5 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto switchD_015ce090_default;
    }
    uVar6 = *puVar5;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar6 = FUN_01d5e86c(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_0234cf50;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar6 = FUN_01d5e86c(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
  }
  plVar3 = (long *)FUN_01d8868c(uVar6);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244(lVar2);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar3);
    }
  }
  return plVar3;
}


