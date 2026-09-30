/*
FUNCTION_NAME: FUN_035d2f64
ENTRY_POINT: 035d2f64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_035d2f64(uint *param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  int local_64;
  
  if ((DAT_048336dc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<PolylinePoint,_Vector3>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_SettingsPanel_<_ctor>b__0_0__
                      );
    DAT_048336dc = 1;
  }
  FUN_035d3508();
  puVar3 = Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_SettingsPanel_<_ctor>b__0_0__;
  if (*param_3 != '\0') {
    *param_3 = '\0';
    uVar11 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_SettingsPanel_<_ctor>b__0_1__
                               );
    uVar11 = FUN_035ac8e0(uVar11,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar12,uVar11,0);
    uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugManager_<>c_<_cctor>b__94_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar11);
  }
  if (param_2 < -1) {
    local_64 = param_2;
    uVar11 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar11 = thunk_FUN_01f113fc(uVar11,&local_64);
    uVar12 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugManager_<>c_<_ctor>b__49_0__);
    uVar12 = FUN_035ac8e0(uVar12,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar13 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(
                               Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_<DOBlendableColor>b__1__
                               );
    FUN_034f48f0(uVar13,uVar14,uVar11,uVar12,0);
    uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugManager_<>c_<_cctor>b__94_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar13,uVar11);
  }
  if (param_2 + 1U < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = thunk_FUN_01f0a328(0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = *param_1;
  thunk_FUN_01f3e6f0();
  if (-1 < (int)uVar6) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035d3574(param_1,param_2,iVar4,param_3);
    return;
  }
  uVar6 = *param_1;
  thunk_FUN_01f3e6f0();
  if ((uVar6 & 1) == 0) {
    FUN_035d2f14();
    thunk_FUN_01f3e6f0();
    uVar5 = thunk_FUN_01ec9a7c(param_1,uVar6 | 1,uVar6,param_3,0);
    if (uVar5 == uVar6) {
      return;
    }
    FUN_035d3508();
LAB_035d30f0:
    uVar6 = 0x7fffffff;
  }
  else {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar3;
    }
    if ((uVar6 & 0x7ffffffe) == **(uint **)(lVar10 + 0xb8)) goto LAB_035d30f0;
    thunk_FUN_01f3e6f0();
    uVar6 = thunk_FUN_01ec98b4(param_1,2,0);
    uVar6 = uVar6 >> 1 & 0x3fffffff;
  }
  if (param_2 != 0) {
    if (param_2 != -1) {
      iVar7 = thunk_FUN_01f0a328(0);
      if ((iVar7 - iVar4 < 0) || (param_2 <= iVar7 - iVar4)) goto LAB_035d331c;
    }
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<PolylinePoint,_Vector3>__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    iVar7 = FUN_035cf124();
    if (((int)uVar6 < iVar7) && (uVar5 = uVar6 * 100, 0 < (int)uVar5)) {
      uVar2 = uVar5 | 1;
      iVar9 = 1;
      if ((int)uVar2 < 3) {
        uVar2 = 2;
      }
      uVar15 = 1;
      do {
        uVar5 = uVar5 + 100;
        if (0 < (int)((uVar15 + uVar6) * iVar9 * 100)) {
          iVar16 = iVar9 * uVar5 + 1;
          do {
            FUN_01ebea64();
            iVar16 = iVar16 + -1;
          } while (1 < iVar16);
        }
        uVar1 = *param_1;
        if (iVar9 < iVar7) {
          iVar9 = iVar9 + 1;
        }
        thunk_FUN_01f3e6f0();
        if ((uVar1 & 1) == 0) {
          FUN_035d2f14();
          uVar8 = uVar1;
          if ((uVar1 & 0x7ffffffe) != 0) {
            uVar8 = uVar1 - 2;
          }
          thunk_FUN_01f3e6f0();
          uVar8 = thunk_FUN_01ec9a7c(param_1,uVar8 | 1,uVar1,param_3,0);
          if (uVar8 == uVar1) {
            return;
          }
          FUN_035d3508();
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
    }
    if (param_2 != -1) {
      iVar7 = thunk_FUN_01f0a328(0);
      if ((iVar7 - iVar4 < 0) || (param_2 - (iVar7 - iVar4) < 1)) {
LAB_035d3324:
        lVar10 = *(long *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_SettingsPanel_<_ctor>b__0_0__
        ;
        goto LAB_035d3330;
      }
    }
    iVar7 = 0;
    do {
      uVar6 = *param_1;
      thunk_FUN_01f3e6f0();
      if ((uVar6 & 1) == 0) {
        FUN_035d2f14();
        uVar5 = uVar6;
        if ((uVar6 & 0x7ffffffe) != 0) {
          uVar5 = uVar6 - 2;
        }
        thunk_FUN_01f3e6f0();
        uVar5 = thunk_FUN_01ec9a7c(param_1,uVar5 | 1,uVar6,param_3,0);
        if (uVar5 == uVar6) {
          return;
        }
        FUN_035d3508();
      }
      uVar6 = iVar7 * -0x33333333 + 0x19999998;
      if ((uVar6 >> 3 | iVar7 * -0x60000000) < 0x6666667) {
        FUN_01f41a70(1);
        iVar9 = iVar7 % 10;
LAB_035d32e8:
        if ((param_2 != -1) && (iVar9 == 0)) {
          iVar9 = thunk_FUN_01f0a328(0);
          if ((iVar9 - iVar4 < 0) || (param_2 - (iVar9 - iVar4) < 1)) goto LAB_035d3324;
        }
      }
      else {
        if ((uVar6 >> 1 | iVar7 * -0x80000000) < 0x19999999) {
          FUN_01f41a70(0);
          iVar9 = 0;
          goto LAB_035d32e8;
        }
        thunk_FUN_01f449d4();
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_035d331c:
  lVar10 = *(long *)puVar3;
LAB_035d3330:
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035d36dc(param_1);
  return;
}


