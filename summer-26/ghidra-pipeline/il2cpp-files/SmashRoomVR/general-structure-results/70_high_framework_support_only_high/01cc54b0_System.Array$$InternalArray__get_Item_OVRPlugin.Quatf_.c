/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 01cc54b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01cc5520) */
/* WARNING: Removing unreachable block (ram,0x01cc55dc) */

void System_Array__InternalArray__get_Item<OVRPlugin_Quatf>(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  void *unaff_x19;
  undefined8 uVar5;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_01cc5508;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01cc5508:
    (*(code *)*puVar1)();
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cc5760();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_02396e54(*(long *)(unaff_x20 + 0x30),&stack0x00000100,*(undefined8 *)StringLiteral_1247);
    lVar2 = *(long *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000008,unaff_x19,0x78);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)StringLiteral_1237;
      memcpy(&stack0x00000118,&stack0x00000008,0x78);
      FUN_024290c8(lVar2,&stack0x00000118,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


