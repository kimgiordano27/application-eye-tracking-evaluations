/*
FUNCTION_NAME: FUN_02383df4
ENTRY_POINT: 02383df4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_20;telemetry_or_network_hits_3
*/


void FUN_02383df4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03781df5 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection<OVRAnchor,_MRUK_TrackableState>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef370);
    thunk_FUN_00d48444(
                      OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_9190);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_Remove__);
    thunk_FUN_00d48444(UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__);
    thunk_FUN_00d48444(StringLiteral_12945);
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<char>_get_Length__);
    DAT_03781df5 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x100) == 0)) goto LAB_023842b8;
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = FUN_0129aa60(*(long *)(param_1 + 0x100),uVar14,
                       *(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__
                      );
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_023842b8;
    FUN_0129de0c(*(long *)(param_1 + 0x100),uVar14,*(undefined8 *)PTR_DAT_033ef370);
  }
  puVar3 = StringLiteral_302;
  uVar6 = FUN_02383b5c(param_1,param_2,*(undefined8 *)(param_1 + 0x110));
  if ((uVar6 & 1) == 0) {
    iVar15 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar1 = (undefined8 *)StringLiteral_12945;
joined_r0x023840bc:
    if (iVar15 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*puVar1,0);
    return;
  }
  uVar6 = FUN_02383b5c(param_1,param_2,*(undefined8 *)(param_1 + 0x100));
  if ((uVar6 & 1) == 0) {
    iVar15 = *(int *)(*(long *)puVar3 + 0xe0);
    puVar1 = (undefined8 *)Method_System_ReadOnlySpan<char>_get_Length__;
    goto joined_r0x023840bc;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
LAB_023842b8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129a054(*(long *)(param_1 + 0x100),uVar14,param_2,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_KeyCollection<OVRAnchor,_MRUK_TrackableState>_GetEnumerator__
              );
  *(undefined1 *)(param_1 + 0x128) = 1;
  if (DAT_0377a0ec == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IJsonVariableInfo>_MoveNext__
                      );
    DAT_0377a0ec = '\x01';
  }
  puVar3 = OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo;
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_023842b8;
  uVar6 = **(ulong **)
            (*(long *)
              Method_System_Collections_Generic_List_Enumerator<IJsonVariableInfo>_MoveNext__ + 0xb8
            );
  iVar15 = (int)(*(ulong **)
                  (*(long *)
                    Method_System_Collections_Generic_List_Enumerator<IJsonVariableInfo>_MoveNext__
                  + 0xb8))[1];
  lVar7 = FUN_01299a34(*(long *)(param_1 + 0x100),
                       *(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo
                      );
  puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__;
  puVar4 = Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_Remove__;
  puVar2 = UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo;
  if (lVar7 == 0) goto LAB_023842b8;
  FUN_011dcc00(lVar7,&local_98,
               *(undefined8 *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__
              );
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  bVar10 = true;
  uVar17 = uVar6;
  iVar16 = iVar15;
  while (uVar8 = FUN_012c3588(&local_80,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
    lVar7 = FUN_00ca6c64(&local_80,*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = *(ulong *)(lVar7 + 0x34);
    uVar13 = *(ulong *)(lVar7 + 0x28);
    uVar8 = uVar17;
    if ((int)uVar9 <= (int)uVar17) {
      uVar8 = uVar9;
    }
    if ((int)(uVar9 >> 0x20) <= (int)(uVar17 >> 0x20)) {
      uVar17 = uVar9;
    }
    if (*(int *)(lVar7 + 0x3c) <= iVar16) {
      iVar16 = *(int *)(lVar7 + 0x3c);
    }
    uVar17 = uVar8 & 0xffffffff | uVar17 & 0xffffffff00000000;
    uVar8 = uVar6;
    if ((int)uVar6 <= (int)uVar13) {
      uVar8 = uVar13;
    }
    if ((int)(uVar6 >> 0x20) <= (int)(uVar13 >> 0x20)) {
      uVar6 = uVar13;
    }
    if (iVar15 <= *(int *)(lVar7 + 0x30)) {
      iVar15 = *(int *)(lVar7 + 0x30);
    }
    uVar6 = uVar8 & 0xffffffff | uVar6 & 0xffffffff00000000;
    if (bVar10) {
      uVar18 = *(undefined8 *)(lVar7 + 0x48);
      uVar14 = *(undefined8 *)(lVar7 + 0x40);
      bVar10 = false;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar7 + 0x50);
      *(undefined8 *)(param_1 + 0xb8) = uVar18;
      *puVar1 = uVar14;
    }
    else {
      local_a0 = *(undefined8 *)(lVar7 + 0x50);
      uStack_a8 = *(undefined8 *)(lVar7 + 0x48);
      local_b0 = *(undefined8 *)(lVar7 + 0x40);
      FUN_02687e74(puVar1,&local_b0,0);
      bVar10 = false;
    }
  }
  FUN_012c3584(&local_80,*(undefined8 *)StringLiteral_9190);
  if ((*(long *)(param_1 + 0x110) == 0) ||
     (lVar7 = FUN_01299a34(*(long *)(param_1 + 0x110),*(undefined8 *)puVar3), lVar7 == 0))
  goto LAB_023842b8;
  FUN_011dcc00(lVar7,&local_98,*(undefined8 *)puVar5);
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  while( true ) {
    uVar8 = FUN_012c3588(&local_80,*(undefined8 *)puVar4);
    iVar12 = (int)(uVar17 >> 0x20);
    iVar11 = (int)(uVar6 >> 0x20);
    if ((uVar8 & 1) == 0) break;
    lVar7 = FUN_00ca6c64(&local_80,*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = *(ulong *)(lVar7 + 0x34);
    uVar13 = *(ulong *)(lVar7 + 0x28);
    uVar8 = uVar17;
    if ((int)uVar9 <= (int)uVar17) {
      uVar8 = uVar9;
    }
    if ((int)(uVar9 >> 0x20) <= iVar12) {
      uVar17 = uVar9;
    }
    if (*(int *)(lVar7 + 0x3c) <= iVar16) {
      iVar16 = *(int *)(lVar7 + 0x3c);
    }
    uVar17 = uVar8 & 0xffffffff | uVar17 & 0xffffffff00000000;
    uVar8 = uVar6;
    if ((int)uVar6 <= (int)uVar13) {
      uVar8 = uVar13;
    }
    if (iVar11 <= (int)(uVar13 >> 0x20)) {
      uVar6 = uVar13;
    }
    if (iVar15 <= *(int *)(lVar7 + 0x30)) {
      iVar15 = *(int *)(lVar7 + 0x30);
    }
    uVar6 = uVar8 & 0xffffffff | uVar6 & 0xffffffff00000000;
    if (bVar10) {
      uVar18 = *(undefined8 *)(lVar7 + 0x48);
      uVar14 = *(undefined8 *)(lVar7 + 0x40);
      bVar10 = false;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar7 + 0x50);
      *(undefined8 *)(param_1 + 0xb8) = uVar18;
      *puVar1 = uVar14;
    }
    else {
      local_c0 = *(undefined8 *)(lVar7 + 0x50);
      uStack_c8 = *(undefined8 *)(lVar7 + 0x48);
      local_d0 = *(undefined8 *)(lVar7 + 0x40);
      FUN_02687e74(puVar1,&local_d0,0);
      bVar10 = false;
    }
  }
  FUN_012c3584(&local_80,*(undefined8 *)StringLiteral_9190);
  if ((*(long *)(param_1 + 0x88) != 0) && ((int)*(undefined8 *)(param_1 + 300) == (int)uVar17)) {
    bVar10 = true;
    if (((int)((ulong)*(undefined8 *)(param_1 + 300) >> 0x20) != iVar12) ||
       (*(int *)(param_1 + 0x134) != iVar16)) goto LAB_02384274;
    if ((int)*(undefined8 *)(param_1 + 0x138) == (int)uVar6) {
      bVar10 = (int)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) != iVar11 ||
               *(int *)(param_1 + 0x140) != iVar15;
      goto LAB_02384274;
    }
  }
  bVar10 = true;
LAB_02384274:
  *(byte *)(param_1 + 0x144) = bVar10 | *(byte *)(param_1 + 0x144);
  *(ulong *)(param_1 + 300) = uVar17;
  *(int *)(param_1 + 0x134) = iVar16;
  *(ulong *)(param_1 + 0x138) = uVar6;
  *(int *)(param_1 + 0x140) = iVar15;
  return;
}


