/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 0399c5c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  long unaff_x21;
  ulong uVar5;
  void *__dest;
  int iVar6;
  uint uVar7;
  ulong unaff_x23;
  
  while( true ) {
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = unaff_x21 + 0x1b0;
    if (in_x9 <= (long)unaff_x23) break;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_0399c708;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_0399c70c;
    if (unaff_x20 == 0) goto LAB_0399c708;
    memcpy(&stack0x000001b0,(void *)(lVar3 + unaff_x21),0x1b0);
    memcpy(&stack0x00000360,&stack0x000001b0,0x1b0);
    uVar5 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                       *(undefined8 *)(unaff_x20 + 0x28));
    in_w8 = *(int *)(unaff_x19 + 0x18);
    if ((uVar5 & 1) != 0) break;
    in_x9 = (long)in_w8;
  }
  if (in_w8 <= (int)unaff_x23) {
    return 0;
  }
  uVar5 = unaff_x23 & 0xffffffff;
  do {
    unaff_x23 = (ulong)((int)unaff_x23 + 1);
    do {
      iVar6 = (int)unaff_x23;
      uVar4 = (uint)uVar5;
      if (in_w8 <= iVar6) {
        FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),uVar5,in_w8 - uVar4,0);
        iVar6 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar6 - uVar4;
      }
      unaff_x23 = (ulong)iVar6;
      lVar3 = (long)iVar6 * 0x1b0 + 0x20;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_0399c708;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x23) goto LAB_0399c70c;
        if (unaff_x20 == 0) goto LAB_0399c708;
        memcpy(&stack0x00000000,(void *)(lVar2 + lVar3),0x1b0);
        memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
        uVar1 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                           *(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar1 & 1) == 0) break;
        unaff_x23 = unaff_x23 + 1;
        lVar3 = lVar3 + 0x1b0;
      } while ((long)unaff_x23 < (long)in_w8);
      uVar7 = (uint)unaff_x23;
    } while (in_w8 <= (int)uVar7);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_0399c708:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(uint *)(lVar3 + 0x18) <= uVar7) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_0399c70c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    __dest = (void *)(lVar3 + 0x20 + (long)(int)uVar4 * 0x1b0);
    uVar5 = (ulong)(uVar4 + 1);
    memmove(__dest,(void *)(lVar3 + 0x20 + (long)(int)uVar7 * 0x1b0),0x1b0);
    thunk_FUN_02bb0e9c(__dest,0);
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


