/*
FUNCTION_NAME: thunk_FUN_0741ce64
ENTRY_POINT: 0741ce60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void thunk_FUN_0741ce64(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  if ((DAT_08269a0b & 1) == 0) {
    FUN_0373b518(UnityEngine_VFX_SpawnOverDistance_TypeInfo);
    FUN_0373b518(UnityEngine_SphereCollider_TypeInfo);
    auVar6 = FUN_0373b518(System_NonSerializedAttribute_TypeInfo);
    DAT_08269a0b = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    auVar6 = FUN_073bfbc8(param_2,0);
    puVar2 = System_NonSerializedAttribute_TypeInfo;
    if (lVar5 != 0) {
      FUN_04530db4(lVar5,auVar6._0_8_,*(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
      uVar3 = FUN_073bfbc8(param_2,0);
      uVar4 = thunk_FUN_037787d0(uVar3,*(undefined8 *)puVar2);
      if (uVar4 == 0) {
        return;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      auVar6 = auVar1 << 0x40;
      if (*(long *)(param_1 + 0xf8) != 0) {
        FUN_04530db4(*(long *)(param_1 + 0xf8),uVar4,
                     *(undefined8 *)UnityEngine_VFX_SpawnOverDistance_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4(auVar6._0_8_,auVar6._8_8_);
}


