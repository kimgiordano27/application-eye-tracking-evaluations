/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 072afafc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(unaff_x21 + 0x936) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285940);
    *(undefined1 *)(unaff_x21 + 0x936) = 1;
  }
  puVar1 = PTR_DAT_09285940;
  lVar5 = *(long *)(param_1 + 0xb0);
  do {
    lVar3 = FUN_076c0530(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_040b4e00(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(lVar3,uVar6);
      }
    }
    lVar3 = FUN_040b1498((long *)(param_1 + 0xb0),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


