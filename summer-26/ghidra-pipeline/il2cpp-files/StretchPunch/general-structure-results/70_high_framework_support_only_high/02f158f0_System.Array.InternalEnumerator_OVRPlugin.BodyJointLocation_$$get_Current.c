/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$get_Current
ENTRY_POINT: 02f158f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current
                (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  
code_r0x02f158f0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02f158e4;
LAB_02f158fc:
  puVar2 = (undefined8 *)FUN_01dde8fc(unaff_x24,param_3,0);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x24,unaff_x25);
    if ((uVar3 & 1) != 0) {
LAB_02f15958:
      return unaff_x23 & 0xffffffff;
    }
    do {
      uVar6 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
      if ((int)uVar6 <= unaff_w27) {
        thunk_FUN_01dd295c(StringLiteral_1244);
        uVar4 = thunk_FUN_01de27b8();
        uVar5 = thunk_FUN_01dd295c(StringLiteral_3086);
        FUN_03393770(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4);
      }
      if (uVar6 <= (uint)unaff_x23) {
LAB_02f15978:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar1 = *(uint *)(unaff_x26 + unaff_x28 * 0x10 + 0x24);
      unaff_x23 = (ulong)uVar1;
      unaff_w27 = unaff_w27 + 1;
      if ((int)uVar1 < 0) {
        unaff_x23 = 0xffffffff;
        goto LAB_02f15958;
      }
      if (uVar6 <= uVar1) goto LAB_02f15978;
      unaff_x28 = unaff_x23;
    } while (*(int *)(unaff_x26 + unaff_x23 * 0x10 + 0x20) != unaff_w22);
    unaff_x24 = *(long **)(unaff_x21 + 0x30);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    unaff_x25 = *(undefined8 *)(unaff_x26 + unaff_x23 * 0x10 + 0x28);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01dde7f8(param_3);
    }
    param_1 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02f158fc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02f158e4:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x02f158f0;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


