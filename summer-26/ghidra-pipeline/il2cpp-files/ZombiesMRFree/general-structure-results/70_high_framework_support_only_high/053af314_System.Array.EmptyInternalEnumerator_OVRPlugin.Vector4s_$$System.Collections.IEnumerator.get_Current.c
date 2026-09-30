/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 053af314
PROGRAM: ZombiesMRFree-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar7;
  ulong unaff_x25;
  uint uVar8;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x053af314:
  uVar7 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x26;
  uVar3 = (*param_1)(param_2,unaff_x23,unaff_x24,param_5);
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_053af410;
        if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0x14 + 0x24) + 1;
          goto LAB_053af3d0;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_053af410;
        if (uVar8 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x14 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x14 + 0x24);
LAB_053af3d0:
          lVar4 = unaff_x27 + unaff_x20 * 0x14;
          *in_stack_00000008 = *(undefined4 *)(lVar4 + 0x30);
          *unaff_x29 = -1;
          *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar7;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_053af414:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    do {
      uVar7 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar7;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar8 = (uint)unaff_x25;
      if ((int)uVar7 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_053af410;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_053af414;
      unaff_x29 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x29 != unaff_w28);
    param_2 = *(long **)(unaff_x19 + 0x30);
    if (param_2 != (long *)0x0) break;
    plVar2 = (long *)FUN_040052a8(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_053af410;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (param_2 == (long *)0x0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x23 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar5 = *param_2;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_053af30c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8(param_2,lVar4,0);
LAB_053af30c:
  param_1 = (code *)*puVar1;
  param_5 = puVar1[1];
  unaff_x24 = in_stack_00000018;
  goto code_r0x053af314;
}


