/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 054de3e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint in_w9;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w24;
  int unaff_w25;
  uint uVar9;
  uint unaff_w29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
                    /* try { // try from 054de3e0 to 055de3e3 has its CatchHandler @ 054de3ec */
                    /* try { // try from 054de3e4 to 055de3ef has its CatchHandler @ 054de314 */
  if (unaff_w29 < in_w9) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054de3e0 with catch @ 054de3ec
                        */
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    uVar13 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)unaff_w24 <= iVar1 >> 1) {
      do {
        uVar9 = unaff_w24 * 2;
        if ((int)uVar9 < param_3) {
          uVar2 = uVar9 + param_4;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) goto LAB_054de660;
          lVar4 = unaff_x19 + (long)(int)(uVar2 - 1) * 0x18;
          uVar8 = *(undefined8 *)(lVar4 + 0x30);
          uVar14 = *(undefined8 *)(lVar4 + 0x28);
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_054de660;
          lVar4 = unaff_x19 + (long)(int)uVar2 * 0x18;
          uVar6 = *(undefined8 *)(lVar4 + 0x30);
          uVar15 = *(undefined8 *)(lVar4 + 0x28);
          uVar12 = *(undefined8 *)(lVar4 + 0x20);
          if (param_5 == 0) goto LAB_054de664;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          in_stack_00000130 = uVar12;
          in_stack_00000138 = uVar15;
          in_stack_00000140 = uVar6;
          in_stack_00000150 = uVar11;
          in_stack_00000158 = uVar14;
          in_stack_00000160 = uVar8;
          uVar2 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                             *(undefined8 *)(param_5 + 0x28));
          uVar9 = uVar9 | uVar2 >> 0x1f;
        }
        unaff_w29 = unaff_w25 + uVar9;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054de660;
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        uVar14 = *(undefined8 *)(lVar4 + 0x28);
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        if (param_5 == 0) {
LAB_054de664:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        in_stack_00000130 = uVar11;
        in_stack_00000138 = uVar14;
        in_stack_00000140 = uVar8;
        in_stack_00000150 = uVar10;
        in_stack_00000158 = uVar13;
        in_stack_00000160 = uVar7;
        iVar3 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar3) {
          unaff_w29 = unaff_w25 + unaff_w24;
          break;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054de660;
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_054de660;
        lVar5 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x18;
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar11;
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        thunk_FUN_03d233cc(lVar5 + 0x20,0);
        unaff_w24 = uVar9;
      } while ((int)uVar9 <= iVar1 >> 1);
      in_w9 = *(uint *)(unaff_x19 + 0x18);
    }
    if (unaff_w29 < in_w9) {
      lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar13;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      thunk_FUN_03d233cc(lVar4 + 0x20,0);
      return;
    }
  }
LAB_054de660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


