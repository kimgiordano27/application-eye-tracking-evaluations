/*
FUNCTION_NAME: FUN_030c7f64
ENTRY_POINT: 030c7f64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_030c7f64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff1a0d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_13202);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_13212);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_13213);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_13214);
    thunk_FUN_01ad9084(StringLiteral_13215);
    thunk_FUN_01ad9084(StringLiteral_13216);
    thunk_FUN_01ad9084(StringLiteral_13217);
    thunk_FUN_01ad9084(StringLiteral_13218);
    thunk_FUN_01ad9084(StringLiteral_13219);
    thunk_FUN_01ad9084(StringLiteral_13220);
    DAT_03ff1a0d = 1;
  }
  local_70 = 0;
  local_68 = 4;
  uStack_64 = 0x3c0;
  FUN_038e90f8(&uStack_64,&local_68,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar9 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar9 & 1) != 0) {
    uVar7 = FUN_038e90d0(0);
    local_70 = CONCAT44(uVar7,(uint)local_70);
    uVar10 = FUN_0303de64((long)&local_70 + 4,0);
    uVar10 = FUN_02edd6e8(*(undefined8 *)StringLiteral_13217,uVar10,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
    FUN_038f2acc(uVar10,0);
    uVar10 = FUN_0303de64(&uStack_64,0);
    uVar11 = FUN_0303de64(&local_68,0);
    uVar10 = FUN_02ee6d10(*(undefined8 *)StringLiteral_13220,uVar10,
                          *(undefined8 *)StringLiteral_13219,uVar11,0);
    FUN_038f2acc(uVar10,0);
  }
  puVar2 = StringLiteral_13213;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = StringLiteral_13202;
  lVar12 = FUN_01f25510(*(undefined8 *)puVar2);
  uVar9 = FUN_03922f24(lVar12,0,0);
  if ((uVar9 & 1) == 0) {
    if (lVar12 == 0) goto LAB_030c8594;
    uVar10 = FUN_0391c27c(lVar12,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar12);
      lVar12 = *(long *)puVar3;
    }
    puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30);
    *puVar14 = uVar10;
    thunk_FUN_01b4f09c(puVar14,uVar10);
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)StringLiteral_13216,0);
  }
  puVar4 = StringLiteral_13215;
  puVar2 = StringLiteral_13214;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_030c947c();
  lVar12 = FUN_01b47fd0(*(undefined8 *)puVar2,uVar7);
  plVar18 = (long *)(param_1 + 0x78);
  *plVar18 = lVar12;
  thunk_FUN_01b4f09c(plVar18,lVar12);
  uVar10 = FUN_03920070(*(undefined8 *)puVar4,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar14 = uVar10;
  thunk_FUN_01b4f09c(puVar14,uVar10);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  uVar9 = FUN_0391f968(uVar10,0,0);
  if ((uVar9 & 1) != 0) {
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    FUN_03923a90(uVar10,0);
  }
  uVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_0391fe00(uVar10,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)puVar3;
  }
  puVar5 = StringLiteral_13218;
  puVar4 = StringLiteral_13212;
  puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28);
  *puVar14 = uVar10;
  thunk_FUN_01b4f09c(puVar14,uVar10);
  puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  iVar17 = 0;
  while( true ) {
    local_70 = CONCAT44(local_70._4_4_,iVar17);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar8 = FUN_030c947c();
    if (iVar8 <= iVar17) break;
    uVar10 = FUN_0303de64(&local_70,0);
    uVar10 = FUN_02edd6e8(*(undefined8 *)puVar5,uVar10,0);
    lVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0391fe00(lVar12,uVar10,0);
    if (lVar12 == 0) goto LAB_030c8594;
    lVar13 = FUN_0391fab4(lVar12,0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar15);
      lVar15 = *(long *)puVar3;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
    if ((lVar15 == 0) || (uVar10 = FUN_0391fab4(lVar15,0), lVar13 == 0)) goto LAB_030c8594;
    FUN_039294c8(lVar13,uVar10,0);
    lVar13 = FUN_0391fab4(lVar12,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(puVar1);
      DAT_03fed257 = '\x01';
    }
    if (lVar13 == 0) goto LAB_030c8594;
    puVar16 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    FUN_03928dd4(*puVar16,puVar16[1],puVar16[2],lVar13,0);
    FUN_03923d4c(lVar12,4,0);
    plVar19 = (long *)*plVar18;
    uVar6 = (uint)local_70;
    lVar13 = (long)(int)(uint)local_70;
    lVar12 = FUN_01ed7044(lVar12,*(undefined8 *)puVar4);
    if (plVar19 == (long *)0x0) goto LAB_030c8594;
    if ((lVar12 != 0) &&
       (lVar15 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0)) {
      uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar10,0);
    }
    if (*(uint *)(plVar19 + 3) <= uVar6) {
LAB_030c8598:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar19[lVar13 + 4] = lVar12;
    thunk_FUN_01b4f09c(plVar19 + lVar13 + 4,lVar12);
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_030c8594;
    if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) goto LAB_030c8598;
    lVar13 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    if (lVar13 == 0) goto LAB_030c8594;
    lVar12 = *(long *)(lVar12 + (long)(int)(uint)local_70 * 8 + 0x20);
    uVar10 = FUN_0391fab4(lVar13,0);
    if (lVar12 == 0) goto LAB_030c8594;
    puVar14 = (undefined8 *)(lVar12 + 0x60);
    *puVar14 = uVar10;
    thunk_FUN_01b4f09c(puVar14,uVar10);
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_030c8594;
    if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) goto LAB_030c8598;
    lVar12 = *(long *)(lVar12 + (long)(int)(uint)local_70 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_030c8594;
    *(uint *)(lVar12 + 0x20) = (uint)local_70;
    FUN_030c954c();
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_030c8594;
    if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) goto LAB_030c8598;
    lVar12 = *(long *)(lVar12 + (long)(int)(uint)local_70 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_030c8594;
    iVar17 = (uint)local_70 + 1;
    *(uint *)(lVar12 + 0x68) = (uint)local_70;
  }
  FUN_030c9674(param_1);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)puVar3;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
  if (lVar12 != 0) {
    FUN_03923d4c(lVar12,4,0);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c);
    return;
  }
LAB_030c8594:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


