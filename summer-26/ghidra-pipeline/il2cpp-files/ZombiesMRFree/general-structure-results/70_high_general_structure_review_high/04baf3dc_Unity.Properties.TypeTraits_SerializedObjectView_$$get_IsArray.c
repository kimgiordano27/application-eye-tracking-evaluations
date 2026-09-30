/*
FUNCTION_NAME: Unity.Properties.TypeTraits<SerializedObjectView>$$get_IsArray
ENTRY_POINT: 04baf3dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeTraits<SerializedObjectView>__get_IsArray
               (undefined8 *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_073932f5 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    DAT_073932f5 = 1;
  }
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  uVar3 = FUN_02fe9ed8(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x40));
  puVar1 = PTR_DAT_06f6d6a0;
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar1);
    }
    uVar4 = FUN_05afde1c(uVar4,0);
    FUN_05b10894(uVar4,0);
  }
  if (param_3 < 0) {
    FUN_05b0fafc(0);
  }
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  return;
}


