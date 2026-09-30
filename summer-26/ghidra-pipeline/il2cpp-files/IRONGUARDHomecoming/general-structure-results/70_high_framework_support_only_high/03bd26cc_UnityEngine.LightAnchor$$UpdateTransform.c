/*
FUNCTION_NAME: UnityEngine.LightAnchor$$UpdateTransform
ENTRY_POINT: 03bd26cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bd2808) */

void UnityEngine_LightAnchor__UpdateTransform(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03bd2724;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03bd2724:
    (*(code *)*puVar1)();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_w21 == 5) || (unaff_w21 == 0)) {
    unaff_w21 = 3;
  }
  FUN_02f1fbf0(&stack0x00000080,*(undefined8 *)StringLiteral_12330);
  if ((unaff_w21 == 3) || (unaff_w21 == 0)) {
    lVar2 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x000000c0,0x50);
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar2 = lVar2 + unaff_x25 * 0xb8;
    memcpy((void *)(lVar2 + 0x78),&stack0x00000000,0x50);
    thunk_FUN_01f51358(lVar2 + 0xc0,0);
  }
  return;
}


