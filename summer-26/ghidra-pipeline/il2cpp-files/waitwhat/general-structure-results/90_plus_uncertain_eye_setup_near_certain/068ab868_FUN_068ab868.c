/*
FUNCTION_NAME: FUN_068ab868
ENTRY_POINT: 068ab868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_11
*/


undefined4 FUN_068ab868(long param_1,long param_2,long param_3,long param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_075590f2 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_03188a78(UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    FUN_03188a78(PTR_DAT_07114758);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo)
    ;
    FUN_03188a78(PTR_DAT_07114760);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_075590f2 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  *param_5 = -1;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0x18);
    lVar6 = FUN_068b3948(param_1,0);
    if (lVar6 != 0) {
      if (*(long *)(param_1 + 0x310) == 0) goto LAB_068abcf0;
      FUN_05241954(*(long *)(param_1 + 0x310),*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
    }
    puVar4 = PTR_DAT_07114760;
    puVar3 = PTR_DAT_070c1b68;
    if (0 < iVar5) {
      bVar2 = false;
      iVar14 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x30);
        uVar7 = FUN_042e47a4(param_2,iVar14,*(undefined8 *)puVar4);
        if (lVar15 == 0) goto LAB_068abcf0;
        uVar8 = FUN_06859118(lVar15,uVar7,&local_68,&local_70,0);
        lVar15 = local_70;
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar12);
        }
        uVar9 = FUN_069d69b8(lVar15,0,0);
        if ((uVar8 & 1) == 0) {
LAB_068abaa8:
          if (lVar6 == 0 && (uVar9 & 1) == 0) goto LAB_068abc44;
        }
        else {
          lVar15 = *(long *)(param_1 + 0x30);
          if (lVar15 == 0) goto LAB_068abcf0;
          uVar7 = thunk_FUN_031c3cac(local_68,*(undefined8 *)
                                               UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo
                                    );
          uVar8 = FUN_06856518(lVar15,param_1,uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_068abaa8;
          if (!bVar2) {
            *param_5 = iVar14;
          }
          if (param_3 == 0) goto LAB_068abcf0;
          lVar15 = *(long *)(param_3 + 0x10);
          lVar12 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_068abcf0;
          uVar1 = *(uint *)(param_3 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(param_3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = local_68;
          }
          else {
            FUN_042e4a64(param_3,local_68,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if ((uVar9 & 1) != 0) {
            if (local_70 == 0) goto LAB_068abcf0;
            uVar7 = *(undefined8 *)(local_70 + 0x28);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar8 = FUN_069d69b8(uVar7,0,0);
            if ((uVar8 & 1) != 0) {
              if (param_4 == 0) goto LAB_068abcf0;
              lVar15 = *(long *)(param_4 + 0x10);
              lVar12 = *(long *)OVRPlugin_OVRP_1_29_0_TypeInfo;
              *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_068abcf0;
              uVar1 = *(uint *)(param_4 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(param_4 + 0x18) = uVar1 + 1;
                *(long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = local_70;
              }
              else {
                FUN_042e4a64(param_4,local_70,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          if (lVar6 == 0) goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
          if (*(long *)(param_1 + 0x310) == 0) goto LAB_068abcf0;
          FUN_052432d4(*(long *)(param_1 + 0x310),local_68,iVar14,
                       *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
          bVar2 = true;
        }
        iVar14 = iVar14 + 1;
      } while (iVar5 != iVar14);
    }
    if (lVar6 == 0) {
LAB_068abc44:
      if (param_3 != 0) {
UnityEngine_Mesh__GetAllocArrayFromChannelImpl:
        return *(undefined4 *)(param_3 + 0x18);
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x308);
      if (lVar6 != 0) {
        iVar5 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar5) {
          FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar5,0);
          lVar6 = *(long *)(param_1 + 0x308);
          if (lVar6 == 0) goto LAB_068abcf0;
        }
        FUN_042e4c6c(lVar6,param_3,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
        plVar10 = (long *)FUN_068b3948(param_1,0);
        if (plVar10 != (long *)0x0) {
          lVar6 = *plVar10;
          uVar7 = *(undefined8 *)(param_1 + 0x308);
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
                puVar11 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_068abc5c;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068abc5c:
          (*(code *)*puVar11)(plVar10,param_1,uVar7,param_3,puVar11[1]);
        }
        if (param_3 != 0) {
          if (*(int *)(param_3 + 0x18) < 1) {
            iVar5 = -1;
          }
          else {
            lVar6 = *(long *)(param_1 + 0x310);
            uVar7 = FUN_042e47a4(param_3,0,
                                 *(undefined8 *)
                                  Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                                );
            if (lVar6 == 0) goto LAB_068abcf0;
            iVar5 = FUN_0524174c(lVar6,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
          }
          *param_5 = iVar5;
          goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
        }
      }
    }
  }
LAB_068abcf0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


