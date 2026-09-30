/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 047df5a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals
               (long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar4 = thunk_FUN_0367fe20(lVar4);
  FUN_0581fb60(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x18),param_3);
    uVar2 = FUN_047df900(param_1,param_2,0,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_047df6d8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
      thunk_FUN_036b7ad0();
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_047df6d8;
        plVar3 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        *plVar3 = lVar4;
        thunk_FUN_036b7ad0(plVar3,lVar4);
        iVar1 = *(int *)(param_1 + 0x18) + 1;
        *(int *)(param_1 + 0x18) = iVar1;
        if (*(long *)(param_1 + 0x10) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) * 2 < iVar1) {
            FUN_047df6dc(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                        );
          }
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


