/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 044f1064
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
  char in_NG;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044f1054 with catch @ 044f1064
                        */
  if (in_NG == in_OV) {
    uVar10 = 0;
    lVar7 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_044f11f8;
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_044f11fc;
      if (unaff_x20 == 0) goto LAB_044f11f8;
      puVar4 = (undefined8 *)(lVar3 + lVar7);
      in_stack_00000048 = puVar4[1];
      in_stack_00000040 = *puVar4;
      in_stack_00000050 = puVar4[2];
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      in_w8 = *(int *)(unaff_x19 + 0x18);
      if ((uVar1 & 1) != 0) break;
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar10 < (long)in_w8);
  }
  else {
    uVar10 = 0;
  }
  if (in_w8 <= (int)uVar10) {
    return 0;
  }
  uVar1 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      iVar8 = (int)uVar10;
      uVar6 = (uint)uVar1;
      if (in_w8 <= iVar8) {
        FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),uVar1,in_w8 - uVar6,0);
        iVar8 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar8 - uVar6;
      }
      uVar10 = (ulong)iVar8;
      lVar7 = (long)iVar8 * 0x18 + 0x20;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_044f11f8;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_044f11fc;
        if (unaff_x20 == 0) goto LAB_044f11f8;
        puVar4 = (undefined8 *)(lVar3 + lVar7);
        in_stack_00000048 = puVar4[1];
        in_stack_00000040 = *puVar4;
        in_stack_00000050 = puVar4[2];
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar2 & 1) == 0) break;
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((long)uVar10 < (long)in_w8);
      uVar9 = (uint)uVar10;
    } while (in_w8 <= (int)uVar9);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
LAB_044f11f8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(uint *)(lVar7 + 0x18) <= uVar9) || (*(uint *)(lVar7 + 0x18) <= uVar6)) {
LAB_044f11fc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    puVar5 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar9 * 0x18);
    puVar4 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar6 * 0x18);
    uVar1 = (ulong)(uVar6 + 1);
    uVar12 = puVar5[1];
    uVar11 = *puVar5;
    puVar4[2] = puVar5[2];
    puVar4[1] = uVar12;
    *puVar4 = uVar11;
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


