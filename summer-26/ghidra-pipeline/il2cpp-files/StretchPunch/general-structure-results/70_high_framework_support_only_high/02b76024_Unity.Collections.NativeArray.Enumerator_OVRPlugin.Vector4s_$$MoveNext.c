/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 02b76024
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__MoveNext(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  int in_w8;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  uint uVar5;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  undefined8 in_stack_00000008;
  
  uVar5 = unaff_w20 - in_w8 * in_w9;
  if (uVar5 < in_w9) {
    if (unaff_x23 == 0) {
LAB_02b7622c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar5 = *(int *)(unaff_x22 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (uVar5 < uVar1) {
      iVar4 = 0;
      do {
        lVar6 = (long)(int)uVar5;
        if (*(int *)(unaff_x23 + lVar6 * 0x20 + 0x20) == unaff_w20) {
                    /* try { // try from 02b76064 to 02c76073 has its CatchHandler @ 02b7612c */
          plVar2 = (long *)FUN_021bb118(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
                    /* try { // try from 02b76074 to 02c76117 has its CatchHandler @ 02b75ca0 */
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_02b76228;
          if (plVar2 == (long *)0x0) goto LAB_02b7622c;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x23 + lVar6 * 0x20 + 0x28),
                             in_stack_00000008,*(undefined8 *)(*plVar2 + 0x1c0));
          if ((uVar3 & 1) != 0) {
            return uVar5;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar5) goto LAB_02b76228;
        uVar5 = *(uint *)(unaff_x23 + lVar6 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar4) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar4 = iVar4 + 1;
      } while (uVar5 < uVar1);
    }
    return uVar5;
  }
LAB_02b76228:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


