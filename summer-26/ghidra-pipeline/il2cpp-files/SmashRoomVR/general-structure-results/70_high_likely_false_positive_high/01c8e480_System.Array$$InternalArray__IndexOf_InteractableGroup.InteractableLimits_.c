/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<InteractableGroup.InteractableLimits>
ENTRY_POINT: 01c8e480
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<InteractableGroup_InteractableLimits>
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x19;
  uint uVar16;
  uint uVar17;
  ulong unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  undefined8 uVar19;
  float *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x26;
  uint uVar20;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fStack0000000000000004;
  undefined8 uStack0000000000000040;
  float *pfStack0000000000000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  float *in_stack_00000188;
  
  pfStack0000000000000050 = unaff_x22 + 2;
  *(ulong *)unaff_x22 =
       CONCAT44((float)((ulong)param_1 >> 0x20) - (float)((ulong)param_3 >> 0x20),
                (float)param_1 - (float)param_3);
  uStack0000000000000040 = param_3;
  if (*(char *)(unaff_x21 + 599) == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    *(undefined1 *)(unaff_x21 + 599) = 1;
  }
  puVar6 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  puVar12 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar32 = *puVar12;
  uVar31 = puVar12[1];
  uVar30 = puVar12[2];
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar12 = *(undefined4 **)
             (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
             );
  uVar36 = *puVar12;
  uVar35 = puVar12[1];
  uVar34 = puVar12[2];
  uVar33 = puVar12[3];
  if (DAT_03fed258 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed258 = '\x01';
  }
  fStack0000000000000004 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) * 1.5;
  FUN_03910ecc(&stack0x00000070,uVar32,uVar31,uVar30,uVar36,uVar35,uVar34,uVar33,0);
  in_stack_000000d8 = in_stack_00000098;
  in_stack_000000d0 = in_stack_00000090;
  in_stack_000000e8 = in_stack_000000a8;
  in_stack_000000e0 = in_stack_000000a0;
  in_stack_000000b8 = in_stack_00000078;
  in_stack_000000b0 = in_stack_00000070;
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000098;
  *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000090;
  *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000a8;
  *(undefined8 *)(unaff_x19 + 0x90) = in_stack_000000a0;
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
  *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000088;
  *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000080;
  uVar8 = (uint)unaff_x20;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01c8ee6c;
  pfVar1 = (float *)(unaff_x29 + 1);
  uVar31 = *(undefined4 *)((long)unaff_x29 + 4);
  fVar24 = *pfVar1;
  lVar13 = unaff_x19 + 0x60;
  uVar30 = FUN_03911ddc(*(undefined4 *)unaff_x29,lVar13,0);
  pfVar2 = in_stack_00000188;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01c8ee6c;
  *(undefined4 *)unaff_x29 = uVar30;
  *(undefined4 *)((long)unaff_x29 + 4) = uVar31;
  *pfVar1 = fVar24;
  uVar20 = (uint)in_stack_00000068;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01c8ee6c;
  uVar31 = *(undefined4 *)((long)unaff_x24 + 4);
  fVar24 = *in_stack_00000188;
  uVar30 = FUN_03911ddc(*(undefined4 *)unaff_x24,lVar13,0);
  if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01c8ee6c;
  *(undefined4 *)unaff_x24 = uVar30;
  *(undefined4 *)((long)unaff_x24 + 4) = uVar31;
  *pfVar2 = fVar24;
  uVar16 = (uint)in_stack_00000060;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar16) goto LAB_01c8ee6c;
  pfVar2 = (float *)(unaff_x28 + 1);
  uVar31 = *(undefined4 *)((long)unaff_x28 + 4);
  fVar24 = *pfVar2;
  uVar30 = FUN_03911ddc(*(undefined4 *)unaff_x28,lVar13,0);
  pfVar7 = pfStack0000000000000050;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar16) goto LAB_01c8ee6c;
  *(undefined4 *)unaff_x28 = uVar30;
  *(undefined4 *)((long)unaff_x28 + 4) = uVar31;
  *pfVar2 = fVar24;
  uVar17 = (uint)in_stack_00000058;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_01c8ee6c;
  pfVar3 = unaff_x22 + 1;
  fVar22 = *pfVar3;
  fVar25 = *pfStack0000000000000050;
  fVar24 = (float)FUN_03911ddc(*unaff_x22,lVar13,0);
  if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_01c8ee6c;
  *unaff_x22 = fVar24;
  *pfVar3 = fVar22;
  *pfVar7 = fVar25;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01c8ee6c;
  fVar28 = (float)uStack0000000000000040;
  fVar29 = (float)((ulong)uStack0000000000000040 >> 0x20);
  *unaff_x29 = CONCAT44(fVar29 + (float)((ulong)*unaff_x29 >> 0x20),fVar28 + (float)*unaff_x29);
  *pfVar1 = *pfVar1 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01c8ee6c;
  fVar27 = *in_stack_00000188;
  *unaff_x24 = CONCAT44(fVar29 + (float)((ulong)*unaff_x24 >> 0x20),fVar28 + (float)*unaff_x24);
  *in_stack_00000188 = fVar27 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar16) goto LAB_01c8ee6c;
  *unaff_x28 = CONCAT44(fVar29 + (float)((ulong)*unaff_x28 >> 0x20),fVar28 + (float)*unaff_x28);
  *pfVar2 = *pfVar2 + 0.0;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_01c8ee6c;
  uVar26 = (ulong)(uint)(fVar25 + 0.0);
  uVar11 = (ulong)(uint)(fVar29 + fVar22);
  *unaff_x22 = fVar28 + fVar24;
  *pfVar3 = fVar29 + fVar22;
  *pfVar7 = fVar25 + 0.0;
  puVar6 = StringLiteral_415;
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar13 == 0)) ||
     (lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x26) goto LAB_01c8ee6c;
  lVar13 = *(long *)(lVar13 + unaff_x26 * 0x50 + 0x58);
  if (lVar13 == 0) goto LAB_01c8ee70;
  if (((*(uint *)(lVar13 + 0x18) <= uVar8) ||
      (*(undefined4 *)(lVar13 + unaff_x20 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar13 + 0x18) <= uVar20)) ||
     ((*(undefined4 *)(lVar13 + in_stack_00000068 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar13 + 0x18) <= uVar16 ||
      (*(undefined4 *)(lVar13 + in_stack_00000060 * 4 + 0x20) = 0xffc0ffff,
      *(uint *)(lVar13 + 0x18) <= uVar17)))) goto LAB_01c8ee6c;
  *(undefined4 *)(lVar13 + in_stack_00000058 * 4 + 0x20) = 0xffc0ffff;
  if (((*(long *)(unaff_x19 + 0x38) == 0) ||
      (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar13 == 0)) ||
     (lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0)) goto LAB_01c8ee70;
  if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x26) goto LAB_01c8ee6c;
  memmove(&stack0x00000130,(void *)(lVar13 + unaff_x26 * 0x50 + 0x20),0x50);
  iVar4 = *(int *)(unaff_x23 + 0x18);
  if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036fa72c(&stack0x00000130,unaff_x20 & 0xffffffff,iVar4 + -4,0);
  plVar9 = *(long **)(unaff_x19 + 0x38);
  if (plVar9 == (long *)0x0) goto LAB_01c8ee70;
  (**(code **)(*plVar9 + 0x7f8))(plVar9,0xff,*(undefined8 *)(*plVar9 + 0x800));
  puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar21 = FUN_0394fadc(0);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_037066e8(uVar21,uVar11,uVar26,uVar18,uVar19,0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar5);
  }
  uVar10 = FUN_0391f968(uVar18,0,0);
  uVar30 = DAT_00b55384;
  if ((uVar10 & 1) == 0) {
LAB_01c8eab4:
    if (((uVar8 != 0xffffffff) && (uVar8 != *(uint *)(unaff_x19 + 0x54))) &&
       ((uVar10 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0), (uVar10 & 1) == 0
        && (uVar10 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0),
           (uVar10 & 1) == 0)))) {
      plVar9 = *(long **)(unaff_x19 + 0x38);
      *(uint *)(unaff_x19 + 0x54) = uVar8;
      if (((plVar9 == (long *)0x0) || (plVar9[0x6d] == 0)) ||
         (lVar13 = *(long *)(plVar9[0x6d] + 0x40), lVar13 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01c8ee6c;
      lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
      uVar8 = *(uint *)(lVar13 + 0x30);
      uVar10 = (ulong)uVar8;
      if (0 < (int)uVar8) {
        uVar8 = *(uint *)(lVar13 + 0x28);
        do {
          if (((plVar9 == (long *)0x0) || (lVar13 = plVar9[0x6d], lVar13 == 0)) ||
             (lVar14 = *(long *)(lVar13 + 0x38), lVar14 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + 0x60);
          if (lVar13 == 0) goto LAB_01c8ee70;
          lVar14 = lVar14 + (long)(int)uVar8 * 0x178;
          uVar20 = *(uint *)(lVar14 + 0x58);
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar20 * 0x50 + 0x58);
          if (lVar13 == 0) goto LAB_01c8ee70;
          uVar20 = *(uint *)(lVar14 + 0x6c);
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01c8ee6c;
          puVar12 = (undefined4 *)(lVar13 + (long)(int)uVar20 * 4 + 0x20);
          uVar30 = FUN_036c0ff0(0x3f400000,*puVar12,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01c8ee6c;
          *puVar12 = uVar30;
          if (*(uint *)(lVar13 + 0x18) <= uVar20 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar20 + 1) * 4 + 0x20) = uVar30;
          if (*(uint *)(lVar13 + 0x18) <= uVar20 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar20 + 2) * 4 + 0x20) = uVar30;
          if (*(uint *)(lVar13 + 0x18) <= uVar20 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar20 + 3) * 4 + 0x20) = uVar30;
          plVar9 = *(long **)(unaff_x19 + 0x38);
          uVar10 = uVar10 - 1;
          uVar8 = uVar8 + 1;
        } while (uVar10 != 0);
        if (plVar9 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar9 + 0x7f8))(plVar9,0xff,*(undefined8 *)(*plVar9 + 0x800));
    }
  }
  else {
    uVar20 = *(uint *)(unaff_x19 + 0x54);
    if (uVar20 == 0xffffffff) goto LAB_01c8eab4;
    if ((uVar8 == 0xffffffff) || (uVar8 != uVar20)) {
      plVar9 = *(long **)(unaff_x19 + 0x38);
      if ((plVar9 == (long *)0x0) ||
         ((plVar9[0x6d] == 0 || (lVar13 = *(long *)(plVar9[0x6d] + 0x40), lVar13 == 0))))
      goto LAB_01c8ee70;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01c8ee6c;
      lVar13 = lVar13 + (long)(int)uVar20 * 0x18;
      uVar20 = *(uint *)(lVar13 + 0x30);
      uVar10 = (ulong)uVar20;
      if (0 < (int)uVar20) {
        uVar20 = *(uint *)(lVar13 + 0x28);
        do {
          if (((plVar9 == (long *)0x0) || (lVar13 = plVar9[0x6d], lVar13 == 0)) ||
             (lVar14 = *(long *)(lVar13 + 0x38), lVar14 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + 0x60);
          if (lVar13 == 0) goto LAB_01c8ee70;
          lVar14 = lVar14 + (long)(int)uVar20 * 0x178;
          uVar16 = *(uint *)(lVar14 + 0x58);
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar16 * 0x50 + 0x58);
          if (lVar13 == 0) goto LAB_01c8ee70;
          uVar16 = *(uint *)(lVar14 + 0x6c);
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01c8ee6c;
          puVar12 = (undefined4 *)(lVar13 + (long)(int)uVar16 * 4 + 0x20);
          uVar31 = FUN_036c0ff0(uVar30,*puVar12,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01c8ee6c;
          *puVar12 = uVar31;
          if (*(uint *)(lVar13 + 0x18) <= uVar16 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar16 + 1) * 4 + 0x20) = uVar31;
          if (*(uint *)(lVar13 + 0x18) <= uVar16 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar16 + 2) * 4 + 0x20) = uVar31;
          if (*(uint *)(lVar13 + 0x18) <= uVar16 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar16 + 3) * 4 + 0x20) = uVar31;
          plVar9 = *(long **)(unaff_x19 + 0x38);
          uVar10 = uVar10 - 1;
          uVar20 = uVar20 + 1;
        } while (uVar10 != 0);
        if (plVar9 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar9 + 0x7f8))(plVar9,0xff,*(undefined8 *)(*plVar9 + 0x800));
      *(undefined4 *)(unaff_x19 + 0x54) = 0xffffffff;
      goto LAB_01c8eab4;
    }
  }
  uVar18 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar21 = FUN_0394fadc(0);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03707214(uVar21,uVar11,uVar26,uVar18,uVar19,0);
  if (uVar8 == 0xffffffff) {
    if (*(uint *)(unaff_x19 + 0x58) == 0xffffffff) {
      return;
    }
  }
  else if (uVar8 == *(uint *)(unaff_x19 + 0x58)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar13 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar13 == 0)) goto LAB_01c8ee70;
  FUN_0391fb70(lVar13,0,0);
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  if (uVar8 != 0xffffffff) {
    lVar13 = *(long *)(unaff_x19 + 0x38);
    *(uint *)(unaff_x19 + 0x58) = uVar8;
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0x368) == 0)) ||
       (lVar14 = *(long *)(*(long *)(lVar13 + 0x368) + 0x48), lVar14 == 0)) goto LAB_01c8ee70;
    if (*(uint *)(lVar14 + 0x18) <= uVar8) {
LAB_01c8ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar14 = lVar14 + (long)(int)uVar8 * 0x28;
    in_stack_00000120 = *(undefined8 *)(lVar14 + 0x40);
    in_stack_00000108 = *(undefined8 *)(lVar14 + 0x28);
    uVar23 = *(undefined8 *)(lVar14 + 0x20);
    in_stack_00000118 = *(undefined8 *)(lVar14 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar14 + 0x30);
    in_stack_00000100 = uVar23;
    uVar18 = FUN_036dff78(lVar13,0);
    uVar21 = FUN_0394fadc(0);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03af9680(uVar21,uVar23,uVar18,uVar19,&stack0x000000f0,0);
    uVar18 = FUN_036c1508(&stack0x00000100,0);
    uVar11 = thunk_FUN_02ee6388(uVar18,*(undefined8 *)StringLiteral_519,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = thunk_FUN_02ee6388(uVar18,*(undefined8 *)StringLiteral_520,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c8ee70;
      FUN_03928dd4(uStack00000000000000f0,uStack00000000000000f4,in_stack_000000f8,
                   *(long *)(unaff_x19 + 0x28),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar13 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar13 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar13,1,0);
      plVar9 = *(long **)(unaff_x19 + 0x30);
      if (plVar9 == (long *)0x0) goto LAB_01c8ee70;
      lVar13 = *plVar9;
      puVar15 = (undefined8 *)StringLiteral_526;
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
         (lVar13 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar13 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar13,1,0);
      plVar9 = *(long **)(unaff_x19 + 0x30);
      if (plVar9 == (long *)0x0) goto LAB_01c8ee70;
      lVar13 = *plVar9;
      puVar15 = (undefined8 *)StringLiteral_527;
    }
    (**(code **)(lVar13 + 0x558))(plVar9,*puVar15,*(undefined8 *)(lVar13 + 0x560));
  }
  return;
}


