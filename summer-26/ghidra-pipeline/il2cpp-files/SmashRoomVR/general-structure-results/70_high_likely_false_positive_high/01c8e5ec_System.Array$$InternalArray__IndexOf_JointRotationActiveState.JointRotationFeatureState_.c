/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<JointRotationActiveState.JointRotationFeatureState>
ENTRY_POINT: 01c8e5ec
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


void System_Array__InternalArray__IndexOf<JointRotationActiveState_JointRotationFeatureState>(void)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x19;
  uint uVar14;
  ulong unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  float *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined4 *unaff_x25;
  uint unaff_w27;
  undefined4 *puVar17;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long in_stack_00000028;
  float *in_stack_00000030;
  undefined8 in_stack_00000040;
  float *in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  float *in_stack_00000188;
  
  uVar20 = *(undefined4 *)((long)unaff_x24 + 4);
  uVar23 = *unaff_x25;
  uVar18 = FUN_03911ddc(*(undefined4 *)unaff_x24);
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_w27) goto LAB_01c8ee6c;
  *(undefined4 *)unaff_x24 = uVar18;
  *(undefined4 *)((long)unaff_x24 + 4) = uVar20;
  *unaff_x25 = uVar23;
  uVar7 = (uint)in_stack_00000060;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_01c8ee6c;
  pfVar1 = (float *)(unaff_x28 + 1);
  uVar20 = *(undefined4 *)((long)unaff_x28 + 4);
  fVar24 = *pfVar1;
  uVar18 = FUN_03911ddc(*(undefined4 *)unaff_x28);
  if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_01c8ee6c;
  *(undefined4 *)unaff_x28 = uVar18;
  *(undefined4 *)((long)unaff_x28 + 4) = uVar20;
  *pfVar1 = fVar24;
  uVar14 = (uint)in_stack_00000058;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_01c8ee6c;
  pfVar2 = unaff_x22 + 1;
  fVar21 = *pfVar2;
  fVar25 = *in_stack_00000050;
  fVar24 = (float)FUN_03911ddc(*unaff_x22);
  if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_01c8ee6c;
  *unaff_x22 = fVar24;
  *pfVar2 = fVar21;
  *in_stack_00000050 = fVar25;
  if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x20) goto LAB_01c8ee6c;
  fVar27 = *in_stack_00000030;
  fVar28 = (float)in_stack_00000040;
  fVar29 = (float)((ulong)in_stack_00000040 >> 0x20);
  *unaff_x29 = CONCAT44(fVar29 + (float)((ulong)*unaff_x29 >> 0x20),fVar28 + (float)*unaff_x29);
  *in_stack_00000030 = fVar27 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= (uint)in_stack_00000068) goto LAB_01c8ee6c;
  fVar27 = *in_stack_00000188;
  *unaff_x24 = CONCAT44(fVar29 + (float)((ulong)*unaff_x24 >> 0x20),fVar28 + (float)*unaff_x24);
  *in_stack_00000188 = fVar27 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_01c8ee6c;
  *unaff_x28 = CONCAT44(fVar29 + (float)((ulong)*unaff_x28 >> 0x20),fVar28 + (float)*unaff_x28);
  *pfVar1 = *pfVar1 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_01c8ee6c;
  uVar26 = (ulong)(uint)(fVar25 + 0.0);
  uVar10 = (ulong)(uint)(fVar29 + fVar21);
  *unaff_x22 = fVar28 + fVar24;
  *pfVar2 = fVar29 + fVar21;
  *in_stack_00000050 = fVar25 + 0.0;
  puVar6 = StringLiteral_415;
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar11 + 0x18) <= (uint)in_stack_00000028) goto LAB_01c8ee6c;
  lVar11 = *(long *)(lVar11 + in_stack_00000028 * 0x50 + 0x58);
  if (lVar11 == 0) goto LAB_01c8ee70;
  if (((*(uint *)(lVar11 + 0x18) <= (uint)unaff_x20) ||
      (*(undefined4 *)(lVar11 + unaff_x20 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar11 + 0x18) <= (uint)in_stack_00000068)) ||
     ((*(undefined4 *)(lVar11 + in_stack_00000068 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar11 + 0x18) <= uVar7 ||
      (*(undefined4 *)(lVar11 + in_stack_00000060 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar11 + 0x18) <= uVar14)))) goto LAB_01c8ee6c;
  *(undefined4 *)(lVar11 + in_stack_00000058 * 4 + 0x20) = 0xffc0ffff;
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar11 + 0x18) <= (uint)in_stack_00000028) goto LAB_01c8ee6c;
  memmove(&stack0x00000130,(void *)(lVar11 + in_stack_00000028 * 0x50 + 0x20),0x50);
  iVar3 = *(int *)(unaff_x23 + 0x18);
  if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036fa72c(&stack0x00000130,unaff_x20 & 0xffffffff,iVar3 + -4,0);
  plVar8 = *(long **)(unaff_x19 + 0x38);
  if (plVar8 == (long *)0x0) goto LAB_01c8ee70;
  (**(code **)(*plVar8 + 0x7f8))(plVar8,0xff,*(undefined8 *)(*plVar8 + 0x800));
  puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar15 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar19 = FUN_0394fadc(0);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_037066e8(uVar19,uVar10,uVar26,uVar15,uVar16,0);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar5);
  }
  uVar9 = FUN_0391f968(uVar15,0,0);
  uVar18 = DAT_00b55384;
  if ((uVar9 & 1) == 0) {
LAB_01c8eab4:
    if (((uVar7 != 0xffffffff) && (uVar7 != *(uint *)(unaff_x19 + 0x54))) &&
       ((uVar9 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0), (uVar9 & 1) == 0 &&
        (uVar9 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), (uVar9 & 1) == 0))))
    {
      plVar8 = *(long **)(unaff_x19 + 0x38);
      *(uint *)(unaff_x19 + 0x54) = uVar7;
      if (((plVar8 == (long *)0x0) || (plVar8[0x6d] == 0)) ||
         (lVar11 = *(long *)(plVar8[0x6d] + 0x40), lVar11 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01c8ee6c;
      lVar11 = lVar11 + (long)(int)uVar7 * 0x18;
      uVar7 = *(uint *)(lVar11 + 0x30);
      uVar9 = (ulong)uVar7;
      if (0 < (int)uVar7) {
        uVar7 = *(uint *)(lVar11 + 0x28);
        do {
          if (((plVar8 == (long *)0x0) || (lVar11 = plVar8[0x6d], lVar11 == 0)) ||
             (lVar12 = *(long *)(lVar11 + 0x38), lVar12 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_01c8ee6c;
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 == 0) goto LAB_01c8ee70;
          lVar12 = lVar12 + (long)(int)uVar7 * 0x178;
          uVar14 = *(uint *)(lVar12 + 0x58);
          if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          lVar11 = *(long *)(lVar11 + (long)(int)uVar14 * 0x50 + 0x58);
          if (lVar11 == 0) goto LAB_01c8ee70;
          uVar14 = *(uint *)(lVar12 + 0x6c);
          if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          puVar17 = (undefined4 *)(lVar11 + (long)(int)uVar14 * 4 + 0x20);
          uVar18 = FUN_036c0ff0(0x3f400000,*puVar17,0);
          if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          *puVar17 = uVar18;
          if (*(uint *)(lVar11 + 0x18) <= uVar14 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar14 + 1) * 4 + 0x20) = uVar18;
          if (*(uint *)(lVar11 + 0x18) <= uVar14 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar14 + 2) * 4 + 0x20) = uVar18;
          if (*(uint *)(lVar11 + 0x18) <= uVar14 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar14 + 3) * 4 + 0x20) = uVar18;
          plVar8 = *(long **)(unaff_x19 + 0x38);
          uVar9 = uVar9 - 1;
          uVar7 = uVar7 + 1;
        } while (uVar9 != 0);
        if (plVar8 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar8 + 0x7f8))(plVar8,0xff,*(undefined8 *)(*plVar8 + 0x800));
    }
  }
  else {
    uVar14 = *(uint *)(unaff_x19 + 0x54);
    if (uVar14 == 0xffffffff) goto LAB_01c8eab4;
    if ((uVar7 == 0xffffffff) || (uVar7 != uVar14)) {
      plVar8 = *(long **)(unaff_x19 + 0x38);
      if ((plVar8 == (long *)0x0) ||
         ((plVar8[0x6d] == 0 || (lVar11 = *(long *)(plVar8[0x6d] + 0x40), lVar11 == 0))))
      goto LAB_01c8ee70;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01c8ee6c;
      lVar11 = lVar11 + (long)(int)uVar14 * 0x18;
      uVar14 = *(uint *)(lVar11 + 0x30);
      uVar9 = (ulong)uVar14;
      if (0 < (int)uVar14) {
        uVar14 = *(uint *)(lVar11 + 0x28);
        do {
          if (((plVar8 == (long *)0x0) || (lVar11 = plVar8[0x6d], lVar11 == 0)) ||
             (lVar12 = *(long *)(lVar11 + 0x38), lVar12 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_01c8ee6c;
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 == 0) goto LAB_01c8ee70;
          lVar12 = lVar12 + (long)(int)uVar14 * 0x178;
          uVar4 = *(uint *)(lVar12 + 0x58);
          if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_01c8ee6c;
          lVar11 = *(long *)(lVar11 + (long)(int)uVar4 * 0x50 + 0x58);
          if (lVar11 == 0) goto LAB_01c8ee70;
          uVar4 = *(uint *)(lVar12 + 0x6c);
          if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_01c8ee6c;
          puVar17 = (undefined4 *)(lVar11 + (long)(int)uVar4 * 4 + 0x20);
          uVar20 = FUN_036c0ff0(uVar18,*puVar17,0);
          if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_01c8ee6c;
          *puVar17 = uVar20;
          if (*(uint *)(lVar11 + 0x18) <= uVar4 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar4 + 1) * 4 + 0x20) = uVar20;
          if (*(uint *)(lVar11 + 0x18) <= uVar4 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar4 + 2) * 4 + 0x20) = uVar20;
          if (*(uint *)(lVar11 + 0x18) <= uVar4 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar11 + (long)(int)(uVar4 + 3) * 4 + 0x20) = uVar20;
          plVar8 = *(long **)(unaff_x19 + 0x38);
          uVar9 = uVar9 - 1;
          uVar14 = uVar14 + 1;
        } while (uVar9 != 0);
        if (plVar8 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar8 + 0x7f8))(plVar8,0xff,*(undefined8 *)(*plVar8 + 0x800));
      *(undefined4 *)(unaff_x19 + 0x54) = 0xffffffff;
      goto LAB_01c8eab4;
    }
  }
  uVar15 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar19 = FUN_0394fadc(0);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03707214(uVar19,uVar10,uVar26,uVar15,uVar16,0);
  if (uVar7 == 0xffffffff) {
    if (*(uint *)(unaff_x19 + 0x58) == 0xffffffff) {
      return;
    }
  }
  else if (uVar7 == *(uint *)(unaff_x19 + 0x58)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar11 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar11 == 0)) goto LAB_01c8ee70;
  FUN_0391fb70(lVar11,0,0);
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  if (uVar7 != 0xffffffff) {
    lVar11 = *(long *)(unaff_x19 + 0x38);
    *(uint *)(unaff_x19 + 0x58) = uVar7;
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x368) == 0)) ||
       (lVar12 = *(long *)(*(long *)(lVar11 + 0x368) + 0x48), lVar12 == 0)) goto LAB_01c8ee70;
    if (*(uint *)(lVar12 + 0x18) <= uVar7) {
LAB_01c8ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar12 = lVar12 + (long)(int)uVar7 * 0x28;
    in_stack_00000120 = *(undefined8 *)(lVar12 + 0x40);
    in_stack_00000108 = *(undefined8 *)(lVar12 + 0x28);
    uVar22 = *(undefined8 *)(lVar12 + 0x20);
    in_stack_00000118 = *(undefined8 *)(lVar12 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar12 + 0x30);
    in_stack_00000100 = uVar22;
    uVar15 = FUN_036dff78(lVar11,0);
    uVar19 = FUN_0394fadc(0);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03af9680(uVar19,uVar22,uVar15,uVar16,&stack0x000000f0,0);
    uVar15 = FUN_036c1508(&stack0x00000100,0);
    uVar10 = thunk_FUN_02ee6388(uVar15,*(undefined8 *)StringLiteral_519,0);
    if ((uVar10 & 1) == 0) {
      uVar10 = thunk_FUN_02ee6388(uVar15,*(undefined8 *)StringLiteral_520,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c8ee70;
      FUN_03928dd4(uStack00000000000000f0,uStack00000000000000f4,in_stack_000000f8,
                   *(long *)(unaff_x19 + 0x28),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar11 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar11 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar11,1,0);
      plVar8 = *(long **)(unaff_x19 + 0x30);
      if (plVar8 == (long *)0x0) goto LAB_01c8ee70;
      lVar11 = *plVar8;
      puVar13 = (undefined8 *)StringLiteral_526;
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
         (lVar11 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar11 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar11,1,0);
      plVar8 = *(long **)(unaff_x19 + 0x30);
      if (plVar8 == (long *)0x0) goto LAB_01c8ee70;
      lVar11 = *plVar8;
      puVar13 = (undefined8 *)StringLiteral_527;
    }
    (**(code **)(lVar11 + 0x558))(plVar8,*puVar13,*(undefined8 *)(lVar11 + 0x560));
  }
  return;
}


