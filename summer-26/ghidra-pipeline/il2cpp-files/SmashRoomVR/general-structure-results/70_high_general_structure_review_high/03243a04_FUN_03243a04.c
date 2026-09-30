/*
FUNCTION_NAME: FUN_03243a04
ENTRY_POINT: 03243a04
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_03243a04(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  bool bVar13;
  undefined8 local_130 [4];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int local_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined8 local_c0 [5];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  
  puVar4 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if ((DAT_03ff47b0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d84458);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84460);
    thunk_FUN_01ad9084(PTR_DAT_03d844f0);
    DAT_03ff47b0 = 1;
  }
  lVar8 = *(long *)puVar4;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_88 = 0;
  local_90 = 0;
  local_94[0] = 0;
  local_98[0] = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar8 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x180) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    FUN_03242e20(param_1);
    lVar8 = *(long *)puVar4;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar8 = *(long *)puVar4;
  }
  if (*(int *)(*(long *)(lVar8 + 0xb8) + 0x100) != *(int *)(param_1 + 0x1c8)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)PTR_DAT_03d844f0,0);
    return;
  }
  if (*(char *)(param_1 + 0xd3) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0xec);
    if (*(int *)(*(long *)PTR_DAT_03d84458 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_032402d8(uVar1);
    if (*(int *)(param_1 + 0x20) == 0) {
      return;
    }
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0xf8);
      if (lVar8 == 0) goto LAB_03243f60;
      iVar5 = FUN_032401f0(param_1);
      iVar10 = 1;
      if (iVar5 == 0) {
        iVar10 = 2;
      }
      if (*(int *)(lVar8 + 0x18) < iVar10) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0xf8);
      if (lVar8 == 0) goto LAB_03243f60;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_03243f64;
      uVar11 = *(undefined8 *)(lVar8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03922f24(uVar11,0,0);
      if ((uVar9 & 1) != 0) {
        return;
      }
    }
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_0320c0b4(&local_110,0);
  local_80 = CONCAT44(uStack_10c,local_110);
  uStack_78 = uStack_108;
  uStack_6c = uStack_fc;
  local_68 = local_f8;
  uStack_74 = uStack_104;
  local_70 = local_100;
  if (DAT_03fed258 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed258 = '\x01';
  }
  local_90 = *(ulong *)(*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                       + 0xc);
  local_88 = *(undefined4 *)
              (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x14);
  local_94[0] = 0;
  local_98[0] = 0;
  uVar9 = FUN_03243460(param_1,&local_80,&local_90,local_94,local_98);
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar8 = *(long *)puVar4;
  }
  if (*(int *)(*(long *)(lVar8 + 0xb8) + 0x100) == 2) {
    if (*(int *)(param_1 + 0xec) != 0) {
      return;
    }
    local_c0[0] = local_80;
    FUN_03243710(local_90 & 0xffffffff,local_90._4_4_,local_88,param_1,local_c0);
    return;
  }
  FUN_03241724(&local_110,param_1);
  uVar11 = CONCAT44(uStack_104,uStack_108);
  if (*(int *)(*(long *)PTR_DAT_03d84460 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03264934(param_1 + 0x138,uVar11,0);
  if ((uVar9 & 1) == 0) {
    bVar13 = 0 < *(int *)(param_1 + 0x124);
  }
  else {
    bVar13 = false;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  if (*(int *)(*(long *)PTR_DAT_03d84458 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_032402d8(uVar1);
  uVar7 = FUN_032402d8(*(undefined4 *)(param_1 + 0xf0));
  if (bVar13 || ((uVar6 ^ uVar7) & 1) != 0) {
    FUN_03240d38(param_1);
    FUN_03240e7c(param_1);
  }
  uVar9 = FUN_03240390(param_1,local_100,uStack_fc,local_f8,uStack_f4,uVar11,local_110);
  if ((*(int *)(param_1 + 0x184) == -1) || (*(int *)(param_1 + 0x124) < 1)) {
    if ((uVar9 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xec);
    return;
  }
  if ((uVar6 & 1) != 0) {
    FUN_032407d8(param_1,1 < local_100,uVar11,local_f8 == 2);
    if (*(char *)(param_1 + 0xd3) == '\0') {
      lVar8 = *(long *)(param_1 + 0x128);
      if (lVar8 == 0) goto LAB_03243f60;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_03243f64:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar12 = *(long **)(lVar8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (plVar12 == (long *)0x0) {
LAB_03243e20:
        plVar12 = (long *)0x0;
      }
      else {
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_03243e20;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           ) {
          plVar12 = (long *)0x0;
        }
      }
      uVar9 = FUN_0391f968(plVar12,0,0);
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
    uVar9 = FUN_032412f0(param_1);
    if ((uVar9 & 1) == 0) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0x198);
    if (*(int *)(param_1 + 0x19c) < iVar10) {
      iVar5 = *(int *)(param_1 + 0x180);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = iVar10 / iVar5;
      }
      uVar9 = FUN_03241eac(param_1,local_100,local_f8 == 2,uVar11,uStack_fc,iVar10 - iVar3 * iVar5);
      if ((uVar9 & 1) == 0) {
        return;
      }
    }
  }
  local_130[0] = local_80;
  uVar6 = FUN_03242580(local_90 & 0xffffffff,local_90._4_4_,local_88,param_1,local_94[0],local_98[0]
                       ,*(undefined1 *)(param_1 + 0xe4),local_130,*(undefined4 *)(param_1 + 0x198));
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x198);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1a0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03923030(uVar11,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x1a0) == 0) {
LAB_03243f60:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_038fe3fc(*(long *)(param_1 + 0x1a0),~uVar6 & 1,0);
  }
  return;
}


