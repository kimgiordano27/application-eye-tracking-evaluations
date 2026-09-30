/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 05e74ec4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__MoveNext(void)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  uint unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x26;
  undefined4 unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000010;
  
  *(uint *)(unaff_x21 + 0x20) = unaff_w19 + 1;
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
    lVar5 = unaff_x26 + (long)(int)unaff_w19 * 0x18;
    *(undefined4 *)(lVar5 + 0x20) = unaff_w27;
    iVar2 = *unaff_x28;
    puVar6 = (undefined8 *)(lVar5 + 0x30);
    *puVar6 = in_stack_00000010;
    *(int *)(lVar5 + 0x24) = iVar2 + -1;
    *(undefined4 *)(lVar5 + 0x28) = unaff_w20;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *unaff_x28 = unaff_w19 + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


