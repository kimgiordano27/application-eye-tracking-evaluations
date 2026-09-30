/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 05846330
PROGRAM: vandalizer-libil2cpp.so
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
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint uVar5;
  ulong unaff_x25;
  uint uVar6;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  void *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x05846330:
  do {
    uVar6 = (uint)unaff_x26;
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_058463ac;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
LAB_05846348:
  uVar6 = (uint)unaff_x26;
  puVar1 = (undefined8 *)FUN_0322c1e8(unaff_x23,param_3,0);
LAB_058463ac:
  uVar5 = (uint)unaff_x25;
  uVar3 = (*(code *)*puVar1)(unaff_x23,unaff_x24);
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar6 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_058464d8;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0xe0 + 0x24) + 1;
          goto LAB_05846474;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_058464d8;
        if (uVar6 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar6 * 0xe0 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0xe0 + 0x24);
LAB_05846474:
          lVar4 = unaff_x27 + unaff_x20 * 0xe0;
          memmove(in_stack_00000010,(void *)(lVar4 + 0x30),0xd0);
          thunk_FUN_0329bf60(in_stack_00000010,0);
          *unaff_x28 = -1;
          *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          memset((void *)(lVar4 + 0x28),0,0xd8);
          *(uint *)(unaff_x19 + 0x24) = uVar5;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_058464dc:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    do {
      uVar5 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar5;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar6 = (uint)unaff_x25;
      if ((int)uVar5 < 0) {
        memset(in_stack_00000010,0,0xd0);
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_058464d8;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar5) goto LAB_058464dc;
      unaff_x28 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x28 != unaff_w29);
    unaff_x23 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x23 != (long *)0x0) break;
    plVar2 = (long *)FUN_0386ce64(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_058464d8;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
  } while( true );
  if (unaff_x23 == (long *)0x0) {
LAB_058464d8:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
  unaff_x24 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_0322bef4(param_3);
  }
  param_1 = *unaff_x23;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x05846328;
  goto LAB_05846348;
code_r0x05846328:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  goto code_r0x05846330;
}


