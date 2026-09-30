/*
FUNCTION_NAME: System.ComponentModel.ReflectPropertyDescriptor$$AddValueChanged
ENTRY_POINT: 04ca73bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_ComponentModel_ReflectPropertyDescriptor__AddValueChanged
               (long param_1,float param_2,float param_3)

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
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  uint uVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  int in_w9;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long *unaff_x19;
  long *unaff_x20;
  long lVar35;
  undefined8 uVar36;
  long *plVar37;
  int iVar38;
  long lVar39;
  uint uVar40;
  long *unaff_x27;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  ulong uVar45;
  ulong uVar46;
  float fVar47;
  uint uVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
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
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
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
  undefined4 in_stack_00001274;
  float in_stack_00001288;
  double in_stack_00001290;
  
  uStack00000000000000a8 = in_stack_000000e0;
  fStack00000000000000b0 = param_2;
  if (in_w9 == 0x400) {
    if (param_1 == 0) goto LAB_04caa2e0;
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_04caa4c0;
    if ((int)unaff_x19[0x61] == 5) {
      if ((*unaff_x27 == 0) || (lVar25 = *(long *)(*unaff_x27 + 0x58), lVar25 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar25 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
      in_stack_00001288 = *(float *)(lVar25 + (long)(int)uStack000000000000003c * 0x14 + 0x30);
    }
    fStack00000000000000b0 = fStack0000000000000038 + 0.0 + *(float *)(param_1 + 0x20);
    param_3 = in_stack_00000030._4_4_ + (0.0 - in_stack_00001288);
    uStack00000000000000a8 =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) + 0.0,
                  (float)*(undefined8 *)(param_1 + 0x24) + param_3);
  }
  if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
  uVar20 = FUN_036e1620(unaff_x19[0xe7],0);
  puVar12 = PTR_DAT_06e124b8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x20);
  }
  uVar21 = FUN_051d94d4(uVar20,0,0);
  lVar25 = FUN_04ec8f8c();
  if (lVar25 == 0) goto LAB_04caa2e0;
  FUN_04f1cc5c(lVar25,0);
  *(float *)(unaff_x19 + 0xe4) = param_3;
  if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
  iVar14 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(unaff_x19[0xe7],0);
  if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
  fVar41 = (float)FUN_036e0f48(unaff_x19[0xe7],0);
  __x = DAT_0534bb48;
  dVar43 = modf(DAT_0534bb48,(double *)&stack0x00001290);
  if (dVar43 == 0.5) {
    fVar42 = (float)in_stack_00001290;
    if (((long)in_stack_00001290 & 1U) != 0) {
      fVar42 = (float)in_stack_00001290 + 1.0;
    }
  }
  else {
    fVar42 = 255.0;
  }
  dVar43 = modf(__x,(double *)&stack0x00001290);
  if (dVar43 == 0.5) {
    fVar57 = (float)in_stack_00001290;
    if (((long)in_stack_00001290 & 1U) != 0) {
      fVar57 = (float)in_stack_00001290 + 1.0;
    }
  }
  else {
    fVar57 = 255.0;
  }
  dVar43 = modf(__x,(double *)&stack0x00001290);
  if (dVar43 == 0.5) {
    fVar47 = (float)in_stack_00001290;
    if (((long)in_stack_00001290 & 1U) != 0) {
      fVar47 = (float)in_stack_00001290 + 1.0;
    }
  }
  else {
    fVar47 = 255.0;
  }
  dVar43 = modf(__x,(double *)&stack0x00001290);
  if (dVar43 == 0.5) {
    fVar51 = (float)in_stack_00001290;
    if (((long)in_stack_00001290 & 1U) != 0) {
      fVar51 = (float)in_stack_00001290 + 1.0;
    }
  }
  else {
    fVar51 = 255.0;
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
  lVar25 = *(long *)PTR_DAT_06e124b8;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar25 = *(long *)puVar12;
  }
  puVar26 = *(undefined4 **)(lVar25 + 0xb8);
  uVar45 = (ulong)(uint)puVar26[1];
  uVar46 = (ulong)(uint)puVar26[2];
  uVar49 = (ulong)(uint)puVar26[3];
  FUN_0480b01c(*puVar26,uVar45,uVar46,uVar49,&stack0x00001260,0x4000ffff,0);
  if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar25 = *in_stack_00000180;
  if (lVar25 == 0) goto LAB_04caa2e0;
  iVar16 = *in_stack_00000178;
  if (0 < iVar16) {
    lVar25 = *(long *)(lVar25 + 0x38);
    param_3 = ABS(param_3);
    fVar44 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar44 = param_3;
    }
    if (lVar25 == 0) goto LAB_04caa2e0;
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
         (int)fVar42 & 0xffU | ((int)fVar57 & 0xffU) << 8 | ((int)fVar47 & 0xffU) << 0x10 |
         (int)fVar51 << 0x18;
    fStack0000000000000084 = fStack00000000000000d8;
    fStack0000000000000088 = 0.0;
    fStack0000000000000120 = 0.0;
    fStack0000000000000060 = 0.0;
    fStack00000000000000a0 = 0.0;
    fStack000000000000005c = 0.0;
    iVar38 = 0;
    lVar35 = 0x2dc;
    uVar18 = 0;
    fVar42 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack00000000000000c0 = fStack00000000000000dc;
    fStack0000000000000074 = fStack00000000000000dc;
    uStack0000000000000078 = in_stack_000000b8._4_4_;
    fStack0000000000000094 = fStack00000000000000dc;
    fStack0000000000000098 = fStack00000000000000d8;
    uStack0000000000000090 = in_stack_000000b8._4_4_;
    uVar19 = 1;
    uVar48 = 0;
LAB_04ca7b5c:
    uVar8 = uVar19 - 1;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar39 = (long)(int)uVar8;
    lVar27 = lVar25 + lVar39 * 0x178;
    lVar29 = *(long *)(lVar27 + 0x40);
    uVar6 = *(ushort *)(lVar27 + 0x24);
    uVar24 = (uint)uVar6;
    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar15 = FUN_028fcbcc(uVar6,0);
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x50), lVar27 == 0))
    goto LAB_04caa2e0;
    uVar4 = *(uint *)(lVar25 + lVar39 * 0x178 + 0x5c);
    if (*(uint *)(lVar27 + 0x18) <= uVar4) goto LAB_04caa4c0;
    lVar34 = (long)(int)uVar4;
    lVar27 = lVar27 + lVar34 * 0x60;
    fVar58 = *(float *)(lVar27 + 0x60);
    fVar56 = *(float *)(lVar27 + 100);
    uVar40 = *(uint *)(lVar27 + 0x6c);
    iVar16 = *(int *)(lVar27 + 0x20);
    iVar17 = *(int *)(lVar27 + 0x28);
    iVar5 = *(int *)(lVar27 + 0x30);
    uVar2 = *(uint *)(lVar27 + 0x40);
    uVar3 = *(uint *)(lVar27 + 0x44);
    lVar32 = (long)(int)uVar3;
    fVar47 = *(float *)(lVar27 + 0x50);
    fVar50 = *(float *)(lVar27 + 0x58);
    fVar59 = *(float *)(lVar27 + 0x5c);
    fVar53 = *(float *)(lVar27 + 0x70);
    fVar55 = *(float *)(lVar27 + 0x74);
    fVar57 = *(float *)(lVar27 + 0x78);
    fVar51 = *(float *)(lVar27 + 0x7c);
    fVar54 = fVar58 + fVar56;
    plVar37 = (long *)PTR_DAT_06e50440;
    if ((int)uVar40 < 9) {
      switch(uVar40) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000e8._4_4_ = fVar56 + 0.0;
        }
        else {
          in_stack_000000e8._4_4_ = 0.0 - fVar59;
        }
        break;
      case 2:
        in_stack_000000e8._4_4_ = (fVar56 + fVar58 * 0.5) - fVar59 * 0.5;
        break;
      case 3:
        goto switchD_04ca7cb8_caseD_3;
      case 4:
        in_stack_000000e8._4_4_ = fVar54 - fVar59;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000e8._4_4_ = fVar54;
        }
        break;
      default:
        if ((((((uVar24 != 3) && (uVar24 != 0x2060)) && (uVar24 != 0x200b)) &&
             ((uVar24 != 0xad && (uVar24 != 10)))) && ((int)uVar8 <= (int)uVar3)) && (uVar40 == 8))
        goto LAB_04ca7d74;
        goto switchD_04ca7cb8_caseD_3;
      }
      in_stack_000000e0 = 0;
    }
    else if (uVar40 == 0x10) {
      if ((int)uVar8 <= (int)uVar3) {
        if (uVar24 < 0xad) {
          if ((uVar24 != 3) && (uVar24 != 10)) goto LAB_04ca7d74;
        }
        else if ((uVar24 != 0xad) && ((uVar24 != 0x200b && (uVar24 != 0x2060)))) {
LAB_04ca7d74:
          if (uVar2 < *(uint *)(lVar25 + 0x18)) {
            uVar7 = *(undefined2 *)(lVar25 + (long)(int)uVar2 * 0x178 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar21 = FUN_02900324(uVar7,0);
            plVar37 = (long *)PTR_DAT_06e50440;
            if ((uVar21 & 1) == 0) {
              bVar1 = (int)uVar4 < (int)unaff_x19[0x96];
            }
            else {
              bVar1 = false;
            }
            if ((fVar58 < fVar59) || (bVar1 || (uVar40 >> 4 & 1) != 0)) {
              if ((uVar19 == 1) ||
                 ((uVar4 != uVar48 || (uVar8 == *(uint *)((long)unaff_x19 + 0x354))))) {
                in_stack_000000e8._4_4_ = fVar56;
                if ((char)unaff_x19[0x1d] != '\0') {
                  in_stack_000000e8._4_4_ = fVar54;
                }
                if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                uStack0000000000000040 = FUN_029007b8(uVar24,0);
                in_stack_000000e0 = 0;
              }
              else {
                cVar23 = (char)unaff_x19[0x1d];
                iVar5 = (iVar5 - iVar16) - (uStack0000000000000040 & 1);
                fVar54 = -fVar59;
                if (cVar23 != '\0') {
                  fVar54 = fVar59;
                }
                fVar56 = 1.0;
                if (0 < iVar5) {
                  fVar56 = *(float *)((long)unaff_x19 + 0x304);
                }
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                uVar20 = CONCAT44((float)((ulong)in_stack_000000e0 >> 0x20) + 0.0,
                                  (float)in_stack_000000e0 + 0.0);
                if (uVar24 == 9) {
LAB_04ca9ca8:
                  fVar54 = ((fVar58 + fVar54) * (1.0 - fVar56)) / (float)iVar5;
                  plVar37 = (long *)PTR_DAT_06e50440;
                  if (cVar23 == '\0') {
                    in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar54;
                    in_stack_000000e0 = uVar20;
                  }
                  else {
                    in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar54;
                  }
                }
                else {
                  if (uVar24 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                    }
                    uVar21 = FUN_029007b8(uVar24,0);
                    cVar23 = (char)unaff_x19[0x1d];
                    if ((uVar21 & 1) != 0) goto LAB_04ca9ca8;
                  }
                  fVar54 = ((fVar58 + fVar54) * fVar56) /
                           (float)(int)((iVar16 - (~uStack0000000000000040 & 1)) + iVar17);
                  plVar37 = (long *)PTR_DAT_06e50440;
                  if (cVar23 == '\0') {
                    in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar54;
                    in_stack_000000e0 = uVar20;
                  }
                  else {
                    in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar54;
                  }
                }
              }
            }
            else {
              in_stack_000000e8._4_4_ = fVar56;
              if ((char)unaff_x19[0x1d] != '\0') {
                in_stack_000000e8._4_4_ = fVar54;
              }
              in_stack_000000e0 = 0;
            }
            goto switchD_04ca7cb8_caseD_3;
          }
          goto LAB_04caa4c0;
        }
      }
    }
    else if (uVar40 == 0x20) {
      in_stack_000000e8._4_4_ = (fVar56 + fVar58 * 0.5) - (fVar53 + fVar57) * 0.5;
      in_stack_000000e0 = 0;
    }
switchD_04ca7cb8_caseD_3:
    uVar40 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar40 <= uVar8) goto LAB_04caa4c0;
    lVar27 = lVar25 + lVar39 * 0x178;
    fVar54 = fStack00000000000000b0 + in_stack_000000e8._4_4_;
    fVar56 = (float)uStack00000000000000a8 + (float)in_stack_000000e0;
    fVar58 = (float)((ulong)uStack00000000000000a8 >> 0x20) +
             (float)((ulong)in_stack_000000e0 >> 0x20);
    if (*(char *)(lVar27 + 400) == '\0') goto LAB_04ca8744;
    iVar16 = *(int *)(lVar25 + lVar39 * 0x178 + 0x20);
    if (iVar16 != 0) goto LAB_04ca8414;
    fVar42 = fmodf(*(float *)((long)unaff_x19 + 0x344) * (float)(int)uVar4,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x33c)) {
    case 0:
      lVar28 = lVar25 + lVar39 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar42 = 1.0;
      break;
    case 1:
      fVar51 = *(float *)(lVar25 + lVar39 * 0x178 + 0x68);
      if (*(int *)((long)unaff_x19 + 0x294) == 0x208) {
        lVar28 = lVar25 + lVar39 * 0x178;
        fVar57 = (in_stack_000000e8._4_4_ + fVar51) - *(float *)(unaff_x19 + 0x9d);
        fVar51 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
        goto LAB_04ca7fd8;
      }
      lVar28 = lVar25 + lVar39 * 0x178;
      fVar57 = fVar57 - fVar53;
      *(float *)(lVar28 + 0x84) = fVar42 + (fVar51 - fVar53) / fVar57;
      *(float *)(lVar28 + 0xac) = fVar42 + (*(float *)(lVar28 + 0x90) - fVar53) / fVar57;
      *(float *)(lVar28 + 0xd4) = fVar42 + (*(float *)(lVar28 + 0xb8) - fVar53) / fVar57;
      fVar42 = fVar42 + (*(float *)(lVar28 + 0xe0) - fVar53) / fVar57;
      break;
    case 2:
      lVar28 = lVar25 + lVar39 * 0x178;
      fVar51 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
      fVar57 = (in_stack_000000e8._4_4_ + *(float *)(lVar28 + 0x68)) - *(float *)(unaff_x19 + 0x9d);
LAB_04ca7fd8:
      *(float *)(lVar28 + 0x84) = fVar42 + fVar57 / fVar51;
      *(float *)(lVar28 + 0xac) =
           fVar42 + ((in_stack_000000e8._4_4_ + *(float *)(lVar28 + 0x90)) -
                    *(float *)(unaff_x19 + 0x9d)) /
                    (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
      *(float *)(lVar28 + 0xd4) =
           fVar42 + ((in_stack_000000e8._4_4_ + *(float *)(lVar28 + 0xb8)) -
                    *(float *)(unaff_x19 + 0x9d)) /
                    (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
      fVar42 = fVar42 + ((in_stack_000000e8._4_4_ + *(float *)(lVar28 + 0xe0)) -
                        *(float *)(unaff_x19 + 0x9d)) /
                        (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
      break;
    case 3:
      switch((int)unaff_x19[0x68]) {
      case 0:
        lVar28 = lVar25 + lVar39 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar25 + lVar39 * 0x178;
        fVar51 = fVar51 - fVar55;
        fVar57 = fVar42 + (*(float *)(lVar28 + 0x6c) - fVar55) / fVar51;
        fVar51 = fVar42 + (*(float *)(lVar28 + 0x94) - fVar55) / fVar51;
        *(float *)(lVar28 + 0x88) = fVar57;
        *(float *)(lVar28 + 0xb0) = fVar51;
        *(float *)(lVar28 + 0xd8) = fVar57;
        *(float *)(lVar28 + 0x100) = fVar51;
        break;
      case 2:
        lVar28 = lVar25 + lVar39 * 0x178;
        fVar57 = fVar42 + (*(float *)(lVar28 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
                          (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec)
                          );
        *(float *)(lVar28 + 0x88) = fVar57;
        fVar51 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
        *(float *)(lVar28 + 0xd8) = fVar57;
        fVar57 = fVar42 + (*(float *)(lVar28 + 0x94) - fVar51) / (fVar53 - fVar51);
        *(float *)(lVar28 + 0xb0) = fVar57;
        *(float *)(lVar28 + 0x100) = fVar57;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_048662d8(*(undefined8 *)PTR_DAT_06da50d0,0);
        uVar40 = (uint)*(undefined8 *)(lVar25 + 0x18);
      }
      if (uVar40 <= uVar8) goto LAB_04caa4c0;
      lVar28 = lVar25 + lVar39 * 0x178;
      fVar57 = *(float *)(lVar28 + 0x158);
      fVar51 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar57) * 0.5;
      fVar53 = fVar42 + *(float *)(lVar28 + 0x88) * fVar57 + fVar51;
      fVar42 = fVar42 + fVar51 + *(float *)(lVar28 + 0xb0) * fVar57;
      *(float *)(lVar28 + 0x84) = fVar53;
      *(float *)(lVar28 + 0xac) = fVar53;
      *(float *)(lVar28 + 0xd4) = fVar42;
      break;
    default:
      goto switchD_04ca7ef8_default;
    }
    *(float *)(lVar25 + lVar39 * 0x178 + 0xfc) = fVar42;
switchD_04ca7ef8_default:
    switch((int)unaff_x19[0x68]) {
    case 0:
      if (uVar40 <= uVar8) goto LAB_04caa4c0;
      lVar28 = lVar25 + lVar39 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar40) {
        lVar28 = lVar25 + lVar39 * 0x178;
        fVar47 = fVar47 - fVar50;
        fVar42 = (*(float *)(lVar28 + 0x6c) - fVar50) / fVar47;
        fVar47 = (*(float *)(lVar28 + 0x94) - fVar50) / fVar47;
        *(float *)(lVar28 + 0x88) = fVar42;
        goto LAB_04ca8338;
      }
      goto LAB_04caa4c0;
    case 2:
      if (uVar40 <= uVar8) goto LAB_04caa4c0;
      lVar28 = lVar25 + lVar39 * 0x178;
      fVar42 = (*(float *)(lVar28 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
               (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
      *(float *)(lVar28 + 0x88) = fVar42;
      fVar47 = (*(float *)(lVar28 + 0x94) - *(float *)((long)unaff_x19 + 0x4ec)) /
               (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
LAB_04ca8338:
      *(float *)(lVar28 + 0xb0) = fVar47;
      *(float *)(lVar28 + 0xd8) = fVar47;
      *(float *)(lVar28 + 0x100) = fVar42;
      break;
    case 3:
      if (uVar40 <= uVar8) goto LAB_04caa4c0;
      lVar28 = lVar25 + lVar39 * 0x178;
      fVar47 = *(float *)(lVar28 + 0x158);
      fVar57 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar47) * 0.5;
      fVar42 = *(float *)(lVar28 + 0x84) / fVar47 + fVar57;
      fVar57 = fVar57 + *(float *)(lVar28 + 0xd4) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar42;
      *(float *)(lVar28 + 0xb0) = fVar57;
      *(float *)(lVar28 + 0x100) = fVar42;
      *(float *)(lVar28 + 0xd8) = fVar57;
    }
    if (uVar40 <= uVar8) goto LAB_04caa4c0;
    lVar28 = lVar25 + lVar39 * 0x178;
    fVar42 = *(float *)(lVar28 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x5f));
    if ((*(char *)(lVar28 + 0x54) == '\0') &&
       ((*(byte *)(lVar25 + lVar39 * 0x178 + 0x18c) & 1) != 0)) {
      fVar42 = -fVar42;
    }
    fVar57 = param_3;
    if (((iVar14 == 2) || (fVar57 = fVar44, iVar14 == 1)) ||
       (fVar57 = param_3 / fVar41, iVar14 == 0)) {
      fVar42 = fVar57 * fVar42;
    }
    lVar28 = lVar25 + lVar39 * 0x178;
    *(float *)(lVar28 + 0x80) = fVar42;
    *(float *)(lVar28 + 0xa8) = fVar42;
    *(float *)(lVar28 + 0xd0) = fVar42;
    *(float *)(lVar28 + 0xf8) = fVar42;
LAB_04ca8414:
    if (((int)uVar8 < (int)unaff_x19[0x6b]) &&
       (iStack00000000000000cc < *(int *)((long)unaff_x19 + 0x35c))) {
      if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] != 5)) {
        if (uVar40 <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar25 + lVar39 * 0x178;
        *(ulong *)(lVar27 + 0x68) =
             CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar27 + 0x68));
        *(float *)(lVar27 + 0x70) = fVar58 + *(float *)(lVar27 + 0x70);
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar25 + lVar39 * 0x178;
        *(ulong *)(lVar27 + 0x90) =
             CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar27 + 0x90));
        *(float *)(lVar27 + 0x98) = fVar58 + *(float *)(lVar27 + 0x98);
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar25 + lVar39 * 0x178;
        *(ulong *)(lVar27 + 0xb8) =
             CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0xb8) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar27 + 0xb8));
        *(float *)(lVar27 + 0xc0) = fVar58 + *(float *)(lVar27 + 0xc0);
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar25 + lVar39 * 0x178;
        uVar20 = *(undefined8 *)(lVar27 + 0xe0);
        fVar57 = *(float *)(lVar27 + 0xe8);
LAB_04ca870c:
        *(ulong *)(lVar27 + 0xe0) =
             CONCAT44(fVar56 + (float)((ulong)uVar20 >> 0x20),fVar54 + (float)uVar20);
        *(float *)(lVar27 + 0xe8) = fVar58 + fVar57;
        if (iVar16 == 0) goto LAB_04ca8720;
LAB_04ca8648:
        if (iVar16 == 1) {
          pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
          goto LAB_04ca872c;
        }
        goto LAB_04ca8744;
      }
      if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] == 5)) {
        if (uVar8 < uVar40) {
          if (*(uint *)(lVar25 + lVar39 * 0x178 + 0x60) != uStack000000000000003c)
          goto LAB_04ca852c;
          lVar27 = lVar25 + lVar39 * 0x178;
          *(ulong *)(lVar27 + 0x68) =
               CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20),
                        fVar54 + (float)*(undefined8 *)(lVar27 + 0x68));
          *(float *)(lVar27 + 0x70) = fVar58 + *(float *)(lVar27 + 0x70);
          if (uVar8 < *(uint *)(lVar25 + 0x18)) {
            lVar27 = lVar25 + lVar39 * 0x178;
            *(ulong *)(lVar27 + 0x90) =
                 CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar27 + 0x90));
            *(float *)(lVar27 + 0x98) = fVar58 + *(float *)(lVar27 + 0x98);
            if (uVar8 < *(uint *)(lVar25 + 0x18)) {
              lVar27 = lVar25 + lVar39 * 0x178;
              *(ulong *)(lVar27 + 0xb8) =
                   CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0xb8) >> 0x20),
                            fVar54 + (float)*(undefined8 *)(lVar27 + 0xb8));
              *(float *)(lVar27 + 0xc0) = fVar58 + *(float *)(lVar27 + 0xc0);
              if (uVar8 < *(uint *)(lVar25 + 0x18)) {
                lVar27 = lVar25 + lVar39 * 0x178;
                uVar20 = *(undefined8 *)(lVar27 + 0xe0);
                fVar57 = *(float *)(lVar27 + 0xe8);
                goto LAB_04ca870c;
              }
            }
          }
        }
        goto LAB_04caa4c0;
      }
    }
LAB_04ca852c:
    if (uVar40 <= uVar8) goto LAB_04caa4c0;
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(plVar37);
      DAT_0722a13e = '\x01';
    }
    lVar28 = lVar25 + lVar39 * 0x178;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*plVar37 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + 0x68) = **(undefined8 **)(*plVar37 + 0xb8);
    *(undefined4 *)(lVar28 + 0x70) = uVar52;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar28 = lVar25 + lVar39 * 0x178;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*plVar37 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + 0x90) = **(undefined8 **)(*plVar37 + 0xb8);
    *(undefined4 *)(lVar28 + 0x98) = uVar52;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar28 = lVar25 + lVar39 * 0x178;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*plVar37 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + 0xb8) = **(undefined8 **)(*plVar37 + 0xb8);
    *(undefined4 *)(lVar28 + 0xc0) = uVar52;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar28 = lVar25 + lVar39 * 0x178;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*plVar37 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + 0xe0) = **(undefined8 **)(*plVar37 + 0xb8);
    *(undefined4 *)(lVar28 + 0xe8) = uVar52;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_04caa4c0;
    *(undefined1 *)(lVar27 + 400) = 0;
    if (iVar16 != 0) goto LAB_04ca8648;
LAB_04ca8720:
    pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_04ca872c:
    (*pcVar30)();
LAB_04ca8744:
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar27 = lVar27 + lVar39 * 0x178;
    uVar20 = *(undefined8 *)(lVar27 + 0x114);
    *(undefined8 *)(lVar27 + 0x114) =
         CONCAT44(fVar56 + (float)((ulong)uVar20 >> 0x20),fVar54 + (float)uVar20);
    *(float *)(lVar27 + 0x11c) = fVar58 + *(float *)(lVar27 + 0x11c);
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar27 = lVar27 + lVar39 * 0x178;
    *(ulong *)(lVar27 + 0x108) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x108) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar27 + 0x108));
    *(float *)(lVar27 + 0x110) = fVar58 + *(float *)(lVar27 + 0x110);
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar27 = lVar27 + lVar39 * 0x178;
    *(ulong *)(lVar27 + 0x120) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x120) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar27 + 0x120));
    *(float *)(lVar27 + 0x128) = fVar58 + *(float *)(lVar27 + 0x128);
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
    lVar27 = lVar27 + lVar39 * 0x178;
    *(float *)(lVar27 + 300) = fVar54 + *(float *)(lVar27 + 300);
    *(ulong *)(lVar27 + 0x130) =
         CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x130) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar27 + 0x130));
    lVar27 = *in_stack_00000180;
    if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_04caa2e0;
    uVar40 = *(uint *)(lVar28 + 0x18);
    if (uVar40 <= uVar8) goto LAB_04caa4c0;
    lVar31 = lVar28 + lVar39 * 0x178;
    uVar45 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar31 + 0x138) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar31 + 0x138));
    fVar57 = fVar56 + *(float *)(lVar31 + 0x148);
    uVar46 = (ulong)(uint)fVar57;
    uVar49 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                      fVar56 + (float)*(undefined8 *)(lVar31 + 0x140));
    *(ulong *)(lVar31 + 0x138) = uVar45;
    *(ulong *)(lVar31 + 0x140) = uVar49;
    *(float *)(lVar31 + 0x148) = fVar57;
    if (uVar4 == uVar48) {
      uVar48 = *in_stack_00000178 - 1;
      if (uVar8 == uVar48) goto LAB_04ca8950;
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar27 + 0x18) <= uVar48) goto LAB_04caa4c0;
      lVar31 = (long)(int)uVar48;
      lVar33 = lVar27 + lVar31 * 0x60;
      uVar49 = (ulong)(uint)*(float *)(lVar33 + 0x5c);
      fVar57 = fVar56 + *(float *)(lVar33 + 0x58);
      uVar45 = (ulong)(uint)fVar57;
      fVar47 = fVar54 + *(float *)(lVar33 + 0x5c);
      uVar46 = (ulong)(uint)fVar47;
      *(ulong *)(lVar33 + 0x50) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar33 + 0x50) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar33 + 0x50));
      *(float *)(lVar33 + 0x58) = fVar57;
      *(float *)(lVar33 + 0x5c) = fVar47;
      if (uVar40 <= *(uint *)(lVar33 + 0x38)) goto LAB_04caa4c0;
      uVar52 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar33 + 0x38) * 0x178 + 0x114);
      lVar27 = lVar27 + lVar31 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar57;
      *(undefined4 *)(lVar27 + 0x70) = uVar52;
      lVar27 = *in_stack_00000180;
      if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar28 + 0x18) <= uVar48) goto LAB_04caa4c0;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_04caa2e0;
      uVar48 = *(uint *)(lVar28 + lVar31 * 0x60 + 0x44);
      if (*(uint *)(lVar27 + 0x18) <= uVar48) goto LAB_04caa4c0;
      lVar28 = lVar28 + lVar31 * 0x60;
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar48 * 0x178 + 0x120);
      *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
      uVar48 = *in_stack_00000178 - 1;
LAB_04ca8950:
      if (uVar8 == uVar48) {
        lVar27 = *in_stack_00000180;
        if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_04caa4c0;
        lVar31 = lVar28 + lVar34 * 0x60;
        uVar49 = (ulong)(uint)*(float *)(lVar31 + 0x5c);
        uVar45 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x50) >> 0x20),
                          fVar56 + (float)*(undefined8 *)(lVar31 + 0x50));
        fVar57 = fVar56 + *(float *)(lVar31 + 0x58);
        fVar54 = fVar54 + *(float *)(lVar31 + 0x5c);
        uVar46 = (ulong)(uint)fVar54;
        *(ulong *)(lVar31 + 0x50) = uVar45;
        *(float *)(lVar31 + 0x58) = fVar57;
        *(float *)(lVar31 + 0x5c) = fVar54;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar31 + 0x38)) goto LAB_04caa4c0;
        uVar52 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar31 + 0x38) * 0x178 + 0x114);
        lVar28 = lVar28 + lVar34 * 0x60;
        *(float *)(lVar28 + 0x74) = fVar57;
        *(undefined4 *)(lVar28 + 0x70) = uVar52;
        lVar27 = *in_stack_00000180;
        if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_04caa4c0;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_04caa2e0;
        uVar48 = *(uint *)(lVar28 + lVar34 * 0x60 + 0x44);
        if (*(uint *)(lVar27 + 0x18) <= uVar48) goto LAB_04caa4c0;
        lVar28 = lVar28 + lVar34 * 0x60;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar48 * 0x178 + 0x120)
        ;
        *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar21 = FUN_028ff808(uVar24,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar24 - 0x2010)) && (uVar24 != 0xad)) && (uVar24 != 0x2d)) {
      if (bVar11) {
        if (((uVar19 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
           (((int)uVar8 < *in_stack_00000178 && ((uVar24 == 0x2019 || (uVar24 == 0x27)))))) {
          if (*(uint *)(lVar25 + 0x18) <= uVar19 - 2) goto LAB_04caa4c0;
          uVar7 = *(undefined2 *)(lVar25 + lVar35 + -0x430);
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_028ff808(uVar7,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_04caa4c0;
            uVar7 = *(undefined2 *)(lVar25 + lVar35 + -0x140);
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar21 = FUN_028ff808(uVar7,0);
            if ((uVar21 & 1) != 0) goto LAB_04ca8b6c;
          }
        }
LAB_04ca8e0c:
        if (uVar8 == *in_stack_00000178 - 1U) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_028ff808(uVar24,0);
          iVar16 = iVar38;
          if ((uVar21 & 1) == 0) goto LAB_04ca8e4c;
        }
        else {
LAB_04ca8e4c:
          iVar16 = uVar19 - 2;
        }
        lVar27 = *in_stack_00000180;
        if (lVar27 == 0) goto LAB_04caa2e0;
        lVar28 = *(long *)(lVar27 + 0x40);
        if (lVar28 == 0) goto LAB_04caa2e0;
        uVar48 = *(uint *)(lVar27 + 0x24);
        iVar17 = *(int *)(lVar28 + 0x18);
        if (iVar17 < (int)(uVar48 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_022de6e4((long *)(lVar27 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_06da6d78);
          lVar27 = *in_stack_00000180;
          if (lVar27 == 0) goto LAB_04caa2e0;
        }
        lVar27 = *(long *)(lVar27 + 0x40);
        if (lVar27 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar48) goto LAB_04caa4c0;
        lVar27 = lVar27 + (long)(int)uVar48 * 0x18;
        *(long **)(lVar27 + 0x20) = unaff_x19;
        *(uint *)(lVar27 + 0x28) = uVar18;
        *(int *)(lVar27 + 0x2c) = iVar16;
        *(uint *)(lVar27 + 0x30) = (iVar16 - uVar18) + 1;
        thunk_FUN_01656ef8();
        lVar27 = unaff_x19[0x73];
        if (lVar27 == 0) goto LAB_04caa2e0;
        lVar28 = *(long *)(lVar27 + 0x50);
        *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_04caa4c0;
        lVar28 = lVar28 + lVar34 * 0x60;
        bVar11 = false;
        iStack00000000000000cc = iStack00000000000000cc + 1;
        *(int *)(lVar28 + 0x34) = *(int *)(lVar28 + 0x34) + 1;
      }
      else {
        if (uVar19 == 1) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar48 = FUN_028ff740(uVar24,0);
          if (((uVar24 == 0x200b) || (((uVar15 | uVar48 ^ 1) & 1) != 0)) ||
             (*in_stack_00000178 == 1)) goto LAB_04ca8e0c;
        }
        bVar11 = false;
      }
    }
    else {
      if (!bVar11) {
        uVar18 = uVar8;
      }
      if (uVar8 == *in_stack_00000178 - 1U) {
        lVar27 = *in_stack_00000180;
        if (lVar27 == 0) goto LAB_04caa2e0;
        lVar28 = *(long *)(lVar27 + 0x40);
        if (lVar28 == 0) goto LAB_04caa2e0;
        uVar48 = *(uint *)(lVar27 + 0x24);
        iVar16 = *(int *)(lVar28 + 0x18);
        if (iVar16 < (int)(uVar48 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_022de6e4((long *)(lVar27 + 0x40),iVar16 + 1,*(undefined8 *)PTR_DAT_06da6d78);
          lVar27 = *in_stack_00000180;
          if (lVar27 == 0) goto LAB_04caa2e0;
        }
        lVar27 = *(long *)(lVar27 + 0x40);
        if (lVar27 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar48) goto LAB_04caa4c0;
        lVar27 = lVar27 + (long)(int)uVar48 * 0x18;
        *(long **)(lVar27 + 0x20) = unaff_x19;
        *(uint *)(lVar27 + 0x28) = uVar18;
        *(uint *)(lVar27 + 0x2c) = uVar8;
        *(uint *)(lVar27 + 0x30) = uVar19 - uVar18;
        thunk_FUN_01656ef8();
        lVar27 = unaff_x19[0x73];
        if (lVar27 == 0) goto LAB_04caa2e0;
        lVar28 = *(long *)(lVar27 + 0x50);
        *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_04caa4c0;
        lVar28 = lVar28 + lVar34 * 0x60;
        iStack00000000000000cc = iStack00000000000000cc + 1;
        *(int *)(lVar28 + 0x34) = *(int *)(lVar28 + 0x34) + 1;
LAB_04ca8b6c:
        bVar11 = true;
      }
      else {
        bVar11 = true;
      }
    }
    lVar27 = *in_stack_00000180;
    if ((lVar27 == 0) || (lVar34 = *(long *)(lVar27 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar34 + 0x18) <= uVar8) goto LAB_04caa4c0;
    if ((*(byte *)(lVar34 + lVar39 * 0x178 + 0x18c) >> 2 & 1) == 0) {
      plVar37 = (long *)PTR_DAT_06e12318;
      if (!bVar9) {
        bVar9 = false;
        goto LAB_04ca9160;
      }
      if (*(uint *)(lVar34 + 0x18) <= uVar19 - 2) goto LAB_04caa4c0;
LAB_04ca8bcc:
      lVar28 = *unaff_x19;
      uVar48 = *(uint *)(lVar34 + lVar35 + -0x334);
      uVar52 = *(undefined4 *)(lVar34 + lVar35 + -0x2f8);
LAB_04ca90ec:
      uVar49 = (ulong)uVar48;
      uVar45 = (ulong)(uint)fStack0000000000000074;
      uVar46 = (ulong)uStack0000000000000078;
      (**(code **)(lVar28 + 0x908))
                (fStack0000000000000084,uVar45,uVar46,uVar49,fStack00000000000000f4,0,
                 fStack0000000000000088,uVar52);
      lVar27 = *plVar37;
LAB_04ca912c:
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar27 = *plVar37;
      }
LAB_04ca913c:
      bVar9 = false;
      fStack00000000000000f4 = *(float *)(*(long *)(lVar27 + 0xb8) + 0x1730);
      fStack0000000000000120 = 0.0;
      fStack00000000000000f0 = 0.0;
    }
    else {
      lVar28 = lVar34 + lVar39 * 0x178;
      iVar16 = *(int *)(lVar28 + 0x60);
      *(undefined4 *)(lVar28 + 0x168) = in_stack_00001274;
      if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
         (((int)unaff_x19[0x61] == 5 && (iVar16 + 1 != (int)unaff_x19[0x6d])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (uVar24 != 0x200b && (uVar15 & 1) == 0) {
        fVar57 = *(float *)(lVar34 + lVar39 * 0x178 + 0x15c);
        if (fStack0000000000000120 <= fVar57) {
          fStack0000000000000120 = fVar57;
        }
        uVar46 = (ulong)(uint)fStack0000000000000120;
        if (fStack00000000000000f0 <= ABS(fVar42)) {
          fStack00000000000000f0 = ABS(fVar42);
        }
        if (iVar16 != iStack0000000000000070) {
          if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar27 = *in_stack_00000180;
            if (lVar27 == 0) goto LAB_04caa2e0;
            lVar34 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
          }
          else {
            lVar34 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
          }
          fStack00000000000000f4 = *(float *)(lVar34 + 0x1730);
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
        if (unaff_x19[0x1e] == 0) goto LAB_04caa2e0;
        fVar47 = *(float *)(lVar27 + lVar39 * 0x178 + 0x144);
        fVar57 = (float)FUN_04ab19b8(unaff_x19[0x1e] + 0x28,0);
        fVar47 = fVar47 + fStack0000000000000120 * fVar57;
        if (fVar47 <= fStack00000000000000f4) {
          fStack00000000000000f4 = fVar47;
        }
        uVar45 = (ulong)(uint)fStack00000000000000f4;
        iStack0000000000000070 = iVar16;
      }
      plVar37 = (long *)PTR_DAT_06e12318;
      if (!bVar9) {
        if ((((uVar24 == 0xd) || ((uVar24 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) || (!bVar1)) {
LAB_04ca9044:
          bVar9 = false;
          goto LAB_04ca9160;
        }
        if (uVar8 == uVar3) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_029007b8(uVar24,0);
          if ((uVar21 & 1) != 0) goto LAB_04ca9044;
        }
        if ((*in_stack_00000180 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar27 + lVar39 * 0x178;
        fStack0000000000000088 = *(float *)(lVar27 + 0x15c);
        fStack0000000000000084 = *(float *)(lVar27 + 0x114);
        fVar57 = fStack0000000000000088;
        if (fStack0000000000000120 != 0.0) {
          fVar57 = fStack0000000000000120;
        }
        uVar46 = (ulong)(uint)fVar57;
        uStack000000000000008c = *(uint *)(lVar27 + 0x164);
        uStack0000000000000078 = 0;
        fVar47 = fVar42;
        if (fStack0000000000000120 != 0.0) {
          fVar47 = fStack00000000000000f0;
        }
        uVar45 = (ulong)(uint)fVar47;
        fStack0000000000000074 = fStack00000000000000f4;
        fStack00000000000000f0 = fVar47;
        fStack0000000000000120 = fVar57;
      }
      if (*in_stack_00000178 == 1) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          if (uVar8 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar39 * 0x178;
            lVar28 = *unaff_x19;
            uVar48 = *(uint *)(lVar27 + 0x120);
            uVar52 = *(undefined4 *)(lVar27 + 0x15c);
            goto LAB_04ca90ec;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      if ((uVar8 == uVar2) || ((int)uVar3 <= (int)uVar8)) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          if (uVar24 != 0x200b && (uVar15 & 1) == 0) {
            lVar34 = lVar39;
            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
          }
          else {
            lVar34 = lVar32;
            if (*(uint *)(lVar27 + 0x18) <= uVar3) goto LAB_04caa4c0;
          }
          lVar27 = lVar27 + lVar34 * 0x178;
          uVar49 = (ulong)*(uint *)(lVar27 + 0x120);
          uVar45 = (ulong)(uint)fStack0000000000000074;
          uVar46 = (ulong)uStack0000000000000078;
          (**(code **)(*unaff_x19 + 0x908))
                    (fStack0000000000000084,uVar45,uVar46,uVar49,fStack00000000000000f4,0,
                     fStack0000000000000088,*(undefined4 *)(lVar27 + 0x15c));
          lVar27 = *plVar37;
          goto LAB_04ca912c;
        }
        goto LAB_04caa2e0;
      }
      if (!bVar1) {
        if ((*in_stack_00000180 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000180 + 0x38), lVar34 != 0)) {
          if (uVar19 - 2 < *(uint *)(lVar34 + 0x18)) goto LAB_04ca8bcc;
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      if ((int)uVar8 < *in_stack_00000178 + -1) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_04caa4c0;
          uVar21 = FUN_048097c4(uStack000000000000008c,*(undefined4 *)(lVar27 + lVar35),0);
          if ((uVar21 & 1) != 0) {
            bVar9 = true;
            goto LAB_04ca9160;
          }
          if ((*in_stack_00000180 != 0) &&
             (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
            if (uVar8 < *(uint *)(lVar27 + 0x18)) {
              lVar27 = lVar27 + lVar39 * 0x178;
              uVar49 = (ulong)*(uint *)(lVar27 + 0x120);
              uVar45 = (ulong)(uint)fStack0000000000000074;
              uVar46 = (ulong)uStack0000000000000078;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000084,uVar45,uVar46,uVar49,fStack00000000000000f4,0,
                         fStack0000000000000088,*(undefined4 *)(lVar27 + 0x15c));
              lVar27 = *plVar37;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar27 = *plVar37;
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
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
    if (lVar29 == 0) goto LAB_04caa2e0;
    uVar48 = *(uint *)(lVar27 + lVar39 * 0x178 + 0x18c);
    fVar57 = (float)FUN_04ab19c8(lVar29 + 0x28,0);
    if ((uVar48 >> 6 & 1) == 0) {
      if (bVar10) {
        if ((*in_stack_00000180 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar19 - 2) goto LAB_04caa4c0;
        uVar48 = *(uint *)(lVar27 + lVar35 + -0x334);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        fVar47 = fStack00000000000000a0 * fVar57 + *(float *)(lVar27 + lVar35 + -0x310);
LAB_04ca9710:
        uVar49 = (ulong)uVar48;
        uVar45 = (ulong)(uint)fStack0000000000000094;
        uVar46 = (ulong)uStack0000000000000090;
        (*pcVar30)(fStack0000000000000098,uVar45,uVar46,uVar49,fVar47,0,fStack00000000000000a0,
                   fStack00000000000000a0);
      }
LAB_04ca9740:
      bVar10 = false;
    }
    else {
      lVar27 = *in_stack_00000180;
      if ((lVar27 == 0) || (lVar34 = *(long *)(lVar27 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar34 + 0x18) <= uVar8) goto LAB_04caa4c0;
      *(undefined4 *)(lVar34 + lVar39 * 0x178 + 0x170) = in_stack_00001274;
      if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
         (((int)unaff_x19[0x61] == 5 &&
          (*(int *)(lVar34 + lVar39 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar24 == 0xd) || ((uVar24 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) ||
         (bVar10 || !bVar1)) {
LAB_04ca92bc:
        if (!bVar10) goto LAB_04ca9740;
      }
      else {
        if (uVar8 == uVar3) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_029007b8(uVar24,0);
          if ((uVar21 & 1) != 0) goto LAB_04ca92bc;
          lVar27 = *in_stack_00000180;
          if (lVar27 == 0) goto LAB_04caa2e0;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_04caa4c0;
        lVar27 = lVar27 + lVar39 * 0x178;
        fStack0000000000000060 = *(float *)(lVar27 + 0x58);
        fStack00000000000000a0 = *(float *)(lVar27 + 0x15c);
        fStack000000000000005c = *(float *)(lVar27 + 0x144);
        uVar45 = (ulong)(uint)fStack000000000000005c;
        fStack0000000000000098 = *(float *)(lVar27 + 0x114);
        fStack0000000000000094 = fVar57 * fStack00000000000000a0 + fStack000000000000005c;
        uStack0000000000000090 = 0;
      }
      iVar16 = *in_stack_00000178;
      if (iVar16 == 1) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          if (uVar8 < *(uint *)(lVar27 + 0x18)) {
            lVar29 = *unaff_x19;
            lVar27 = lVar27 + lVar39 * 0x178;
LAB_04ca942c:
            uVar48 = *(uint *)(lVar27 + 0x120);
            fVar47 = *(float *)(lVar27 + 0x144);
LAB_04ca9434:
            pcVar30 = *(code **)(lVar29 + 0x908);
LAB_04ca970c:
            fVar47 = fVar57 * fStack00000000000000a0 + fVar47;
            goto LAB_04ca9710;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      if (uVar8 == uVar2) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          uVar48 = *(uint *)(lVar27 + 0x18);
          if (uVar24 == 0x200b || (uVar15 & 1) != 0) {
            if (uVar48 <= uVar3) goto LAB_04caa4c0;
          }
          else {
LAB_04ca96e8:
            lVar32 = lVar39;
            if (uVar48 <= uVar8) goto LAB_04caa4c0;
          }
LAB_04ca96f0:
          lVar27 = lVar27 + lVar32 * 0x178;
          fVar47 = *(float *)(lVar27 + 0x144);
          uVar48 = *(uint *)(lVar27 + 0x120);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_04ca970c;
        }
        goto LAB_04caa2e0;
      }
      if ((int)uVar8 < iVar16) {
        lVar27 = *in_stack_00000180;
        if ((lVar27 != 0) && (lVar34 = *(long *)(lVar27 + 0x38), lVar34 != 0)) {
          if (uVar19 < *(uint *)(lVar34 + 0x18)) {
            if (*(float *)(lVar34 + lVar35 + -0x10c) == fStack0000000000000060) {
              fVar47 = *(float *)(lVar34 + lVar35 + -0x20);
              if (*(int *)(*(long *)PTR_DAT_06e5ce10 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar45 = (ulong)(uint)fStack000000000000005c;
              uVar21 = FUN_04809d04(fVar56 + fVar47,uVar45,0);
              if ((uVar21 & 1) != 0) {
                iVar16 = *in_stack_00000178;
                goto LAB_04ca9510;
              }
              lVar27 = *in_stack_00000180;
              if (lVar27 == 0) goto LAB_04caa2e0;
            }
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 != 0) {
              uVar48 = *(uint *)(lVar27 + 0x18);
              if ((int)uVar8 <= (int)uVar3) goto LAB_04ca96e8;
              if (uVar3 < uVar48) goto LAB_04ca96f0;
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
        iVar16 = FUN_051d2b30(lVar29,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_04caa4c0;
        lVar27 = *(long *)(lVar25 + lVar35 + -0x124);
        if (lVar27 == 0) goto LAB_04caa2e0;
        iVar17 = FUN_051d2b30(lVar27,0);
        if (iVar16 != iVar17) {
          if ((*in_stack_00000180 != 0) &&
             (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
            if (uVar8 < *(uint *)(lVar27 + 0x18)) {
              lVar29 = *unaff_x19;
              lVar27 = lVar27 + lVar39 * 0x178;
              plVar37 = (long *)PTR_DAT_06e12318;
              goto LAB_04ca942c;
            }
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
      }
      plVar37 = (long *)PTR_DAT_06e12318;
      if (!bVar1) {
        if ((*in_stack_00000180 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 != 0)) {
          if (uVar19 - 2 < *(uint *)(lVar27 + 0x18)) {
            lVar29 = *unaff_x19;
            uVar48 = *(uint *)(lVar27 + lVar35 + -0x334);
            fVar47 = *(float *)(lVar27 + lVar35 + -0x310);
            goto LAB_04ca9434;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      bVar10 = true;
    }
    if ((*in_stack_00000180 == 0) || (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0))
    goto LAB_04caa2e0;
    uVar48 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar48 <= uVar8) goto LAB_04caa4c0;
    if ((*(byte *)(lVar27 + lVar39 * 0x178 + 0x18d) >> 1 & 1) == 0) {
      if (bVar13) {
        uVar46 = (ulong)in_stack_000000b8._4_4_;
        uVar45 = (ulong)(uint)fStack00000000000000dc;
        uVar49 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000d8,uVar45,uVar46,uVar49,fStack00000000000000c0,uVar46);
      }
LAB_04ca97b0:
      bVar13 = false;
    }
    else {
      if ((((int)unaff_x19[0x6b] < (int)uVar8) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
         (((int)unaff_x19[0x61] == 5 &&
          (*(int *)(lVar27 + lVar39 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar13) {
        if ((((uVar24 == 0xd) || ((uVar24 | 1) == 0xb)) || ((int)uVar3 < (int)uVar8)) || (!bVar1))
        goto LAB_04ca97b0;
        if (uVar8 == uVar3) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_029007b8(uVar24,0);
          if ((uVar21 & 1) != 0) goto LAB_04ca97b0;
        }
        lVar29 = *plVar37;
        if (*(int *)(lVar29 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar29 = *plVar37;
        }
        if ((*in_stack_00000180 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000180 + 0x38), lVar27 == 0)) goto LAB_04caa2e0;
        uVar48 = (uint)*(undefined8 *)(lVar27 + 0x18);
        if (uVar48 <= uVar8) goto LAB_04caa4c0;
        lVar29 = *(long *)(lVar29 + 0xb8);
        lVar32 = lVar27 + lVar39 * 0x178;
        in_stack_00001268 = *(undefined8 *)(lVar32 + 0x180);
        in_stack_00001260 = *(undefined8 *)(lVar32 + 0x178);
        fStack00000000000000d8 = *(float *)(lVar29 + 0x1720);
        in_stack_00001270 = *(float *)(lVar32 + 0x188);
        fStack00000000000000dc = *(float *)(lVar29 + 0x1724);
        fStack00000000000000c8 = *(float *)(lVar29 + 0x1728);
        fStack00000000000000c0 = *(float *)(lVar29 + 0x172c);
        in_stack_000000b8._4_4_ = 0;
      }
      if (uVar48 <= uVar8) goto LAB_04caa4c0;
      lVar27 = lVar27 + lVar39 * 0x178;
      fVar51 = *(float *)(lVar27 + 0x120);
      fVar54 = *(float *)(lVar27 + 0x180);
      fVar56 = *(float *)(lVar27 + 0x188);
      uVar36 = *(undefined8 *)(lVar27 + 0x178);
      fVar58 = *(float *)(lVar27 + 0x184);
      uVar20 = *(undefined8 *)(lVar27 + 0x180);
      fVar55 = *(float *)(lVar27 + 0x114);
      fVar57 = *(float *)(lVar27 + 0x138);
      fVar47 = *(float *)(lVar27 + 0x13c);
      fVar53 = *(float *)(lVar27 + 0x140);
      fVar50 = *(float *)(lVar27 + 0x148);
      in_stack_00000188 = uVar36;
      fStack0000000000000190 = fVar54;
      fStack0000000000000194 = fVar58;
      in_stack_00000198 = fVar56;
      in_stack_000001a0 = in_stack_00001260;
      in_stack_000001a8 = in_stack_00001268;
      in_stack_000001b0 = in_stack_00001270;
      uVar21 = FUN_0480b0f0(&stack0x000001a0,&stack0x00000188,0);
      if ((uVar21 & 1) == 0) {
        bVar13 = (uVar15 & 1) == 0;
        if (bVar13) {
          fVar47 = fVar51;
        }
        fVar47 = fVar47 + (float)in_stack_00001268;
        fVar50 = fVar50 - in_stack_00001270;
        uVar46 = (ulong)(uint)fVar50;
        fVar53 = fVar53 + (float)((ulong)in_stack_00001268 >> 0x20);
        uVar49 = (ulong)(uint)fVar53;
        if (bVar13) {
          fVar57 = fVar55;
        }
        fVar57 = fVar57 - (float)((ulong)in_stack_00001260 >> 0x20);
        if (fVar57 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar57;
        }
        if (fStack00000000000000c8 <= fVar47) {
          fStack00000000000000c8 = fVar47;
        }
        uVar45 = (ulong)(uint)fStack00000000000000c8;
        if (fVar50 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar50;
        }
        if (fStack00000000000000c0 <= fVar53) {
          fStack00000000000000c0 = fVar53;
        }
      }
      else {
        if (fVar50 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar50;
        }
        uVar45 = (ulong)(uint)fStack00000000000000dc;
        if (fStack00000000000000c0 <= fVar53) {
          fStack00000000000000c0 = fVar53;
        }
        bVar13 = (uVar15 & 1) == 0;
        if (bVar13) {
          fVar57 = fVar55;
        }
        fVar57 = (fVar57 + (fStack00000000000000c8 - (float)in_stack_00001268)) * 0.5;
        uVar49 = (ulong)(uint)fVar57;
        fStack00000000000000dc = fVar50 - fVar56;
        uVar46 = (ulong)in_stack_000000b8._4_4_;
        if (bVar13) {
          fVar47 = fVar51;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000d8,uVar45,uVar46,uVar49,fStack00000000000000c0,uVar46);
        fStack00000000000000c8 = fVar47 + fVar54;
        in_stack_000000b8._4_4_ = 0;
        fStack00000000000000c0 = fVar53 + fVar58;
        fStack00000000000000d8 = fVar57;
        in_stack_00001260 = uVar36;
        in_stack_00001268 = uVar20;
        in_stack_00001270 = fVar56;
      }
      if (((*in_stack_00000178 == 1) || (uVar8 == uVar2)) ||
         (((int)uVar3 <= (int)uVar8 || (!bVar1)))) {
        uVar46 = (ulong)in_stack_000000b8._4_4_;
        uVar45 = (ulong)(uint)fStack00000000000000dc;
        uVar49 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000d8,uVar45,uVar46,uVar49,fStack00000000000000c0,uVar46);
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
    }
    iVar16 = *in_stack_00000178;
    iVar38 = iVar38 + 1;
    lVar35 = lVar35 + 0x178;
    bVar1 = iVar16 <= (int)uVar19;
    uVar19 = uVar19 + 1;
    uVar48 = uVar4;
    if (bVar1) goto LAB_04ca9d00;
    goto LAB_04ca7b5c;
  }
  iStack00000000000000cc = 0;
  iVar14 = 0;
  goto LAB_04ca9d20;
LAB_04ca9d00:
  lVar25 = *in_stack_00000180;
  if (lVar25 == 0) goto LAB_04caa2e0;
  iVar14 = uVar4 + 1;
LAB_04ca9d20:
  lVar35 = *(long *)(lVar25 + 0x60);
  if (lVar35 != 0) {
    if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
    *(undefined4 *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x50 + 0x28) =
         in_stack_00001274;
    *(int *)(lVar25 + 0x18) = iVar16;
    lVar35 = unaff_x19[0xd6];
    iVar38 = iStack00000000000000cc;
    if (iVar16 < 1) {
      iVar38 = 1;
    }
    if (iStack00000000000000cc == 0) {
      iVar38 = 1;
    }
    *(int *)(lVar25 + 0x2c) = iVar14;
    *(int *)(lVar25 + 0x1c) = (int)lVar35;
    *(int *)(lVar25 + 0x24) = iVar38;
    *(int *)(lVar25 + 0x30) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
    if (((int)unaff_x19[0x69] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_04caa2e4:
      if ((char)unaff_x19[0xde] != '\0') {
        (**(code **)(*unaff_x19 + 0x798))();
      }
      if (*(int *)(*(long *)PTR_DAT_06dc37e8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_04808ce4();
      return;
    }
    lVar25 = unaff_x19[0xe1];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000180,*(undefined8 *)(lVar25 + 0x28));
    }
    if (unaff_x19[0xe7] != 0) {
      iVar14 = FUN_036e12d0(unaff_x19[0xe7],0);
      if (iVar14 != 0x19) {
        lVar25 = unaff_x19[0xe7];
        if (lVar25 == 0) goto LAB_04caa2e0;
        uVar18 = FUN_036e12d0(lVar25,0);
        FUN_036e130c(lVar25,uVar18 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
        if ((*in_stack_00000180 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000180 + 0x60), lVar25 == 0)) goto LAB_04caa2e0;
        if (*(int *)(lVar25 + 0x18) == 0) goto LAB_04caa4c0;
        FUN_051ef288(lVar25 + 0x20,1,0);
      }
      if (unaff_x19[0x7a] != 0) {
        FUN_04874e78(unaff_x19[0x7a],0);
        if ((unaff_x19[0x73] != 0) && (lVar25 = *(long *)(unaff_x19[0x73] + 0x60), lVar25 != 0)) {
          if (*(int *)(lVar25 + 0x18) == 0) {
LAB_04caa4c0:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (unaff_x19[0x7a] != 0) {
            FUN_0486f29c(unaff_x19[0x7a],*(undefined8 *)(lVar25 + 0x30),0);
            if ((unaff_x19[0x73] != 0) && (lVar25 = *(long *)(unaff_x19[0x73] + 0x60), lVar25 != 0))
            {
              if (*(int *)(lVar25 + 0x18) == 0) goto LAB_04caa4c0;
              if (unaff_x19[0x7a] != 0) {
                FUN_04870fa8(unaff_x19[0x7a],0,*(undefined8 *)(lVar25 + 0x48),0);
                if ((unaff_x19[0x73] != 0) &&
                   (lVar25 = *(long *)(unaff_x19[0x73] + 0x60), lVar25 != 0)) {
                  if (*(int *)(lVar25 + 0x18) == 0) goto LAB_04caa4c0;
                  if (unaff_x19[0x7a] != 0) {
                    FUN_0486f54c(unaff_x19[0x7a],*(undefined8 *)(lVar25 + 0x50),0);
                    if ((unaff_x19[0x73] != 0) &&
                       (lVar25 = *(long *)(unaff_x19[0x73] + 0x60), lVar25 != 0)) {
                      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_04caa4c0;
                      if (unaff_x19[0x7a] != 0) {
                        FUN_0486fab4(unaff_x19[0x7a],*(undefined8 *)(lVar25 + 0x58),0);
                        if (unaff_x19[0x7a] != 0) {
                          FUN_0487497c(unaff_x19[0x7a],0);
                          if (unaff_x19[0xe6] != 0) {
                            FUN_036e059c(unaff_x19[0xe6],unaff_x19[0x7a],0);
                            if (unaff_x19[0xe6] != 0) {
                              uVar20 = FUN_036e022c(unaff_x19[0xe6],0);
                              if (unaff_x19[0xe6] != 0) {
                                uVar18 = FUN_036e0094(unaff_x19[0xe6],0);
                                lVar25 = *in_stack_00000180;
                                if (lVar25 != 0) {
                                  lVar27 = 0;
                                  lVar35 = 0;
                                  do {
                                    uVar21 = lVar35 + 1;
                                    if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar21)
                                    goto LAB_04caa2e4;
                                    lVar25 = *(long *)(lVar25 + 0x60);
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                    FUN_051ef154(lVar25 + lVar27 + 0x70,0);
                                    lVar25 = unaff_x19[0xe3];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                    uVar36 = *(undefined8 *)(lVar25 + lVar35 * 8 + 0x28);
                                    if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                                      thunk_FUN_016466fc();
                                    }
                                    uVar22 = FUN_051d94d4(uVar36,0,0);
                                    if ((uVar22 & 1) == 0) {
                                      if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar25 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar25 == 0)) break;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                        FUN_051ef288(lVar25 + lVar27 + 0x70,1,0);
                                      }
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if (lVar25 == 0) break;
                                      lVar25 = FUN_051f9514(lVar25,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar29 = *(long *)(*in_stack_00000180 + 0x60), lVar29 == 0
                                         )) break;
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      if (lVar25 == 0) break;
                                      FUN_0486f29c(lVar25,*(undefined8 *)(lVar29 + lVar27 + 0x80),0)
                                      ;
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if (lVar25 == 0) break;
                                      lVar25 = FUN_051f9514(lVar25,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar29 = *(long *)(*in_stack_00000180 + 0x60), lVar29 == 0
                                         )) break;
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      if (lVar25 == 0) break;
                                      FUN_04870fa8(lVar25,0,*(undefined8 *)(lVar29 + lVar27 + 0x98),
                                                   0);
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if (lVar25 == 0) break;
                                      lVar25 = FUN_051f9514(lVar25,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar29 = *(long *)(*in_stack_00000180 + 0x60), lVar29 == 0
                                         )) break;
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      if (lVar25 == 0) break;
                                      FUN_0486f54c(lVar25,*(undefined8 *)(lVar29 + lVar27 + 0xa0),0)
                                      ;
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if (lVar25 == 0) break;
                                      lVar25 = FUN_051f9514(lVar25,0);
                                      if ((*in_stack_00000180 == 0) ||
                                         (lVar29 = *(long *)(*in_stack_00000180 + 0x60), lVar29 == 0
                                         )) break;
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      if (lVar25 == 0) break;
                                      FUN_0486fab4(lVar25,*(undefined8 *)(lVar29 + lVar27 + 0xa8),0)
                                      ;
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if ((lVar25 == 0) ||
                                         (lVar25 = FUN_051f9514(lVar25,0), lVar25 == 0)) break;
                                      FUN_0487497c(lVar25,0);
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if (lVar25 == 0) break;
                                      lVar25 = FUN_03663ff0(lVar25,0);
                                      lVar29 = unaff_x19[0xe3];
                                      if (lVar29 == 0) break;
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar29 = *(long *)(lVar29 + lVar35 * 8 + 0x28);
                                      if ((lVar29 == 0) ||
                                         (uVar36 = FUN_051f9514(lVar29,0), lVar25 == 0)) break;
                                      FUN_036e059c(lVar25,uVar36,0);
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if ((lVar25 == 0) ||
                                         (lVar25 = FUN_03663ff0(lVar25,0), lVar25 == 0)) break;
                                      FUN_036e0194(uVar20,uVar45,uVar46,uVar49,lVar25,0);
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      lVar25 = *(long *)(lVar25 + lVar35 * 8 + 0x28);
                                      if ((lVar25 == 0) ||
                                         (lVar25 = FUN_03663ff0(lVar25,0), lVar25 == 0)) break;
                                      FUN_036e00d0(lVar25,uVar18 & 1,0);
                                      lVar25 = unaff_x19[0xe3];
                                      if (lVar25 == 0) break;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_04caa4c0;
                                      plVar37 = *(long **)(lVar25 + lVar35 * 8 + 0x28);
                                      uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                      if (plVar37 == (long *)0x0) break;
                                      (**(code **)(*plVar37 + 0x2c8))
                                                (plVar37,uVar19 & 1,
                                                 *(undefined8 *)(*plVar37 + 0x2d0));
                                    }
                                    lVar25 = *in_stack_00000180;
                                    lVar35 = lVar35 + 1;
                                    lVar27 = lVar27 + 0x50;
                                  } while (lVar25 != 0);
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
  }
LAB_04caa2e0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


