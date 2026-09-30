/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 023437cc
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(undefined8 param_1)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_1867);
  uVar3 = thunk_FUN_01dce4e8(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    lVar4 = thunk_FUN_01dd295c(
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                              );
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = FUN_033a87c8(uVar2,0);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_887,uVar2,0);
    uVar6 = FUN_01d7d9bc(uVar6,2);
    FUN_01a94b18();
    FUN_01a952f4(uVar6);
    FUN_01a95328(uVar6,0);
    FUN_01a94b18(uVar6);
    FUN_01a952f4(uVar6,uVar2);
    FUN_01a95328(uVar6,1,uVar2);
    uVar2 = thunk_FUN_01dd295c(StringLiteral_8577);
    uVar2 = FUN_033d6e50(uVar2,uVar6,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    uVar7 = thunk_FUN_01dd295c(StringLiteral_1645);
    FUN_03287130(uVar6,uVar2,uVar7,0);
    uVar2 = thunk_FUN_01dd295c(StringLiteral_8579);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar6,uVar2);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&
                     PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
              ,0);
}


