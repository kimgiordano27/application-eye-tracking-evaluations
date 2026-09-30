/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 033eb2a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x032e0f00) */

void OVRPlugin_UnityOpenXR___ctor(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_464);
  uVar3 = thunk_FUN_01dce4e8(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&
                       PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
                ,0);
  }
  __cxa_end_catch();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_2753);
  if ((DAT_044a61a9 & 1) == 0) {
    FUN_01d7d918(StringLiteral_2477,uVar2,0,0);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a61a9 = 1;
  }
  uVar2 = *(undefined8 *)StringLiteral_2477;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar2,0);
  FUN_032dfad4();
  return;
}


