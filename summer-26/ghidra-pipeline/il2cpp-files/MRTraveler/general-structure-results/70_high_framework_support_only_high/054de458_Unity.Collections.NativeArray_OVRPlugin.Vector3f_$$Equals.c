/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 054de458
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint in_w9;
  undefined8 uVar6;
  long in_x10;
  undefined8 in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int iVar7;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  while( true ) {
    uVar10 = *(undefined8 *)(in_x10 + 0x28);
    uVar4 = *(undefined8 *)(in_x10 + 0x20);
    uStack00000000000000f0 = uVar4;
    uStack00000000000000f8 = uVar10;
    uStack0000000000000100 = in_x11;
    if (in_w9 <= in_w8) break;
    iVar7 = (int)unaff_x26;
    lVar3 = unaff_x19 + (long)(int)in_w8 * (long)iVar7;
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    uVar11 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    if (unaff_x21 == 0) {
LAB_054de664:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    in_stack_00000130 = uVar9;
    in_stack_00000138 = uVar11;
    in_stack_00000140 = uVar6;
    in_stack_00000150 = uVar4;
    in_stack_00000158 = uVar10;
    in_stack_00000160 = in_x11;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar8 = unaff_w25 + unaff_w24;
      uStack00000000000000f8 = in_stack_00000118;
      uStack00000000000000f0 = in_stack_00000110;
      uStack0000000000000100 = in_stack_00000120;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_054de660;
      lVar3 = unaff_x19 + (long)(int)uVar8 * (long)iVar7;
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      uVar10 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x21 == 0) goto LAB_054de664;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000158 = in_stack_00000118;
      in_stack_00000150 = in_stack_00000110;
      in_stack_00000160 = in_stack_00000120;
      in_stack_00000130 = uVar10;
      in_stack_00000138 = uVar6;
      in_stack_00000140 = uVar4;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar8 = unaff_w25 + uVar1;
LAB_054de5fc:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar3 = unaff_x19 + (long)(int)uVar8 * 0x18;
          *(undefined8 *)(lVar3 + 0x30) = in_stack_00000120;
          *(undefined8 *)(lVar3 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar3 + 0x20) = in_stack_00000110;
          thunk_FUN_03d233cc(lVar3 + 0x20,0);
          return;
        }
        goto LAB_054de660;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_054de660;
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_054de660;
      lVar5 = unaff_x19 + (int)(unaff_w25 + uVar1) * unaff_x26;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      thunk_FUN_03d233cc(lVar5 + 0x20,0);
      if (unaff_w27 < (int)unaff_w24) goto LAB_054de5fc;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    in_w9 = *(uint *)(unaff_x19 + 0x18);
    in_w8 = unaff_w28 + in_stack_00000008._4_4_;
    if (in_w9 <= in_w8 - 1) break;
    in_x10 = unaff_x19 + (long)(int)(in_w8 - 1) * (long)iVar7;
    in_x11 = *(undefined8 *)(in_x10 + 0x30);
  }
LAB_054de660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


