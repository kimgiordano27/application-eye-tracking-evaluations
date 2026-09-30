/*
FUNCTION_NAME: System.Array$$System.Collections.IList.RemoveAt
ENTRY_POINT: 031f41b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__System_Collections_IList_RemoveAt(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_01c5d288(PTR_DAT_04232bd8);
  FUN_01c5d288(
              VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass20_0_TypeInfo
              );
  FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_InstalledApplicationList_TypeInfo);
  FUN_01c5d288(OVRManager_<>c_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x6cd) = 1;
  if ((*(long *)(unaff_x21 + 0x88) == 0) ||
     (plVar6 = (long *)FUN_031fa42c(*(long *)(unaff_x21 + 0x88),0), plVar6 == (long *)0x0))
  goto LAB_031f48a0;
  plVar7 = plVar6;
  if (*plVar6 != *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo)
  goto LAB_031f48a8;
  if ((int)plVar6[3] == 3) {
    if (0 < (int)plVar6[0x16]) {
      FUN_031f40b0(plVar6,plVar6);
    }
    if (((char)plVar6[0x18] != '\0') && (0 < (int)plVar6[0x10])) {
      lVar10 = plVar6[0x17];
      if (lVar10 == 0) goto LAB_031f48a0;
      lVar12 = plVar6[0x15];
      uVar1 = *(uint *)(lVar10 + 0x18);
      lVar13 = 8;
      do {
        uVar15 = lVar13 - 8;
        if (uVar1 <= uVar15) goto LAB_031f489c;
        lVar14 = plVar6[0x13];
        if (lVar14 == 0) goto LAB_031f48a0;
        if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_031f489c;
        if (lVar12 == 0) goto LAB_031f48a0;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_031f489c;
        *(int *)(lVar12 + lVar13 * 4) =
             *(int *)(lVar14 + lVar13 * 4) + *(int *)(lVar10 + lVar13 * 4);
        lVar14 = lVar13 + -7;
        lVar13 = lVar13 + 1;
      } while (lVar14 < (int)plVar6[0x10]);
    }
  }
  else {
    lVar10 = plVar6[0x15];
    if ((char)plVar6[0x18] == '\0') {
      if (lVar10 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
      iVar11 = (int)plVar6[0x16];
    }
    else {
      lVar13 = plVar6[0x13];
      if (lVar13 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_031f489c;
      if (lVar10 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
      iVar11 = *(int *)(lVar13 + 0x20) + (int)plVar6[0x16];
    }
    *(int *)(lVar10 + 0x20) = iVar11;
  }
  puVar4 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo;
  if (unaff_x20 == 0) goto LAB_031f48a0;
  switch(*(undefined4 *)(unaff_x20 + 0x20)) {
  case 1:
    lVar10 = plVar6[0xe];
    lVar13 = *(long *)
              VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar13 = *(long *)puVar4;
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
    if (lVar10 != lVar12) {
      lVar10 = *(long *)(unaff_x20 + 0x48);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar13 = *(long *)puVar4;
        lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
      }
      if (lVar10 != lVar12) {
        if ((char)plVar6[0xf] == '\0') {
          if (plVar6[0x1f] != 0) {
            lVar10 = plVar6[0x15];
            if (lVar10 == 0) goto LAB_031f48a0;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
            FUN_031fcc84(plVar6[0x1f],*(undefined8 *)(unaff_x20 + 0x30),
                         *(undefined4 *)(lVar10 + 0x20),0);
            goto LAB_031f487c;
          }
          lVar10 = *(long *)(unaff_x20 + 0x38);
          if (lVar10 == 0) {
            uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
            uVar2 = *(undefined4 *)((long)plVar6 + 0x7c);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
LAB_031f47dc:
            lVar10 = FUN_031ed750(uVar8,uVar2);
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0x40) == 0) {
            uVar8 = thunk_FUN_01c273e8(OVROverlay_ExternalSurfaceObjectCreated_TypeInfo);
            uVar8 = FUN_03313b64(uVar8,0);
            thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
            uVar9 = thunk_FUN_01c496e0();
            FUN_031dce5c(uVar9,uVar8,0);
            uVar8 = thunk_FUN_01c273e8(
                                      OculusSampleFramework_OVROverlaySample_<WaitforOVROverlay>d__30_TypeInfo
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar9,uVar8);
          }
          lVar10 = *(long *)(unaff_x20 + 0x48);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
          }
          puVar5 = 
          VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass20_0_TypeInfo
          ;
          if (lVar10 == lVar12) {
            FUN_031f491c();
            lVar10 = *(long *)(unaff_x20 + 0x30);
          }
          else {
            uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x50);
            lVar10 = thunk_FUN_01c49334(*(undefined8 *)
                                         VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass20_0_TypeInfo
                                        ,(long)&stack0x00000008 + 4);
            uStack0000000000000008 = 0;
            lVar13 = thunk_FUN_01c49334(*(undefined8 *)puVar5,&stack0x00000008);
            if (lVar10 == lVar13) {
              FUN_031f2994();
              uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
              if (*(int *)(*(long *)
                            DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo + 0xe0
                          ) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar10 = FUN_031df5d0(uVar8);
            }
            else {
              lVar10 = *(long *)(unaff_x20 + 0x38);
              if (lVar10 == 0) {
                uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
                uVar2 = *(undefined4 *)(unaff_x20 + 0x50);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                goto LAB_031f47dc;
              }
            }
          }
        }
        plVar7 = (long *)plVar6[0x1e];
        if (plVar7 != (long *)0x0) {
          lVar13 = plVar6[0x15];
          if (lVar13 == 0) goto LAB_031f48a0;
          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_031f489c;
          uVar1 = *(uint *)(lVar13 + 0x20);
          if ((lVar10 != 0) &&
             (lVar13 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
          goto LAB_031f48b8;
          if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_031f489c;
          plVar7[(long)(int)uVar1 + 4] = lVar10;
          goto LAB_031f487c;
        }
        plVar7 = (long *)plVar6[0x1d];
        if (plVar7 == (long *)0x0) goto LAB_031f48a0;
        bVar3 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130)
        ;
        if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
        lVar13 = plVar6[0x15];
        goto LAB_031f4874;
      }
    }
    FUN_031f491c();
    plVar7 = (long *)plVar6[0x1e];
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar6[0x15];
      if (lVar10 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
      lVar13 = *(long *)(unaff_x20 + 0x30);
LAB_031f4540:
      uVar1 = *(uint *)(lVar10 + 0x20);
      if ((lVar13 != 0) &&
         (lVar10 = thunk_FUN_01c495e4(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
LAB_031f48b8:
        uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,0);
      }
      if (*(uint *)(plVar7 + 3) <= uVar1) {
LAB_031f489c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar7[(long)(int)uVar1 + 4] = lVar13;
      goto LAB_031f487c;
    }
    plVar7 = (long *)plVar6[0x1d];
    if (plVar7 == (long *)0x0) {
LAB_031f48a0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar3 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) {
LAB_031f48a8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar7);
    }
    lVar10 = *(long *)(unaff_x20 + 0x30);
    break;
  case 2:
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      *(long *)(unaff_x20 + 0x48) = plVar6[0xe];
    }
    FUN_031f2d68();
    if (*(long *)(unaff_x21 + 0x88) == 0) goto LAB_031f48a0;
    FUN_031f79ec();
    if (plVar6[0xe] == 0) goto LAB_031f487c;
    uVar15 = FUN_032eb44c(plVar6[0xe],0);
    if (((uVar15 & 1) != 0) && (*(int *)(unaff_x20 + 0x7c) == 0)) {
      *(undefined1 *)(unaff_x20 + 0xe0) = 1;
      lVar10 = FUN_031f2828();
      plVar7 = (long *)plVar6[0x1d];
      lVar13 = plVar6[0x15];
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)OVRManager_<>c_TypeInfo);
      if (plVar7 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130)
        ;
        if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar7);
        }
      }
      FUN_031fc564(uVar8,plVar7,lVar13,0);
      if (lVar10 == 0) goto LAB_031f48a0;
      FUN_031f79ec(lVar10,uVar8,0);
      goto LAB_031f487c;
    }
    plVar7 = (long *)plVar6[0x1e];
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar6[0x15];
      if (lVar10 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
      lVar13 = *(long *)(unaff_x20 + 0xe8);
      goto LAB_031f4540;
    }
    plVar7 = (long *)plVar6[0x1d];
    if (plVar7 == (long *)0x0) goto LAB_031f48a0;
    bVar3 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
    lVar10 = *(long *)(unaff_x20 + 0xe8);
    break;
  case 3:
    plVar7 = *(long **)(unaff_x21 + 0x30);
    if (plVar7 == (long *)0x0) goto LAB_031f48a0;
    lVar10 = (**(code **)(*plVar7 + 0x178))
                       (plVar7,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(*plVar7 + 0x180));
    if (lVar10 == 0) {
      uVar8 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,(int)plVar6[0x10]);
      FUN_032f42b0(plVar6[0x15],0,uVar8,0,(int)plVar6[0x10],0);
      plVar7 = *(long **)(unaff_x21 + 0x30);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1b8))
                  (plVar7,plVar6[0xb],uVar8,*(undefined8 *)(unaff_x20 + 0x60),
                   *(undefined8 *)(*plVar7 + 0x1c0));
        goto LAB_031f487c;
      }
      goto LAB_031f48a0;
    }
    plVar7 = (long *)plVar6[0x1e];
    if (plVar7 != (long *)0x0) {
      lVar13 = plVar6[0x15];
      if (lVar13 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar13 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar13 + 0x20);
        lVar13 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar13 == 0) goto LAB_031f48b8;
        if (uVar1 < *(uint *)(plVar7 + 3)) {
          plVar7[(long)(int)uVar1 + 4] = lVar10;
          goto LAB_031f487c;
        }
      }
      goto LAB_031f489c;
    }
    plVar7 = (long *)plVar6[0x1d];
    if (plVar7 == (long *)0x0) goto LAB_031f48a0;
    bVar3 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
    lVar13 = plVar6[0x15];
    goto LAB_031f4874;
  case 4:
    *(int *)(plVar6 + 0x16) = (int)plVar6[0x16] + *(int *)(unaff_x20 + 0x118) + -1;
    goto LAB_031f487c;
  default:
    FUN_031f381c();
    goto LAB_031f48b8;
  }
  lVar13 = plVar6[0x15];
LAB_031f4874:
  thunk_FUN_01c5c9d4(plVar7,lVar10,lVar13,0);
LAB_031f487c:
  *(int *)(plVar6 + 0x16) = (int)plVar6[0x16] + 1;
  return;
}


