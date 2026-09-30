/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.cctor
ENTRY_POINT: 0492987c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___cctor
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  byte in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint uVar7;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar8;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0492987c:
  uVar7 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x29;
  if ((in_w8 & 1) == 0) {
    param_2 = FUN_02d9a2e0(param_2);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04929918;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4(unaff_x21,param_2,0);
LAB_04929918:
  uVar3 = (*(code *)*puVar1)(unaff_x21,unaff_w22,unaff_w23,puVar1[1]);
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_04929a08;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) + 1;
          goto FUN_049299d4;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_04929a08;
        if (uVar8 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24);
FUN_049299d4:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar7;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    do {
      uVar7 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar7;
      unaff_x29 = uVar5 & 0xffffffff;
      uVar8 = (uint)uVar5;
      if ((int)uVar7 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_04929a08;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_04929a0c;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar5 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar2 = (long *)FUN_03642a0c(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_04929a08;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w22 = *(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  in_w8 = *(byte *)(param_2 + 0x135);
  unaff_x28 = unaff_x24;
  unaff_w23 = in_stack_00000018._4_4_;
  goto code_r0x0492987c;
}


