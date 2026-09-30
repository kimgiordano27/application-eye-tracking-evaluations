/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<InputUser.UserData>
ENTRY_POINT: 01c8e2e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<InputUser_UserData>
               (undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  long lVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long *unaff_x28;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
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
  
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_037064e0(param_1,param_2,param_3);
  if (uVar10 == 0xffffffff) {
    FUN_01c8ee74();
    *(undefined4 *)(unaff_x19 + 0x5c) = 0xffffffff;
  }
  else if (uVar10 != *(uint *)(unaff_x19 + 0x5c)) {
    FUN_01c8ee74();
    *(undefined4 *)(unaff_x19 + 0x5c) = 0xffffffff;
    uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0);
    if (((uVar11 & 1) != 0) ||
       (uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), (uVar11 & 1) != 0))
    {
      *(uint *)(unaff_x19 + 0x5c) = uVar10;
      if ((*(long *)(unaff_x19 + 0x38) == 0) ||
         ((lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar13 == 0 ||
          (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)))) goto LAB_01c8ee70;
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar13 = *(long *)(lVar13 + 0x60);
      if (lVar13 == 0) goto LAB_01c8ee70;
      lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
      uVar10 = *(uint *)(lVar16 + 0x58);
      lVar24 = (long)(int)uVar10;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar13 = *(long *)(lVar13 + lVar24 * 0x50 + 0x30);
      if (lVar13 == 0) goto LAB_01c8ee70;
      uVar19 = *(uint *)(lVar16 + 0x6c);
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
      lVar16 = lVar13 + (long)(int)uVar19 * 0xc;
      puVar27 = (undefined8 *)(lVar16 + 0x20);
      uVar1 = uVar19 + 2;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      lVar25 = lVar13 + (long)(int)uVar1 * 0xc;
      puVar26 = (undefined8 *)(lVar25 + 0x20);
      uVar2 = uVar19 + 1;
      fVar32 = (float)*puVar26;
      fVar33 = (float)*puVar27;
      fVar29 = (float)((ulong)*puVar26 >> 0x20);
      fVar35 = (float)((ulong)*puVar27 >> 0x20);
      fVar31 = (fVar33 + fVar32) * 0.5;
      fVar34 = (fVar35 + fVar29) * 0.5;
      *puVar27 = CONCAT44(fVar35 - fVar34,fVar33 - fVar31);
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      lVar22 = lVar13 + (long)(int)uVar2 * 0xc;
      puVar23 = (undefined8 *)(lVar22 + 0x20);
      *puVar23 = CONCAT44((float)((ulong)*puVar23 >> 0x20) - fVar34,(float)*puVar23 - fVar31);
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *puVar26 = CONCAT44(fVar29 - fVar34,fVar32 - fVar31);
      uVar3 = uVar19 + 3;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      lVar20 = lVar13 + (long)(int)uVar3 * 0xc;
      pfVar21 = (float *)(lVar20 + 0x20);
      pfVar14 = (float *)(lVar20 + 0x28);
      *(ulong *)pfVar21 =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) - fVar34,
                    (float)*(undefined8 *)pfVar21 - fVar31);
      in_stack_00000188 = (float *)(lVar22 + 0x28);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar15 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      uVar38 = *puVar15;
      uVar37 = puVar15[1];
      uVar36 = puVar15[2];
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar15 = *(undefined4 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      uVar42 = *puVar15;
      uVar41 = puVar15[1];
      uVar40 = puVar15[2];
      uVar39 = puVar15[3];
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      FUN_03910ecc(&stack0x00000070,uVar38,uVar37,uVar36,uVar42,uVar41,uVar40,uVar39,0);
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
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
      pfVar4 = (float *)(lVar16 + 0x28);
      uVar37 = *(undefined4 *)(lVar16 + 0x24);
      fVar32 = *pfVar4;
      lVar5 = unaff_x19 + 0x60;
      uVar36 = FUN_03911ddc(*(undefined4 *)puVar27,lVar5,0);
      pfVar6 = in_stack_00000188;
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
      *(undefined4 *)puVar27 = uVar36;
      *(undefined4 *)(lVar16 + 0x24) = uVar37;
      *pfVar4 = fVar32;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      uVar37 = *(undefined4 *)(lVar22 + 0x24);
      fVar32 = *in_stack_00000188;
      uVar36 = FUN_03911ddc(*(undefined4 *)puVar23,lVar5,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      *(undefined4 *)puVar23 = uVar36;
      *(undefined4 *)(lVar22 + 0x24) = uVar37;
      *pfVar6 = fVar32;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      pfVar6 = (float *)(lVar25 + 0x28);
      uVar37 = *(undefined4 *)(lVar25 + 0x24);
      fVar32 = *pfVar6;
      uVar36 = FUN_03911ddc(*(undefined4 *)puVar26,lVar5,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *(undefined4 *)puVar26 = uVar36;
      *(undefined4 *)(lVar25 + 0x24) = uVar37;
      *pfVar6 = fVar32;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      pfVar7 = (float *)(lVar20 + 0x24);
      fVar29 = *pfVar7;
      fVar33 = *pfVar14;
      fVar32 = (float)FUN_03911ddc(*pfVar21,lVar5,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      *pfVar21 = fVar32;
      *pfVar7 = fVar29;
      *pfVar14 = fVar33;
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
      *puVar27 = CONCAT44(fVar34 + (float)((ulong)*puVar27 >> 0x20),fVar31 + (float)*puVar27);
      *pfVar4 = *pfVar4 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      fVar35 = *in_stack_00000188;
      *puVar23 = CONCAT44(fVar34 + (float)((ulong)*puVar23 >> 0x20),fVar31 + (float)*puVar23);
      *in_stack_00000188 = fVar35 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *puVar26 = CONCAT44(fVar34 + (float)((ulong)*puVar26 >> 0x20),fVar31 + (float)*puVar26);
      *pfVar6 = *pfVar6 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      param_3 = (ulong)(uint)(fVar33 + 0.0);
      param_2 = (ulong)(uint)(fVar34 + fVar29);
      *pfVar21 = fVar31 + fVar32;
      *pfVar7 = fVar34 + fVar29;
      *pfVar14 = fVar33 + 0.0;
      unaff_x28 = (long *)StringLiteral_415;
      if (((*(long *)(unaff_x19 + 0x38) == 0) ||
          (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x60), lVar16 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar16 = *(long *)(lVar16 + lVar24 * 0x50 + 0x58);
      if (lVar16 == 0) goto LAB_01c8ee70;
      if (((*(uint *)(lVar16 + 0x18) <= uVar19) ||
          (*(undefined4 *)(lVar16 + (long)(int)uVar19 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar16 + 0x18) <= uVar2)) ||
         ((*(undefined4 *)(lVar16 + (long)(int)uVar2 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar16 + 0x18) <= uVar1 ||
          (*(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar16 + 0x18) <= uVar3)))) goto LAB_01c8ee6c;
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 4 + 0x20) = 0xffc0ffff;
      if (((*(long *)(unaff_x19 + 0x38) == 0) ||
          (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x368), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x60), lVar16 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      memmove(&stack0x00000130,(void *)(lVar16 + lVar24 * 0x50 + 0x20),0x50);
      iVar8 = *(int *)(lVar13 + 0x18);
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036fa72c(&stack0x00000130,uVar19,iVar8 + -4,0);
      plVar12 = *(long **)(unaff_x19 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  puVar9 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar17 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar28 = FUN_0394fadc(0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_037066e8(uVar28,param_2,param_3,uVar17,uVar18,0);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar9);
  }
  uVar11 = FUN_0391f968(uVar17,0,0);
  uVar36 = DAT_00b55384;
  if ((uVar11 & 1) == 0) {
LAB_01c8eab4:
    if (((uVar10 != 0xffffffff) && (uVar10 != *(uint *)(unaff_x19 + 0x54))) &&
       ((uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0), (uVar11 & 1) == 0
        && (uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0),
           (uVar11 & 1) == 0)))) {
      plVar12 = *(long **)(unaff_x19 + 0x38);
      *(uint *)(unaff_x19 + 0x54) = uVar10;
      if (((plVar12 == (long *)0x0) || (plVar12[0x6d] == 0)) ||
         (lVar13 = *(long *)(plVar12[0x6d] + 0x40), lVar13 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar13 = lVar13 + (long)(int)uVar10 * 0x18;
      uVar10 = *(uint *)(lVar13 + 0x30);
      uVar11 = (ulong)uVar10;
      if (0 < (int)uVar10) {
        uVar10 = *(uint *)(lVar13 + 0x28);
        do {
          if (((plVar12 == (long *)0x0) || (lVar13 = plVar12[0x6d], lVar13 == 0)) ||
             (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + 0x60);
          if (lVar13 == 0) goto LAB_01c8ee70;
          lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
          uVar19 = *(uint *)(lVar16 + 0x58);
          if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar19 * 0x50 + 0x58);
          if (lVar13 == 0) goto LAB_01c8ee70;
          uVar19 = *(uint *)(lVar16 + 0x6c);
          if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
          puVar15 = (undefined4 *)(lVar13 + (long)(int)uVar19 * 4 + 0x20);
          uVar36 = FUN_036c0ff0(0x3f400000,*puVar15,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
          *puVar15 = uVar36;
          if (*(uint *)(lVar13 + 0x18) <= uVar19 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar19 + 1) * 4 + 0x20) = uVar36;
          if (*(uint *)(lVar13 + 0x18) <= uVar19 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar19 + 2) * 4 + 0x20) = uVar36;
          if (*(uint *)(lVar13 + 0x18) <= uVar19 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar19 + 3) * 4 + 0x20) = uVar36;
          plVar12 = *(long **)(unaff_x19 + 0x38);
          uVar11 = uVar11 - 1;
          uVar10 = uVar10 + 1;
        } while (uVar11 != 0);
        if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  else {
    uVar19 = *(uint *)(unaff_x19 + 0x54);
    if (uVar19 == 0xffffffff) goto LAB_01c8eab4;
    if ((uVar10 == 0xffffffff) || (uVar10 != uVar19)) {
      plVar12 = *(long **)(unaff_x19 + 0x38);
      if ((plVar12 == (long *)0x0) ||
         ((plVar12[0x6d] == 0 || (lVar13 = *(long *)(plVar12[0x6d] + 0x40), lVar13 == 0))))
      goto LAB_01c8ee70;
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01c8ee6c;
      lVar13 = lVar13 + (long)(int)uVar19 * 0x18;
      uVar19 = *(uint *)(lVar13 + 0x30);
      uVar11 = (ulong)uVar19;
      if (0 < (int)uVar19) {
        uVar19 = *(uint *)(lVar13 + 0x28);
        do {
          if (((plVar12 == (long *)0x0) || (lVar13 = plVar12[0x6d], lVar13 == 0)) ||
             (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + 0x60);
          if (lVar13 == 0) goto LAB_01c8ee70;
          lVar16 = lVar16 + (long)(int)uVar19 * 0x178;
          uVar1 = *(uint *)(lVar16 + 0x58);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar1 * 0x50 + 0x58);
          if (lVar13 == 0) goto LAB_01c8ee70;
          uVar1 = *(uint *)(lVar16 + 0x6c);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          puVar15 = (undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20);
          uVar37 = FUN_036c0ff0(uVar36,*puVar15,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          *puVar15 = uVar37;
          if (*(uint *)(lVar13 + 0x18) <= uVar1 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar1 + 1) * 4 + 0x20) = uVar37;
          if (*(uint *)(lVar13 + 0x18) <= uVar1 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar1 + 2) * 4 + 0x20) = uVar37;
          if (*(uint *)(lVar13 + 0x18) <= uVar1 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar13 + (long)(int)(uVar1 + 3) * 4 + 0x20) = uVar37;
          plVar12 = *(long **)(unaff_x19 + 0x38);
          uVar11 = uVar11 - 1;
          uVar19 = uVar19 + 1;
        } while (uVar11 != 0);
        if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
      *(undefined4 *)(unaff_x19 + 0x54) = 0xffffffff;
      goto LAB_01c8eab4;
    }
  }
  uVar17 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar28 = FUN_0394fadc(0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03707214(uVar28,param_2,param_3,uVar17,uVar18,0);
  if (uVar10 == 0xffffffff) {
    if (*(uint *)(unaff_x19 + 0x58) == 0xffffffff) {
      return;
    }
  }
  else if (uVar10 == *(uint *)(unaff_x19 + 0x58)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar13 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar13 == 0)) goto LAB_01c8ee70;
  FUN_0391fb70(lVar13,0,0);
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  if (uVar10 != 0xffffffff) {
    lVar13 = *(long *)(unaff_x19 + 0x38);
    *(uint *)(unaff_x19 + 0x58) = uVar10;
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0x368) == 0)) ||
       (lVar16 = *(long *)(*(long *)(lVar13 + 0x368) + 0x48), lVar16 == 0)) goto LAB_01c8ee70;
    if (*(uint *)(lVar16 + 0x18) <= uVar10) {
LAB_01c8ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar16 = lVar16 + (long)(int)uVar10 * 0x28;
    in_stack_00000120 = *(undefined8 *)(lVar16 + 0x40);
    in_stack_00000108 = *(undefined8 *)(lVar16 + 0x28);
    uVar30 = *(undefined8 *)(lVar16 + 0x20);
    in_stack_00000118 = *(undefined8 *)(lVar16 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar16 + 0x30);
    in_stack_00000100 = uVar30;
    uVar17 = FUN_036dff78(lVar13,0);
    uVar28 = FUN_0394fadc(0);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03af9680(uVar28,uVar30,uVar17,uVar18,&stack0x000000f0,0);
    uVar17 = FUN_036c1508(&stack0x00000100,0);
    uVar11 = thunk_FUN_02ee6388(uVar17,*(undefined8 *)StringLiteral_519,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = thunk_FUN_02ee6388(uVar17,*(undefined8 *)StringLiteral_520,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c8ee70;
      FUN_03928dd4(uStack00000000000000f0,uStack00000000000000f4,in_stack_000000f8,
                   *(long *)(unaff_x19 + 0x28),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar13 = FUN_0391c2b8(*(long *)(unaff_x19 + 0x28),0), lVar13 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar13,1,0);
      plVar12 = *(long **)(unaff_x19 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      lVar13 = *plVar12;
      puVar27 = (undefined8 *)StringLiteral_526;
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
      plVar12 = *(long **)(unaff_x19 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      lVar13 = *plVar12;
      puVar27 = (undefined8 *)StringLiteral_527;
    }
    (**(code **)(lVar13 + 0x558))(plVar12,*puVar27,*(undefined8 *)(lVar13 + 0x560));
  }
  return;
}


