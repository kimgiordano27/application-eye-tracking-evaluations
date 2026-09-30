/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 05176174
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w24;
  uint uVar9;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x05176174:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_032934b8(param_3);
  }
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05176218;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac(unaff_x22,param_3,0);
LAB_05176218:
  uVar4 = (*(code *)*puVar2)(unaff_x22,uVar1,unaff_w24,puVar2[1]);
  uVar6 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_05176328;
        if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x24 + 0x24) + 1;
          goto LAB_051762e0;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_05176328;
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x24 + 0x24);
LAB_051762e0:
          lVar5 = unaff_x27 + unaff_x25 * 0x24;
          uVar11 = *(undefined8 *)(lVar5 + 0x34);
          uVar10 = *(undefined8 *)(lVar5 + 0x2c);
          in_stack_00000008[2] = *(undefined8 *)(lVar5 + 0x3c);
          in_stack_00000008[1] = uVar11;
          *in_stack_00000008 = uVar10;
          *unaff_x29 = -1;
          *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_0517632c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    do {
      uVar9 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar9;
      unaff_x20 = uVar6 & 0xffffffff;
      uVar8 = (uint)uVar6;
      if ((int)uVar9 < 0) {
        *in_stack_00000008 = 0;
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_05176328;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0517632c;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar6 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar3 = (long *)FUN_03896198(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_05176328;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_05176328:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  param_1 = unaff_x27 + unaff_x25 * unaff_x21;
  unaff_x26 = unaff_x25;
  unaff_w24 = in_stack_00000018._4_4_;
  goto code_r0x05176174;
}


