/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 036d9ba0
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar5;
  
  FUN_03fbbec4();
  FUN_036dac4c();
  if (unaff_x21 != (long *)0x0) {
    lVar2 = (**(code **)(*unaff_x21 + 0x238))();
    if (lVar2 != 0) {
      iVar5 = 0;
      do {
        iVar1 = FUN_03f054bc(lVar2,0);
        if (iVar1 <= iVar5) {
          *(undefined8 *)(unaff_x19 + 0x80) = unaff_x20;
          thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x80));
          return;
        }
        lVar2 = (**(code **)(*unaff_x20 + 0x238))();
        plVar3 = (long *)(**(code **)(*unaff_x21 + 0x238))();
        if (plVar3 == (long *)0x0) break;
        uVar4 = (**(code **)(*plVar3 + 0x308))(plVar3,iVar5,*(undefined8 *)(*plVar3 + 0x310));
        if (lVar2 == 0) break;
        FUN_036ef950(lVar2,uVar4,0);
        iVar5 = iVar5 + 1;
        lVar2 = (**(code **)(*unaff_x21 + 0x238))();
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


