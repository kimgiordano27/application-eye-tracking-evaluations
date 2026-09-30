/*
FUNCTION_NAME: Oculus.Platform.RosterOptions$$.ctor
ENTRY_POINT: 035da988
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x035daf80) */

int Oculus_Platform_RosterOptions___ctor(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong __n;
  uint uVar11;
  ulong uVar12;
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
  undefined8 uStack_c0;
  long lStack_b8;
  
  if ((DAT_04833738 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Empty<PointableCanvasModule_Pointer>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_24__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__);
    DAT_04833738 = 1;
  }
  puVar6 = Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_27__;
  if (param_1 == 0) {
LAB_035dab1c:
    uVar9 = thunk_FUN_01efb3a4(puVar6);
    uVar7 = FUN_035ac8e0(uVar9,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_034efd20(uVar9,uVar7,0);
LAB_035dab4c:
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_26__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar7);
  }
                    /* try { // try from 035da9e0 to 036daac3 has its CatchHandler @ 035da9e0
                       catch() { ... } // from try @ 035da9e0 with catch @ 035da9e0
                       catch() { ... } // from try @ 035dabf4 with catch @ 035da9e0
                       catch() { ... } // from try @ 035dac6c with catch @ 035da9e0
                       catch() { ... } // from try @ 035dacd4 with catch @ 035da9e0
                       catch() { ... } // from try @ 035dad14 with catch @ 035da9e0
                       catch() { ... } // from try @ 035dad5c with catch @ 035da9e0 */
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_28__);
    uVar7 = FUN_035ac8e0(uVar9,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar9,uVar7,0);
    goto LAB_035dab4c;
  }
  if (0x40 < (int)*(long *)(param_1 + 0x18)) {
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_29__);
    uVar7 = FUN_035ac8e0(uVar9,0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0356663c(uVar9,uVar7,0);
    goto LAB_035dab4c;
  }
  if (param_2 < -1) {
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
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_24__);
  uVar11 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar11) {
    lVar19 = 0;
    plVar13 = plVar4 + 4;
    do {
      if (uVar11 <= (uint)lVar19) {
LAB_035dab0c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar14 = *(long *)(param_1 + 0x20 + lVar19 * 8);
      puVar6 = Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_25__;
      if (lVar14 == 0) goto LAB_035dab1c;
      if (plVar4 == (long *)0x0) goto LAB_035dab10;
      lVar5 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(plVar4 + 3) <= (uint)lVar19) goto LAB_035dab0c;
      *plVar13 = lVar14;
      thunk_FUN_01f51358(plVar13,lVar14);
      uVar11 = *(uint *)(param_1 + 0x18);
      lVar19 = lVar19 + 1;
      plVar13 = plVar13 + 1;
    } while ((int)lVar19 < (int)uVar11);
  }
  puVar6 = Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__;
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = 0;
  iVar2 = FUN_035dac88(plVar4,param_2,0,0);
  iVar3 = iVar2 + -0x80;
  if (iVar2 < 0x80) {
LAB_035daacc:
    if (*(int *)(*(long *)Method_System_Array_Empty<PointableCanvasModule_Pointer>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035a2b50(plVar4,0);
    return iVar2;
  }
  if (plVar4 == (long *)0x0) {
LAB_035dab10:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((int)plVar4[3] + 0x80 <= iVar2) goto LAB_035daacc;
  if (iVar3 < (int)plVar4[3]) {
    FUN_01bc50c0(plVar4);
    uVar9 = FUN_01bc5c58(plVar4,iVar3);
    FUN_01bc4c70(*(undefined8 *)puVar6);
    FUN_035db05c(iVar3,uVar9);
  }
  FUN_01bc4c70(*(undefined8 *)puVar6);
  auVar21 = FUN_035da950();
  lVar14 = auVar21._0_8_;
  lVar19 = tpidr_el0;
  lStack_b8 = *(long *)(lVar19 + 0x28);
  uVar12 = auVar21._8_8_ & 0xffffffff;
  if ((DAT_0483373d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__);
    DAT_0483373d = 1;
  }
  uStack_c0._4_1_ = 0;
  if (lVar14 == 0) {
LAB_035daf4c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0x40 < *(int *)(lVar14 + 0x18)) {
    iVar3 = 0x7fffffff;
    goto LAB_035daf18;
  }
  plVar4 = (long *)FUN_035cd288(0);
  uVar15 = *(ulong *)(lVar14 + 0x18);
  uVar17 = 0xffffffff;
  uVar18 = uVar17;
  if (0 < (int)uVar15) {
    do {
      uStack_c0._4_1_ = 0;
      if ((uint)uVar15 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar14 + (long)(int)(uVar18 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = FUN_035da2bc();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_034a32b4(lVar5,(long)&uStack_c0 + 4,0);
      uVar15 = *(ulong *)(lVar14 + 0x18);
      uVar17 = uVar18 + 1;
      iVar3 = uVar18 + 2;
      uVar18 = uVar17;
    } while (iVar3 < (int)uVar15);
  }
  if (plVar4 == (long *)0x0) {
LAB_035dae24:
    __n = -(uVar15 >> 0x1f & 1) & 0xfffffff800000000 | (uVar15 & 0xffffffff) << 3;
    if ((uVar15 & 0xffffffff) == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)((long)&uStack_c0 - (__n + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,__n);
    if (0 < (int)uVar15) {
      lVar5 = 0;
      puVar20 = __s;
      do {
        if ((uint)uVar15 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(long *)(lVar14 + 0x20 + lVar5 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = FUN_035da2bc();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = lVar5 + 1;
        *puVar20 = *(undefined8 *)(lVar16 + 0x10);
        uVar15 = *(ulong *)(lVar14 + 0x18);
        puVar20 = puVar20 + 1;
      } while ((int)lVar5 < (int)uVar15);
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c_<Rebuild>b__12_0__ + 0xe0
                ) == 0) {
      thunk_FUN_01ee6d7c();
      uVar15 = *(ulong *)(lVar14 + 0x18);
    }
    iVar3 = FUN_01f41ab0(__s,uVar15 & 0xffffffff,uVar11 & 1,uVar12);
  }
  else {
    uVar15 = FUN_035d57f4(plVar4,0);
    if ((uVar15 & 1) == 0) {
      uVar15 = *(ulong *)(lVar14 + 0x18);
      goto LAB_035dae24;
    }
    lVar5 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__,
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
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar5 + 0x20 + lVar16 * 8) = *(undefined8 *)(lVar10 + 0x10);
        uVar11 = *(uint *)(lVar14 + 0x18);
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)uVar11);
    }
    iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,lVar5,0,uVar12,*(undefined8 *)(*plVar4 + 0x1c0));
  }
  if (-1 < (int)uVar17) {
    plVar4 = (long *)(lVar14 + (ulong)uVar17 * 8 + 0x20);
    do {
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if ((*plVar4 == 0) || (lVar5 = FUN_035da2bc(), lVar5 == 0)) goto LAB_035daf4c;
      FUN_034a3420(lVar5,0);
      plVar4 = plVar4 + -1;
      bVar1 = 0 < (int)uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar1);
  }
LAB_035daf18:
  if (*(long *)(lVar19 + 0x28) == lStack_b8) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


