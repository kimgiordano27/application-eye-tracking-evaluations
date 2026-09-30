/*
FUNCTION_NAME: System.ComponentModel.ReflectPropertyDescriptor$$get_ShouldSerializeMethodValue
ENTRY_POINT: 04ca71a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_ComponentModel_ReflectPropertyDescriptor__get_ShouldSerializeMethodValue
               (undefined1 param_1 [16],float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double __x;
  undefined *puVar12;
  char in_NG;
  char in_OV;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  char cVar26;
  uint uVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  code *pcVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  long *unaff_x20;
  long lVar37;
  long *plVar38;
  int iVar39;
  long lVar40;
  uint uVar41;
  long *unaff_x26;
  long *unaff_x27;
  int *unaff_x28;
  float fVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  ulong uVar46;
  ulong uVar47;
  float fVar48;
  uint uVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
  undefined8 in_stack_00000048;
  float fStack000000000000005c;
  float fStack0000000000000060;
  int iStack0000000000000070;
  float fStack0000000000000074;
  uint uStack0000000000000078;
  float fStack0000000000000084;
  float fStack0000000000000088;
  uint uStack000000000000008c;
  uint uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  float fStack00000000000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c8;
  int iStack00000000000000cc;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 uStack00000000000000e0;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack0000000000000120;
  int *in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  float in_stack_00001288;
  int in_stack_0000128c;
  double in_stack_00001290;
  
  if (in_NG == in_OV) {
    uVar21 = FUN_032194f0(_uStack0000000000000040,0);
    uVar22 = FUN_031cc64c(in_stack_00000048,0);
    uVar21 = FUN_02526f2c(*(undefined8 *)PTR_DAT_06e4b7d0,uVar21,*(undefined8 *)PTR_DAT_06e3cf20,
                          uVar22,0);
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
    }
    FUN_048662d8(uVar21,0);
  }
  if ((*unaff_x28 != 0) && ((*unaff_x28 != 1 || (in_stack_0000128c != 3)))) {
    lVar23 = *unaff_x26;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar23 = *unaff_x26;
    }
    puVar12 = PTR_DAT_06e50440;
    lVar23 = **(long **)(lVar23 + 0xb8);
    if (lVar23 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
    iVar18 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x38 + 0x54) << 2;
    if ((*unaff_x27 == 0) || (lVar23 = *(long *)(*unaff_x27 + 0x60), lVar23 == 0))
    goto LAB_04caa2e0;
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
    FUN_051ef01c(lVar23 + 0x20,0,0);
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    iVar14 = (int)unaff_x19[0x52];
    fStack00000000000000ec = **(float **)(*(long *)puVar12 + 0xb8);
    uStack00000000000000e0 = *(undefined8 *)(*(float **)(*(long *)puVar12 + 0xb8) + 1);
    lVar23 = unaff_x19[0xe5];
    uStack00000000000000a8 = uStack00000000000000e0;
    fStack00000000000000b0 = fStack00000000000000ec;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar23 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_04caa4c0;
        uVar21 = *(undefined8 *)(lVar23 + 0x30);
        if ((int)unaff_x19[0x61] == 5) {
          if ((*unaff_x27 == 0) || (lVar37 = *(long *)(*unaff_x27 + 0x58), lVar37 == 0))
          goto LAB_04caa2e0;
          if (*(uint *)(lVar37 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
          fVar42 = *(float *)(lVar37 + (long)(int)uStack000000000000003c * 0x14 + 0x28);
        }
        else {
          fVar42 = *(float *)((long)unaff_x19 + 0x4c4);
        }
        fStack00000000000000b0 = fStack0000000000000038 + 0.0 + *(float *)(lVar23 + 0x2c);
        param_2 = (0.0 - fVar42) - fStack0000000000000030;
      }
      else if (iVar14 == 0x200) {
        if (lVar23 == 0) goto LAB_04caa2e0;
        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_04caa4c0;
        fStack00000000000000b0 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
        uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar23 + 0x24) +
                          (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x61] == 5) {
          if ((*unaff_x27 == 0) || (lVar23 = *(long *)(*unaff_x27 + 0x58), lVar23 == 0))
          goto LAB_04caa2e0;
          if (*(uint *)(lVar23 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
          lVar23 = lVar23 + (long)(int)uStack000000000000003c * 0x14;
          fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0;
          param_2 = ((fStack0000000000000030 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30)
                     ) - fStack0000000000000034) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0;
          param_2 = ((fStack0000000000000030 + *(float *)((long)unaff_x19 + 0x4c4) +
                     in_stack_00001288) - fStack0000000000000034) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_04ca76a0;
        if (lVar23 == 0) goto LAB_04caa2e0;
        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
        uVar21 = *(undefined8 *)(lVar23 + 0x24);
        if ((int)unaff_x19[0x61] == 5) {
          if ((*unaff_x27 == 0) || (lVar37 = *(long *)(*unaff_x27 + 0x58), lVar37 == 0))
          goto LAB_04caa2e0;
          if (*(uint *)(lVar37 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
          in_stack_00001288 = *(float *)(lVar37 + (long)(int)uStack000000000000003c * 0x14 + 0x30);
        }
        fStack00000000000000b0 = fStack0000000000000038 + 0.0 + *(float *)(lVar23 + 0x20);
        param_2 = fStack0000000000000034 + (0.0 - in_stack_00001288);
      }
      uStack00000000000000a8 =
           CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + param_2);
    }
    else if (iVar14 == 0x800) {
      if (lVar23 == 0) goto LAB_04caa2e0;
      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_04caa4c0;
      param_2 = ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30)) *
                0.5;
      fStack00000000000000b0 =
           fStack0000000000000038 + 0.0 +
           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      uStack00000000000000a8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    param_2 + 0.0);
    }
    else if (iVar14 == 0x1000) {
      if (lVar23 == 0) goto LAB_04caa2e0;
      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_04caa4c0;
      param_2 = ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30)) *
                0.5;
      fStack00000000000000b0 =
           fStack0000000000000038 + 0.0 +
           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      uStack00000000000000a8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    param_2 + (0.0 - ((fStack0000000000000030 + *(float *)((long)unaff_x19 + 0x4f4)
                                      + *(float *)((long)unaff_x19 + 0x4ec)) -
                                     fStack0000000000000034) * 0.5));
    }
    else if (iVar14 == 0x2000) {
      if (lVar23 == 0) goto LAB_04caa2e0;
      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_04caa4c0;
      fStack00000000000000b0 =
           fStack0000000000000038 + 0.0 +
           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      param_2 = 0.0 - ((*(float *)(unaff_x19 + 0x99) - fStack0000000000000030) -
                      fStack0000000000000034) * 0.5;
      uStack00000000000000a8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30))
                    * 0.5 + param_2);
    }
LAB_04ca76a0:
    if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
    uVar21 = FUN_036e1620(unaff_x19[0xe7],0);
    puVar12 = PTR_DAT_06e124b8;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x20);
    }
    uVar24 = FUN_051d94d4(uVar21,0,0);
    lVar23 = FUN_04ec8f8c();
    if (lVar23 == 0) goto LAB_04caa2e0;
    FUN_04f1cc5c(lVar23,0);
    *(float *)(unaff_x19 + 0xe4) = param_2;
    if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
    iVar14 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(unaff_x19[0xe7],0);
    if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
    fVar42 = (float)FUN_036e0f48(unaff_x19[0xe7],0);
    __x = DAT_0534bb48;
    dVar44 = modf(DAT_0534bb48,(double *)&stack0x00001290);
    if (dVar44 == 0.5) {
      fVar43 = (float)in_stack_00001290;
      if (((long)in_stack_00001290 & 1U) != 0) {
        fVar43 = (float)in_stack_00001290 + 1.0;
      }
    }
    else {
      fVar43 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00001290);
    if (dVar44 == 0.5) {
      fVar58 = (float)in_stack_00001290;
      if (((long)in_stack_00001290 & 1U) != 0) {
        fVar58 = (float)in_stack_00001290 + 1.0;
      }
    }
    else {
      fVar58 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00001290);
    if (dVar44 == 0.5) {
      fVar48 = (float)in_stack_00001290;
      if (((long)in_stack_00001290 & 1U) != 0) {
        fVar48 = (float)in_stack_00001290 + 1.0;
      }
    }
    else {
      fVar48 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00001290);
    if (dVar44 == 0.5) {
      fVar52 = (float)in_stack_00001290;
      if (((long)in_stack_00001290 & 1U) != 0) {
        fVar52 = (float)in_stack_00001290 + 1.0;
      }
    }
    else {
      fVar52 = 255.0;
    }
    modf(__x,(double *)&stack0x00001290);
    modf(__x,(double *)&stack0x00001290);
    modf(__x,(double *)&stack0x00001290);
    modf(__x,(double *)&stack0x00001290);
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_07236d0f == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e124b8);
      DAT_07236d0f = '\x01';
    }
    puVar12 = PTR_DAT_06e124b8;
    lVar23 = *(long *)PTR_DAT_06e124b8;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar23 = *(long *)puVar12;
    }
    puVar28 = *(undefined4 **)(lVar23 + 0xb8);
    uVar46 = (ulong)(uint)puVar28[1];
    uVar47 = (ulong)(uint)puVar28[2];
    uVar50 = (ulong)(uint)puVar28[3];
    FUN_0480b01c(*puVar28,uVar46,uVar47,uVar50,&stack0x00001260,0x4000ffff,0);
    if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar23 = *in_stack_00000180;
    if (lVar23 == 0) goto LAB_04caa2e0;
    iVar16 = *in_stack_00000178;
    if (0 < iVar16) {
      lVar23 = *(long *)(lVar23 + 0x38);
      param_2 = ABS(param_2);
      fVar45 = 1.0;
      if ((uVar24 & 1) == 0) {
        fVar45 = param_2;
      }
      if (lVar23 == 0) goto LAB_04caa2e0;
      bVar9 = false;
      bVar10 = false;
      bVar13 = false;
      bVar11 = false;
      iStack00000000000000cc = 0;
      uStack0000000000000040 = 0;
      iStack0000000000000070 = 0;
      fStack00000000000000f0 = 0.0;
      fStack00000000000000f4 = *(float *)(*(long *)(*(long *)PTR_DAT_06e12318 + 0xb8) + 0x1730);
      uStack000000000000008c =
           (int)fVar43 & 0xffU | ((int)fVar58 & 0xffU) << 8 | ((int)fVar48 & 0xffU) << 0x10 |
           (int)fVar52 << 0x18;
      fStack0000000000000084 = fStack00000000000000d8;
      fStack0000000000000088 = 0.0;
      fStack0000000000000120 = 0.0;
      fStack0000000000000060 = 0.0;
      fStack00000000000000a0 = 0.0;
      fStack000000000000005c = 0.0;
      iVar39 = 0;
      lVar37 = 0x2dc;
      uVar19 = 0;
      fVar43 = 0.0;
      fStack00000000000000c8 = fStack00000000000000d8;
      fStack00000000000000c0 = fStack00000000000000dc;
      fStack0000000000000074 = fStack00000000000000dc;
      uStack0000000000000078 = in_stack_000000b8._4_4_;
      fStack0000000000000094 = fStack00000000000000dc;
      fStack0000000000000098 = fStack00000000000000d8;
      uStack0000000000000090 = in_stack_000000b8._4_4_;
      uVar20 = 1;
      uVar49 = 0;
LAB_04ca7b5c:
      uVar8 = uVar20 - 1;
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar40 = (long)(int)uVar8;
      lVar29 = lVar23 + lVar40 * 0x178;
      lVar32 = *(long *)(lVar29 + 0x40);
      uVar6 = *(ushort *)(lVar29 + 0x24);
      uVar27 = (uint)uVar6;
      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar15 = FUN_028fcbcc(uVar6,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x50), lVar29 == 0))
      goto LAB_04caa2e0;
      uVar4 = *(uint *)(lVar23 + lVar40 * 0x178 + 0x5c);
      if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar36 = (long)(int)uVar4;
      lVar29 = lVar29 + lVar36 * 0x60;
      fVar59 = *(float *)(lVar29 + 0x60);
      fVar57 = *(float *)(lVar29 + 100);
      uVar41 = *(uint *)(lVar29 + 0x6c);
      iVar16 = *(int *)(lVar29 + 0x20);
      iVar17 = *(int *)(lVar29 + 0x28);
      iVar5 = *(int *)(lVar29 + 0x30);
      uVar2 = *(uint *)(lVar29 + 0x40);
      uVar3 = *(uint *)(lVar29 + 0x44);
      lVar34 = (long)(int)uVar3;
      fVar48 = *(float *)(lVar29 + 0x50);
      fVar51 = *(float *)(lVar29 + 0x58);
      fVar60 = *(float *)(lVar29 + 0x5c);
      fVar54 = *(float *)(lVar29 + 0x70);
      fVar56 = *(float *)(lVar29 + 0x74);
      fVar58 = *(float *)(lVar29 + 0x78);
      fVar52 = *(float *)(lVar29 + 0x7c);
      fVar55 = fVar59 + fVar57;
      plVar38 = (long *)PTR_DAT_06e50440;
      if ((int)uVar41 < 9) {
        switch(uVar41) {
        case 1:
          if ((char)unaff_x19[0x1d] == '\0') {
            fStack00000000000000ec = fVar57 + 0.0;
          }
          else {
            fStack00000000000000ec = 0.0 - fVar60;
          }
          break;
        case 2:
          fStack00000000000000ec = (fVar57 + fVar59 * 0.5) - fVar60 * 0.5;
          break;
        case 3:
          goto switchD_04ca7cb8_caseD_3;
        case 4:
          fStack00000000000000ec = fVar55 - fVar60;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000ec = fVar55;
          }
          break;
        default:
          if ((((((uVar27 != 3) && (uVar27 != 0x2060)) && (uVar27 != 0x200b)) &&
               ((uVar27 != 0xad && (uVar27 != 10)))) && ((int)uVar8 <= (int)uVar3)) && (uVar41 == 8)
             ) goto LAB_04ca7d74;
          goto switchD_04ca7cb8_caseD_3;
        }
        uStack00000000000000e0 = 0;
      }
      else if (uVar41 == 0x10) {
        if ((int)uVar8 <= (int)uVar3) {
          if (uVar27 < 0xad) {
            if ((uVar27 != 3) && (uVar27 != 10)) goto LAB_04ca7d74;
          }
          else if ((uVar27 != 0xad) && ((uVar27 != 0x200b && (uVar27 != 0x2060)))) {
LAB_04ca7d74:
            if (uVar2 < *(uint *)(lVar23 + 0x18)) {
              uVar7 = *(undefined2 *)(lVar23 + (long)(int)uVar2 * 0x178 + 0x24);
              if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar24 = FUN_02900324(uVar7,0);
              plVar38 = (long *)PTR_DAT_06e50440;
              if ((uVar24 & 1) == 0) {
                bVar1 = (int)uVar4 < (int)unaff_x19[0x96];
              }
              else {
                bVar1 = false;
              }
              if ((fVar59 < fVar60) || (bVar1 || (uVar41 >> 4 & 1) != 0)) {
                if ((uVar20 == 1) ||
                   ((uVar4 != uVar49 || (uVar8 == *(uint *)((long)unaff_x19 + 0x354))))) {
                  fStack00000000000000ec = fVar57;
                  if ((char)unaff_x19[0x1d] != '\0') {
                    fStack00000000000000ec = fVar55;
                  }
                  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uStack0000000000000040 = FUN_029007b8(uVar27,0);
                  uStack00000000000000e0 = 0;
                }
                else {
                  cVar26 = (char)unaff_x19[0x1d];
                  iVar5 = (iVar5 - iVar16) - (uStack0000000000000040 & 1);
                  fVar55 = -fVar60;
                  if (cVar26 != '\0') {
                    fVar55 = fVar60;
                  }
                  fVar57 = 1.0;
                  if (0 < iVar5) {
                    fVar57 = *(float *)((long)unaff_x19 + 0x304);
                  }
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  uVar21 = CONCAT44((float)((ulong)uStack00000000000000e0 >> 0x20) + 0.0,
                                    (float)uStack00000000000000e0 + 0.0);
                  if (uVar27 == 9) {
LAB_04ca9ca8:
                    fVar55 = ((fVar59 + fVar55) * (1.0 - fVar57)) / (float)iVar5;
                    plVar38 = (long *)PTR_DAT_06e50440;
                    if (cVar26 == '\0') {
                      fStack00000000000000ec = fStack00000000000000ec + fVar55;
                      uStack00000000000000e0 = uVar21;
                    }
                    else {
                      fStack00000000000000ec = fStack00000000000000ec - fVar55;
                    }
                  }
                  else {
                    if (uVar27 != 0xa0) {
                      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                        thunk_FUN_016466fc();
                      }
                      uVar24 = FUN_029007b8(uVar27,0);
                      cVar26 = (char)unaff_x19[0x1d];
                      if ((uVar24 & 1) != 0) goto LAB_04ca9ca8;
                    }
                    fVar55 = ((fVar59 + fVar55) * fVar57) /
                             (float)(int)((iVar16 - (~uStack0000000000000040 & 1)) + iVar17);
                    plVar38 = (long *)PTR_DAT_06e50440;
                    if (cVar26 == '\0') {
                      fStack00000000000000ec = fStack00000000000000ec + fVar55;
                      uStack00000000000000e0 = uVar21;
                    }
                    else {
                      fStack00000000000000ec = fStack00000000000000ec - fVar55;
                    }
                  }
                }
              }
              else {
                fStack00000000000000ec = fVar57;
                if ((char)unaff_x19[0x1d] != '\0') {
                  fStack00000000000000ec = fVar55;
                }
                uStack00000000000000e0 = 0;
              }
              goto switchD_04ca7cb8_caseD_3;
            }
            goto LAB_04caa4c0;
          }
        }
      }
      else if (uVar41 == 0x20) {
        fStack00000000000000ec = (fVar57 + fVar59 * 0.5) - (fVar54 + fVar58) * 0.5;
        uStack00000000000000e0 = 0;
      }
switchD_04ca7cb8_caseD_3:
      uVar41 = (uint)*(undefined8 *)(lVar23 + 0x18);
      if (uVar41 <= uVar8) goto LAB_04caa4c0;
      lVar29 = lVar23 + lVar40 * 0x178;
      fVar55 = fStack00000000000000b0 + fStack00000000000000ec;
      fVar57 = (float)uStack00000000000000a8 + (float)uStack00000000000000e0;
      fVar59 = (float)((ulong)uStack00000000000000a8 >> 0x20) +
               (float)((ulong)uStack00000000000000e0 >> 0x20);
      if (*(char *)(lVar29 + 400) == '\0') goto LAB_04ca8744;
      iVar16 = *(int *)(lVar23 + lVar40 * 0x178 + 0x20);
      if (iVar16 != 0) goto LAB_04ca8414;
      fVar43 = fmodf(*(float *)((long)unaff_x19 + 0x344) * (float)(int)uVar4,1.0);
      switch(*(undefined4 *)((long)unaff_x19 + 0x33c)) {
      case 0:
        lVar30 = lVar23 + lVar40 * 0x178;
        *(undefined4 *)(lVar30 + 0x84) = 0;
        *(undefined4 *)(lVar30 + 0xac) = 0;
        *(undefined4 *)(lVar30 + 0xd4) = 0x3f800000;
        fVar43 = 1.0;
        break;
      case 1:
        fVar52 = *(float *)(lVar23 + lVar40 * 0x178 + 0x68);
        if (*(int *)((long)unaff_x19 + 0x294) == 0x208) {
          lVar30 = lVar23 + lVar40 * 0x178;
          fVar58 = (fStack00000000000000ec + fVar52) - *(float *)(unaff_x19 + 0x9d);
          fVar52 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
          goto LAB_04ca7fd8;
        }
        lVar30 = lVar23 + lVar40 * 0x178;
        fVar58 = fVar58 - fVar54;
        *(float *)(lVar30 + 0x84) = fVar43 + (fVar52 - fVar54) / fVar58;
        *(float *)(lVar30 + 0xac) = fVar43 + (*(float *)(lVar30 + 0x90) - fVar54) / fVar58;
        *(float *)(lVar30 + 0xd4) = fVar43 + (*(float *)(lVar30 + 0xb8) - fVar54) / fVar58;
        fVar43 = fVar43 + (*(float *)(lVar30 + 0xe0) - fVar54) / fVar58;
        break;
      case 2:
        lVar30 = lVar23 + lVar40 * 0x178;
        fVar52 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
        fVar58 = (fStack00000000000000ec + *(float *)(lVar30 + 0x68)) - *(float *)(unaff_x19 + 0x9d)
        ;
LAB_04ca7fd8:
        *(float *)(lVar30 + 0x84) = fVar43 + fVar58 / fVar52;
        *(float *)(lVar30 + 0xac) =
             fVar43 + ((fStack00000000000000ec + *(float *)(lVar30 + 0x90)) -
                      *(float *)(unaff_x19 + 0x9d)) /
                      (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
        *(float *)(lVar30 + 0xd4) =
             fVar43 + ((fStack00000000000000ec + *(float *)(lVar30 + 0xb8)) -
                      *(float *)(unaff_x19 + 0x9d)) /
                      (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
        fVar43 = fVar43 + ((fStack00000000000000ec + *(float *)(lVar30 + 0xe0)) -
                          *(float *)(unaff_x19 + 0x9d)) /
                          (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
        break;
      case 3:
        switch((int)unaff_x19[0x68]) {
        case 0:
          lVar30 = lVar23 + lVar40 * 0x178;
          *(undefined4 *)(lVar30 + 0x88) = 0;
          *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar30 + 0xd8) = 0;
          *(undefined4 *)(lVar30 + 0x100) = 0x3f800000;
          break;
        case 1:
          lVar30 = lVar23 + lVar40 * 0x178;
          fVar52 = fVar52 - fVar56;
          fVar58 = fVar43 + (*(float *)(lVar30 + 0x6c) - fVar56) / fVar52;
          fVar52 = fVar43 + (*(float *)(lVar30 + 0x94) - fVar56) / fVar52;
          *(float *)(lVar30 + 0x88) = fVar58;
          *(float *)(lVar30 + 0xb0) = fVar52;
          *(float *)(lVar30 + 0xd8) = fVar58;
          *(float *)(lVar30 + 0x100) = fVar52;
          break;
        case 2:
          lVar30 = lVar23 + lVar40 * 0x178;
          fVar58 = fVar43 + (*(float *)(lVar30 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
                            (*(float *)((long)unaff_x19 + 0x4f4) -
                            *(float *)((long)unaff_x19 + 0x4ec));
          *(float *)(lVar30 + 0x88) = fVar58;
          fVar52 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar54 = *(float *)((long)unaff_x19 + 0x4f4);
          *(float *)(lVar30 + 0xd8) = fVar58;
          fVar58 = fVar43 + (*(float *)(lVar30 + 0x94) - fVar52) / (fVar54 - fVar52);
          *(float *)(lVar30 + 0xb0) = fVar58;
          *(float *)(lVar30 + 0x100) = fVar58;
          break;
        case 3:
          if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_048662d8(*(undefined8 *)PTR_DAT_06da50d0,0);
          uVar41 = (uint)*(undefined8 *)(lVar23 + 0x18);
        }
        if (uVar41 <= uVar8) goto LAB_04caa4c0;
        lVar30 = lVar23 + lVar40 * 0x178;
        fVar58 = *(float *)(lVar30 + 0x158);
        fVar52 = (1.0 - (*(float *)(lVar30 + 0x88) + *(float *)(lVar30 + 0xb0)) * fVar58) * 0.5;
        fVar54 = fVar43 + *(float *)(lVar30 + 0x88) * fVar58 + fVar52;
        fVar43 = fVar43 + fVar52 + *(float *)(lVar30 + 0xb0) * fVar58;
        *(float *)(lVar30 + 0x84) = fVar54;
        *(float *)(lVar30 + 0xac) = fVar54;
        *(float *)(lVar30 + 0xd4) = fVar43;
        break;
      default:
        goto switchD_04ca7ef8_default;
      }
      *(float *)(lVar23 + lVar40 * 0x178 + 0xfc) = fVar43;
switchD_04ca7ef8_default:
      switch((int)unaff_x19[0x68]) {
      case 0:
        if (uVar41 <= uVar8) goto LAB_04caa4c0;
        lVar30 = lVar23 + lVar40 * 0x178;
        *(undefined4 *)(lVar30 + 0x88) = 0;
        *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xd8) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0x100) = 0;
        break;
      case 1:
        if (uVar8 < uVar41) {
          lVar30 = lVar23 + lVar40 * 0x178;
          fVar48 = fVar48 - fVar51;
          fVar43 = (*(float *)(lVar30 + 0x6c) - fVar51) / fVar48;
          fVar48 = (*(float *)(lVar30 + 0x94) - fVar51) / fVar48;
          *(float *)(lVar30 + 0x88) = fVar43;
          goto LAB_04ca8338;
        }
        goto LAB_04caa4c0;
      case 2:
        if (uVar41 <= uVar8) goto LAB_04caa4c0;
        lVar30 = lVar23 + lVar40 * 0x178;
        fVar43 = (*(float *)(lVar30 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
                 (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
        *(float *)(lVar30 + 0x88) = fVar43;
        fVar48 = (*(float *)(lVar30 + 0x94) - *(float *)((long)unaff_x19 + 0x4ec)) /
                 (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
LAB_04ca8338:
        *(float *)(lVar30 + 0xb0) = fVar48;
        *(float *)(lVar30 + 0xd8) = fVar48;
        *(float *)(lVar30 + 0x100) = fVar43;
        break;
      case 3:
        if (uVar41 <= uVar8) goto LAB_04caa4c0;
        lVar30 = lVar23 + lVar40 * 0x178;
        fVar48 = *(float *)(lVar30 + 0x158);
        fVar58 = (1.0 - (*(float *)(lVar30 + 0x84) + *(float *)(lVar30 + 0xd4)) / fVar48) * 0.5;
        fVar43 = *(float *)(lVar30 + 0x84) / fVar48 + fVar58;
        fVar58 = fVar58 + *(float *)(lVar30 + 0xd4) / fVar48;
        *(float *)(lVar30 + 0x88) = fVar43;
        *(float *)(lVar30 + 0xb0) = fVar58;
        *(float *)(lVar30 + 0x100) = fVar43;
        *(float *)(lVar30 + 0xd8) = fVar58;
      }
      if (uVar41 <= uVar8) goto LAB_04caa4c0;
      lVar30 = lVar23 + lVar40 * 0x178;
      fVar43 = *(float *)(lVar30 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x5f));
      if ((*(char *)(lVar30 + 0x54) == '\0') &&
         ((*(byte *)(lVar23 + lVar40 * 0x178 + 0x18c) & 1) != 0)) {
        fVar43 = -fVar43;
      }
      fVar58 = param_2;
      if (((iVar14 == 2) || (fVar58 = fVar45, iVar14 == 1)) ||
         (fVar58 = param_2 / fVar42, iVar14 == 0)) {
        fVar43 = fVar58 * fVar43;
      }
      lVar30 = lVar23 + lVar40 * 0x178;
      *(float *)(lVar30 + 0x80) = fVar43;
      *(float *)(lVar30 + 0xa8) = fVar43;
      *(float *)(lVar30 + 0xd0) = fVar43;
      *(float *)(lVar30 + 0xf8) = fVar43;
LAB_04ca8414:
      if (((int)uVar8 < (int)unaff_x19[0x6b]) &&
         (iStack00000000000000cc < *(int *)((long)unaff_x19 + 0x35c))) {
        if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] != 5)) {
          if (uVar41 <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar23 + lVar40 * 0x178;
          *(ulong *)(lVar29 + 0x68) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x68) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0x68));
          *(float *)(lVar29 + 0x70) = fVar59 + *(float *)(lVar29 + 0x70);
          if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar23 + lVar40 * 0x178;
          *(ulong *)(lVar29 + 0x90) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x90) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0x90));
          *(float *)(lVar29 + 0x98) = fVar59 + *(float *)(lVar29 + 0x98);
          if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar23 + lVar40 * 0x178;
          *(ulong *)(lVar29 + 0xb8) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0xb8) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0xb8));
          *(float *)(lVar29 + 0xc0) = fVar59 + *(float *)(lVar29 + 0xc0);
          if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar23 + lVar40 * 0x178;
          uVar21 = *(undefined8 *)(lVar29 + 0xe0);
          fVar58 = *(float *)(lVar29 + 0xe8);
LAB_04ca870c:
          *(ulong *)(lVar29 + 0xe0) =
               CONCAT44(fVar57 + (float)((ulong)uVar21 >> 0x20),fVar55 + (float)uVar21);
          *(float *)(lVar29 + 0xe8) = fVar59 + fVar58;
          if (iVar16 == 0) goto LAB_04ca8720;
LAB_04ca8648:
          if (iVar16 == 1) {
            pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
            goto LAB_04ca872c;
          }
          goto LAB_04ca8744;
        }
        if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] == 5)) {
          if (uVar8 < uVar41) {
            if (*(uint *)(lVar23 + lVar40 * 0x178 + 0x60) != uStack000000000000003c)
            goto LAB_04ca852c;
            lVar29 = lVar23 + lVar40 * 0x178;
            *(ulong *)(lVar29 + 0x68) =
                 CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x68) >> 0x20),
                          fVar55 + (float)*(undefined8 *)(lVar29 + 0x68));
            *(float *)(lVar29 + 0x70) = fVar59 + *(float *)(lVar29 + 0x70);
            if (uVar8 < *(uint *)(lVar23 + 0x18)) {
              lVar29 = lVar23 + lVar40 * 0x178;
              *(ulong *)(lVar29 + 0x90) =
                   CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x90) >> 0x20),
                            fVar55 + (float)*(undefined8 *)(lVar29 + 0x90));
              *(float *)(lVar29 + 0x98) = fVar59 + *(float *)(lVar29 + 0x98);
              if (uVar8 < *(uint *)(lVar23 + 0x18)) {
                lVar29 = lVar23 + lVar40 * 0x178;
                *(ulong *)(lVar29 + 0xb8) =
                     CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0xb8) >> 0x20),
                              fVar55 + (float)*(undefined8 *)(lVar29 + 0xb8));
                *(float *)(lVar29 + 0xc0) = fVar59 + *(float *)(lVar29 + 0xc0);
                if (uVar8 < *(uint *)(lVar23 + 0x18)) {
                  lVar29 = lVar23 + lVar40 * 0x178;
                  uVar21 = *(undefined8 *)(lVar29 + 0xe0);
                  fVar58 = *(float *)(lVar29 + 0xe8);
                  goto LAB_04ca870c;
                }
              }
            }
          }
          goto LAB_04caa4c0;
        }
      }
LAB_04ca852c:
      if (uVar41 <= uVar8) goto LAB_04caa4c0;
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(plVar38);
        DAT_0722a13e = '\x01';
      }
      lVar30 = lVar23 + lVar40 * 0x178;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*plVar38 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0x68) = **(undefined8 **)(*plVar38 + 0xb8);
      *(undefined4 *)(lVar30 + 0x70) = uVar53;
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar30 = lVar23 + lVar40 * 0x178;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*plVar38 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0x90) = **(undefined8 **)(*plVar38 + 0xb8);
      *(undefined4 *)(lVar30 + 0x98) = uVar53;
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar30 = lVar23 + lVar40 * 0x178;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*plVar38 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0xb8) = **(undefined8 **)(*plVar38 + 0xb8);
      *(undefined4 *)(lVar30 + 0xc0) = uVar53;
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar30 = lVar23 + lVar40 * 0x178;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*plVar38 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0xe0) = **(undefined8 **)(*plVar38 + 0xb8);
      *(undefined4 *)(lVar30 + 0xe8) = uVar53;
      if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_04caa4c0;
      *(undefined1 *)(lVar29 + 400) = 0;
      if (iVar16 != 0) goto LAB_04ca8648;
LAB_04ca8720:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_04ca872c:
      (*pcVar31)();
LAB_04ca8744:
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar29 = lVar29 + lVar40 * 0x178;
      uVar21 = *(undefined8 *)(lVar29 + 0x114);
      *(undefined8 *)(lVar29 + 0x114) =
           CONCAT44(fVar57 + (float)((ulong)uVar21 >> 0x20),fVar55 + (float)uVar21);
      *(float *)(lVar29 + 0x11c) = fVar59 + *(float *)(lVar29 + 0x11c);
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar29 = lVar29 + lVar40 * 0x178;
      *(ulong *)(lVar29 + 0x108) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x108) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0x108));
      *(float *)(lVar29 + 0x110) = fVar59 + *(float *)(lVar29 + 0x110);
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar29 = lVar29 + lVar40 * 0x178;
      *(ulong *)(lVar29 + 0x120) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x120) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0x120));
      *(float *)(lVar29 + 0x128) = fVar59 + *(float *)(lVar29 + 0x128);
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
      lVar29 = lVar29 + lVar40 * 0x178;
      *(float *)(lVar29 + 300) = fVar55 + *(float *)(lVar29 + 300);
      *(ulong *)(lVar29 + 0x130) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar29 + 0x130) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar29 + 0x130));
      lVar29 = *in_stack_00000180;
      if ((lVar29 == 0) || (lVar30 = *(long *)(lVar29 + 0x38), lVar30 == 0)) goto LAB_04caa2e0;
      uVar41 = *(uint *)(lVar30 + 0x18);
      if (uVar41 <= uVar8) goto LAB_04caa4c0;
      lVar33 = lVar30 + lVar40 * 0x178;
      uVar46 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar33 + 0x138) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar33 + 0x138));
      fVar58 = fVar57 + *(float *)(lVar33 + 0x148);
      uVar47 = (ulong)(uint)fVar58;
      uVar50 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar33 + 0x140));
      *(ulong *)(lVar33 + 0x138) = uVar46;
      *(ulong *)(lVar33 + 0x140) = uVar50;
      *(float *)(lVar33 + 0x148) = fVar58;
      if (uVar4 == uVar49) {
        uVar49 = *in_stack_00000178 - 1;
        if (uVar8 == uVar49) goto LAB_04ca8950;
      }
      else {
        lVar29 = *(long *)(lVar29 + 0x50);
        if (lVar29 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_04caa4c0;
        lVar33 = (long)(int)uVar49;
        lVar35 = lVar29 + lVar33 * 0x60;
        uVar50 = (ulong)(uint)*(float *)(lVar35 + 0x5c);
        fVar58 = fVar57 + *(float *)(lVar35 + 0x58);
        uVar46 = (ulong)(uint)fVar58;
        fVar48 = fVar55 + *(float *)(lVar35 + 0x5c);
        uVar47 = (ulong)(uint)fVar48;
        *(ulong *)(lVar35 + 0x50) =
             CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x50) >> 0x20),
                      fVar57 + (float)*(undefined8 *)(lVar35 + 0x50));
        *(float *)(lVar35 + 0x58) = fVar58;
        *(float *)(lVar35 + 0x5c) = fVar48;
        if (uVar41 <= *(uint *)(lVar35 + 0x38)) goto LAB_04caa4c0;
        uVar53 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar35 + 0x38) * 0x178 + 0x114);
        lVar29 = lVar29 + lVar33 * 0x60;
        *(float *)(lVar29 + 0x74) = fVar58;
        *(undefined4 *)(lVar29 + 0x70) = uVar53;
        lVar29 = *in_stack_00000180;
        if ((lVar29 == 0) || (lVar30 = *(long *)(lVar29 + 0x50), lVar30 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar30 + 0x18) <= uVar49) goto LAB_04caa4c0;
        lVar29 = *(long *)(lVar29 + 0x38);
        if (lVar29 == 0) goto LAB_04caa2e0;
        uVar49 = *(uint *)(lVar30 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_04caa4c0;
        lVar30 = lVar30 + lVar33 * 0x60;
        *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar29 + (long)(int)uVar49 * 0x178 + 0x120)
        ;
        *(undefined4 *)(lVar30 + 0x7c) = *(undefined4 *)(lVar30 + 0x50);
        uVar49 = *in_stack_00000178 - 1;
LAB_04ca8950:
        if (uVar8 == uVar49) {
          lVar29 = *in_stack_00000180;
          if ((lVar29 == 0) || (lVar30 = *(long *)(lVar29 + 0x50), lVar30 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar30 + 0x18) <= uVar4) goto LAB_04caa4c0;
          lVar33 = lVar30 + lVar36 * 0x60;
          uVar50 = (ulong)(uint)*(float *)(lVar33 + 0x5c);
          uVar46 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar33 + 0x50) >> 0x20),
                            fVar57 + (float)*(undefined8 *)(lVar33 + 0x50));
          fVar58 = fVar57 + *(float *)(lVar33 + 0x58);
          fVar55 = fVar55 + *(float *)(lVar33 + 0x5c);
          uVar47 = (ulong)(uint)fVar55;
          *(ulong *)(lVar33 + 0x50) = uVar46;
          *(float *)(lVar33 + 0x58) = fVar58;
          *(float *)(lVar33 + 0x5c) = fVar55;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar33 + 0x38)) goto LAB_04caa4c0;
          uVar53 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar33 + 0x38) * 0x178 + 0x114);
          lVar30 = lVar30 + lVar36 * 0x60;
          *(float *)(lVar30 + 0x74) = fVar58;
          *(undefined4 *)(lVar30 + 0x70) = uVar53;
          lVar29 = *in_stack_00000180;
          if ((lVar29 == 0) || (lVar30 = *(long *)(lVar29 + 0x50), lVar30 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar30 + 0x18) <= uVar4) goto LAB_04caa4c0;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_04caa2e0;
          uVar49 = *(uint *)(lVar30 + lVar36 * 0x60 + 0x44);
          if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_04caa4c0;
          lVar30 = lVar30 + lVar36 * 0x60;
          *(undefined4 *)(lVar30 + 0x78) =
               *(undefined4 *)(lVar29 + (long)(int)uVar49 * 0x178 + 0x120);
          *(undefined4 *)(lVar30 + 0x7c) = *(undefined4 *)(lVar30 + 0x50);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar24 = FUN_028ff808(uVar27,0);
      if (((((uVar24 & 1) == 0) && (1 < uVar27 - 0x2010)) && (uVar27 != 0xad)) && (uVar27 != 0x2d))
      {
        if (bVar11) {
          if (((uVar20 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
             (((int)uVar8 < *in_stack_00000178 && ((uVar27 == 0x2019 || (uVar27 == 0x27)))))) {
            if (*(uint *)(lVar23 + 0x18) <= uVar20 - 2) goto LAB_04caa4c0;
            uVar7 = *(undefined2 *)(lVar23 + lVar37 + -0x430);
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar24 = FUN_028ff808(uVar7,0);
            if ((uVar24 & 1) != 0) {
              if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_04caa4c0;
              uVar7 = *(undefined2 *)(lVar23 + lVar37 + -0x140);
              if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar24 = FUN_028ff808(uVar7,0);
              if ((uVar24 & 1) != 0) goto LAB_04ca8b6c;
            }
          }
LAB_04ca8e0c:
          if (uVar8 == *in_stack_00000178 - 1U) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar24 = FUN_028ff808(uVar27,0);
            iVar16 = iVar39;
            if ((uVar24 & 1) == 0) goto LAB_04ca8e4c;
          }
          else {
LAB_04ca8e4c:
            iVar16 = uVar20 - 2;
          }
          lVar29 = *in_stack_00000180;
          if (lVar29 == 0) goto LAB_04caa2e0;
          lVar30 = *(long *)(lVar29 + 0x40);
          if (lVar30 == 0) goto LAB_04caa2e0;
          uVar49 = *(uint *)(lVar29 + 0x24);
          iVar17 = *(int *)(lVar30 + 0x18);
          if (iVar17 < (int)(uVar49 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            FUN_022de6e4((long *)(lVar29 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_06da6d78);
            lVar29 = *in_stack_00000180;
            if (lVar29 == 0) goto LAB_04caa2e0;
          }
          lVar29 = *(long *)(lVar29 + 0x40);
          if (lVar29 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_04caa4c0;
          lVar29 = lVar29 + (long)(int)uVar49 * 0x18;
          *(long **)(lVar29 + 0x20) = unaff_x19;
          *(uint *)(lVar29 + 0x28) = uVar19;
          *(int *)(lVar29 + 0x2c) = iVar16;
          *(uint *)(lVar29 + 0x30) = (iVar16 - uVar19) + 1;
          thunk_FUN_01656ef8();
          lVar29 = unaff_x19[0x73];
          if (lVar29 == 0) goto LAB_04caa2e0;
          lVar30 = *(long *)(lVar29 + 0x50);
          *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
          if (lVar30 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar30 + 0x18) <= uVar4) goto LAB_04caa4c0;
          lVar30 = lVar30 + lVar36 * 0x60;
          bVar11 = false;
          iStack00000000000000cc = iStack00000000000000cc + 1;
          *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
        }
        else {
          if (uVar20 == 1) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar49 = FUN_028ff740(uVar27,0);
            if (((uVar27 == 0x200b) || (((uVar15 | uVar49 ^ 1) & 1) != 0)) ||
               (*in_stack_00000178 == 1)) goto LAB_04ca8e0c;
          }
          bVar11 = false;
        }
      }
      else {
        if (!bVar11) {
          uVar19 = uVar8;
        }
        if (uVar8 == *in_stack_00000178 - 1U) {
          lVar29 = *in_stack_00000180;
          if (lVar29 == 0) goto LAB_04caa2e0;
          lVar30 = *(long *)(lVar29 + 0x40);
          if (lVar30 == 0) goto LAB_04caa2e0;
          uVar49 = *(uint *)(lVar29 + 0x24);
          iVar16 = *(int *)(lVar30 + 0x18);
          if (iVar16 < (int)(uVar49 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            FUN_022de6e4((long *)(lVar29 + 0x40),iVar16 + 1,*(undefined8 *)PTR_DAT_06da6d78);
            lVar29 = *in_stack_00000180;
            if (lVar29 == 0) goto LAB_04caa2e0;
          }
          lVar29 = *(long *)(lVar29 + 0x40);
          if (lVar29 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_04caa4c0;
          lVar29 = lVar29 + (long)(int)uVar49 * 0x18;
          *(long **)(lVar29 + 0x20) = unaff_x19;
          *(uint *)(lVar29 + 0x28) = uVar19;
          *(uint *)(lVar29 + 0x2c) = uVar8;
          *(uint *)(lVar29 + 0x30) = uVar20 - uVar19;
          thunk_FUN_01656ef8();
          lVar29 = unaff_x19[0x73];
          if (lVar29 == 0) goto LAB_04caa2e0;
          lVar30 = *(long *)(lVar29 + 0x50);
          *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
          if (lVar30 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar30 + 0x18) <= uVar4) goto LAB_04caa4c0;
          lVar30 = lVar30 + lVar36 * 0x60;
          iStack00000000000000cc = iStack00000000000000cc + 1;
          *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
LAB_04ca8b6c:
          bVar11 = true;
        }
        else {
          bVar11 = true;
        }
      }
      lVar29 = *in_stack_00000180;
      if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x38), lVar36 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar36 + 0x18) <= uVar8) goto LAB_04caa4c0;
      if ((*(byte *)(lVar36 + lVar40 * 0x178 + 0x18c) >> 2 & 1) == 0) {
        plVar38 = (long *)PTR_DAT_06e12318;
        if (!bVar9) {
          bVar9 = false;
          goto LAB_04ca9160;
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar20 - 2) goto LAB_04caa4c0;
LAB_04ca8bcc:
        lVar30 = *unaff_x19;
        uVar49 = *(uint *)(lVar36 + lVar37 + -0x334);
        uVar53 = *(undefined4 *)(lVar36 + lVar37 + -0x2f8);
LAB_04ca90ec:
        uVar50 = (ulong)uVar49;
        uVar46 = (ulong)(uint)fStack0000000000000074;
        uVar47 = (ulong)uStack0000000000000078;
        (**(code **)(lVar30 + 0x908))
                  (fStack0000000000000084,uVar46,uVar47,uVar50,fStack00000000000000f4,0,
                   fStack0000000000000088,uVar53);
        lVar29 = *plVar38;
LAB_04ca912c:
        if (*(int *)(lVar29 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar29 = *plVar38;
        }
LAB_04ca913c:
        bVar9 = false;
        fStack00000000000000f4 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x1730);
        fStack0000000000000120 = 0.0;
        fStack00000000000000f0 = 0.0;
      }
      else {
        lVar30 = lVar36 + lVar40 * 0x178;
        iVar16 = *(int *)(lVar30 + 0x60);
        *(int *)(lVar30 + 0x168) = iVar18;
        if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
           (((int)unaff_x19[0x61] == 5 && (iVar16 + 1 != (int)unaff_x19[0x6d])))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (uVar27 != 0x200b && (uVar15 & 1) == 0) {
          fVar58 = *(float *)(lVar36 + lVar40 * 0x178 + 0x15c);
          if (fStack0000000000000120 <= fVar58) {
            fStack0000000000000120 = fVar58;
          }
          uVar47 = (ulong)(uint)fStack0000000000000120;
          if (fStack00000000000000f0 <= ABS(fVar43)) {
            fStack00000000000000f0 = ABS(fVar43);
          }
          if (iVar16 != iStack0000000000000070) {
            if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar29 = *in_stack_00000180;
              if (lVar29 == 0) goto LAB_04caa2e0;
              lVar36 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
            }
            else {
              lVar36 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
            }
            fStack00000000000000f4 = *(float *)(lVar36 + 0x1730);
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
          if (unaff_x19[0x1e] == 0) goto LAB_04caa2e0;
          fVar48 = *(float *)(lVar29 + lVar40 * 0x178 + 0x144);
          fVar58 = (float)FUN_04ab19b8(unaff_x19[0x1e] + 0x28,0);
          fVar48 = fVar48 + fStack0000000000000120 * fVar58;
          if (fVar48 <= fStack00000000000000f4) {
            fStack00000000000000f4 = fVar48;
          }
          uVar46 = (ulong)(uint)fStack00000000000000f4;
          iStack0000000000000070 = iVar16;
        }
        plVar38 = (long *)PTR_DAT_06e12318;
        if (!bVar9) {
          if ((((uVar27 == 0xd) || ((uVar27 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) || (!bVar1))
          {
LAB_04ca9044:
            bVar9 = false;
            goto LAB_04ca9160;
          }
          if (uVar8 == uVar3) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar24 = FUN_029007b8(uVar27,0);
            if ((uVar24 & 1) != 0) goto LAB_04ca9044;
          }
          if ((*in_stack_00000180 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar29 + lVar40 * 0x178;
          fStack0000000000000088 = *(float *)(lVar29 + 0x15c);
          fStack0000000000000084 = *(float *)(lVar29 + 0x114);
          fVar58 = fStack0000000000000088;
          if (fStack0000000000000120 != 0.0) {
            fVar58 = fStack0000000000000120;
          }
          uVar47 = (ulong)(uint)fVar58;
          uStack000000000000008c = *(uint *)(lVar29 + 0x164);
          uStack0000000000000078 = 0;
          fVar48 = fVar43;
          if (fStack0000000000000120 != 0.0) {
            fVar48 = fStack00000000000000f0;
          }
          uVar46 = (ulong)(uint)fVar48;
          fStack0000000000000074 = fStack00000000000000f4;
          fStack00000000000000f0 = fVar48;
          fStack0000000000000120 = fVar58;
        }
        if (*in_stack_00000178 == 1) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            if (uVar8 < *(uint *)(lVar29 + 0x18)) {
              lVar29 = lVar29 + lVar40 * 0x178;
              lVar30 = *unaff_x19;
              uVar49 = *(uint *)(lVar29 + 0x120);
              uVar53 = *(undefined4 *)(lVar29 + 0x15c);
              goto LAB_04ca90ec;
            }
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        if ((uVar8 == uVar2) || ((int)uVar3 <= (int)uVar8)) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            if (uVar27 != 0x200b && (uVar15 & 1) == 0) {
              lVar36 = lVar40;
              if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
            }
            else {
              lVar36 = lVar34;
              if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_04caa4c0;
            }
            lVar29 = lVar29 + lVar36 * 0x178;
            uVar50 = (ulong)*(uint *)(lVar29 + 0x120);
            uVar46 = (ulong)(uint)fStack0000000000000074;
            uVar47 = (ulong)uStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000084,uVar46,uVar47,uVar50,fStack00000000000000f4,0,
                       fStack0000000000000088,*(undefined4 *)(lVar29 + 0x15c));
            lVar29 = *plVar38;
            goto LAB_04ca912c;
          }
          goto LAB_04caa2e0;
        }
        if (!bVar1) {
          if ((*in_stack_00000180 != 0) &&
             (lVar36 = *(long *)(*in_stack_00000180 + 0x38), lVar36 != 0)) {
            if (uVar20 - 2 < *(uint *)(lVar36 + 0x18)) goto LAB_04ca8bcc;
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        if ((int)uVar8 < *in_stack_00000178 + -1) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_04caa4c0;
            uVar24 = FUN_048097c4(uStack000000000000008c,*(undefined4 *)(lVar29 + lVar37),0);
            if ((uVar24 & 1) != 0) {
              bVar9 = true;
              goto LAB_04ca9160;
            }
            if ((*in_stack_00000180 != 0) &&
               (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
              if (uVar8 < *(uint *)(lVar29 + 0x18)) {
                lVar29 = lVar29 + lVar40 * 0x178;
                uVar50 = (ulong)*(uint *)(lVar29 + 0x120);
                uVar46 = (ulong)(uint)fStack0000000000000074;
                uVar47 = (ulong)uStack0000000000000078;
                (**(code **)(*unaff_x19 + 0x908))
                          (fStack0000000000000084,uVar46,uVar47,uVar50,fStack00000000000000f4,0,
                           fStack0000000000000088,*(undefined4 *)(lVar29 + 0x15c));
                lVar29 = *plVar38;
                if (*(int *)(lVar29 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar29 = *plVar38;
                }
                goto LAB_04ca913c;
              }
              goto LAB_04caa4c0;
            }
          }
          goto LAB_04caa2e0;
        }
        bVar9 = true;
      }
LAB_04ca9160:
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
      if (lVar32 == 0) goto LAB_04caa2e0;
      uVar49 = *(uint *)(lVar29 + lVar40 * 0x178 + 0x18c);
      fVar58 = (float)FUN_04ab19c8(lVar32 + 0x28,0);
      if ((uVar49 >> 6 & 1) == 0) {
        if (bVar10) {
          if ((*in_stack_00000180 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar20 - 2) goto LAB_04caa4c0;
          uVar49 = *(uint *)(lVar29 + lVar37 + -0x334);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          fVar48 = fStack00000000000000a0 * fVar58 + *(float *)(lVar29 + lVar37 + -0x310);
LAB_04ca9710:
          uVar50 = (ulong)uVar49;
          uVar46 = (ulong)(uint)fStack0000000000000094;
          uVar47 = (ulong)uStack0000000000000090;
          (*pcVar31)(fStack0000000000000098,uVar46,uVar47,uVar50,fVar48,0,fStack00000000000000a0,
                     fStack00000000000000a0);
        }
LAB_04ca9740:
        bVar10 = false;
      }
      else {
        lVar29 = *in_stack_00000180;
        if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x38), lVar36 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar36 + 0x18) <= uVar8) goto LAB_04caa4c0;
        *(int *)(lVar36 + lVar40 * 0x178 + 0x170) = iVar18;
        if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
           (((int)unaff_x19[0x61] == 5 &&
            (*(int *)(lVar36 + lVar40 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((uVar27 == 0xd) || ((uVar27 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) ||
           (bVar10 || !bVar1)) {
LAB_04ca92bc:
          if (!bVar10) goto LAB_04ca9740;
        }
        else {
          if (uVar8 == uVar3) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar24 = FUN_029007b8(uVar27,0);
            if ((uVar24 & 1) != 0) goto LAB_04ca92bc;
            lVar29 = *in_stack_00000180;
            if (lVar29 == 0) goto LAB_04caa2e0;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_04caa4c0;
          lVar29 = lVar29 + lVar40 * 0x178;
          fStack0000000000000060 = *(float *)(lVar29 + 0x58);
          fStack00000000000000a0 = *(float *)(lVar29 + 0x15c);
          fStack000000000000005c = *(float *)(lVar29 + 0x144);
          uVar46 = (ulong)(uint)fStack000000000000005c;
          fStack0000000000000098 = *(float *)(lVar29 + 0x114);
          fStack0000000000000094 = fVar58 * fStack00000000000000a0 + fStack000000000000005c;
          uStack0000000000000090 = 0;
        }
        iVar16 = *in_stack_00000178;
        if (iVar16 == 1) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            if (uVar8 < *(uint *)(lVar29 + 0x18)) {
              lVar32 = *unaff_x19;
              lVar29 = lVar29 + lVar40 * 0x178;
LAB_04ca942c:
              uVar49 = *(uint *)(lVar29 + 0x120);
              fVar48 = *(float *)(lVar29 + 0x144);
LAB_04ca9434:
              pcVar31 = *(code **)(lVar32 + 0x908);
LAB_04ca970c:
              fVar48 = fVar58 * fStack00000000000000a0 + fVar48;
              goto LAB_04ca9710;
            }
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        if (uVar8 == uVar2) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            uVar49 = *(uint *)(lVar29 + 0x18);
            if (uVar27 == 0x200b || (uVar15 & 1) != 0) {
              if (uVar49 <= uVar3) goto LAB_04caa4c0;
            }
            else {
LAB_04ca96e8:
              lVar34 = lVar40;
              if (uVar49 <= uVar8) goto LAB_04caa4c0;
            }
LAB_04ca96f0:
            lVar29 = lVar29 + lVar34 * 0x178;
            fVar48 = *(float *)(lVar29 + 0x144);
            uVar49 = *(uint *)(lVar29 + 0x120);
            pcVar31 = *(code **)(*unaff_x19 + 0x908);
            goto LAB_04ca970c;
          }
          goto LAB_04caa2e0;
        }
        if ((int)uVar8 < iVar16) {
          lVar29 = *in_stack_00000180;
          if ((lVar29 != 0) && (lVar36 = *(long *)(lVar29 + 0x38), lVar36 != 0)) {
            if (uVar20 < *(uint *)(lVar36 + 0x18)) {
              if (*(float *)(lVar36 + lVar37 + -0x10c) == fStack0000000000000060) {
                fVar48 = *(float *)(lVar36 + lVar37 + -0x20);
                if (*(int *)(*(long *)PTR_DAT_06e5ce10 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                uVar46 = (ulong)(uint)fStack000000000000005c;
                uVar24 = FUN_04809d04(fVar57 + fVar48,uVar46,0);
                if ((uVar24 & 1) != 0) {
                  iVar16 = *in_stack_00000178;
                  goto LAB_04ca9510;
                }
                lVar29 = *in_stack_00000180;
                if (lVar29 == 0) goto LAB_04caa2e0;
              }
              lVar29 = *(long *)(lVar29 + 0x38);
              if (lVar29 != 0) {
                uVar49 = *(uint *)(lVar29 + 0x18);
                if ((int)uVar8 <= (int)uVar3) goto LAB_04ca96e8;
                if (uVar3 < uVar49) goto LAB_04ca96f0;
                goto LAB_04caa4c0;
              }
              goto LAB_04caa2e0;
            }
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
LAB_04ca9510:
        if ((int)uVar8 < iVar16) {
          iVar16 = FUN_051d2b30(lVar32,0);
          if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_04caa4c0;
          lVar29 = *(long *)(lVar23 + lVar37 + -0x124);
          if (lVar29 == 0) goto LAB_04caa2e0;
          iVar17 = FUN_051d2b30(lVar29,0);
          if (iVar16 != iVar17) {
            if ((*in_stack_00000180 != 0) &&
               (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
              if (uVar8 < *(uint *)(lVar29 + 0x18)) {
                lVar32 = *unaff_x19;
                lVar29 = lVar29 + lVar40 * 0x178;
                plVar38 = (long *)PTR_DAT_06e12318;
                goto LAB_04ca942c;
              }
              goto LAB_04caa4c0;
            }
            goto LAB_04caa2e0;
          }
        }
        plVar38 = (long *)PTR_DAT_06e12318;
        if (!bVar1) {
          if ((*in_stack_00000180 != 0) &&
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 != 0)) {
            if (uVar20 - 2 < *(uint *)(lVar29 + 0x18)) {
              lVar32 = *unaff_x19;
              uVar49 = *(uint *)(lVar29 + lVar37 + -0x334);
              fVar48 = *(float *)(lVar29 + lVar37 + -0x310);
              goto LAB_04ca9434;
            }
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        bVar10 = true;
      }
      if ((*in_stack_00000180 == 0) || (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0))
      goto LAB_04caa2e0;
      uVar49 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar49 <= uVar8) goto LAB_04caa4c0;
      if ((*(byte *)(lVar29 + lVar40 * 0x178 + 0x18d) >> 1 & 1) == 0) {
        if (bVar13) {
          uVar47 = (ulong)in_stack_000000b8._4_4_;
          uVar46 = (ulong)(uint)fStack00000000000000dc;
          uVar50 = (ulong)(uint)fStack00000000000000c8;
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000d8,uVar46,uVar47,uVar50,fStack00000000000000c0,uVar47);
        }
LAB_04ca97b0:
        bVar13 = false;
      }
      else {
        if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
           (((int)unaff_x19[0x61] == 5 &&
            (*(int *)(lVar29 + lVar40 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar13) {
          if ((((uVar27 == 0xd) || ((uVar27 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) || (!bVar1))
          goto LAB_04ca97b0;
          if (uVar8 == uVar3) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar24 = FUN_029007b8(uVar27,0);
            if ((uVar24 & 1) != 0) goto LAB_04ca97b0;
          }
          lVar32 = *plVar38;
          if (*(int *)(lVar32 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar32 = *plVar38;
          }
          if ((*in_stack_00000180 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000180 + 0x38), lVar29 == 0)) goto LAB_04caa2e0;
          uVar49 = (uint)*(undefined8 *)(lVar29 + 0x18);
          if (uVar49 <= uVar8) goto LAB_04caa4c0;
          lVar32 = *(long *)(lVar32 + 0xb8);
          lVar34 = lVar29 + lVar40 * 0x178;
          in_stack_00001268 = *(undefined8 *)(lVar34 + 0x180);
          in_stack_00001260 = *(undefined8 *)(lVar34 + 0x178);
          fStack00000000000000d8 = *(float *)(lVar32 + 0x1720);
          in_stack_00001270 = *(float *)(lVar34 + 0x188);
          fStack00000000000000dc = *(float *)(lVar32 + 0x1724);
          fStack00000000000000c8 = *(float *)(lVar32 + 0x1728);
          fStack00000000000000c0 = *(float *)(lVar32 + 0x172c);
          in_stack_000000b8._4_4_ = 0;
        }
        if (uVar49 <= uVar8) goto LAB_04caa4c0;
        lVar29 = lVar29 + lVar40 * 0x178;
        fVar52 = *(float *)(lVar29 + 0x120);
        fVar55 = *(float *)(lVar29 + 0x180);
        fVar57 = *(float *)(lVar29 + 0x188);
        uVar22 = *(undefined8 *)(lVar29 + 0x178);
        fVar59 = *(float *)(lVar29 + 0x184);
        uVar21 = *(undefined8 *)(lVar29 + 0x180);
        fVar56 = *(float *)(lVar29 + 0x114);
        fVar58 = *(float *)(lVar29 + 0x138);
        fVar48 = *(float *)(lVar29 + 0x13c);
        fVar54 = *(float *)(lVar29 + 0x140);
        fVar51 = *(float *)(lVar29 + 0x148);
        in_stack_00000188 = uVar22;
        fStack0000000000000190 = fVar55;
        fStack0000000000000194 = fVar59;
        in_stack_00000198 = fVar57;
        in_stack_000001a0 = in_stack_00001260;
        in_stack_000001a8 = in_stack_00001268;
        in_stack_000001b0 = in_stack_00001270;
        uVar24 = FUN_0480b0f0(&stack0x000001a0,&stack0x00000188,0);
        if ((uVar24 & 1) == 0) {
          bVar13 = (uVar15 & 1) == 0;
          if (bVar13) {
            fVar48 = fVar52;
          }
          fVar48 = fVar48 + (float)in_stack_00001268;
          fVar51 = fVar51 - in_stack_00001270;
          uVar47 = (ulong)(uint)fVar51;
          fVar54 = fVar54 + (float)((ulong)in_stack_00001268 >> 0x20);
          uVar50 = (ulong)(uint)fVar54;
          if (bVar13) {
            fVar58 = fVar56;
          }
          fVar58 = fVar58 - (float)((ulong)in_stack_00001260 >> 0x20);
          if (fVar58 <= fStack00000000000000d8) {
            fStack00000000000000d8 = fVar58;
          }
          if (fStack00000000000000c8 <= fVar48) {
            fStack00000000000000c8 = fVar48;
          }
          uVar46 = (ulong)(uint)fStack00000000000000c8;
          if (fVar51 <= fStack00000000000000dc) {
            fStack00000000000000dc = fVar51;
          }
          if (fStack00000000000000c0 <= fVar54) {
            fStack00000000000000c0 = fVar54;
          }
        }
        else {
          if (fVar51 <= fStack00000000000000dc) {
            fStack00000000000000dc = fVar51;
          }
          uVar46 = (ulong)(uint)fStack00000000000000dc;
          if (fStack00000000000000c0 <= fVar54) {
            fStack00000000000000c0 = fVar54;
          }
          bVar13 = (uVar15 & 1) == 0;
          if (bVar13) {
            fVar58 = fVar56;
          }
          fVar58 = (fVar58 + (fStack00000000000000c8 - (float)in_stack_00001268)) * 0.5;
          uVar50 = (ulong)(uint)fVar58;
          fStack00000000000000dc = fVar51 - fVar57;
          uVar47 = (ulong)in_stack_000000b8._4_4_;
          if (bVar13) {
            fVar48 = fVar52;
          }
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000d8,uVar46,uVar47,uVar50,fStack00000000000000c0,uVar47);
          fStack00000000000000c8 = fVar48 + fVar55;
          in_stack_000000b8._4_4_ = 0;
          fStack00000000000000c0 = fVar54 + fVar59;
          fStack00000000000000d8 = fVar58;
          in_stack_00001260 = uVar22;
          in_stack_00001268 = uVar21;
          in_stack_00001270 = fVar57;
        }
        if (((*in_stack_00000178 == 1) || (uVar8 == uVar2)) ||
           (((int)uVar3 <= (int)uVar8 || (!bVar1)))) {
          uVar47 = (ulong)in_stack_000000b8._4_4_;
          uVar46 = (ulong)(uint)fStack00000000000000dc;
          uVar50 = (ulong)(uint)fStack00000000000000c8;
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000d8,uVar46,uVar47,uVar50,fStack00000000000000c0,uVar47);
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
      }
      iVar16 = *in_stack_00000178;
      iVar39 = iVar39 + 1;
      lVar37 = lVar37 + 0x178;
      bVar1 = iVar16 <= (int)uVar20;
      uVar20 = uVar20 + 1;
      uVar49 = uVar4;
      if (bVar1) goto LAB_04ca9d00;
      goto LAB_04ca7b5c;
    }
    iStack00000000000000cc = 0;
    iVar14 = 0;
    goto LAB_04ca9d20;
  }
  pcVar31 = *(code **)(*unaff_x19 + 0x948);
LAB_04caa2f8:
  (*pcVar31)();
LAB_04caa300:
  if (*(int *)(*(long *)PTR_DAT_06dc37e8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_04808ce4();
  return;
LAB_04ca9d00:
  lVar23 = *in_stack_00000180;
  if (lVar23 == 0) goto LAB_04caa2e0;
  iVar14 = uVar4 + 1;
LAB_04ca9d20:
  lVar37 = *(long *)(lVar23 + 0x60);
  if (lVar37 == 0) goto LAB_04caa2e0;
  if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
  *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x50 + 0x28) = iVar18;
  *(int *)(lVar23 + 0x18) = iVar16;
  lVar37 = unaff_x19[0xd6];
  iVar18 = iStack00000000000000cc;
  if (iVar16 < 1) {
    iVar18 = 1;
  }
  if (iStack00000000000000cc == 0) {
    iVar18 = 1;
  }
  *(int *)(lVar23 + 0x2c) = iVar14;
  *(int *)(lVar23 + 0x1c) = (int)lVar37;
  *(int *)(lVar23 + 0x24) = iVar18;
  *(int *)(lVar23 + 0x30) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
  if (((int)unaff_x19[0x69] == 0xff) &&
     (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) != 0)) {
    lVar23 = unaff_x19[0xe1];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*in_stack_00000180,*(undefined8 *)(lVar23 + 0x28));
    }
    if (unaff_x19[0xe7] != 0) {
      iVar18 = FUN_036e12d0(unaff_x19[0xe7],0);
      if (iVar18 != 0x19) {
        lVar23 = unaff_x19[0xe7];
        if (lVar23 == 0) goto LAB_04caa2e0;
        uVar19 = FUN_036e12d0(lVar23,0);
        FUN_036e130c(lVar23,uVar19 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
        if ((*in_stack_00000180 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000180 + 0x60), lVar23 == 0)) goto LAB_04caa2e0;
        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
        FUN_051ef288(lVar23 + 0x20,1,0);
      }
      if (unaff_x19[0x7a] != 0) {
        FUN_04874e78(unaff_x19[0x7a],0);
        if ((unaff_x19[0x73] != 0) && (lVar23 = *(long *)(unaff_x19[0x73] + 0x60), lVar23 != 0)) {
          if (*(int *)(lVar23 + 0x18) == 0) {
LAB_04caa4c0:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (unaff_x19[0x7a] != 0) {
            FUN_0486f29c(unaff_x19[0x7a],*(undefined8 *)(lVar23 + 0x30),0);
            if ((unaff_x19[0x73] != 0) && (lVar23 = *(long *)(unaff_x19[0x73] + 0x60), lVar23 != 0))
            {
              if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
              if (unaff_x19[0x7a] != 0) {
                FUN_04870fa8(unaff_x19[0x7a],0,*(undefined8 *)(lVar23 + 0x48),0);
                if ((unaff_x19[0x73] != 0) &&
                   (lVar23 = *(long *)(unaff_x19[0x73] + 0x60), lVar23 != 0)) {
                  if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
                  if (unaff_x19[0x7a] != 0) {
                    FUN_0486f54c(unaff_x19[0x7a],*(undefined8 *)(lVar23 + 0x50),0);
                    if ((unaff_x19[0x73] != 0) &&
                       (lVar23 = *(long *)(unaff_x19[0x73] + 0x60), lVar23 != 0)) {
                      if (*(int *)(lVar23 + 0x18) == 0) goto LAB_04caa4c0;
                      if (unaff_x19[0x7a] != 0) {
                        FUN_0486fab4(unaff_x19[0x7a],*(undefined8 *)(lVar23 + 0x58),0);
                        if (unaff_x19[0x7a] != 0) {
                          FUN_0487497c(unaff_x19[0x7a],0);
                          if (unaff_x19[0xe6] != 0) {
                            FUN_036e059c(unaff_x19[0xe6],unaff_x19[0x7a],0);
                            if (unaff_x19[0xe6] != 0) {
                              uVar21 = FUN_036e022c(unaff_x19[0xe6],0);
                              if (unaff_x19[0xe6] != 0) {
                                uVar19 = FUN_036e0094(unaff_x19[0xe6],0);
                                lVar23 = *in_stack_00000180;
                                if (lVar23 != 0) {
                                  lVar29 = 0;
                                  lVar37 = 0;
                                  do {
                                    uVar24 = lVar37 + 1;
                                    if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar24)
                                    goto LAB_04caa2e4;
                                    lVar23 = *(long *)(lVar23 + 0x60);
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                    FUN_051ef154(lVar23 + lVar29 + 0x70,0);
                                    lVar23 = unaff_x19[0xe3];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                    uVar22 = *(undefined8 *)(lVar23 + lVar37 * 8 + 0x28);
                                    if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                                      thunk_FUN_016466fc();
                                    }
                                    uVar25 = FUN_051d94d4(uVar22,0,0);
                                    if ((uVar25 & 1) == 0) {
                                      if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar23 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar23 == 0)) break;
                                        if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                        FUN_051ef288(lVar23 + lVar29 + 0x70,1,0);
                                      }
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if (lVar23 == 0) break;
                                      lVar23 = FUN_051f9514(lVar23,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar32 = *(long *)(*in_stack_00000180 + 0x60), lVar32 == 0
                                         )) break;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      if (lVar23 == 0) break;
                                      FUN_0486f29c(lVar23,*(undefined8 *)(lVar32 + lVar29 + 0x80),0)
                                      ;
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if (lVar23 == 0) break;
                                      lVar23 = FUN_051f9514(lVar23,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar32 = *(long *)(*in_stack_00000180 + 0x60), lVar32 == 0
                                         )) break;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      if (lVar23 == 0) break;
                                      FUN_04870fa8(lVar23,0,*(undefined8 *)(lVar32 + lVar29 + 0x98),
                                                   0);
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if (lVar23 == 0) break;
                                      lVar23 = FUN_051f9514(lVar23,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar32 = *(long *)(*in_stack_00000180 + 0x60), lVar32 == 0
                                         )) break;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      if (lVar23 == 0) break;
                                      FUN_0486f54c(lVar23,*(undefined8 *)(lVar32 + lVar29 + 0xa0),0)
                                      ;
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if (lVar23 == 0) break;
                                      lVar23 = FUN_051f9514(lVar23,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar32 = *(long *)(*in_stack_00000180 + 0x60), lVar32 == 0
                                         )) break;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      if (lVar23 == 0) break;
                                      FUN_0486fab4(lVar23,*(undefined8 *)(lVar32 + lVar29 + 0xa8),0)
                                      ;
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if ((lVar23 == 0) ||
                                         (lVar23 = FUN_051f9514(lVar23,0), lVar23 == 0)) break;
                                      FUN_0487497c(lVar23,0);
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if (lVar23 == 0) break;
                                      lVar23 = FUN_03663ff0(lVar23,0);
                                      lVar32 = unaff_x19[0xe3];
                                      if (lVar32 == 0) break;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar32 = *(long *)(lVar32 + lVar37 * 8 + 0x28);
                                      if ((lVar32 == 0) ||
                                         (uVar22 = FUN_051f9514(lVar32,0), lVar23 == 0)) break;
                                      FUN_036e059c(lVar23,uVar22,0);
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if ((lVar23 == 0) ||
                                         (lVar23 = FUN_03663ff0(lVar23,0), lVar23 == 0)) break;
                                      FUN_036e0194(uVar21,uVar46,uVar47,uVar50,lVar23,0);
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      lVar23 = *(long *)(lVar23 + lVar37 * 8 + 0x28);
                                      if ((lVar23 == 0) ||
                                         (lVar23 = FUN_03663ff0(lVar23,0), lVar23 == 0)) break;
                                      FUN_036e00d0(lVar23,uVar19 & 1,0);
                                      lVar23 = unaff_x19[0xe3];
                                      if (lVar23 == 0) break;
                                      if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_04caa4c0;
                                      plVar38 = *(long **)(lVar23 + lVar37 * 8 + 0x28);
                                      uVar20 = (**(code **)(*unaff_x19 + 0x2b8))();
                                      if (plVar38 == (long *)0x0) break;
                                      (**(code **)(*plVar38 + 0x2c8))
                                                (plVar38,uVar20 & 1,
                                                 *(undefined8 *)(*plVar38 + 0x2d0));
                                    }
                                    lVar23 = *in_stack_00000180;
                                    lVar37 = lVar37 + 1;
                                    lVar29 = lVar29 + 0x50;
                                  } while (lVar23 != 0);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_04caa2e0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_04caa2e4:
  if ((char)unaff_x19[0xde] == '\0') goto LAB_04caa300;
  pcVar31 = *(code **)(*unaff_x19 + 0x798);
  goto LAB_04caa2f8;
}


