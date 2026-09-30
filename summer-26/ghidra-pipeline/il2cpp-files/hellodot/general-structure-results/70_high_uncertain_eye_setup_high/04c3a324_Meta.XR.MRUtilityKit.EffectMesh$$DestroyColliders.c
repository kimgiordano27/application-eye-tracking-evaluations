/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 04c3a324
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
  uVar1 = FUN_04e69a20(param_1,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
      uVar3 = (**(code **)(*unaff_x19 + 1000))();
      uVar4 = *(undefined8 *)PTR_DAT_065e6680;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
      }
      uVar4 = FUN_04f3fb68(uVar4,0);
                    /* try { // try from 04c3a3c0 to 04d3a3e7 has its CatchHandler @ 04c3a7a4 */
      uVar3 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar3,uVar4,0);
      return uVar3;
    }
  }
  return 0;
}


