/*
FUNCTION_NAME: System.Array.InternalEnumerator<KeyValuePair<Guid,-OVRTask.CallbackWithState<OVRSceneManager.Metrics,-OVRTask.CombinedTaskDataWithCompletedTaskId<OVRSceneManager.Metrics>>>>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 015ae44c
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


long * System_Array_InternalEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<OVRSceneManager_Metrics,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRSceneManager_Metrics>>>>__System_Collections_IEnumerator_get_Current
                 (void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
                    /* try { // try from 015ae44c to 016ae45b has its CatchHandler @ 015ae514 */
  uVar3 = FUN_01d603ec();
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 015ae45c to 016ae4ff has its CatchHandler @ 015ae088 */
    lVar4 = (**(code **)(*unaff_x20 + 0x448))();
    if (lVar4 == 0) {
LAB_015ae6d4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_015ae6d8:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
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
    plVar5 = (long *)FUN_01d5e86c(uVar9,0);
    plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
    if (plVar6 == (long *)0x0) goto LAB_015ae6d4;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_0103ffe0(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_015ae6d8;
    plVar6[4] = (long)plVar8;
    thunk_FUN_0106e12c(plVar6 + 4,plVar8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x898))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x8a0)),
       plVar5 == (long *)0x0)) goto LAB_015ae6d4;
    uVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x290));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar9 = FUN_01d5e86c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x24);
      }
      goto LAB_015ae364;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x568))();
  if ((uVar3 & 1) != 0) {
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
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf58;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf28;
      break;
    case 7:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf60;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_0234cf48;
      break;
    default:
      goto 
      System_Array_InternalEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>>__System_Collections_IEnumerator_Reset
      ;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar9 = FUN_01d5e86c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x24);
    }
LAB_015ae364:
    plVar8 = (long *)FUN_01d8868c(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar8);
      }
    }
    return plVar8;
  }

  System_Array_InternalEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>>__System_Collections_IEnumerator_Reset
  :
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  plVar8 = (long *)thunk_FUN_010400dc();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  FUN_01947e94(plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


