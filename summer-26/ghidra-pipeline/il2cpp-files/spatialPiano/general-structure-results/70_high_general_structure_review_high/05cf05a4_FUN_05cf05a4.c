/*
FUNCTION_NAME: FUN_05cf05a4
ENTRY_POINT: 05cf05a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;ray_or_cast_sink_hits_5;strong_file_logging_hits_3
*/


void FUN_05cf05a4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short *psVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  ulong uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_06bc34fb & 1) == 0) {
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                );
    FUN_02f08768(Method_System_Configuration_IgnoreSection_get_Properties__);
    FUN_02f08768(Method_UnityEngine_UI_Image_RebuildImage__);
    FUN_02f08768(Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
                );
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                );
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                );
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_1__
                );
    DAT_06bc34fb = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (*(int *)(param_2 + 0x2a8) == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (0 < *(int *)(param_2 + 400)) {
      if (param_1 == 0) goto LAB_05cf0b8c;
      lVar8 = *(long *)(param_1 + 0x68);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      *(undefined4 *)(param_2 + 0x2a4) = *(undefined4 *)(lVar8 + 8);
    }
  }
  iVar10 = *(int *)(param_3 + 0x3c);
  uStack_6c._0_4_ = 0;
  uStack_6c._4_4_ = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if ((iVar10 == 0) && (*(int *)(param_3 + 0x44) == 0)) {
    iVar10 = *(int *)(param_2 + 0x2a8);
    *(undefined1 *)(param_3 + 0x7b) = 0;
    *(int *)(param_3 + 0x24) = iVar10 + -1;
    return;
  }
  if (*(char *)(param_3 + 0x7d) == '\0') {
    cVar7 = '\0';
    if (*(char *)(param_2 + 0x2c0) != '\0') {
      uStack_6c._4_4_ = FUN_05cf0b90(param_2);
      cVar7 = *(char *)(param_3 + 0x7d);
      iVar10 = *(int *)(param_3 + 0x3c);
    }
  }
  else {
    cVar7 = '\x01';
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_06121424(&local_e0,iVar10 + -cVar7,0);
  uStack_84 = (undefined4)uStack_d8;
  uStack_80 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_8c = (undefined4)local_e0;
  uStack_88 = (undefined4)((ulong)local_e0 >> 0x20);
  local_74 = (undefined4)uStack_c8;
  uStack_70 = (undefined4)((ulong)uStack_c8 >> 0x20);
  uStack_7c = (undefined4)uStack_d0;
  uStack_78 = (undefined4)((ulong)uStack_d0 >> 0x20);
  uStack_6c = CONCAT44(uStack_6c._4_4_,local_c0);
  if (DAT_06bc34ed == '\0') {
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
                );
    DAT_06bc34ed = '\x01';
  }
  if (param_1 == 0) {
LAB_05cf0b8c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar10 = *(int *)(param_3 + 0x38);
  uVar1 = *(uint *)(param_3 + 0x3c);
  lVar9 = *(long *)
           Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
  ;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02f41ef8(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_0347f6f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar4 = Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__;
  puVar3 = Method_System_Configuration_IgnoreSection_get_Properties__;
  puVar2 = PTR_DAT_067ce608;
  if ((int)uVar1 < 0) {
    FUN_050f577c(0);
  }
  else if (uVar1 != 0) {
    lVar8 = lVar8 + (long)iVar10 * 0x18;
    uVar13 = 0;
    do {
      if (((int)uVar13 == 0) && (*(char *)(param_3 + 0x7d) != '\0')) {
        uStack_6c = (CONCAT44(*(undefined4 *)(lVar8 + uVar13 * 0x18 + 0xc),(undefined4)uStack_6c) ^
                    0xffffffff00000000) & 0x2ffffffff;
      }
      else {
        iVar10 = 0;
        lVar9 = lVar8 + uVar13 * 0x18;
        while( true ) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (*(int *)(param_2 + 400) <= iVar10) break;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          psVar12 = (short *)FUN_04da93a0(param_2 + 0xd0,iVar10,*(undefined8 *)puVar3);
          if (DAT_06bc3597 == '\0') {
            FUN_02f08768(puVar2);
            DAT_06bc3597 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (((*(short *)(lVar8 + uVar13 * 0x18) == *psVar12) &&
              (*(int *)(psVar12 + 8) == *(int *)(lVar9 + 0x10))) &&
             (*(int *)(psVar12 + 10) == *(int *)(lVar9 + 0x14))) goto LAB_05cf08ac;
          iVar10 = iVar10 + 1;
        }
        iVar10 = -1;
LAB_05cf08ac:
        if (*(int *)(*(long *)
                      Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_06121570(&uStack_8c,(int)uVar13 + (int)-cVar7,iVar10,0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_06121424(&local_e0,*(undefined4 *)(param_3 + 0x44),0);
  uStack_a8 = uStack_d8;
  local_b0 = local_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  local_90 = local_c0;
  if (DAT_06bc34ea == '\0') {
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
                );
    DAT_06bc34ea = '\x01';
  }
  iVar10 = *(int *)(param_3 + 0x40);
  uVar1 = *(uint *)(param_3 + 0x44);
  lVar9 = *(long *)
           Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
  ;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02f41ef8(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_0347f6f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar4 = Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__;
  puVar3 = Method_System_Configuration_IgnoreSection_get_Properties__;
  puVar2 = PTR_DAT_067ce608;
  if ((int)uVar1 < 0) {
    FUN_050f577c(0);
  }
  else if (uVar1 != 0) {
    uVar13 = 0;
    do {
      iVar11 = 0;
      psVar12 = (short *)(lVar8 + (long)iVar10 * 0x18 + uVar13 * 0x18);
      while( true ) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(int *)(param_2 + 400) <= iVar11) break;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        psVar5 = (short *)FUN_04da93a0(param_2 + 0xd0,iVar11,*(undefined8 *)puVar3);
        if (DAT_06bc3597 == '\0') {
          FUN_02f08768(puVar2);
          DAT_06bc3597 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (((*psVar12 == *psVar5) && (*(int *)(psVar5 + 8) == *(int *)(psVar12 + 8))) &&
           (*(int *)(psVar5 + 10) == *(int *)(psVar12 + 10))) goto LAB_05cf0a74;
        iVar11 = iVar11 + 1;
      }
      iVar11 = -1;
LAB_05cf0a74:
      if (*(int *)(*(long *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06121570(&local_b0,uVar13 & 0xffffffff,iVar11,0);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  uVar13 = FUN_05cee0f4(param_3,0);
  if ((uVar13 & 1) != 0) {
    uStack_6c = uStack_6c | 0x800000000;
  }
  if (*(int *)(param_2 + 0x2a8) != 0) {
    uVar6 = FUN_03deb160(param_1 + 0x68,*(int *)(param_2 + 0x2a8) + *(int *)(param_2 + 0x2a4) + -1,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                        );
    uVar13 = FUN_05ce8a00(&local_b0,uVar6,0);
    if ((uVar13 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x7b) = 0;
      iVar10 = *(int *)(param_2 + 0x2a8) + -1;
      goto LAB_05cf0b54;
    }
  }
  FUN_03deb3c4(param_1 + 0x68,&local_b0,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverride__
              );
  iVar10 = *(int *)(param_2 + 0x2a8);
  *(int *)(param_2 + 0x2a8) = iVar10 + 1;
  *(undefined1 *)(param_3 + 0x7b) = 1;
LAB_05cf0b54:
  *(int *)(param_3 + 0x24) = iVar10;
  return;
}


