/*
FUNCTION_NAME: FUN_0785926c
ENTRY_POINT: 0785926c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_8;telemetry_or_network_hits_17
*/


/* WARNING: Removing unreachable block (ram,0x078594a0) */

void FUN_0785926c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined1 local_40 [16];
  long local_28;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_082726f6 & 1) == 0) {
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Orthogonal_00000360_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035D_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035E_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000364_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_00000361_PostfixBurstDelegate>_get_Value__
                );
    DAT_082726f6 = 1;
  }
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar4 = FUN_075ac5e0(uVar8,0,0);
  puVar1 = 
  Method_Unity_Burst_FunctionPointer<BurstMathUtility_Orthogonal_00000360_PostfixBurstDelegate>_get_Value__
  ;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)
                  Method_Unity_Burst_FunctionPointer<BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate>_get_Value__
                + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    local_40 = FUN_0544a9f4(&local_28,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_03fe2ce8(*(long *)(param_1 + 0x1b8),local_28,
                 *(undefined8 *)
                  Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000364_PostfixBurstDelegate>_get_Value__
                );
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&local_78,local_28,
                 *(undefined8 *)
                  Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_PostfixBurstDelegate>_get_Value__
                );
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate>_get_Value__
    ;
    puVar1 = 
    Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035D_PostfixBurstDelegate>_get_Value__
    ;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar4 = FUN_05d64e98(&local_60,*(undefined8 *)puVar1), plVar3 = local_50,
          (uVar4 & 1) != 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *local_50;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0785943c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(local_50,*(long *)puVar2,0);
LAB_0785943c:
      (*(code *)*puVar5)(plVar3,param_2,puVar5[1]);
    }
    FUN_05d64e94(&local_60,
                 *(undefined8 *)
                  Method_Unity_Burst_FunctionPointer<BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate>_get_Value__
                );
    FUN_04fafc80(local_40,*(undefined8 *)
                           Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_00000361_PostfixBurstDelegate>_get_Value__
                );
  }
  return;
}


