/*
FUNCTION_NAME: System.Array.InternalEnumerator<HashSet.Slot<OVRSpaceUser>>$$MoveNext
ENTRY_POINT: 015bb22c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * System_Array_InternalEnumerator<HashSet_Slot<OVRSpaceUser>>__MoveNext(void)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  int in_w8;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
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
switchD_015bb344_default:
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
      FUN_0194c11c(plVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
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
      goto switchD_015bb344_default;
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


