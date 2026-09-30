/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 036d8c90
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long in_x10;
  long in_x12;
  long *unaff_x19;
  long lVar11;
  long *unaff_x27;
  
  puVar5 = PTR_DAT_06e5dc58;
  bVar3 = *(byte *)(param_1 + 300);
  uVar1 = *(undefined8 *)(in_x12 + 0x10);
  uVar2 = *(undefined8 *)(in_x12 + 0x18);
  if ((bVar3 < *(byte *)(in_x10 + 300)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 300) * 8 + -8) != in_x10)) {
    bVar4 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((bVar3 < bVar4) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_06e184b0)) {
      bVar4 = *(byte *)(*(long *)PTR_DAT_06de6fb8 + 300);
      if (bVar3 < bVar4) {
        return unaff_x19;
      }
      if (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_06de6fb8)
      {
        return unaff_x19;
      }
      if ((unaff_x19 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*unaff_x19 + 0x238))
                                     (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x240)),
         plVar7 == (long *)0x0)) {

        Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
        :
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar6 = FUN_03f054bc(plVar7,0);
      if (iVar6 != 1) {
        return unaff_x19;
      }
      lVar10 = unaff_x19[10];
      lVar11 = unaff_x19[0xb];
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar8 = FUN_0371033c(lVar10,lVar11,uVar1,uVar2,0);
      if ((uVar8 & 1) == 0) {
        return unaff_x19;
      }
      lVar9 = *unaff_x27;
      lVar10 = unaff_x19[0xc];
      lVar11 = unaff_x19[0xd];
      goto LAB_036d8e10;
    }
    plVar7 = (long *)(**(code **)(param_1 + 0x238))();
    if (plVar7 == (long *)0x0)
    goto 
    Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
    iVar6 = FUN_03f054bc(plVar7,0);
    if (iVar6 == 0) {
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar10 = *(long *)puVar5;
      }
      return (long *)**(undefined8 **)(lVar10 + 0xb8);
    }
  }
  else {
    plVar7 = (long *)(**(code **)(param_1 + 0x238))();
    if (plVar7 == (long *)0x0)
    goto 
    Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
    iVar6 = FUN_03f054bc(plVar7,0);
  }
  if (iVar6 != 1) {
    return unaff_x19;
  }
  lVar10 = unaff_x19[10];
  lVar11 = unaff_x19[0xb];
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = FUN_0371033c(lVar10,lVar11,uVar1,uVar2,0);
  if ((uVar8 & 1) == 0) {
    return unaff_x19;
  }
  lVar9 = *unaff_x27;
  lVar10 = unaff_x19[0xc];
  lVar11 = unaff_x19[0xd];
LAB_036d8e10:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = FUN_0371033c(lVar10,lVar11,uVar1,uVar2,0);
  if (((uVar8 & 1) != 0) &&
     (unaff_x19 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,0,*(undefined8 *)(*plVar7 + 0x310)),
     unaff_x19 != (long *)0x0)) {
    bVar3 = *(byte *)(*(long *)puVar5 + 300);
    if ((*(byte *)(*unaff_x19 + 300) < bVar3) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(unaff_x19);
    }
  }
  return unaff_x19;
}


