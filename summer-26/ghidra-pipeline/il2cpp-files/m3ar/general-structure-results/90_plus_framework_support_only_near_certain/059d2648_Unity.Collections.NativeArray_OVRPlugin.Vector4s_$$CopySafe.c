/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 059d2648
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
  
  lVar6 = 0x20;
  do {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_059d27d8;
    if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
    memcpy(&stack0x00000050,(void *)(lVar4 + lVar6),0x48);
    memcpy(&stack0x00000098,&stack0x00000050,0x48);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) != 0) break;
                    /* try { // try from 059d26a0 to 05ad26c7 has its CatchHandler @ 059d2860 */
    unaff_x22 = unaff_x22 + 1;
    lVar6 = lVar6 + 0x48;
  } while ((long)unaff_x22 < (long)iVar1);
  if (iVar1 <= (int)unaff_x22) {
    return 0;
  }
  uVar2 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar7 = (int)unaff_x22;
      uVar5 = (uint)uVar2;
      if (iVar1 <= iVar7) {
        FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),uVar2,iVar1 - uVar5,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar5;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar5;
      }
      unaff_x22 = (ulong)iVar7;
      lVar6 = (long)iVar7 * 0x48 + 0x20;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
                    /* try { // try from 059d26ec to 05ad274f has its CatchHandler @ 059d2864 */
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) goto LAB_059d27d8;
        if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe;
        memcpy(&stack0x00000008,(void *)(lVar4 + lVar6),0x48);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar6 = lVar6 + 0x48;
      } while ((long)unaff_x22 < (long)iVar1);
      uVar8 = (uint)unaff_x22;
    } while (iVar1 <= (int)uVar8);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if ((*(uint *)(lVar6 + 0x18) <= uVar8) || (*(uint *)(lVar6 + 0x18) <= uVar5)) {
LAB_059d27d8:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar2 = (ulong)(uVar5 + 1);
    memmove((void *)(lVar6 + 0x20 + (long)(int)uVar5 * 0x48),
            (void *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x48),0x48);
    iVar1 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


