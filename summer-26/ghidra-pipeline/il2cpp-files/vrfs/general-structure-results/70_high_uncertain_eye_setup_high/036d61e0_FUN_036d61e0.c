/*
FUNCTION_NAME: FUN_036d61e0
ENTRY_POINT: 036d61e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_036d61e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  if ((DAT_07239920 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e34bf8);
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    thunk_FUN_0159f088(PTR_DAT_06e5dc58);
    thunk_FUN_0159f088(PTR_DAT_06dc8bb8);
    thunk_FUN_0159f088(PTR_DAT_06dfe660);
    thunk_FUN_0159f088(PTR_DAT_06e614e0);
    thunk_FUN_0159f088(PTR_DAT_06db54d8);
    DAT_07239920 = 1;
  }
  puVar2 = PTR_DAT_06e34bf8;
  if (param_2 == 0) goto LAB_036d6574;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_036d6574;
LAB_036d630c:
    plVar12 = (long *)FUN_036d8b4c(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = PTR_DAT_06db54d8;
    if (plVar12 == (long *)0x0) {
      plVar12 = *(long **)(param_4 + 0x68);
      if (plVar12 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        FUN_01fbaf30(param_1,*(undefined8 *)puVar2,uVar5,param_4,0);
        return;
      }
      goto LAB_036d6574;
    }
  }
  else {
    if (param_4 == 0) goto LAB_036d6574;
    uVar11 = *(undefined8 *)(param_4 + 0x68);
    uVar5 = FUN_03fc4050(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar6 = FUN_047562e8(uVar11,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_036d630c;
    plVar12 = *(long **)(param_2 + 0x88);
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06dd0a58 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd0a58)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar12);
      }
    }
    FUN_036cf930(param_1,plVar12);
    if (plVar12 == (long *)0x0) goto LAB_036d6574;
  }
  puVar2 = PTR_DAT_06e5dc58;
  if ((*(byte *)(plVar12 + 0xe) >> 1 & 1) != 0) {
    FUN_01fbafc0(param_1,*(undefined8 *)PTR_DAT_06dfe660,param_2,0);
  }
  FUN_036d6848(param_1,plVar12,param_2,*(undefined8 *)(param_4 + 0x58),
               *(undefined8 *)(param_4 + 0x60),2);
  lVar13 = plVar12[0x17];
  lVar7 = FUN_036d4778(param_1,*(undefined8 *)(param_4 + 0x50),1);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar9);
    lVar9 = *(long *)puVar2;
  }
  lVar10 = **(long **)(lVar9 + 0xb8);
  if (lVar13 == lVar10) {
    *(long *)(param_2 + 0xb8) = lVar7;
    lVar13 = lVar7;
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
      lVar13 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(param_1,plVar8);
    }
    *(long *)(param_2 + 0xb8) = lVar13;
  }
  uVar5 = thunk_FUN_01656ef8(param_2 + 0xb8,lVar13);
  iVar3 = FUN_036d7f44(uVar5,param_2,param_3,lVar7);
  if ((iVar3 == 1) && (iVar3 = FUN_036f2cf8(plVar12,0), iVar3 == 0)) {
    *(long *)(param_2 + 0x68) = plVar12[0xd];
    thunk_FUN_01656ef8();
    iVar3 = 0;
  }
  *(int *)(param_2 + 0x90) = iVar3;
  iVar3 = FUN_036f2cf8(plVar12,0);
  if (iVar3 != 1) {
    iVar3 = FUN_036f2cf8(param_2,0);
    iVar4 = FUN_036f2cf8(plVar12,0);
    if (iVar3 != iVar4) {
      FUN_01fbafc0(param_1,*(undefined8 *)PTR_DAT_06e614e0,param_2,0);
      return;
    }
  }
  *(undefined8 *)(param_2 + 0x60) = plVar12;
  thunk_FUN_01656ef8((undefined8 *)(param_2 + 0x60),plVar12);
  *(undefined4 *)(param_2 + 0x5c) = 2;
  return;
}


