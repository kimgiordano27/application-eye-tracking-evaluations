/*
FUNCTION_NAME: UnityEngine.Mesh$$PrintErrorCantAccessChannel_Injected
ENTRY_POINT: 068ab8dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined4 UnityEngine_Mesh__PrintErrorCantAccessChannel_Injected(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int iVar13;
  long lVar14;
  long in_stack_00000000;
  int *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
  FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
  FUN_03188a78(OVRPlugin_OVRP_1_29_0_TypeInfo);
  FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
  FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo);
  FUN_03188a78(PTR_DAT_07114758);
  FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo);
  FUN_03188a78(PTR_DAT_07114760);
  FUN_03188a78(PTR_DAT_070c1b68);
  *(undefined1 *)(unaff_x20 + 0xf2) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  *in_stack_00000008 = -1;
  if (unaff_x23 != 0) {
    iVar4 = *(int *)(unaff_x23 + 0x18);
    lVar5 = FUN_068b3948();
    if (lVar5 != 0) {
      if (*(long *)(unaff_x21 + 0x310) == 0) goto LAB_068abcf0;
      FUN_05241954(*(long *)(unaff_x21 + 0x310),*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
    }
    puVar3 = PTR_DAT_070c1b68;
    if (0 < iVar4) {
      bVar2 = false;
      iVar13 = 0;
      do {
        lVar14 = *(long *)(unaff_x21 + 0x30);
        uVar6 = FUN_042e47a4();
        if (lVar14 == 0) goto LAB_068abcf0;
        uVar7 = FUN_06859118(lVar14,uVar6,&stack0x00000018,&stack0x00000010,0);
        lVar14 = in_stack_00000010;
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar11);
        }
        uVar8 = FUN_069d69b8(lVar14,0,0);
        if ((uVar7 & 1) == 0) {
LAB_068abaa8:
          if (lVar5 == 0 && (uVar8 & 1) == 0) goto LAB_068abc44;
        }
        else {
          lVar14 = *(long *)(unaff_x21 + 0x30);
          if (lVar14 == 0) goto LAB_068abcf0;
          thunk_FUN_031c3cac(in_stack_00000018,
                             *(undefined8 *)
                              UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
          uVar7 = FUN_06856518(lVar14);
          if ((uVar7 & 1) == 0) goto LAB_068abaa8;
          if (!bVar2) {
            *in_stack_00000008 = iVar13;
          }
          if (unaff_x19 == 0) goto LAB_068abcf0;
          lVar14 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_068abcf0;
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
          }
          else {
            FUN_042e4a64();
          }
          if ((uVar8 & 1) != 0) {
            if (in_stack_00000010 == 0) goto LAB_068abcf0;
            uVar6 = *(undefined8 *)(in_stack_00000010 + 0x28);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar7 = FUN_069d69b8(uVar6,0,0);
            if ((uVar7 & 1) != 0) {
              if (in_stack_00000000 == 0) goto LAB_068abcf0;
              lVar14 = *(long *)(in_stack_00000000 + 0x10);
              lVar11 = *(long *)OVRPlugin_OVRP_1_29_0_TypeInfo;
              *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_068abcf0;
              uVar1 = *(uint *)(in_stack_00000000 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000010;
              }
              else {
                FUN_042e4a64(in_stack_00000000,in_stack_00000010,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          if (lVar5 == 0) goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
          if (*(long *)(unaff_x21 + 0x310) == 0) goto LAB_068abcf0;
          FUN_052432d4(*(long *)(unaff_x21 + 0x310),in_stack_00000018,iVar13,
                       *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
          bVar2 = true;
        }
        iVar13 = iVar13 + 1;
      } while (iVar4 != iVar13);
    }
    if (lVar5 == 0) {
LAB_068abc44:
      if (unaff_x19 != 0) {
UnityEngine_Mesh__GetAllocArrayFromChannelImpl:
        return *(undefined4 *)(unaff_x19 + 0x18);
      }
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x308);
      if (lVar5 != 0) {
        iVar4 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if ((iVar4 < 1) ||
           (FUN_0595236c(*(undefined8 *)(lVar5 + 0x10),0,iVar4,0), *(long *)(unaff_x21 + 0x308) != 0
           )) {
          FUN_042e4c6c();
          plVar9 = (long *)FUN_068b3948();
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
                  puVar10 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                  goto LAB_068abc5c;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068abc5c:
            (*(code *)*puVar10)(plVar9);
          }
          if (unaff_x19 != 0) {
            if (*(int *)(unaff_x19 + 0x18) < 1) {
              iVar4 = -1;
            }
            else {
              lVar5 = *(long *)(unaff_x21 + 0x310);
              uVar6 = FUN_042e47a4();
              if (lVar5 == 0) goto LAB_068abcf0;
              iVar4 = FUN_0524174c(lVar5,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
            }
            *in_stack_00000008 = iVar4;
            goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
          }
        }
      }
    }
  }
LAB_068abcf0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


