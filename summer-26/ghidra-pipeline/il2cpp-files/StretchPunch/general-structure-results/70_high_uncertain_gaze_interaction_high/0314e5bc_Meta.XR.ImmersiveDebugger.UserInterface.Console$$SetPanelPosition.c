/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 0314e5bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_01dd295c(StringLiteral_1867);
  uVar2 = thunk_FUN_01dce4e8(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    lVar3 = thunk_FUN_01dd295c(
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                              );
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar1,0);
    FUN_033b2c8c();
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&
                     PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
              ,0);
}


