/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 050a5254
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  int iVar2;
  uint in_w8;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  uint unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if (in_NG != in_OV) {
    param_3 = param_3 + 1;
  }
  uStack0000000000000088 = *(undefined8 *)(in_x9 + 0x28);
  uStack0000000000000080 = *(undefined8 *)(in_x9 + 0x20);
  uStack0000000000000090 = *(undefined8 *)(in_x9 + 0x30);
  if ((int)unaff_w24 <= param_3 >> 1) {
    do {
      uVar8 = unaff_w24 * 2;
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
                    /* catch() { ... } // from try @ 050a5210 with catch @ 050a5294
                       catch() { ... } // from try @ 050a5284 with catch @ 050a5294 */
      if ((int)uVar8 < unaff_w23) {
                    /* try { // try from 050a5298 to 051a529b has its CatchHandler @ 050a52a4 */
                    /* try { // try from 050a529c to 051a52a7 has its CatchHandler @ 050a5104 */
        uVar1 = uVar8 + param_4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a5298 with catch @ 050a52a4
                        */
        if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_050a5450;
        if (param_5 == 0) goto LAB_050a5454;
        lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
        lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
        uVar10 = *(undefined8 *)(lVar4 + 0x28);
        uVar9 = *(undefined8 *)(lVar4 + 0x20);
        uVar5 = *(undefined8 *)(lVar4 + 0x30);
        uVar12 = *(undefined8 *)(lVar6 + 0x28);
        uVar11 = *(undefined8 *)(lVar6 + 0x20);
        uVar7 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_000000a0 = uVar11;
        in_stack_000000a8 = uVar12;
        in_stack_000000b0 = uVar7;
        in_stack_000000c0 = uVar9;
        in_stack_000000c8 = uVar10;
        in_stack_000000d0 = uVar5;
        uVar1 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                           *(undefined8 *)(param_5 + 0x28));
        uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
        uVar8 = uVar8 | uVar1 >> 0x1f;
      }
      unaff_w22 = unaff_w25 + uVar8;
      if (uVar3 <= unaff_w22) goto LAB_050a5450;
      if (param_5 == 0) {
LAB_050a5454:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w26;
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_000000d0 = uStack0000000000000090;
      in_stack_000000c8 = uStack0000000000000088;
      in_stack_000000c0 = uStack0000000000000080;
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar9;
      in_stack_000000b0 = uVar5;
      iVar2 = (**(code **)(param_5 + 0x18))
                        (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(param_5 + 0x28));
      if (-1 < iVar2) {
        unaff_w22 = unaff_w25 + unaff_w24;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w22) ||
         (uVar3 = unaff_w25 + unaff_w24, *(uint *)(unaff_x19 + 0x18) <= uVar3)) goto LAB_050a5450;
      lVar6 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w26;
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      *(undefined8 *)(lVar6 + 0x20) = uVar5;
      thunk_FUN_03afed3c(unaff_x19 + (long)(int)uVar3 * (long)unaff_w26 + 0x28,0);
      unaff_w24 = uVar8;
    } while ((int)uVar8 <= param_3 >> 1);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w22 < in_w8) {
    lVar4 = unaff_x19 + (long)(int)unaff_w22 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000088;
    *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000080;
    *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000090;
    thunk_FUN_03afed3c(lVar4 + 0x28,0);
    return;
  }
LAB_050a5450:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


