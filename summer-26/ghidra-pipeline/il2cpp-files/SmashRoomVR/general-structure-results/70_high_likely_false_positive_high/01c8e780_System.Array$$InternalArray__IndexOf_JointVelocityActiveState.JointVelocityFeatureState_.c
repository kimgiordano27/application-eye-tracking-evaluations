/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<JointVelocityActiveState.JointVelocityFeatureState>
ENTRY_POINT: 01c8e780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<JointVelocityActiveState_JointVelocityFeatureState>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint in_w12;
  undefined4 in_register_00004064;
  uint in_w13;
  undefined4 in_register_0000406c;
  uint in_w14;
  undefined4 in_register_00004074;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long unaff_x23;
  undefined4 *puVar15;
  long unaff_x28;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long in_stack_00000028;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
  plVar16 = *(long **)(unaff_x28 + 0x768);
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000028) goto LAB_01c8ee6c;
  lVar9 = *(long *)(lVar9 + in_stack_00000028 * 0x50 + 0x58);
  if (lVar9 == 0) goto LAB_01c8ee70;
  if (((*(uint *)(lVar9 + 0x18) <= (uint)unaff_x20) ||
      (*(undefined4 *)(lVar9 + unaff_x20 * 4 + 0x20) = 0xffc0ffff, *(uint *)(lVar9 + 0x18) <= in_w13
      )) || ((*(undefined4 *)(lVar9 + CONCAT44(in_register_0000406c,in_w13) * 4 + 0x20) = 0xffc0ffff
             , *(uint *)(lVar9 + 0x18) <= in_w12 ||
             (*(undefined4 *)(lVar9 + CONCAT44(in_register_00004064,in_w12) * 4 + 0x20) = 0xffc0ffff
             , *(uint *)(lVar9 + 0x18) <= in_w14)))) goto LAB_01c8ee6c;
  *(undefined4 *)(lVar9 + CONCAT44(in_register_00004074,in_w14) * 4 + 0x20) = 0xffc0ffff;
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000028) goto LAB_01c8ee6c;
  memmove(&stack0x00000130,(void *)(lVar9 + in_stack_00000028 * 0x50 + 0x20),0x50);
  iVar1 = *(int *)(unaff_x23 + 0x18);
  if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036fa72c(&stack0x00000130,unaff_x20 & 0xffffffff,iVar1 + -4,0);
  plVar7 = *(long **)(unaff_x19 + 0x38);
  if (plVar7 == (long *)0x0) goto LAB_01c8ee70;
  (**(code **)(*plVar7 + 0x7f8))(plVar7,0xff,*(undefined8 *)(*plVar7 + 0x800));
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar17 = FUN_0394fadc(0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_037066e8(uVar17,param_2,param_3,uVar12,uVar13,0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar8 = FUN_0391f968(uVar12,0,0);
  uVar6 = DAT_00b55384;
  if ((uVar8 & 1) == 0) {
LAB_01c8eab4:
    if (((uVar4 != 0xffffffff) && (uVar4 != *(uint *)(unaff_x19 + 0x54))) &&
       ((uVar8 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0), (uVar8 & 1) == 0 &&
        (uVar8 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), (uVar8 & 1) == 0))))
    {
      plVar7 = *(long **)(unaff_x19 + 0x38);
      *(uint *)(unaff_x19 + 0x54) = uVar4;
      if (((plVar7 == (long *)0x0) || (plVar7[0x6d] == 0)) ||
         (lVar9 = *(long *)(plVar7[0x6d] + 0x40), lVar9 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_01c8ee6c;
      lVar9 = lVar9 + (long)(int)uVar4 * 0x18;
      uVar4 = *(uint *)(lVar9 + 0x30);
      uVar8 = (ulong)uVar4;
      if (0 < (int)uVar4) {
        uVar4 = *(uint *)(lVar9 + 0x28);
        do {
          if (((plVar7 == (long *)0x0) || (lVar9 = plVar7[0x6d], lVar9 == 0)) ||
             (lVar10 = *(long *)(lVar9 + 0x38), lVar10 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_01c8ee6c;
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 == 0) goto LAB_01c8ee70;
          lVar10 = lVar10 + (long)(int)uVar4 * 0x178;
          uVar14 = *(uint *)(lVar10 + 0x58);
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          lVar9 = *(long *)(lVar9 + (long)(int)uVar14 * 0x50 + 0x58);
          if (lVar9 == 0) goto LAB_01c8ee70;
          uVar14 = *(uint *)(lVar10 + 0x6c);
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          puVar15 = (undefined4 *)(lVar9 + (long)(int)uVar14 * 4 + 0x20);
          uVar6 = FUN_036c0ff0(0x3f400000,*puVar15,0);
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          *puVar15 = uVar6;
          if (*(uint *)(lVar9 + 0x18) <= uVar14 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar14 + 1) * 4 + 0x20) = uVar6;
          if (*(uint *)(lVar9 + 0x18) <= uVar14 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar14 + 2) * 4 + 0x20) = uVar6;
          if (*(uint *)(lVar9 + 0x18) <= uVar14 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar14 + 3) * 4 + 0x20) = uVar6;
          plVar7 = *(long **)(unaff_x19 + 0x38);
          uVar8 = uVar8 - 1;
          uVar4 = uVar4 + 1;
        } while (uVar8 != 0);
        if (plVar7 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar7 + 0x7f8))(plVar7,0xff,*(undefined8 *)(*plVar7 + 0x800));
    }
  }
  else {
    uVar14 = *(uint *)(unaff_x19 + 0x54);
    if (uVar14 == 0xffffffff) goto LAB_01c8eab4;
    if ((uVar4 == 0xffffffff) || (uVar4 != uVar14)) {
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if ((plVar7 == (long *)0x0) ||
         ((plVar7[0x6d] == 0 || (lVar9 = *(long *)(plVar7[0x6d] + 0x40), lVar9 == 0))))
      goto LAB_01c8ee70;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01c8ee6c;
      lVar9 = lVar9 + (long)(int)uVar14 * 0x18;
      uVar14 = *(uint *)(lVar9 + 0x30);
      uVar8 = (ulong)uVar14;
      if (0 < (int)uVar14) {
        uVar14 = *(uint *)(lVar9 + 0x28);
        do {
          if (((plVar7 == (long *)0x0) || (lVar9 = plVar7[0x6d], lVar9 == 0)) ||
             (lVar10 = *(long *)(lVar9 + 0x38), lVar10 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 == 0) goto LAB_01c8ee70;
          lVar10 = lVar10 + (long)(int)uVar14 * 0x178;
          uVar2 = *(uint *)(lVar10 + 0x58);
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01c8ee6c;
          lVar9 = *(long *)(lVar9 + (long)(int)uVar2 * 0x50 + 0x58);
          if (lVar9 == 0) goto LAB_01c8ee70;
          uVar2 = *(uint *)(lVar10 + 0x6c);
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01c8ee6c;
          puVar15 = (undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20);
          uVar5 = FUN_036c0ff0(uVar6,*puVar15,0);
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01c8ee6c;
          *puVar15 = uVar5;
          if (*(uint *)(lVar9 + 0x18) <= uVar2 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar2 + 1) * 4 + 0x20) = uVar5;
          if (*(uint *)(lVar9 + 0x18) <= uVar2 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar2 + 2) * 4 + 0x20) = uVar5;
          if (*(uint *)(lVar9 + 0x18) <= uVar2 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar9 + (long)(int)(uVar2 + 3) * 4 + 0x20) = uVar5;
          plVar7 = *(long **)(unaff_x19 + 0x38);
          uVar8 = uVar8 - 1;
          uVar14 = uVar14 + 1;
        } while (uVar8 != 0);
        if (plVar7 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar7 + 0x7f8))(plVar7,0xff,*(undefined8 *)(*plVar7 + 0x800));
      *(undefined4 *)(unaff_x19 + 0x54) = 0xffffffff;
      goto LAB_01c8eab4;
    }
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar17 = FUN_0394fadc(0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03707214(uVar17,param_2,param_3,uVar12,uVar13,0);
  if (uVar4 == 0xffffffff) {
    if (*(uint *)(unaff_x19 + 0x58) == 0xffffffff) {
      return;
    }
  }
  else if (uVar4 == *(uint *)(unaff_x19 + 0x58)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar9 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0)) goto LAB_01c8ee70;
  FUN_0391fb70(lVar9,0,0);
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  if (uVar4 != 0xffffffff) {
    lVar9 = *(long *)(unaff_x19 + 0x38);
    *(uint *)(unaff_x19 + 0x58) = uVar4;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x368) == 0)) ||
       (lVar10 = *(long *)(*(long *)(lVar9 + 0x368) + 0x48), lVar10 == 0)) goto LAB_01c8ee70;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_01c8ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar10 = lVar10 + (long)(int)uVar4 * 0x28;
    in_stack_00000120 = *(undefined8 *)(lVar10 + 0x40);
    in_stack_00000108 = *(undefined8 *)(lVar10 + 0x28);
    uVar18 = *(undefined8 *)(lVar10 + 0x20);
    in_stack_00000118 = *(undefined8 *)(lVar10 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar10 + 0x30);
    in_stack_00000100 = uVar18;
    uVar12 = FUN_036dff78(lVar9,0);
    uVar17 = FUN_0394fadc(0);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03af9680(uVar17,uVar18,uVar12,uVar13,&stack0x000000f0,0);
    uVar12 = FUN_036c1508(&stack0x00000100,0);
    uVar8 = thunk_FUN_02ee6388(uVar12,*(undefined8 *)StringLiteral_519,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_02ee6388(uVar12,*(undefined8 *)StringLiteral_520,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c8ee70;
      FUN_03928dd4(uStack00000000000000f0,uStack00000000000000f4,in_stack_000000f8,
                   *(long *)(unaff_x19 + 0x28),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar9 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar9,1,0);
      plVar16 = *(long **)(unaff_x19 + 0x30);
      if (plVar16 == (long *)0x0) goto LAB_01c8ee70;
      lVar9 = *plVar16;
      puVar11 = (undefined8 *)StringLiteral_526;
    }
    else {
      if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_01c8ee70:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03928dd4(uStack00000000000000f0,uStack00000000000000f4,in_stack_000000f8,
                   *(long *)(unaff_x19 + 0x28),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar9 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar9,1,0);
      plVar16 = *(long **)(unaff_x19 + 0x30);
      if (plVar16 == (long *)0x0) goto LAB_01c8ee70;
      lVar9 = *plVar16;
      puVar11 = (undefined8 *)StringLiteral_527;
    }
    (**(code **)(lVar9 + 0x558))(plVar16,*puVar11,*(undefined8 *)(lVar9 + 0x560));
  }
  return;
}


