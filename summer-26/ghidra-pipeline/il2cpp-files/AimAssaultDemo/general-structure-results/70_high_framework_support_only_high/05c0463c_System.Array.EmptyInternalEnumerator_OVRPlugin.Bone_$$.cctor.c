/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.cctor
ENTRY_POINT: 05c0463c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___cctor(long param_1)

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
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
LAB_05c04640:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_1) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05c046cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 05c0466c to 05d046cf has its CatchHandler @ 05c047bc */
  puVar2 = (undefined8 *)FUN_0377596c(unaff_x22,param_1,0);
LAB_05c046cc:
  uVar4 = (*(code *)*puVar2)(unaff_x22,unaff_x23,unaff_x24,puVar2[1]);
  uVar6 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_05c047f4;
        if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x38 + 0x24) + 1;
          goto FUN_05c04798;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_05c047f4;
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x38 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x38 + 0x24);
FUN_05c04798:
          lVar5 = unaff_x27 + unaff_x25 * 0x38;
          uVar13 = *(undefined8 *)(lVar5 + 0x38);
          uVar12 = *(undefined8 *)(lVar5 + 0x30);
          uVar11 = *(undefined8 *)(lVar5 + 0x48);
          uVar10 = *(undefined8 *)(lVar5 + 0x40);
          in_stack_00000008[4] = *(undefined8 *)(lVar5 + 0x50);
          in_stack_00000008[1] = uVar13;
          *in_stack_00000008 = uVar12;
          in_stack_00000008[3] = uVar11;
          in_stack_00000008[2] = uVar10;
          thunk_FUN_037aeb94(in_stack_00000008,0);
          *unaff_x28 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_05c047f8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    do {
      uVar9 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar9;
                    /* try { // try from 05c046f0 to 05d046fb has its CatchHandler @ 05c047b4 */
      unaff_x20 = uVar6 & 0xffffffff;
      uVar8 = (uint)uVar6;
      if ((int)uVar9 < 0) {
        in_stack_00000008[4] = 0;
        in_stack_00000008[1] = 0;
        *in_stack_00000008 = 0;
        in_stack_00000008[3] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_05c047f4;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_05c047f8;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar6 = unaff_x25;
    } while (*unaff_x28 != unaff_w29);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar3 = (long *)FUN_03e0c914(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_05c047f4;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_05c047f4:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_1 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x23 = *(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  unaff_x24 = in_stack_00000018;
  unaff_x26 = unaff_x25;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03775678(param_1);
  }
  goto LAB_05c04640;
}


