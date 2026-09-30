/*
FUNCTION_NAME: FUN_059d1090
ENTRY_POINT: 059d1090
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_6;telemetry_or_network_hits_8
*/


undefined8 FUN_059d1090(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  undefined4 local_54;
  undefined8 local_48;
  
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate>__
  ;
  puVar3 = PTR_DAT_06338850;
  if ((DAT_066d3b4a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631efd0);
    FUN_02b3c81c(UnityEngine_SphereCollider_TypeInfo);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000351_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_06338200);
    FUN_02b3c81c(PTR_DAT_06338850);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631f160);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UIR_NativePagedList_Enumerator<MeshGenerator_BackgroundRepeatInstance>__ctor__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_CalculateProjectileFlightTime_00000448_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate>__
                );
    DAT_066d3b4a = 1;
  }
  puVar1 = PTR_DAT_06312310;
  local_48 = 0;
  local_54 = 0;
  local_60 = 0;
  local_64 = param_2;
  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_64);
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_04e5be04(lVar5,*(undefined8 *)puVar2,uVar4,0);
  puVar2 = 
  Method_UnityEngine_UIElements_UIR_NativePagedList_Enumerator<MeshGenerator_BackgroundRepeatInstance>__ctor__
  ;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    FUN_0445a80c(*(long *)(param_1 + 0x28),param_2,&local_48,*(undefined8 *)PTR_DAT_0631efd0);
    uVar4 = FUN_059d14f0(local_48);
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_04e5be04(lVar6,*(undefined8 *)puVar2,uVar4,0);
    puVar2 = 
    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_CalculateProjectileFlightTime_00000448_PostfixBurstDelegate>__
    ;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_04450324(*(long *)(param_1 + 0x18),param_2,&local_54,
                   *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
      local_68 = local_54;
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x48),&local_68);
      lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_04e5be04(lVar7,*(undefined8 *)puVar2,uVar4,0);
      puVar2 = 
      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate>__
      ;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar8 = FUN_0445a80c(*(long *)(param_1 + 0x10),local_54,&local_60,
                             *(undefined8 *)
                              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000351_PostfixBurstDelegate>__
                            );
        uVar4 = *(undefined8 *)puVar2;
        if ((uVar8 & 1) == 0) {
          uVar10 = *(undefined8 *)PTR_DAT_0631f160;
        }
        else {
          if ((local_60 == 0) ||
             (plVar9 = (long *)thunk_FUN_02b4c898(local_60,0), plVar9 == (long *)0x0))
          goto LAB_059d1400;
          uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        }
        puVar2 = PTR_DAT_06313048;
        lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
        FUN_04e5be04(lVar11,uVar4,uVar10,0);
        plVar9 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,4);
        if (plVar9 != (long *)0x0) {
          if ((lVar5 != 0) &&
             (lVar12 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
LAB_059d1408:
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if ((int)plVar9[3] != 0) {
            plVar9[4] = lVar5;
            thunk_FUN_02bb0e9c(plVar9 + 4,lVar5);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
            goto LAB_059d1408;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
              plVar9[5] = lVar6;
              thunk_FUN_02bb0e9c(plVar9 + 5,lVar6);
              if ((lVar7 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
              goto LAB_059d1408;
              if (2 < *(uint *)(plVar9 + 3)) {
                plVar9[6] = lVar7;
                thunk_FUN_02bb0e9c(plVar9 + 6,lVar7);
                if ((lVar11 != 0) &&
                   (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
                goto LAB_059d1408;
                puVar3 = PTR_DAT_06338200;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                  plVar9[7] = lVar11;
                  thunk_FUN_02bb0e9c(plVar9 + 7,lVar11);
                  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                  thunk_FUN_04e5b2e8(uVar4,plVar9,0);
                  return uVar4;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
    }
  }
LAB_059d1400:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


