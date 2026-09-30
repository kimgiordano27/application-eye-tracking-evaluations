/*
FUNCTION_NAME: thunk_FUN_058e2834
ENTRY_POINT: 058e32dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_18;functionality_gaze_retrieval_or_extraction
*/


void thunk_FUN_058e2834(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  undefined8 uStack_50;
  
  if ((DAT_06b80b6d & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(OVRPlugin_Sizei_TypeInfo);
    FUN_02d6084c(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d6084c(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02d6084c(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_067679f0);
    FUN_02d6084c(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_02d6084c(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_02d6084c(OVRPlugin_Vector3f_TypeInfo);
    FUN_02d6084c(OVRPlugin_Vector4f_TypeInfo);
    FUN_02d6084c(OVRPlugin_Vector4s_TypeInfo);
    FUN_02d6084c(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    FUN_02d6084c(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    DAT_06b80b6d = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  auStack_a8._0_8_ = 0;
  lStack_b0 = 0;
  lStack_98 = 0;
  auStack_a8._8_8_ = 0;
  uVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  uVar5 = FUN_04e8cf70(uVar4,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = FUN_05860ad4(uVar4,0);
  if (lVar6 == 0) {
    lVar6 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
    if (lVar6 == 0) goto LAB_058e3050;
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) =
           *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo;
      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x28) = uVar4;
        thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x28),uVar4);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)OVRPlugin_Vector4f_TypeInfo;
          thunk_FUN_02dd37b4();
          plVar9 = (long *)thunk_FUN_02d709fc(param_1,0);
          if (plVar9 == (long *)0x0) goto LAB_058e3050;
          uVar4 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x38) = uVar4;
            thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x38),uVar4);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) =
                   *(undefined8 *)
                    OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo;
              thunk_FUN_02dd37b4();
              uVar4 = FUN_04e8e3a4(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
              }
              FUN_060224f0(uVar4,param_1,0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    FUN_0583c144(&uStack_80,lVar6,0);
    puVar2 = OVRPlugin_TextureRectMatrixf_TypeInfo;
    puVar1 = OVRPlugin_SpaceQueryResult_TypeInfo;
    piVar7 = *(int **)(*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo + 0xb8);
    if (0 < *piVar7) {
      iVar3 = 0;
      do {
        FUN_037a60a0(&lStack_70,piVar7,iVar3,*(undefined8 *)puVar1);
        if (lStack_58 == 0) goto LAB_058e3050;
        uVar5 = FUN_0583b758(*(undefined8 *)(lStack_58 + 0x58),*(undefined8 *)(lStack_58 + 0x60),
                             uStack_80,uStack_78,0);
        if ((uVar5 & 1) != 0) {
          FUN_037a60a0(&lStack_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,
                       *(undefined8 *)puVar1);
          lVar8 = lStack_58;
          goto LAB_058e2bf8;
        }
        iVar3 = iVar3 + 1;
        piVar7 = *(int **)(*(long *)puVar2 + 0xb8);
      } while (iVar3 < *piVar7);
    }
    puVar1 = PTR_DAT_06768438;
    if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = FUN_05856344(lVar6,0,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_058572e8(lVar8,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
    auStack_a8 = FUN_058fbf9c(lVar8,&lStack_88,4,0);
    lStack_b0 = lStack_88;
    uStack_90 = 0;
    lStack_98 = lVar8;
    thunk_FUN_02dd37b4(&lStack_98,lVar8);
    lStack_70 = lStack_b0;
    lStack_58 = lStack_98;
    uStack_50 = uStack_90;
    auStack_68 = auStack_a8;
    iVar3 = FUN_037a66c0(*(undefined8 *)(*(long *)puVar2 + 0xb8),&lStack_70,
                         *(undefined8 *)OVRPlugin_Sizei_TypeInfo);
LAB_058e2bf8:
    lVar8 = FUN_058530e4(lVar8,uVar4,0,0);
    plVar9 = param_1 + 4;
    *plVar9 = lVar8;
    thunk_FUN_02dd37b4(plVar9,lVar8);
    puVar1 = OVRPlugin_SpaceQueryResult_TypeInfo;
    if (*plVar9 != 0) {
      FUN_037a60a0(&lStack_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,
                   *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
      param_1[6] = lStack_70;
      FUN_037a60a0(&lStack_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,*(undefined8 *)puVar1);
      uStack_90 = uStack_50;
      lStack_b0 = lStack_70;
      lStack_98 = lStack_58;
      auStack_a8 = auStack_68;
      FUN_058e3144(&lStack_d8,&lStack_b0,param_1);
      auStack_68._0_8_ = uStack_d0;
      lStack_70 = lStack_d8;
      lStack_58 = uStack_c0;
      auStack_68._8_8_ = uStack_c8;
      uStack_50 = uStack_b8;
      FUN_037a614c(*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,&lStack_70,
                   *(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
      return;
    }
    lVar8 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,7);
    if (lVar8 == 0) {
LAB_058e3050:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)OVRPlugin_Vector3f_TypeInfo;
      thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x28) = uVar4;
        thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x28),uVar4);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVRPlugin_Vector4s_TypeInfo;
          thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x30));
          if (3 < *(uint *)(lVar8 + 0x18)) {
            *(long *)(lVar8 + 0x38) = lVar6;
            thunk_FUN_02dd37b4((long *)(lVar8 + 0x38),lVar6);
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo;
              thunk_FUN_02dd37b4();
              plVar9 = (long *)thunk_FUN_02d709fc(param_1,0);
              if (plVar9 == (long *)0x0) goto LAB_058e3050;
              uVar4 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              if (5 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x48) = uVar4;
                thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x48),uVar4);
                if (6 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_067679f0;
                  thunk_FUN_02dd37b4();
                  uVar4 = FUN_04e8e3a4(lVar8,0);
                  if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
                  }
                  FUN_060224f0(uVar4,param_1,0);
                  puVar1 = OVRPlugin_SpaceQueryResult_TypeInfo;
                  FUN_037a60a0(&lStack_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,
                               *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
                  uVar4 = uStack_50;
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar5 = UnityEngine_Font__add_textureRebuilt(uVar4,0,0);
                  if ((uVar5 & 1) == 0) {
                    return;
                  }
                  FUN_037a60a0(&lStack_70,*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,
                               *(undefined8 *)puVar1);
                  lStack_b0 = lStack_70;
                  lStack_98 = lStack_58;
                  uStack_90 = uStack_50;
                  auStack_a8 = auStack_68;
                  FUN_058e3094(&lStack_b0);
                  FUN_037a70ec(*(undefined8 *)(*(long *)puVar2 + 0xb8),iVar3,
                               *(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


