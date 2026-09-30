/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Bone>
ENTRY_POINT: 020b836c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Bone>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0x926) = 1;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = FUN_04073094(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) goto LAB_020b8430;
          FUN_0209048c(lVar3,0);
          FUN_020904a8(lVar3,0);
        }
        uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_020b8430:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


