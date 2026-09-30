/*
FUNCTION_NAME: FUN_062d8a90
ENTRY_POINT: 062d8a90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_062d8a90(undefined8 param_1,ulong param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_06b8bd36 & 1) == 0) {
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06b8bd36 = 1;
  }
  puVar1 = Method_System_Net_WebRequestStream_Close_internal__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *param_3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_062d8b30;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02d9a5d4(param_3,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__,0xb);
LAB_062d8b30:
  uVar5 = (*(code *)*puVar2)(param_3,puVar2[1]);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar3 = 1;
  if ((uVar5 & 1) == 0) {
    uVar3 = 2;
  }
  FUN_062edeb8(param_2 & 0xffffffff,uVar3,param_2 >> 0x20,0);
  return;
}


