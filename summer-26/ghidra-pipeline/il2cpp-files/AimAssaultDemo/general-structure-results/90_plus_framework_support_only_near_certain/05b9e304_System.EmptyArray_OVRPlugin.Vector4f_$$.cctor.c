/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 05b9e304
PROGRAM: AimAssaultDemo-libil2cpp.so
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
System_EmptyArray<OVRPlugin_Vector4f>___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar6;
  ulong unaff_x24;
  ulong uVar7;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar8;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x05b9e304:
  if (!(bool)in_ZR) goto LAB_05b9e2f0;
LAB_05b9e308:
  puVar2 = (undefined8 *)FUN_0377596c(unaff_x21,param_3,0);
LAB_05b9e368:
  uVar6 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x29;
  uVar4 = (*(code *)*puVar2)(unaff_x21,unaff_w22,unaff_w23,puVar2[1]);
  uVar7 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_05b9e45c;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) + 1;
          goto LAB_05b9e424;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_05b9e45c;
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24);
LAB_05b9e424:
          *unaff_x25 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar5 = unaff_x26 + unaff_x24 * 0x18;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar6;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_05b9e460:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    do {
      uVar6 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar6;
      unaff_x29 = uVar7 & 0xffffffff;
      uVar8 = (uint)uVar7;
      if ((int)uVar6 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_05b9e45c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_05b9e460;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar7 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar3 = (long *)FUN_042d1f6c(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_05b9e45c;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined2 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018._4_2_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
LAB_05b9e45c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  unaff_w23 = (uint)in_stack_00000018._4_2_;
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w22 = (uint)*(ushort *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_03775678(param_3);
  }
  param_1 = *unaff_x21;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x28 = unaff_x24;
  if (in_x9 == 0) goto LAB_05b9e308;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05b9e2f0:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x05b9e304;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_05b9e368;
}


