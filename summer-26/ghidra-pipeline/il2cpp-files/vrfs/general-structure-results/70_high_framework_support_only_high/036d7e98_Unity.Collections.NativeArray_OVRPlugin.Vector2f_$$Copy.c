/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 036d7e98
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  code *in_x9;
  long unaff_x20;
  undefined8 unaff_x21;
  
  lVar5 = (*in_x9)();
  if (lVar5 != 0) {
    iVar4 = FUN_03f054bc(lVar5,0);
    puVar3 = PTR_DAT_06d98c30;
    if (iVar4 == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar5 = *(long *)PTR_DAT_06d98c30;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar5 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_06e5dc58;
      uVar6 = FUN_037103cc(uVar1,uVar2,**(undefined8 **)(lVar5 + 0xb8),
                           (*(undefined8 **)(lVar5 + 0xb8))[1],0);
      if ((uVar6 & 1) != 0) {
        FUN_01fbb444();
      }
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar5 = *(long *)puVar3;
      }
      unaff_x21 = **(undefined8 **)(lVar5 + 0xb8);
    }
    return unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


