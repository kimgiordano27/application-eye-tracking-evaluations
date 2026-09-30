/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 0399c580
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(long param_1)

{
  int iVar1;
  undefined1 in_CY;
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
  
  while (!(bool)in_CY) {
    if (unaff_x20 == 0) goto LAB_0399c708;
    memcpy(&stack0x000001b0,(void *)(param_1 + unaff_x21),0x1b0);
    memcpy(&stack0x00000360,&stack0x000001b0,0x1b0);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) != 0) {
LAB_0399c5d8:
      if (iVar1 <= (int)unaff_x23) {
        return 0;
      }
      uVar2 = unaff_x23 & 0xffffffff;
      goto LAB_0399c5f0;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = unaff_x21 + 0x1b0;
    if ((long)iVar1 <= (long)unaff_x23) goto LAB_0399c5d8;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_0399c708;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x23;
  }
LAB_0399c70c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
LAB_0399c5f0:
  unaff_x23 = (ulong)((int)unaff_x23 + 1);
  do {
    iVar7 = (int)unaff_x23;
    uVar6 = (uint)uVar2;
    if (iVar1 <= iVar7) {
      FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),uVar2,iVar1 - uVar6,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar6;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar1 - uVar6;
    }
    unaff_x23 = (ulong)iVar7;
    lVar5 = (long)iVar7 * 0x1b0 + 0x20;
    do {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_0399c708;
      if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x23) goto LAB_0399c70c;
      if (unaff_x20 == 0) goto LAB_0399c708;
      memcpy(&stack0x00000000,(void *)(lVar4 + lVar5),0x1b0);
      memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                         *(undefined8 *)(unaff_x20 + 0x28));
      iVar1 = *(int *)(unaff_x19 + 0x18);
      if ((uVar3 & 1) == 0) break;
      unaff_x23 = unaff_x23 + 1;
      lVar5 = lVar5 + 0x1b0;
    } while ((long)unaff_x23 < (long)iVar1);
    uVar8 = (uint)unaff_x23;
  } while (iVar1 <= (int)uVar8);
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 == 0) {
LAB_0399c708:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) goto LAB_0399c70c;
  __dest = (void *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x1b0);
  uVar2 = (ulong)(uVar6 + 1);
  memmove(__dest,(void *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x1b0),0x1b0);
  thunk_FUN_02bb0e9c(__dest,0);
  iVar1 = *(int *)(unaff_x19 + 0x18);
  goto LAB_0399c5f0;
}


