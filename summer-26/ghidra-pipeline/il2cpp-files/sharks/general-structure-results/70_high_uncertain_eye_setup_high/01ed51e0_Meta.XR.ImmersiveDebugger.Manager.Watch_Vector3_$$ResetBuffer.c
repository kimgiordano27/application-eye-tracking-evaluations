/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ResetBuffer
ENTRY_POINT: 01ed51e0
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ResetBuffer(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  void *unaff_x21;
  void *pvVar5;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  
  do {
    lVar2 = thunk_FUN_018617ec(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40)
                               ,&stack0x00000008);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
    thunk_FUN_0188fd20(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
    unaff_w19 = unaff_w19 + 1;
    pvVar5 = unaff_x21;
    do {
      unaff_x26 = unaff_x26 + 1;
      unaff_x21 = (void *)((long)pvVar5 + 0x60);
      if (unaff_x24 == unaff_x26) {
        return;
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      piVar1 = (int *)((long)pvVar5 + 0x48);
      pvVar5 = unaff_x21;
    } while (*piVar1 < 0);
    memmove(&stack0x00000008,unaff_x21,0x48);
  } while( true );
}


