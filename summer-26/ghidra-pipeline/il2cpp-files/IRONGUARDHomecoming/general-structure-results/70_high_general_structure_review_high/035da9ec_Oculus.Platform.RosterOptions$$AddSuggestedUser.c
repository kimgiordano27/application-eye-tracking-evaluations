/*
FUNCTION_NAME: Oculus.Platform.RosterOptions$$AddSuggestedUser
ENTRY_POINT: 035da9ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x035daf80) */

int Oculus_Platform_RosterOptions__AddSuggestedUser(void)

{
  bool bVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong __n;
  uint uVar11;
  int unaff_w19;
  ulong uVar12;
  long unaff_x21;
  long *plVar13;
  undefined8 *__s;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  if (in_NG == in_OV) {
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_29__);
    uVar7 = FUN_035ac8e0(uVar9,0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0356663c(uVar9,uVar7,0);
LAB_035dab4c:
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_26__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar7);
  }
  if (unaff_w19 < -1) {
    uVar9 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass3_0_<DOColor>b__0__
                              );
    uVar7 = FUN_035ac8e0(uVar9,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_<DOBlendableColor>b__1__
                              );
    FUN_034f3578(uVar9,uVar8,uVar7,0);
    goto LAB_035dab4c;
  }
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_24__);
  uVar11 = *(uint *)(unaff_x21 + 0x18);
  if (0 < (int)uVar11) {
    lVar19 = 0;
    plVar13 = plVar5 + 4;
    do {
      if (uVar11 <= (uint)lVar19) {
LAB_035dab0c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar14 = *(long *)(unaff_x21 + 0x20 + lVar19 * 8);
      if (lVar14 == 0) {
        uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_25__
                                  );
        uVar7 = FUN_035ac8e0(uVar9,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
        uVar9 = thunk_FUN_01f117cc();
        FUN_034efd20(uVar9,uVar7,0);
        goto LAB_035dab4c;
      }
      if (plVar5 == (long *)0x0) goto LAB_035dab10;
      lVar6 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(plVar5 + 3) <= (uint)lVar19) goto LAB_035dab0c;
      *plVar13 = lVar14;
      thunk_FUN_01f51358(plVar13,lVar14);
      uVar11 = *(uint *)(unaff_x21 + 0x18);
      lVar19 = lVar19 + 1;
      plVar13 = plVar13 + 1;
    } while ((int)lVar19 < (int)uVar11);
  }
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__;
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = 0;
  iVar3 = FUN_035dac88(plVar5,unaff_w19,0,0);
  iVar4 = iVar3 + -0x80;
  if (iVar3 < 0x80) {
LAB_035daacc:
    if (*(int *)(*(long *)Method_System_Array_Empty<PointableCanvasModule_Pointer>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035a2b50(plVar5,0);
    return iVar3;
  }
  if (plVar5 == (long *)0x0) {
LAB_035dab10:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((int)plVar5[3] + 0x80 <= iVar3) goto LAB_035daacc;
  if (iVar4 < (int)plVar5[3]) {
    FUN_01bc50c0(plVar5);
    uVar9 = FUN_01bc5c58(plVar5,iVar4);
    FUN_01bc4c70(*(undefined8 *)puVar2);
    FUN_035db05c(iVar4,uVar9);
  }
  FUN_01bc4c70(*(undefined8 *)puVar2);
  auVar21 = FUN_035da950();
  lVar14 = auVar21._0_8_;
  lVar19 = tpidr_el0;
  lStack_68 = *(long *)(lVar19 + 0x28);
  uVar12 = auVar21._8_8_ & 0xffffffff;
  if ((DAT_0483373d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__);
    DAT_0483373d = 1;
  }
  uStack_70._4_1_ = 0;
  if (lVar14 == 0) {
LAB_035daf4c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0x40 < *(int *)(lVar14 + 0x18)) {
    iVar4 = 0x7fffffff;
    goto LAB_035daf18;
  }
  plVar5 = (long *)FUN_035cd288(0);
  uVar15 = *(ulong *)(lVar14 + 0x18);
  uVar17 = 0xffffffff;
  uVar18 = uVar17;
  if (0 < (int)uVar15) {
    do {
      uStack_70._4_1_ = 0;
      if ((uint)uVar15 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar14 + (long)(int)(uVar18 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_035da2bc();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_034a32b4(lVar6,(long)&uStack_70 + 4,0);
      uVar15 = *(ulong *)(lVar14 + 0x18);
      uVar17 = uVar18 + 1;
      iVar4 = uVar18 + 2;
      uVar18 = uVar17;
    } while (iVar4 < (int)uVar15);
  }
  if (plVar5 == (long *)0x0) {
LAB_035dae24:
    __n = -(uVar15 >> 0x1f & 1) & 0xfffffff800000000 | (uVar15 & 0xffffffff) << 3;
    if ((uVar15 & 0xffffffff) == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)((long)&uStack_70 - (__n + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,__n);
    if (0 < (int)uVar15) {
      lVar6 = 0;
      puVar20 = __s;
      do {
        if ((uint)uVar15 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(long *)(lVar14 + 0x20 + lVar6 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = FUN_035da2bc();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = lVar6 + 1;
        *puVar20 = *(undefined8 *)(lVar16 + 0x10);
        uVar15 = *(ulong *)(lVar14 + 0x18);
        puVar20 = puVar20 + 1;
      } while ((int)lVar6 < (int)uVar15);
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__ + 0xe0
                ) == 0) {
      thunk_FUN_01ee6d7c();
      uVar15 = *(ulong *)(lVar14 + 0x18);
    }
    iVar4 = FUN_01f41ab0(__s,uVar15 & 0xffffffff,uVar11 & 1,uVar12);
  }
  else {
    uVar15 = FUN_035d57f4(plVar5,0);
    if ((uVar15 & 1) == 0) {
      uVar15 = *(ulong *)(lVar14 + 0x18);
      goto LAB_035dae24;
    }
    lVar6 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__,
                         *(undefined4 *)(lVar14 + 0x18));
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar11) {
      lVar16 = 0;
      do {
        if (uVar11 <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(long *)(lVar14 + 0x20 + lVar16 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = FUN_035da2bc();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar6 + 0x18) <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar6 + 0x20 + lVar16 * 8) = *(undefined8 *)(lVar10 + 0x10);
        uVar11 = *(uint *)(lVar14 + 0x18);
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)uVar11);
    }
    iVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,lVar6,0,uVar12,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  if (-1 < (int)uVar17) {
    plVar5 = (long *)(lVar14 + (ulong)uVar17 * 8 + 0x20);
    do {
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if ((*plVar5 == 0) || (lVar6 = FUN_035da2bc(), lVar6 == 0)) goto LAB_035daf4c;
      FUN_034a3420(lVar6,0);
      plVar5 = plVar5 + -1;
      bVar1 = 0 < (int)uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar1);
  }
LAB_035daf18:
  if (*(long *)(lVar19 + 0x28) == lStack_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


