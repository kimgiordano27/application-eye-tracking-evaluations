/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 0554524c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055452a8) */

undefined8
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  ulong unaff_x21;
  long lVar4;
  
  if (param_2 != 1) {
    FUN_04ac1c5c(&stack0x00000040,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar3;
  __cxa_end_catch();
  FUN_04ac1c5c(&stack0x00000040,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar4);
  }
  if ((unaff_x21 & 1) == 0) {
    return 0;
  }
  thunk_FUN_03ce5214(PTR_DAT_08e84e08);
  uVar1 = FUN_06f6be0c();
  thunk_FUN_03ce5214(PTR_DAT_08e71970);
  uVar2 = thunk_FUN_03cf5234();
  FUN_07100530(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar2);
}


