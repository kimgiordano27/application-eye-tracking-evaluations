/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03f3b4cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9288);
    FUN_02f08768(PTR_DAT_067cc4c0);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(PTR_DAT_067cc4d0);
    FUN_02f08768(PTR_DAT_067c8f38);
    *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
  }
  if ((unaff_x21 & 1) != 0) {
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_04886944(*(long *)(param_2 + 0x30),*(undefined8 *)PTR_DAT_067cc4c0);
      if (*(long *)(param_2 + 0x10) != 0) {
        FUN_0488358c(*(long *)(param_2 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140));
        if (*(long *)(param_2 + 0x28) != 0) {
          FUN_0485548c(*(long *)(param_2 + 0x28),
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148));
          goto LAB_03f3b564;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_03f3b564:
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_03d9c7dc((long *)(param_2 + 0x38),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158));
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    FUN_03d18804((long *)(param_2 + 0x48),*(undefined8 *)PTR_DAT_067cc4c8);
  }
  puVar1 = PTR_DAT_067c9288;
  if (*(char *)(param_2 + 0x20) != '\0') {
    uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8f38);
    FUN_06105b34(uVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50)
                 ,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060a23e4(uVar2,0);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}


