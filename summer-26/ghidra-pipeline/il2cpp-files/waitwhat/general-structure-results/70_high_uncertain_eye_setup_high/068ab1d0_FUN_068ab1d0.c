/*
FUNCTION_NAME: FUN_068ab1d0
ENTRY_POINT: 068ab1d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_068ab1d0(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_48;
  
  if ((DAT_075590f1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071146d0);
    FUN_03188a78(PTR_DAT_071146e0);
    FUN_03188a78(PTR_DAT_071146f0);
    FUN_03188a78(UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(PTR_DAT_07114710);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    DAT_075590f1 = 1;
  }
  puVar7 = OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
  puVar6 = OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo;
  puVar5 = UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
  puVar4 = PTR_DAT_071146e0;
  puVar3 = PTR_DAT_071146d0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    FUN_042e54fc(&local_88,param_2,*(undefined8 *)PTR_DAT_07114710);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
LAB_068ab2e8:
    uVar8 = FUN_054518b4(&local_70,*(undefined8 *)puVar4);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar8 = FUN_06858f90(*(long *)(param_1 + 0x30),local_60,&local_48,0);
      if ((uVar8 & 1) != 0) {
        lVar14 = *(long *)(param_1 + 0x30);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar9 = thunk_FUN_031c3cac(local_48,*(undefined8 *)puVar5);
        uVar8 = FUN_06856518(lVar14,param_1,uVar9,0);
        if ((uVar8 & 1) != 0) {
          if (param_3 != 0) {
            lVar14 = *(long *)(param_3 + 0x10);
            lVar12 = *(long *)puVar7;
            *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar2 = *(uint *)(param_3 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(param_3 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = local_48;
              }
              else {
                FUN_042e4a64(param_3,local_48,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_068ab2e8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      goto LAB_068ab2e8;
    }
    FUN_054518b0(&local_70,*(undefined8 *)puVar3);
    lVar14 = FUN_068b3948(param_1,0);
    if (lVar14 != 0) {
      lVar14 = *(long *)(param_1 + 0x308);
      if (lVar14 == 0) goto LAB_068ab4b0;
      iVar1 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        lVar14 = *(long *)(param_1 + 0x308);
        if (lVar14 == 0) goto LAB_068ab4b0;
      }
      FUN_042e4c6c(lVar14,param_3,*(undefined8 *)puVar6);
      plVar10 = (long *)FUN_068b3948(param_1,0);
      if (plVar10 != (long *)0x0) {
        lVar14 = *plVar10;
        uVar9 = *(undefined8 *)(param_1 + 0x308);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_068ab468;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068ab468:
        (*(code *)*puVar11)(plVar10,param_1,uVar9,param_3,puVar11[1]);
      }
    }
    if (param_3 != 0) {
      return *(undefined4 *)(param_3 + 0x18);
    }
  }
LAB_068ab4b0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


