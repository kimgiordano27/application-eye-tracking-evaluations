/*
FUNCTION_NAME: FUN_05810ff8
ENTRY_POINT: 05810ff8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05810ff8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_24;
  
  if ((DAT_066d2c46 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__);
    DAT_066d2c46 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__;
  puVar1 = PTR_DAT_06312310;
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)(PTR_DAT_06312310 + 0x78) + 0x40)) {
      fVar6 = *(float *)(param_1 + 0x68);
      fVar7 = *(float *)(param_1 + 0x6c);
      pfVar3 = (float *)thunk_FUN_02b7978c(param_2);
      fVar5 = *pfVar3;
      if (fVar5 <= fVar7) {
        fVar7 = fVar5;
      }
      if (fVar6 <= fVar5) {
        fVar6 = fVar7;
      }
      local_24 = (fVar6 - *(float *)(param_1 + 0x68)) /
                 (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68));
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x78),&local_24);
      FUN_04c00984(*(undefined8 *)puVar2,uVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


