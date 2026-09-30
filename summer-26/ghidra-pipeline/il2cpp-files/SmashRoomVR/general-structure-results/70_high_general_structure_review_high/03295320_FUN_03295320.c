/*
FUNCTION_NAME: FUN_03295320
ENTRY_POINT: 03295320
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


bool FUN_03295320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  if ((DAT_03ff576c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d85f60);
    thunk_FUN_01ad9084(StringLiteral_4292);
    thunk_FUN_01ad9084(PTR_DAT_03d85f68);
    thunk_FUN_01ad9084(PTR_DAT_03d83898);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d85f70);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85f78);
    thunk_FUN_01ad9084(PTR_DAT_03d85f80);
    thunk_FUN_01ad9084(PTR_DAT_03d85f88);
    thunk_FUN_01ad9084(PTR_DAT_03d85f90);
    thunk_FUN_01ad9084(PTR_DAT_03d85f98);
    DAT_03ff576c = 1;
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  puVar4 = PTR_DAT_03d85f90;
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038f2acc(*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar7 = FUN_03262d04(0);
  puVar4 = PTR_DAT_03d85f80;
  uVar12 = 0;
  if (lVar7 != 0) {
    lVar8 = *(long *)PTR_DAT_03d85f80;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_03d85f60;
    lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar4;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar11 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_4292);
      FUN_028b6724(lVar11,uVar12,*(undefined8 *)PTR_DAT_03d85f78,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar9 = lVar11;
      thunk_FUN_01b4f09c(plVar9,lVar11);
    }
    uVar12 = FUN_01eb4ac4(lVar7,lVar11,*(undefined8 *)puVar3);
  }
  uVar10 = FUN_02ee6cf0(uVar12,0);
  if ((uVar10 & 1) == 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03262f28(uVar12,&local_68,0);
    lVar7 = local_60;
    if (((uVar10 & 1) != 0) && (local_60 != 0)) {
      *(long *)(param_1 + 0x100) = local_60;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_032630dc(lVar7,0);
      if (lVar7 != 0) {
        lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d83898);
        FUN_0321d700(lVar8,lVar7,0);
        uVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d85f68);
        FUN_028c1d68(uVar12,param_1,*(undefined8 *)PTR_DAT_03d85f70,0);
        if (lVar8 == 0) goto LAB_03295730;
        *(undefined8 *)(lVar8 + 0x70) = uVar12;
        thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x70),uVar12);
        *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(param_1 + 0xb0);
        thunk_FUN_01b4f09c();
        *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(param_1 + 0xb8);
        thunk_FUN_01b4f09c();
        FUN_0321d78c(&local_b8,lVar8,1,1,0);
        plVar9 = (long *)(param_1 + 0xd8);
        local_70 = local_98;
        uStack_88 = uStack_b0;
        local_90 = local_b8;
        uStack_78 = uStack_a0;
        uStack_80 = local_a8;
        *(undefined8 *)(param_1 + 0xf8) = local_98;
        *(undefined8 *)(param_1 + 0xf0) = uStack_a0;
        *(undefined8 *)(param_1 + 0xe8) = local_a8;
        *(undefined8 *)(param_1 + 0xe0) = uStack_b0;
        *(undefined8 *)(param_1 + 0xd8) = local_b8;
        thunk_FUN_01b4f09c(plVar9,0);
        uVar12 = *(undefined8 *)(param_1 + 0xd8);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        bVar6 = FUN_0391f968(uVar12,0,0);
        *(byte *)(param_1 + 0x109) = bVar6 & 1;
        if ((bVar6 & 1) != 0) {
          if (*plVar9 == 0) {
LAB_03295730:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar7 = FUN_0391fab4(*plVar9,0);
          uVar12 = FUN_0391c27c(param_1,0);
          if (lVar7 == 0) goto LAB_03295730;
          FUN_03929660(lVar7,uVar12,0,0);
          if ((*plVar9 == 0) || (lVar7 = FUN_0392013c(*plVar9,0), lVar7 == 0)) goto LAB_03295730;
          FUN_0392316c(lVar7,*(undefined8 *)PTR_DAT_03d85f88,0);
          if (*plVar9 == 0) goto LAB_03295730;
          FUN_0391fab4(*plVar9,0);
          FUN_03295734();
          FUN_032944f8(param_1,*(undefined4 *)(param_1 + 0x50));
          FUN_032957b0(param_1);
        }
      }
    }
    bVar5 = *(char *)(param_1 + 0x109) != '\0';
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)PTR_DAT_03d85f98,0);
    bVar5 = false;
  }
  return bVar5;
}


