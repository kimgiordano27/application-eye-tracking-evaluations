/*
FUNCTION_NAME: System.Array.InternalEnumerator<RaycastHit>$$MoveNext
ENTRY_POINT: 015cdf84
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long * System_Array_InternalEnumerator<RaycastHit>__MoveNext(void)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  
  thunk_FUN_0106e12c();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar2 = (long *)(**(code **)(*unaff_x22 + 0x898))(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar3 = (**(code **)(*plVar2 + 0x288))();
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar3 & 1) == 0) {
switchD_015ce090_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      plVar2 = (long *)thunk_FUN_010400dc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      FUN_01951ee0(plVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar2;
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
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto switchD_015ce090_default;
    }
    uVar6 = *puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
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
  plVar2 = (long *)FUN_01d8868c(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar2);
    }
  }
  return plVar2;
}


