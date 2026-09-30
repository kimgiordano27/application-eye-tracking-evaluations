/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 023452b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_01dd295c();
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
    uVar1 = FUN_033a87c8(uVar1,0);
    uVar5 = thunk_FUN_01dd295c(StringLiteral_887,uVar1,0);
    uVar5 = FUN_01d7d9bc(uVar5,2);
    FUN_01a94b18();
    FUN_01a952f4(uVar5);
    FUN_01a95328(uVar5,0);
    FUN_01a94b18(uVar5);
    FUN_01a952f4(uVar5,uVar1);
    FUN_01a95328(uVar5,1,uVar1);
    uVar1 = thunk_FUN_01dd295c(StringLiteral_8577);
    uVar1 = FUN_033d6e50(uVar1,uVar5,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar5 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_1645);
    FUN_03287130(uVar5,uVar1,uVar6,0);
    uVar1 = thunk_FUN_01dd295c(StringLiteral_8579);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar5,uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&
                     PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
              ,0);
}


