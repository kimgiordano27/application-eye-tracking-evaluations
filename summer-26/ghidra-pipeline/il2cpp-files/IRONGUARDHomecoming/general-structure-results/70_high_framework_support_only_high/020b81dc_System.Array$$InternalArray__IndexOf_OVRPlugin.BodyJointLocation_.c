/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 020b81dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_BodyJointLocation>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  
  puVar3 = Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (0 < (int)in_w8) {
    uVar7 = 0;
    do {
      if (in_w8 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar6 = *(long *)(unaff_x21 + 0x20 + uVar7 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(lVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if (((lVar6 == 0) || (lVar6 = FUN_040703d4(lVar6,0), lVar6 == 0)) ||
           (uVar5 = FUN_023360e0(lVar6,*(undefined8 *)puVar3), unaff_x20 == 0)) goto LAB_020b8320;
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_020b8320;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)in_w8);
  }
  if (unaff_x20 != 0) {
    uVar5 = FUN_030f4630();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
    thunk_FUN_01f51358();
    uVar5 = FUN_022c59ec();
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x28),uVar5);
    return;
  }
LAB_020b8320:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


