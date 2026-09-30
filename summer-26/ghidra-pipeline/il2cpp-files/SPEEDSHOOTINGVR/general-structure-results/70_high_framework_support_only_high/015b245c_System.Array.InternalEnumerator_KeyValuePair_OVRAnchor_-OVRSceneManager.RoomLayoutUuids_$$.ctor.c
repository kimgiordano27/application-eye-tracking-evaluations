/*
FUNCTION_NAME: System.Array.InternalEnumerator<KeyValuePair<OVRAnchor,-OVRSceneManager.RoomLayoutUuids>>$$.ctor
ENTRY_POINT: 015b245c
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


long * System_Array_InternalEnumerator<KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>>___ctor
                 (long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int in_w8;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  if (in_w8 == 0) {
LAB_015b26bc:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar8);
    }
  }
  uVar9 = *(undefined8 *)PTR_DAT_0234cf38;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  plVar3 = (long *)FUN_01d5e86c(uVar9,0);
  plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
  if (plVar4 == (long *)0x0) {
LAB_015b26b8:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if ((plVar8 != (long *)0x0) &&
     (lVar5 = thunk_FUN_0103ffe0(plVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
    uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar9,0);
  }
  if ((int)plVar4[3] == 0) goto LAB_015b26bc;
  plVar4[4] = (long)plVar8;
  thunk_FUN_0106e12c(plVar4 + 4,plVar8);
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x898))
                                 (plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x8a0)),
     plVar3 == (long *)0x0)) goto LAB_015b26b8;
  uVar6 = (**(code **)(*plVar3 + 0x288))(plVar3,plVar8,*(undefined8 *)(*plVar3 + 0x290));
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x20 + 0x568))();
    if ((uVar6 & 1) == 0) {
switchD_015b2614_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      plVar8 = (long *)thunk_FUN_010400dc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      FUN_01949298(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar8;
    }
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar9 = OVRPlugin__get_positionSupported();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x25);
    }
    uVar2 = FUN_01d62dc0(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto switchD_015b2614_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar9 = FUN_01d5e86c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar9 = FUN_01d5e86c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
  }
  plVar8 = (long *)FUN_01d8868c(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar8);
    }
  }
  return plVar8;
}


