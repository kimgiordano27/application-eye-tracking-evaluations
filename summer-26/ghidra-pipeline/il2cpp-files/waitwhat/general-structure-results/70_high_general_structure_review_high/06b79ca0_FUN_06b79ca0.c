/*
FUNCTION_NAME: FUN_06b79ca0
ENTRY_POINT: 06b79ca0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_19;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b79ca0(void *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  long local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_64;
  
  puVar2 = 
  Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
  ;
  if ((DAT_075600c3 & 1) == 0) {
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstTables8kGcmMultiplier_MultiplyHImpl_00000758_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_CalculateProjectileFlightTime_00000441_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<IntPtr>_get_Current__);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043A_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_GenerateCubicBezierCurve_0000043B_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>_get_focusController__);
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_SampleCubicBezierPoint_00000439_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
                );
    DAT_075600c3 = 1;
  }
  lVar7 = *(long *)puVar2;
  local_64 = 0;
  local_d0 = 0;
  local_100 = 0;
  local_130 = 0;
  local_128 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar7 = *(long *)puVar2;
  }
  puVar11 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar11[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar13 = *puVar11;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate>_get_Value__
                       );
    FUN_04fd027c(lVar12,uVar13,
                 *(undefined8 *)
                  Method_Unity_Burst_FunctionPointer<CurveUtility_SampleCubicBezierPoint_00000439_PostfixBurstDelegate>_get_Value__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
  }
  if (((param_4 != 0) &&
      (FUN_0435d574(param_4,lVar12,
                    *(undefined8 *)
                     Method_Unity_Burst_FunctionPointer<CurveUtility_GenerateCubicBezierCurve_0000043B_PostfixBurstDelegate>_get_Value__
                   ), param_3 != 0)) &&
     (plVar8 = (long *)FUN_06b22178(param_3,0), plVar8 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
    local_64 = *(undefined4 *)(param_2 + 0x30);
    iVar4 = FUN_05941f28(&local_64,0);
    puVar1 = 
    Method_Unity_Burst_FunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043A_PostfixBurstDelegate>_get_Value__
    ;
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate>_get_Value__
    ;
    if ((*(long *)(param_2 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x18), lVar7 != 0)) {
      uVar14 = (long)iVar3 * 0x18d ^ (long)iVar4;
      iVar4 = FUN_06b48364(lVar7,0);
      FUN_0435c4b0(&local_1b0,param_4,*(undefined8 *)puVar1);
      iVar3 = 0;
      local_d0 = local_190;
      puStack_e8 = puStack_1a8;
      local_f0 = local_1b0;
      uStack_d8 = uStack_198;
      lStack_e0 = lStack_1a0;
      local_1b0 = 0;
      puStack_1a8 = &local_f0;
      while (uVar9 = FUN_0545d390(&local_f0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
        if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(long *)(local_d0 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        iVar3 = *(int *)(*(long *)(local_d0 + 0x28) + 0x1c) + iVar3;
      }
      FUN_0545d38c(&local_f0,
                   *(undefined8 *)
                    Method_Unity_Burst_FunctionPointer<BurstTables8kGcmMultiplier_MultiplyHImpl_00000758_PostfixBurstDelegate>_get_Value__
                  );
      if (0 < iVar3) {
        if ((*(long *)(param_2 + 0x38) == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_06b7a2c8;
        FUN_06b47ed4(*(long *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
      }
      FUN_0435c4b0(&local_1b0,param_4,*(undefined8 *)puVar1);
      local_100 = local_190;
      puStack_118 = puStack_1a8;
      local_120 = local_1b0;
      uStack_108 = uStack_198;
      local_110 = lStack_1a0;
      local_1b0 = 0;
      puStack_1a8 = &local_120;
      while (uVar9 = FUN_0545d390(&local_120,*(undefined8 *)puVar2), lVar12 = local_100,
            lVar7 = local_110, (uVar9 & 1) != 0) {
        if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        iVar10 = *(int *)(local_100 + 0x40);
        iVar5 = FUN_06b453d8(local_100,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        iVar6 = FUN_06b46ac4(lVar7,0);
        uVar14 = ((uVar14 * 0x18d ^ (long)iVar6) * 0x18d ^ (long)iVar10) * 0x18d ^ (long)iVar5;
        if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (0 < *(int *)(*(long *)(lVar12 + 0x28) + 0x1c)) {
          FUN_06b7a754(param_2,lVar7);
        }
      }
      FUN_0545d38c(&local_120,
                   *(undefined8 *)
                    Method_Unity_Burst_FunctionPointer<BurstTables8kGcmMultiplier_MultiplyHImpl_00000758_PostfixBurstDelegate>_get_Value__
                  );
      local_128 = *(undefined8 *)(param_3 + 0x440);
      lVar7 = FUN_06b2d21c(&local_128,0);
      puVar1 = Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>_get_focusController__;
      if (lVar7 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(lVar7 + 0x338);
      }
      uVar14 = uVar14 * 0x18d ^ (long)iVar10;
      if (iVar3 < 1) {
        uVar14 = uVar14 * 0x18d ^ (long)iVar4;
        puVar11 = (undefined8 *)
                  Method_Unity_Burst_FunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043A_PostfixBurstDelegate>_get_Value__
        ;
      }
      else {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_06b7a2c8;
        iVar3 = FUN_06b48364(*(long *)(param_2 + 0x10),0);
        puVar11 = (undefined8 *)
                  Method_Unity_Burst_FunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043A_PostfixBurstDelegate>_get_Value__
        ;
        uVar14 = uVar14 * 0x18d ^ (long)iVar3;
        if (iVar4 != iVar3) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar9 = FUN_06b7814c(iVar3,&local_130);
          if ((uVar9 & 1) == 0) {
            uVar15 = *(undefined8 *)(param_2 + 0x10);
            uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__
                               );
            FUN_06b48174(uVar13,uVar15,0);
            local_130 = uVar13;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06b781dc(iVar3,uVar13);
          }
          if (*(long *)(param_2 + 0x38) == 0) goto LAB_06b7a2c8;
          *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18) = local_130;
        }
      }
      if (*(long *)(param_2 + 0x38) != 0) {
        *(undefined8 *)(param_3 + 0x330) = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
        if (*(long *)(param_2 + 0x10) != 0) {
          UnityEngine_UIElements_PointerOutEvent_<>c___cctor(*(long *)(param_2 + 0x10),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar9 = FUN_06b7800c(uVar14,&local_c0);
          if ((uVar9 & 1) == 0) {
            if (lVar7 == 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<IntPtr>_get_Current__
                          + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar13 = FUN_06bac684(0);
            }
            else {
              FUN_06b17580(lVar7,0);
              uVar13 = FUN_06b17580(lVar7,0);
            }
            FUN_06c5f788(&local_1b0,uVar13,0);
            memcpy(&local_c0,&local_1b0,0x50);
            uStack_88 = uVar14;
            uVar16 = FUN_06b1e984(param_3,0);
            FUN_0435c4b0(&local_160,param_4,*puVar11);
            local_1b0 = 0;
            puStack_1a8 = &local_160;
            while (uVar9 = FUN_0545d390(&local_160,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
              if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              FUN_06bb8d0c(uVar16,*(long *)(param_2 + 0x40),local_150,local_140,
                           *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
              FUN_06c5fc3c(&local_c0,*(undefined8 *)(param_2 + 0x40),uVar13,0);
            }
            FUN_0545d38c(&local_160,
                         *(undefined8 *)
                          Method_Unity_Burst_FunctionPointer<BurstTables8kGcmMultiplier_MultiplyHImpl_00000758_PostfixBurstDelegate>_get_Value__
                        );
            FUN_06c5abb8(&local_c0,uVar13,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06b7809c(uVar14,&local_c0);
          }
          memcpy(param_1,&local_c0,0x50);
          return;
        }
      }
    }
  }
LAB_06b7a2c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


