/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 047df080
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool in_NG;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  long unaff_x20;
  
  if (!in_NG) {
    FUN_03642c28();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc();
  }
  uVar2 = in_w8 << 1 | 1;
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  plVar5 = (long *)FUN_03642a4c(lVar4,uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  while( true ) {
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x40), lVar4 == 0)) || (plVar5 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(lVar4 + 0x20) / (int)uVar2;
    }
    uVar1 = *(int *)(lVar4 + 0x20) - iVar3 * uVar2;
    if (*(uint *)(plVar5 + 3) <= uVar1) break;
    *(long *)(lVar4 + 0x38) = plVar5[(long)(int)uVar1 + 4];
    thunk_FUN_036b7ad0();
    lVar6 = thunk_FUN_0367fd24(lVar4,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,0);
    }
    if (*(uint *)(plVar5 + 3) <= uVar1) break;
    plVar5[(long)(int)uVar1 + 4] = lVar4;
    thunk_FUN_036b7ad0(plVar5 + (long)(int)uVar1 + 4,lVar4);
    if (lVar4 == *(long *)(param_1 + 0x20)) {
      *(long *)(param_1 + 0x18) = (long)plVar5;
      thunk_FUN_036b7ad0((long *)(param_1 + 0x18),plVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


