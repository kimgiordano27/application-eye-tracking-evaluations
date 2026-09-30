/*
FUNCTION_NAME: System.Array$$Copy
ENTRY_POINT: 031f42b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__Copy(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong in_x10;
  long in_x11;
  long lVar10;
  long in_x12;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while (puVar4 = 
         VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
        , lVar7 = in_x11 + 1, in_x11 + -7 < in_x12) {
    uVar11 = in_x11 - 7;
    if (in_x10 <= uVar11) goto LAB_031f489c;
    lVar10 = *(long *)(unaff_x19 + 0x98);
    if (lVar10 == 0) goto LAB_031f48a0;
    if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_031f489c;
    if (in_x9 == 0) goto LAB_031f48a0;
    if (*(uint *)(in_x9 + 0x18) <= uVar11) goto LAB_031f489c;
    *(int *)(in_x9 + lVar7 * 4) = *(int *)(lVar10 + lVar7 * 4) + *(int *)(param_1 + lVar7 * 4);
    in_x11 = lVar7;
    in_x12 = (long)*(int *)(unaff_x19 + 0x80);
  }
  if (unaff_x20 == 0) goto LAB_031f48a0;
  switch(*(undefined4 *)(unaff_x20 + 0x20)) {
  case 1:
    lVar7 = *(long *)(unaff_x19 + 0x70);
    lVar10 = *(long *)
              VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar10 = *(long *)puVar4;
    }
    lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x38);
    if (lVar7 != lVar9) {
      lVar7 = *(long *)(unaff_x20 + 0x48);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar10 = *(long *)puVar4;
        lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x38);
      }
      if (lVar7 != lVar9) {
        if (*(char *)(unaff_x19 + 0x78) == '\0') {
          if (*(long *)(unaff_x19 + 0xf8) != 0) {
            lVar7 = *(long *)(unaff_x19 + 0xa8);
            if (lVar7 == 0) goto LAB_031f48a0;
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_031f489c;
            FUN_031fcc84(*(long *)(unaff_x19 + 0xf8),*(undefined8 *)(unaff_x20 + 0x30),
                         *(undefined4 *)(lVar7 + 0x20),0);
            goto LAB_031f487c;
          }
          lVar7 = *(long *)(unaff_x20 + 0x38);
          if (lVar7 == 0) {
            uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
            uVar1 = *(undefined4 *)(unaff_x19 + 0x7c);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
LAB_031f47dc:
            lVar7 = FUN_031ed750(uVar8,uVar1);
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* try { // try from 031f48cc to 032f48d7 has its CatchHandler @ 031f49dc */
            uVar8 = thunk_FUN_01c273e8(OVROverlay_ExternalSurfaceObjectCreated_TypeInfo);
            uVar8 = FUN_03313b64(uVar8,0);
                    /* try { // try from 031f48d8 to 032f48df has its CatchHandler @ 031f49e0 */
                    /* try { // try from 031f48e0 to 032f49cb has its CatchHandler @ 031f46f4 */
            thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
            uVar12 = thunk_FUN_01c496e0();
            FUN_031dce5c(uVar12,uVar8,0);
            uVar8 = thunk_FUN_01c273e8(
                                      OculusSampleFramework_OVROverlaySample_<WaitforOVROverlay>d__30_TypeInfo
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar12,uVar8);
          }
          lVar7 = *(long *)(unaff_x20 + 0x48);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
          }
          puVar5 = 
          VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass20_0_TypeInfo
          ;
          if (lVar7 == lVar9) {
            FUN_031f491c();
            lVar7 = *(long *)(unaff_x20 + 0x30);
          }
          else {
            uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x50);
            lVar7 = thunk_FUN_01c49334(*(undefined8 *)
                                        VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass20_0_TypeInfo
                                       ,(long)&stack0x00000008 + 4);
            uStack0000000000000008 = 0;
            lVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar5,&stack0x00000008);
            if (lVar7 == lVar10) {
              FUN_031f2994();
              uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
              if (*(int *)(*(long *)
                            DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo + 0xe0
                          ) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar7 = FUN_031df5d0(uVar8);
            }
            else {
              lVar7 = *(long *)(unaff_x20 + 0x38);
              if (lVar7 == 0) {
                uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
                uVar1 = *(undefined4 *)(unaff_x20 + 0x50);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                goto LAB_031f47dc;
              }
            }
          }
        }
        plVar6 = *(long **)(unaff_x19 + 0xf0);
        if (plVar6 != (long *)0x0) {
          lVar10 = *(long *)(unaff_x19 + 0xa8);
          if (lVar10 == 0) goto LAB_031f48a0;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_031f489c;
          uVar3 = *(uint *)(lVar10 + 0x20);
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto LAB_031f48b8;
          if (*(uint *)(plVar6 + 3) <= uVar3) goto LAB_031f489c;
          plVar6[(long)(int)uVar3 + 4] = lVar7;
          goto LAB_031f487c;
        }
        plVar6 = *(long **)(unaff_x19 + 0xe8);
        if (plVar6 == (long *)0x0) goto LAB_031f48a0;
        bVar2 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130)
        ;
        if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
        uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
        goto LAB_031f4874;
      }
    }
    FUN_031f491c();
    plVar6 = *(long **)(unaff_x19 + 0xf0);
    if (plVar6 != (long *)0x0) {
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_031f489c;
      lVar10 = *(long *)(unaff_x20 + 0x30);
LAB_031f4540:
      uVar3 = *(uint *)(lVar7 + 0x20);
      if ((lVar10 != 0) &&
         (lVar7 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_031f48b8:
        uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar3) {
LAB_031f489c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar6[(long)(int)uVar3 + 4] = lVar10;
      goto LAB_031f487c;
    }
    plVar6 = *(long **)(unaff_x19 + 0xe8);
    if (plVar6 == (long *)0x0) {
LAB_031f48a0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar2 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) {
LAB_031f48a8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    lVar7 = *(long *)(unaff_x20 + 0x30);
    break;
  case 2:
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x70);
    }
    FUN_031f2d68();
    if (*(long *)(unaff_x21 + 0x88) == 0) goto LAB_031f48a0;
    FUN_031f79ec();
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_031f487c;
    uVar11 = FUN_032eb44c(*(long *)(unaff_x19 + 0x70),0);
    if (((uVar11 & 1) != 0) && (*(int *)(unaff_x20 + 0x7c) == 0)) {
      *(undefined1 *)(unaff_x20 + 0xe0) = 1;
      lVar7 = FUN_031f2828();
      plVar6 = *(long **)(unaff_x19 + 0xe8);
      uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
                    /* try { // try from 031f46f4 to 032f48bf has its CatchHandler @ 031f46f4
                       catch() { ... } // from try @ 031f46f4 with catch @ 031f46f4
                       catch() { ... } // from try @ 031f48e0 with catch @ 031f46f4
                       catch() { ... } // from try @ 031f49d0 with catch @ 031f46f4
                       catch() { ... } // from try @ 031f4a88 with catch @ 031f46f4 */
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)OVRManager_<>c_TypeInfo);
      if (plVar6 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130)
        ;
        if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
      }
      FUN_031fc564(uVar8,plVar6,uVar12,0);
      if (lVar7 == 0) goto LAB_031f48a0;
      FUN_031f79ec(lVar7,uVar8,0);
      goto LAB_031f487c;
    }
    plVar6 = *(long **)(unaff_x19 + 0xf0);
    if (plVar6 != (long *)0x0) {
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_031f489c;
      lVar10 = *(long *)(unaff_x20 + 0xe8);
      goto LAB_031f4540;
    }
    plVar6 = *(long **)(unaff_x19 + 0xe8);
    if (plVar6 == (long *)0x0) goto LAB_031f48a0;
    bVar2 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
    lVar7 = *(long *)(unaff_x20 + 0xe8);
    break;
  case 3:
    plVar6 = *(long **)(unaff_x21 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_031f48a0;
    lVar7 = (**(code **)(*plVar6 + 0x178))
                      (plVar6,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(*plVar6 + 0x180));
    if (lVar7 == 0) {
      uVar8 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,*(undefined4 *)(unaff_x19 + 0x80));
      FUN_032f42b0(*(undefined8 *)(unaff_x19 + 0xa8),0,uVar8,0,*(undefined4 *)(unaff_x19 + 0x80),0);
      plVar6 = *(long **)(unaff_x21 + 0x30);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1b8))
                  (plVar6,*(undefined8 *)(unaff_x19 + 0x58),uVar8,*(undefined8 *)(unaff_x20 + 0x60),
                   *(undefined8 *)(*plVar6 + 0x1c0));
        goto LAB_031f487c;
      }
      goto LAB_031f48a0;
    }
    plVar6 = *(long **)(unaff_x19 + 0xf0);
    if (plVar6 != (long *)0x0) {
      lVar10 = *(long *)(unaff_x19 + 0xa8);
      if (lVar10 == 0) goto LAB_031f48a0;
      if (*(int *)(lVar10 + 0x18) != 0) {
        uVar3 = *(uint *)(lVar10 + 0x20);
        lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar10 == 0) goto LAB_031f48b8;
        if (uVar3 < *(uint *)(plVar6 + 3)) {
          plVar6[(long)(int)uVar3 + 4] = lVar7;
          goto LAB_031f487c;
        }
      }
      goto LAB_031f489c;
    }
    plVar6 = *(long **)(unaff_x19 + 0xe8);
    if (plVar6 == (long *)0x0) goto LAB_031f48a0;
    bVar2 = *(byte *)(*(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Oculus_Platform_Models_InstalledApplicationList_TypeInfo)) goto LAB_031f48a8;
    uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
    goto LAB_031f4874;
  case 4:
    *(int *)(unaff_x19 + 0xb0) = *(int *)(unaff_x19 + 0xb0) + *(int *)(unaff_x20 + 0x118) + -1;
    goto LAB_031f487c;
  default:
    FUN_031f381c();
    goto LAB_031f48b8;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
LAB_031f4874:
  thunk_FUN_01c5c9d4(plVar6,lVar7,uVar8,0);
LAB_031f487c:
  *(int *)(unaff_x19 + 0xb0) = *(int *)(unaff_x19 + 0xb0) + 1;
  return;
}


