/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 02b58088
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___ctor
          (long param_1,undefined8 param_2,long param_3)

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
  long *unaff_x22;
  undefined8 unaff_x23;
  uint uVar6;
  ulong unaff_x24;
  ulong uVar7;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar8;
  ulong unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x02b58088:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02b58078;
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor:
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_02b580f4:
  uVar6 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x29;
  uVar4 = (*(code *)*puVar2)(unaff_x22,unaff_x23);
  uVar7 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_02b581e4;
        if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x28 + 0x24) + 1;
          goto LAB_02b581ac;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_02b581e4;
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x28 + 0x24);
LAB_02b581ac:
          *unaff_x25 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar5 = unaff_x26 + unaff_x24 * 0x28;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar6;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_02b581e8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
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
      if (unaff_x26 == 0) goto LAB_02b581e4;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_02b581e8;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar7 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar3 = (long *)FUN_02249368(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_02b581e4;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_02b581e4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
  unaff_x23 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x28 = unaff_x24;
  if (in_x9 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02b58078:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    goto code_r0x02b58088;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_02b580f4;
}


