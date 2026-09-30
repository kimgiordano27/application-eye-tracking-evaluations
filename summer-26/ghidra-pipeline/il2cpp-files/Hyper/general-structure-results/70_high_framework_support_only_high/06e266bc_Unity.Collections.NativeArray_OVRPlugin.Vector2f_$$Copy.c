/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 06e266bc
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
              (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  void *__dest;
  int iVar7;
  uint uVar8;
  ulong unaff_x23;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = unaff_x21 + 0x48;
    if ((long)iVar1 <= (long)unaff_x23) break;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_06e26820;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_06e26824;
    if (unaff_x20 == 0) goto LAB_06e26820;
    memcpy(&stack0x00000050,(void *)(lVar5 + unaff_x21),0x48);
    param_1 = &stack0x00000098;
    param_2 = &stack0x00000050;
    param_3 = 0x48;
  }
  if (iVar1 <= (int)unaff_x23) {
    return 0;
  }
  uVar2 = unaff_x23 & 0xffffffff;
  do {
    unaff_x23 = (ulong)((int)unaff_x23 + 1);
    do {
      iVar7 = (int)unaff_x23;
      uVar6 = (uint)uVar2;
      if (iVar1 <= iVar7) {
        FUN_08d9ef4c(*(undefined8 *)(unaff_x19 + 0x10),uVar2,iVar1 - uVar6,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar6;
      }
      unaff_x23 = (ulong)iVar7;
      lVar5 = (long)iVar7 * 0x48 + 0x20;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_06e26820;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x23) goto LAB_06e26824;
        if (unaff_x20 == 0) goto LAB_06e26820;
        memcpy(&stack0x00000008,(void *)(lVar4 + lVar5),0x48);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x23 = unaff_x23 + 1;
        lVar5 = lVar5 + 0x48;
      } while ((long)unaff_x23 < (long)iVar1);
      uVar8 = (uint)unaff_x23;
    } while (iVar1 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_06e26820:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_06e26824:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    __dest = (void *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x48);
    uVar2 = (ulong)(uVar6 + 1);
    memmove(__dest,(void *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x48),0x48);
    thunk_FUN_049ee3d8(__dest,0);
    iVar1 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


