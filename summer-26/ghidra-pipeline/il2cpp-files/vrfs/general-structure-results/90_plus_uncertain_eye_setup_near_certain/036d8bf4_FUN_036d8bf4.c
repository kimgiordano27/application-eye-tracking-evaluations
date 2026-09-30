/*
FUNCTION_NAME: FUN_036d8bf4
ENTRY_POINT: 036d8bf4
PROGRAM: vrfs-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * FUN_036d8bf4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_0723992b & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06de6fb8);
    thunk_FUN_0159f088(PTR_DAT_06e184b0);
    thunk_FUN_0159f088(PTR_DAT_06e5dc58);
    thunk_FUN_0159f088(PTR_DAT_06dc8bb8);
    DAT_0723992b = 1;
  }
  puVar6 = PTR_DAT_06dc8bb8;
  puVar5 = PTR_DAT_06d98c30;
  if (param_2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)PTR_DAT_06d98c30;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar9 = *(long *)puVar5;
  }
  puVar7 = PTR_DAT_06e5dc58;
  lVar13 = *param_2;
  bVar3 = *(byte *)(lVar13 + 300);
  bVar4 = *(byte *)(*(long *)puVar6 + 300);
  uVar1 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if ((bVar3 < bVar4) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar6)) {
    bVar4 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((bVar3 < bVar4) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_06e184b0)) {
      bVar4 = *(byte *)(*(long *)PTR_DAT_06de6fb8 + 300);
      if (bVar3 < bVar4) {
        return param_2;
      }
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_06de6fb8) {
        return param_2;
      }
      if ((param_2 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*param_2 + 0x238))
                                      (param_2,*(undefined8 *)(*param_2 + 0x240)),
         plVar10 == (long *)0x0)) {

        Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
        :
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar8 = FUN_03f054bc(plVar10,0);
      if (iVar8 != 1) {
        return param_2;
      }
      lVar9 = param_2[10];
      lVar13 = param_2[0xb];
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar11 = FUN_0371033c(lVar9,lVar13,uVar1,uVar2,0);
      if ((uVar11 & 1) == 0) {
        return param_2;
      }
      lVar12 = *(long *)puVar5;
      lVar9 = param_2[0xc];
      lVar13 = param_2[0xd];
      goto LAB_036d8e10;
    }
    plVar10 = (long *)(**(code **)(lVar13 + 0x238))(param_2,*(undefined8 *)(lVar13 + 0x240));
    if (plVar10 == (long *)0x0)
    goto 
    Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
    iVar8 = FUN_03f054bc(plVar10,0);
    if (iVar8 == 0) {
      lVar9 = *(long *)puVar7;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar9 = *(long *)puVar7;
      }
      return (long *)**(undefined8 **)(lVar9 + 0xb8);
    }
  }
  else {
    plVar10 = (long *)(**(code **)(lVar13 + 0x238))(param_2,*(undefined8 *)(lVar13 + 0x240));
    if (plVar10 == (long *)0x0)
    goto 
    Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
    iVar8 = FUN_03f054bc(plVar10,0);
  }
  if (iVar8 != 1) {
    return param_2;
  }
  lVar9 = param_2[10];
  lVar13 = param_2[0xb];
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar11 = FUN_0371033c(lVar9,lVar13,uVar1,uVar2,0);
  if ((uVar11 & 1) == 0) {
    return param_2;
  }
  lVar12 = *(long *)puVar5;
  lVar9 = param_2[0xc];
  lVar13 = param_2[0xd];
LAB_036d8e10:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar11 = FUN_0371033c(lVar9,lVar13,uVar1,uVar2,0);
  if (((uVar11 & 1) != 0) &&
     (param_2 = (long *)(**(code **)(*plVar10 + 0x308))(plVar10,0,*(undefined8 *)(*plVar10 + 0x310))
     , param_2 != (long *)0x0)) {
    bVar3 = *(byte *)(*(long *)puVar7 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar3) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(param_2);
    }
  }
  return param_2;
}


