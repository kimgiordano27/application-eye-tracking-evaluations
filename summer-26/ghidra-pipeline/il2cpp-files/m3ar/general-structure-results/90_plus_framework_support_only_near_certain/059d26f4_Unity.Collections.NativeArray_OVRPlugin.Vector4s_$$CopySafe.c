/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 059d26f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 in_CY;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  
  while (!(bool)in_CY) {
    if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
    memcpy(&stack0x00000008,(void *)(param_1 + unaff_x24),0x48);
    memcpy(&stack0x00000098,&stack0x00000008,0x48);
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar3 & 1) == 0) {
LAB_059d274c:
      uVar5 = (uint)unaff_x22;
      if ((int)uVar5 < iVar1) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
                    /* try { // try from 059d2764 to 05ad2773 has its CatchHandler @ 059d2858 */
        if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) break;
        lVar2 = (long)(int)unaff_w21;
                    /* try { // try from 059d2780 to 05ad2783 has its CatchHandler @ 059d285c */
        unaff_w21 = unaff_w21 + 1;
                    /* try { // try from 059d2784 to 05ad2843 has its CatchHandler @ 059d237c */
        memmove((void *)(lVar4 + 0x20 + lVar2 * unaff_w23),
                (void *)(lVar4 + 0x20 + (long)(int)uVar5 * (long)unaff_w23),0x48);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      }
      if (iVar1 <= (int)uVar5) {
        FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x22 = (long)(int)uVar5;
      unaff_x24 = (long)(int)uVar5 * (long)unaff_w23 + 0x20;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x48;
      if (iVar1 <= unaff_x22) goto LAB_059d274c;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    in_CY = *(uint *)(param_1 + 0x18) <= (uint)unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


