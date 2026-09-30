/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 044f10cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x9;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  for (; (long)unaff_x22 < in_x9; unaff_x22 = unaff_x22 + 1) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_044f11f8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_044f11fc;
    if (unaff_x20 == 0) goto LAB_044f11f8;
    puVar4 = (undefined8 *)(lVar3 + unaff_x21);
    in_stack_00000048 = puVar4[1];
    in_stack_00000040 = *puVar4;
    in_stack_00000050 = puVar4[2];
    uVar7 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    in_w8 = *(int *)(unaff_x19 + 0x18);
    if ((uVar7 & 1) != 0) break;
    in_x9 = (long)in_w8;
    unaff_x21 = unaff_x21 + 0x18;
  }
  if (in_w8 <= (int)unaff_x22) {
    return 0;
  }
  uVar7 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar8 = (int)unaff_x22;
      uVar6 = (uint)uVar7;
      if (in_w8 <= iVar8) {
        FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),uVar7,in_w8 - uVar6,0);
        iVar8 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar8 - uVar6;
      }
      unaff_x22 = (ulong)iVar8;
      lVar3 = (long)iVar8 * 0x18 + 0x20;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_044f11f8;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x22) goto LAB_044f11fc;
        if (unaff_x20 == 0) goto LAB_044f11f8;
        puVar4 = (undefined8 *)(lVar2 + lVar3);
        in_stack_00000048 = puVar4[1];
        in_stack_00000040 = *puVar4;
        in_stack_00000050 = puVar4[2];
        uVar1 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar1 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar3 = lVar3 + 0x18;
      } while ((long)unaff_x22 < (long)in_w8);
      uVar9 = (uint)unaff_x22;
    } while (in_w8 <= (int)uVar9);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_044f11f8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(uint *)(lVar3 + 0x18) <= uVar9) || (*(uint *)(lVar3 + 0x18) <= uVar6)) {
LAB_044f11fc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    puVar5 = (undefined8 *)(lVar3 + 0x20 + (long)(int)uVar9 * 0x18);
    puVar4 = (undefined8 *)(lVar3 + 0x20 + (long)(int)uVar6 * 0x18);
    uVar7 = (ulong)(uVar6 + 1);
    uVar11 = puVar5[1];
    uVar10 = *puVar5;
    puVar4[2] = puVar5[2];
    puVar4[1] = uVar11;
    *puVar4 = uVar10;
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


