/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 050a55ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray
               (long param_1,undefined1 param_2 [16])

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint in_w9;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int iVar7;
  long unaff_x26;
  ulong unaff_x27;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uVar11 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  while( true ) {
                    /* try { // try from 050a55b4 to 051a55c7 has its CatchHandler @ 050a55d4 */
    iVar7 = (int)unaff_x26;
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000030;
                    /* try { // try from 050a55c8 to 051a55eb has its CatchHandler @ 050a5574 */
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)in_w9 * (long)iVar7 + 8,0);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a55b4 with catch @ 050a55d4
                        */
    if (unaff_x27 == unaff_x24) {
                    /* try { // try from 050a55ec to 051a5603 has its CatchHandler @ 050a563c */
      return;
    }
    uVar8 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = unaff_x27 + 1;
    if (uVar8 <= (uint)uVar2) break;
    lVar4 = unaff_x22 + uVar2 * unaff_x26;
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x30);
    if (unaff_x23 <= (long)unaff_x27) {
      do {
        uVar8 = (uint)unaff_x27;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_050a55f8;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar4 = unaff_x22 + (long)(int)uVar8 * (long)iVar7;
        uVar12 = *(undefined8 *)(lVar4 + 0x28);
        uVar10 = *(undefined8 *)(lVar4 + 0x20);
        uVar5 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_00000040 = uVar10;
        in_stack_00000048 = uVar12;
        in_stack_00000050 = uVar5;
        in_stack_00000060 = uVar9;
        in_stack_00000068 = uVar11;
        in_stack_00000070 = in_stack_00000030;
        iVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar3) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar8) ||
           (uVar1 = uVar8 + 1, *(uint *)(unaff_x22 + 0x18) <= uVar1)) goto LAB_050a55f8;
        lVar6 = unaff_x22 + (long)(int)uVar1 * (long)iVar7;
        uVar10 = *(undefined8 *)(lVar4 + 0x20);
        uVar5 = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar6 + 0x20) = uVar10;
        *(undefined8 *)(lVar6 + 0x30) = uVar5;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar1 * (long)iVar7 + 8,0);
        unaff_x27 = (ulong)(uVar8 - 1);
      } while (unaff_w21 <= (int)(uVar8 - 1));
      uVar8 = *(uint *)(unaff_x22 + 0x18);
    }
    in_w9 = (int)unaff_x27 + 1;
    if (uVar8 <= in_w9) break;
    param_1 = unaff_x22 + (long)(int)in_w9 * (long)iVar7;
    unaff_x27 = uVar2;
  }
LAB_050a55f8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


