/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 036d627c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x23;
  long unaff_x24;
  long *plVar12;
  long lVar13;
  
  uVar11 = *(undefined8 *)(unaff_x23 + 0x68);
  plVar12 = *(long **)(unaff_x24 + 0xbf8);
  uVar5 = FUN_03fc4050(param_1,0);
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_016466fc(*plVar12);
  }
  uVar6 = FUN_047562e8(uVar11,uVar5,0);
  if ((uVar6 & 1) == 0) {
    plVar12 = (long *)FUN_036d8b4c();
    if (plVar12 == (long *)0x0) {
      plVar12 = *(long **)(unaff_x23 + 0x68);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        FUN_01fbaf30();
        return;
      }
      goto LAB_036d6574;
    }
  }
  else {
    plVar12 = *(long **)(unaff_x20 + 0x88);
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06dd0a58 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd0a58)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar12);
      }
    }
    FUN_036cf930();
    if (plVar12 == (long *)0x0) goto LAB_036d6574;
  }
  puVar2 = PTR_DAT_06e5dc58;
  if ((*(byte *)(plVar12 + 0xe) >> 1 & 1) != 0) {
    FUN_01fbafc0();
  }
  FUN_036d6848();
  lVar13 = plVar12[0x17];
  lVar7 = FUN_036d4778();
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar9);
    lVar9 = *(long *)puVar2;
  }
  lVar10 = **(long **)(lVar9 + 0xb8);
  if (lVar13 == lVar10) {
    *(long *)(unaff_x20 + 0xb8) = lVar7;
  }
  else {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar9);
      lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
    }
    if (lVar7 != lVar10) {
      plVar8 = (long *)thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc8bb8);
      if (plVar8 == (long *)0x0) {
LAB_036d6574:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fbc544(plVar8,0);
      lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (lVar9 == 0) goto LAB_036d6574;
      FUN_036ef950(lVar9,lVar13,0);
      lVar13 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (lVar13 == 0) goto LAB_036d6574;
      FUN_036ef950(lVar13,lVar7,0);
      lVar13 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
    }
    *(long *)(unaff_x20 + 0xb8) = lVar13;
    lVar7 = lVar13;
  }
  thunk_FUN_01656ef8(unaff_x20 + 0xb8,lVar7);
  iVar3 = FUN_036d7f44();
  if ((iVar3 == 1) && (iVar3 = FUN_036f2cf8(plVar12,0), iVar3 == 0)) {
    *(long *)(unaff_x20 + 0x68) = plVar12[0xd];
    thunk_FUN_01656ef8();
    iVar3 = 0;
  }
  *(int *)(unaff_x20 + 0x90) = iVar3;
  iVar3 = FUN_036f2cf8(plVar12,0);
  if (iVar3 != 1) {
    iVar3 = FUN_036f2cf8();
    iVar4 = FUN_036f2cf8(plVar12,0);
    if (iVar3 != iVar4) {
      FUN_01fbafc0();
      return;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x60) = plVar12;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x60),plVar12);
  *(undefined4 *)(unaff_x20 + 0x5c) = 2;
  return;
}


