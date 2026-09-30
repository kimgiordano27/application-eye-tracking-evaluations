/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05c0461c
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x24;
  uint uVar11;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x05c0461c:
  uVar11 = (uint)unaff_x25;
  uVar9 = (uint)unaff_x20;
  lVar5 = *(long *)(param_1 + 8);
  uVar10 = *(undefined8 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28);
                    /* try { // try from 05c0462c to 05d04653 has its CatchHandler @ 05c047b8 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  lVar6 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05c046cc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(unaff_x22,lVar5,0);
LAB_05c046cc:
  uVar4 = (*(code *)*puVar2)(unaff_x22,uVar10,unaff_x24,puVar2[1]);
  uVar7 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
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
        if (uVar9 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar9 * 0x38 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x38 + 0x24);
FUN_05c04798:
          lVar5 = unaff_x27 + unaff_x25 * 0x38;
          uVar14 = *(undefined8 *)(lVar5 + 0x38);
          uVar13 = *(undefined8 *)(lVar5 + 0x30);
          uVar12 = *(undefined8 *)(lVar5 + 0x48);
          uVar10 = *(undefined8 *)(lVar5 + 0x40);
          in_stack_00000008[4] = *(undefined8 *)(lVar5 + 0x50);
          in_stack_00000008[1] = uVar14;
          *in_stack_00000008 = uVar13;
          in_stack_00000008[3] = uVar12;
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
          *(uint *)(unaff_x19 + 0x24) = uVar11;
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
      uVar11 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar11;
      unaff_x20 = uVar7 & 0xffffffff;
      uVar9 = (uint)uVar7;
      if ((int)uVar11 < 0) {
        in_stack_00000008[4] = 0;
        in_stack_00000008[1] = 0;
        *in_stack_00000008 = 0;
        in_stack_00000008[3] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_05c047f4;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar11) goto LAB_05c047f8;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar7 = unaff_x25;
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
  param_1 = *(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0);
  unaff_x24 = in_stack_00000018;
  unaff_x26 = unaff_x25;
  goto code_r0x05c0461c;
}


