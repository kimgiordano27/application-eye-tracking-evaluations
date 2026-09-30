/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 036d918c
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


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_x11;
  uint in_w12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  bVar1 = *(byte *)(*unaff_x22 + 300);
  if ((bVar1 <= in_w12) && (*(long *)(param_1 + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
    lVar3 = (**(code **)(in_x11 + 0x238))();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar2 = FUN_03f054bc(lVar3,0);
    if (iVar2 == 1) {
      lVar3 = *unaff_x22;
      bVar1 = *(byte *)(lVar3 + 300);
      if ((*(byte *)(*unaff_x21 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + ((ulong)bVar1 - 1) * 8) != lVar3))
      goto LAB_036d98d4;
      if ((*(byte *)(*unaff_x20 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
      uVar5 = FUN_036dbec0();
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar4 = FUN_0474aec4(*(undefined8 *)PTR_DAT_06dd6028,0);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar4);
    }
    return 0;
  }
LAB_036d98d4:
                    /* WARNING: Subroutine does not return */
  FUN_0160f170();
}


