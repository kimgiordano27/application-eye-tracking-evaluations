/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 036d6364
PROGRAM: vrfs-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  long *unaff_x25;
  
  lVar7 = *(long *)(unaff_x22 + 0xb8);
  lVar3 = FUN_036d4778();
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar6 = **(long **)(lVar5 + 0xb8);
  if (lVar7 == lVar6) {
    *(long *)(unaff_x20 + 0xb8) = lVar3;
  }
  else {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar5);
      lVar6 = **(long **)(*unaff_x25 + 0xb8);
    }
    if (lVar3 != lVar6) {
      plVar4 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc8bb8);
      if (plVar4 == (long *)0x0) {
LAB_036d6574:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fbc544(plVar4,0);
      lVar5 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (lVar5 == 0) goto LAB_036d6574;
      FUN_036ef950(lVar5,lVar7,0);
      lVar7 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (lVar7 == 0) goto LAB_036d6574;
      FUN_036ef950(lVar7,lVar3,0);
      lVar7 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
    }
    *(long *)(unaff_x20 + 0xb8) = lVar7;
    lVar3 = lVar7;
  }
  thunk_FUN_01656ef8(unaff_x20 + 0xb8,lVar3);
  iVar1 = FUN_036d7f44();
  if ((iVar1 == 1) && (iVar1 = FUN_036f2cf8(), iVar1 == 0)) {
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x22 + 0x68);
    thunk_FUN_01656ef8();
    iVar1 = 0;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1;
  iVar1 = FUN_036f2cf8();
  if (iVar1 != 1) {
    iVar1 = FUN_036f2cf8();
    iVar2 = FUN_036f2cf8();
    if (iVar1 != iVar2) {
      FUN_01fbafc0();
      return;
    }
  }
  *(long *)(unaff_x20 + 0x60) = unaff_x22;
  thunk_FUN_01656ef8((long *)(unaff_x20 + 0x60));
  *(undefined4 *)(unaff_x20 + 0x5c) = 2;
  return;
}


