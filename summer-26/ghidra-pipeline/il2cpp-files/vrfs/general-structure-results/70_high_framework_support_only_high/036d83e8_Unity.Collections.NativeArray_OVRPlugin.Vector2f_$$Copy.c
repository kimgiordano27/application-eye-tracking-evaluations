/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 036d83e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x27;
  long *unaff_x28;
  
  while (lVar7 = (**(code **)(param_1 + 0x238))(), lVar7 != 0) {
    iVar3 = FUN_03f054bc(lVar7,0);
    if (iVar3 <= unaff_w21) {
      return;
    }
    plVar4 = (long *)(**(code **)(*unaff_x20 + 0x238))();
    if (plVar4 == (long *)0x0) break;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                               (plVar4,unaff_w21,*(undefined8 *)(*plVar4 + 0x310));
    if (plVar4 == (long *)0x0) break;
    bVar2 = *(byte *)(*unaff_x28 + 300);
    if ((*(byte *)(*plVar4 + 300) < bVar2) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar4);
    }
    lVar5 = *unaff_x27;
    lVar7 = plVar4[10];
    lVar1 = plVar4[0xb];
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar5 = *unaff_x27;
    }
    FUN_0371033c(lVar7,lVar1,**(undefined8 **)(lVar5 + 0xb8),(*(undefined8 **)(lVar5 + 0xb8))[1],0);
    uVar6 = FUN_01c95838();
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)plVar4[0x18];
      if (plVar4 == (long *)0x0) break;
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_01fbaf30();
    }
    param_1 = *unaff_x20;
    unaff_w21 = unaff_w21 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


