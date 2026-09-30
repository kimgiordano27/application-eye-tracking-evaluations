/*
FUNCTION_NAME: FUN_023b15fc
ENTRY_POINT: 023b15fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_16;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_023b15fc(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,undefined8 param_8,long param_9,
                 long param_10,uint param_11,uint param_12,long *param_13,long param_14,
                 long *param_15,long param_16,undefined4 param_17,undefined4 param_18,
                 undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
                 undefined4 param_23,undefined4 param_24,undefined4 param_25,byte param_26)

{
  char cVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  ulong uVar42;
  ulong uVar43;
  double dVar44;
  float fVar45;
  ulong uVar46;
  long lVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float local_348;
  float local_344;
  float local_31c;
  float local_318;
  float local_2e8;
  int local_2e4;
  float local_2c4;
  float local_288;
  float local_284;
  long local_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long local_260;
  long local_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long local_230;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a4;
  
  if ((DAT_03781f8b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7736);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<>c_<Start>b__3_1__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f68f8);
    thunk_FUN_00d48444(StringLiteral_3557);
    thunk_FUN_00d48444(PTR_DAT_033f4320);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_1__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4924);
    thunk_FUN_00d48444(PTR_DAT_033f7000);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                      );
    thunk_FUN_00d48444(System_Xml_Schema_XsdDateTime_TypeInfo);
    DAT_03781f8b = 1;
  }
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0.0;
  if (param_9 != 0) {
    uVar10 = FUN_023af678(param_9);
    if ((uVar10 & 1) != 0) {
      return;
    }
    local_140 = param_15[4];
    lStack_158 = param_15[1];
    local_160 = *param_15;
    lStack_148 = param_15[3];
    local_150 = param_15[2];
    if (*(int *)(*(long *)OVR_OpenVR_CVRCompositor_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lStack_118 = lStack_158;
    local_120 = local_160;
    lStack_108 = lStack_148;
    lStack_110 = local_150;
    local_100 = local_140;
    FUN_023c7b4c(param_14,&local_120,0,0,0xffffffff,0xffffffff,0);
    local_b0 = 0;
    local_b8 = 0;
    FUN_026884cc(param_1,&local_b8,0);
    FUN_026884dc(param_2,&local_b8,0);
    if (param_14 != 0) {
      uVar10 = local_b0 & 0xffffffff;
      FUN_026a8fa4(local_b8 & 0xffffffff,local_b8._4_4_,uVar10,local_b0._4_4_,param_14,0);
      if ((param_26 & 1) != 0) {
        uVar10 = 0;
        FUN_026a9720(0,0,0,0x3f800000,param_14,0,1,0);
      }
      lVar11 = FUN_023af628(param_9);
      puVar4 = StringLiteral_3557;
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (lVar11 != 0) {
        fVar48 = (float)param_2;
        fVar23 = (float)param_1 / fVar48;
        FUN_01323390(lVar11,&local_160,
                     *(undefined8 *)Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_1__)
        ;
        fVar2 = DAT_028aa038;
        uVar42 = (ulong)(uint)DAT_028aa038;
        local_2e4 = 0;
        local_c0 = local_150;
        lStack_c8 = lStack_158;
        local_d0 = local_160;
LAB_023b18dc:
        do {
          do {
            uVar12 = FUN_012b894c(&local_d0,*(undefined8 *)puVar4);
            if ((uVar12 & 1) == 0) {
              FUN_012b8948(&local_d0,*(undefined8 *)PTR_DAT_033f68f8);
              return;
            }
            lVar11 = FUN_00cad2cc(&local_d0,*(undefined8 *)PTR_DAT_033f4320);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_0268b4e0(lVar11,0,0);
          } while ((uVar12 & 1) != 0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar22 = *(long *)(lVar11 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_023affb4(param_10,lVar11,lVar22);
        } while ((uVar12 & 1) != 0);
        FUN_010c2c5c(lVar11,&local_160,
                     *(undefined8 *)
                      Method_Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<>c_<Start>b__3_1__
                    );
        lVar6 = local_160;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(lVar6,0,0);
        if ((uVar12 & 1) == 0) {
LAB_023b19fc:
          lVar13 = FUN_0268fd10(lVar11,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar39 = FUN_0269f578(lVar13,0);
          uVar19 = 0;
          uVar12 = uVar42;
          uVar17 = uVar10;
        }
        else {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar7 = FUN_02667810(lVar6,0);
          fVar28 = (float)uVar10;
          if (iVar7 != 1) goto LAB_023b19fc;
          lVar13 = FUN_0268fd10(lVar6,0);
          fVar29 = (float)uVar42;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar24 = (float)FUN_0269fb58(lVar13,0);
          if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar25 = (float)FUN_02683ee4(param_10,0);
          uVar39 = (ulong)(uint)-(fVar24 * fVar25);
          uVar19 = 1;
          uVar12 = (ulong)(uint)-(fVar29 * fVar25);
          uVar17 = (ulong)(uint)-(fVar28 * fVar25);
        }
        lStack_138 = param_13[5];
        local_140 = param_13[4];
        lStack_128 = param_13[7];
        lStack_130 = param_13[6];
        lStack_158 = param_13[1];
        local_160 = *param_13;
        lStack_148 = param_13[3];
        local_150 = param_13[2];
        if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = uVar19 ^ 1;
        lStack_198 = lStack_158;
        local_1a0 = local_160;
        lStack_188 = lStack_148;
        lStack_190 = local_150;
        lStack_178 = lStack_138;
        local_180 = local_140;
        lStack_168 = lStack_128;
        lStack_170 = lStack_130;
        uVar43 = uVar12;
        uVar46 = uVar17;
        uVar38 = FUN_023b0320(uVar39,param_10,uVar8,param_12 & 1,&local_1a0);
        uVar42 = uVar43;
        uVar10 = uVar46;
        if ((param_11 & 1) == 0) goto LAB_023b1b20;
        uVar14 = FUN_0268532c(0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_0268b4e0(param_10,uVar14,0);
        if ((uVar15 & 1) == 0) goto LAB_023b1b20;
        if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = FUN_02683f6c(param_10,0);
        if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = param_1 & 0xffffffff;
        uVar38 = FUN_023b13d4(uVar38,uVar43,uVar10,fVar48,uVar14,param_4,param_3);
        uVar42 = uVar43;
        goto LAB_023b1b28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_023b1b20:
  if ((float)uVar46 < 0.0) goto LAB_023b18dc;
LAB_023b1b28:
  fVar29 = (float)uVar43;
  fVar28 = (float)uVar38;
  if ((*(char *)(lVar11 + 100) == '\0') &&
     ((((1.0 < fVar29 || (fVar28 < 0.0)) || (1.0 < fVar28)) || (fVar29 < 0.0)))) goto LAB_023b18dc;
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = FUN_0268fd10(param_10,0);
  fVar24 = (float)uVar42;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar25 = (float)FUN_0269fb58(lVar13,0);
  fVar31 = (float)uVar39;
  fVar50 = fVar31 - param_5;
  fVar40 = (float)uVar12;
  fVar54 = fVar40 - param_6;
  fVar30 = (float)uVar17;
  fVar55 = fVar30 - param_7;
  fVar45 = (float)uVar10;
  uVar42 = (ulong)(uint)(fVar55 * fVar45);
  if (fVar55 * fVar45 + fVar50 * fVar25 + fVar54 * fVar24 < 0.0) goto LAB_023b18dc;
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar24 = fVar55 * fVar55;
  fVar25 = SQRT(fVar24 + fVar54 * fVar54 + fVar50 * fVar50);
  local_344 = 1.0;
  local_2e8 = 1.0;
  if (uVar19 == 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar26 = *(float *)(lVar11 + 0x24);
    fVar27 = *(float *)(lVar11 + 0x28);
    iVar7 = FUN_0265fdf0(*(long *)(lVar11 + 0x30),0);
    local_344 = 1.0;
    if (0 < iVar7) {
      if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar24 = fVar26;
      local_344 = (float)FUN_0265f96c(fVar25 / fVar26,*(long *)(lVar11 + 0x30),0);
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar7 = FUN_0265fdf0(*(long *)(lVar11 + 0x38),0);
    if (iVar7 < 1) {
      local_2e8 = 1.0;
    }
    else {
      if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar24 = fVar27;
      local_2e8 = (float)FUN_0265f96c(fVar25 / fVar27,*(long *)(lVar11 + 0x38),0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_02681b9c(lVar6,0,0);
  local_2c4 = 1.0;
  if (((uVar10 & 1) != 0) && (local_2c4 = 1.0, *(char *)(lVar11 + 0x40) != '\0')) {
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (fVar25 <= fVar2) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar16 = *(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
      fVar50 = *pfVar16;
      fVar54 = pfVar16[1];
      fVar55 = pfVar16[2];
    }
    else {
      fVar50 = fVar50 / fVar25;
      fVar54 = fVar54 / fVar25;
      fVar55 = fVar55 / fVar25;
    }
    if (param_16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar24 = -fVar54;
    fVar45 = -fVar55;
    lStack_158 = CONCAT44(lStack_158._4_4_,fVar45);
    local_160 = CONCAT44(fVar24,-fVar50);
    (**(code **)(param_16 + 0x18))
              (*(undefined8 *)(param_16 + 0x40),lVar6,param_10,&local_160,&local_a4,
               *(undefined8 *)(param_16 + 0x28));
    local_2c4 = local_a4;
  }
  lVar13 = FUN_0268fd10(param_10,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar25 = (float)FUN_0269f578(lVar13,0);
  fVar50 = fVar24;
  fVar54 = fVar45;
  lVar13 = FUN_0268fd10(lVar11,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar55 = (float)FUN_0269f578(lVar13,0);
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar25 = fVar25 - fVar55;
  fVar24 = fVar24 - fVar50;
  fVar45 = fVar45 - fVar54;
  fVar50 = SQRT(fVar45 * fVar45 + fVar25 * fVar25 + fVar24 * fVar24);
  if (fVar50 <= fVar2) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar16 = *(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
    fVar25 = *pfVar16;
    fVar24 = pfVar16[1];
    fVar45 = pfVar16[2];
  }
  else {
    fVar25 = fVar25 / fVar50;
    fVar24 = fVar24 / fVar50;
    fVar45 = fVar45 / fVar50;
  }
  lStack_138 = param_13[5];
  local_140 = param_13[4];
  lStack_128 = param_13[7];
  lStack_130 = param_13[6];
  lStack_158 = param_13[1];
  local_160 = *param_13;
  lStack_148 = param_13[3];
  local_150 = param_13[2];
  fVar50 = *(float *)(lVar11 + 0x5c);
  if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ + 0xe0)
      == 0) {
    thunk_FUN_00d32864();
  }
  fVar54 = fVar30 + fVar45 * fVar50;
  lStack_1d8 = lStack_158;
  local_1e0 = local_160;
  lStack_1c8 = lStack_148;
  lStack_1d0 = local_150;
  lStack_1b8 = lStack_138;
  local_1c0 = local_140;
  lStack_1a8 = lStack_128;
  lStack_1b0 = lStack_130;
  FUN_023b0320(fVar31 + fVar25 * fVar50,fVar40 + fVar24 * fVar50,param_10,uVar8,param_12 & 1,
               &local_1e0);
  if (uVar19 == 0) {
    fVar24 = *(float *)(lVar11 + 0x54);
  }
  else {
    fVar24 = (float)FUN_023b1534(lVar11,param_10);
  }
  lStack_138 = param_13[5];
  local_140 = param_13[4];
  lStack_128 = param_13[7];
  lVar18 = param_13[6];
  lStack_158 = param_13[1];
  lVar47 = *param_13;
  lStack_148 = param_13[3];
  local_150 = param_13[2];
  local_160 = lVar47;
  lStack_130 = lVar18;
  lVar13 = FUN_0268fd10(param_10,0);
  fVar50 = (float)lVar47;
  fVar25 = (float)lVar18;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar55 = (float)FUN_0269fa60(lVar13,0);
  if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ + 0xe0)
      == 0) {
    thunk_FUN_00d32864();
  }
  fVar40 = fVar40 + fVar24 * fVar25;
  lStack_218 = lStack_158;
  local_220 = local_160;
  lStack_208 = lStack_148;
  lStack_210 = local_150;
  lStack_1f8 = lStack_138;
  local_200 = local_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  fVar24 = (float)FUN_023b0320(fVar31 + fVar24 * fVar55,fVar40,fVar30 + fVar24 * fVar50,param_10,
                               uVar8,param_12 & 1,&local_220);
  if (DAT_03775439 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775439 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar11 + 0x58));
  FUN_026a991c(SQRT((fVar24 - fVar28) * (fVar24 - fVar28) + (fVar40 - fVar29) * (fVar40 - fVar29)),
               (float)dVar44,fVar54,fVar48 / (float)param_1,param_14,param_22,0);
  if (*(char *)(lVar11 + 0x50) == '\0') {
    FUN_026a9b68(param_14,*(undefined8 *)PTR_DAT_033f7000,0);
  }
  else {
    FUN_026a9b24(param_14,*(undefined8 *)PTR_DAT_033f7000,0);
  }
  lVar13 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
    lVar13 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
  }
  lVar18 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
  if (lVar18 == 0) goto LAB_023b2144;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
    lVar18 = *(long *)(*(long *)(*(long *)
                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                + 0xb8) + 0x28);
    if (lVar18 != 0) goto LAB_023b2100;
    local_140 = 0;
    lStack_158 = 0;
    local_160 = 0;
    lStack_148 = 0;
    local_150 = 0;
  }
  else {
LAB_023b2100:
    local_140 = *(long *)(lVar18 + 0x48);
    lStack_158 = *(long *)(lVar18 + 0x30);
    local_160 = *(long *)(lVar18 + 0x28);
    lStack_148 = *(long *)(lVar18 + 0x40);
    local_150 = *(long *)(lVar18 + 0x38);
  }
  lStack_248 = lStack_158;
  local_250 = local_160;
  lStack_238 = lStack_148;
  lStack_240 = local_150;
  local_230 = local_140;
  FUN_026acb10(param_14,param_17,&local_250,0);
  lVar13 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
LAB_023b2144:
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
    lVar13 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
  }
  fVar24 = (float)*(int *)(*(long *)(lVar13 + 0xb8) + 0x18);
  uVar42 = 0x3f000000;
  uVar10 = 0;
  FUN_026a991c((float)local_2e4 / fVar24 + 0.5 / fVar24,0x3f000000,0,0,param_14,param_18,0);
  if ((*(char *)(lVar11 + 0x50) != '\0') && (*(int *)(lVar11 + 0x58) != 0)) {
    local_2e4 = local_2e4 + 1;
  }
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar22 = *(long *)(lVar22 + 0x18);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar22 + 0x18)) {
    uVar10 = (ulong)(uint)DAT_028aa040;
    fVar24 = local_344 * local_2c4;
    uVar42 = (ulong)(uint)(fVar29 + fVar29);
    fVar25 = fVar28 + fVar28 + -1.0;
    fVar28 = fVar29 + fVar29 + -1.0;
    fVar29 = -(fVar25 - fVar25);
    uVar12 = 0;
    uVar17 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
    local_2e8 = local_2e8 * DAT_028aa040;
    do {
      if (uVar17 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      local_d8 = *(long *)(lVar22 + uVar12 * 8 + 0x20);
      if ((local_d8 != 0) && (*(char *)(local_d8 + 0x10) != '\0')) {
        uVar38 = *(undefined8 *)(local_d8 + 0x30);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_0268b4e0(uVar38,0,0);
        fVar50 = (float)uVar10;
        if ((uVar17 & 1) == 0) {
          if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        else {
          if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(local_d8 + 0x6c) == 0) goto LAB_023b2a7c;
        }
        if ((0.0 < *(float *)(local_d8 + 0x2c)) && (0 < *(int *)(local_d8 + 0x48))) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar45 = (float)uVar42;
          uVar10 = FUN_02681b9c(lVar6,0,0);
          fVar54 = fVar24;
          fVar40 = fVar24;
          fVar55 = fVar24;
          if ((uVar10 & 1) != 0) {
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(char *)(local_d8 + 0x70) != '\0') {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = FUN_02667a34(lVar6,0);
              if ((uVar10 & 1) == 0) {
                fVar54 = (float)FUN_026678c4(lVar6,0);
              }
              else {
                fVar54 = (float)FUN_026678c4(lVar6,0);
                fVar40 = fVar45;
                fVar55 = fVar50;
                FUN_026679f8(lVar6,0);
                fVar30 = (float)FUN_02699be4(0);
                fVar54 = fVar54 * fVar30;
                fVar45 = fVar45 * fVar40;
                fVar50 = fVar50 * fVar55;
              }
              fVar54 = fVar24 * fVar54;
              fVar40 = fVar24 * fVar45;
              fVar55 = fVar24 * fVar50;
            }
          }
          local_f8 = CONCAT44(-fVar28,fVar25);
          uVar8 = FUN_0268202c(0);
          fVar50 = -fVar28;
          if ((uVar19 & (uVar8 ^ 1)) != 0) {
            local_f8 = CONCAT44(fVar28,(undefined4)local_f8);
            fVar50 = fVar28;
          }
          fVar45 = ABS(fVar25);
          if (ABS(fVar25) <= ABS(fVar50)) {
            fVar45 = ABS(fVar50);
          }
          if (*(long *)(lVar11 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar7 = FUN_0265fdf0(*(long *)(lVar11 + 0x48),0);
          fVar30 = 1.0;
          if (0 < iVar7) {
            if (*(long *)(lVar11 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar30 = (float)FUN_0265f96c(fVar45,*(long *)(lVar11 + 0x48),0);
          }
          if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (ulong)(uint)*(float *)(local_d8 + 0x2c);
          uVar42 = (ulong)(uint)local_344;
          fVar45 = local_344 * fVar30 * *(float *)(lVar11 + 0x20) * *(float *)(local_d8 + 0x2c);
          if (0.0 < fVar45) {
            if ((*(int *)(local_d8 + 0x6c) == 0) && (*(char *)(local_d8 + 0x4c) != '\0')) {
              plVar21 = *(long **)(local_d8 + 0x30);
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              iVar7 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
              iVar9 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
              local_e0 = (float)iVar7 / (float)iVar9;
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            else {
              local_e0 = 1.0;
            }
            if (*(char *)(local_d8 + 0x4c) == '\0') {
              local_318 = *(float *)(local_d8 + 0x3c);
              local_31c = *(float *)(local_d8 + 0x40);
            }
            else {
              local_318 = *(float *)(local_d8 + 0x3c);
              local_31c = *(float *)(local_d8 + 0x40);
              if (1.0 <= local_e0) {
                local_318 = local_318 / local_e0;
              }
              else {
                local_31c = local_e0 * local_31c;
              }
            }
            fVar30 = local_2e8 * *(float *)(local_d8 + 0x38) * *(float *)(lVar11 + 0x60);
            fVar31 = *(float *)(local_d8 + 0x54);
            fVar26 = *(float *)(local_d8 + 0x58);
            fVar27 = *(float *)(local_d8 + 0x5c);
            local_e8._4_4_ = fVar30;
            uVar10 = FUN_0268202c(0);
            lVar13 = local_d8;
            if ((uVar10 & 1) == 0) {
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar49 = -*(float *)(local_d8 + 0x20);
            }
            else {
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar49 = *(float *)(local_d8 + 0x20);
            }
            sincosf(fVar49 * DAT_028aa4f0,&local_284,&local_288);
            fVar5 = local_284;
            fVar49 = local_288;
            local_e8 = CONCAT44(local_e8._4_4_,local_284);
            local_2c4 = *(float *)(lVar13 + 0x14) + *(float *)(lVar13 + 0x14);
            local_f0 = CONCAT44(local_288,local_2c4);
            iVar7 = *(int *)(lVar13 + 100);
            iVar9 = *(int *)(lVar13 + 0x6c);
            if (2 < iVar7 - 1U) {
              iVar7 = 0;
            }
            if (iVar9 == 0) {
              FUN_026a9b68(param_14,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
              FUN_026a9b68(param_14,*(undefined8 *)
                                     Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                           ,0);
            }
            else if (iVar9 == 1) {
              FUN_026a9b24(param_14,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
              FUN_026a9b68(param_14,*(undefined8 *)
                                     Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                           ,0);
            }
            else if (iVar9 == 2) {
              FUN_026a9b68(param_14,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
              FUN_026a9b24(param_14,*(undefined8 *)
                                     Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                           ,0);
            }
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(local_d8 + 0x6c) - 1U < 2) {
              if (*(char *)(local_d8 + 0xdc) == '\0') {
                FUN_026a9b68(param_14,*(undefined8 *)StringLiteral_4924,0);
              }
              else {
                FUN_026a9b24(param_14,*(undefined8 *)StringLiteral_4924,0);
              }
            }
            else {
              FUN_026a9b68(param_14,*(undefined8 *)StringLiteral_4924,0);
            }
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar38 = *(undefined8 *)(local_d8 + 0x30);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(uVar38,0,0);
            if ((uVar10 & 1) != 0) {
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_026af214(&local_160,*(undefined8 *)(local_d8 + 0x30),0);
              lStack_278 = lStack_158;
              local_280 = local_160;
              lStack_268 = lStack_148;
              lStack_270 = local_150;
              local_260 = local_140;
              FUN_026acb10(param_14,param_19,&local_280,0);
            }
            lVar13 = local_d8;
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar9 = *(int *)(local_d8 + 0x6c);
            fVar32 = (1.0 - *(float *)(local_d8 + 0xd0)) + DAT_028aae60;
            fVar33 = fVar32;
            if (1.0 < fVar32) {
              fVar33 = 1.0;
            }
            if (fVar32 < 0.0) {
              fVar33 = 0.0;
            }
            fVar32 = powf(fVar33 + 1.0,5.0);
            if (iVar9 != 2) {
              fVar32 = fVar33;
            }
            fVar33 = 1.0 - *(float *)(lVar13 + 0xcc);
            uVar52 = 0xbf800000;
            if (*(char *)(lVar11 + 100) != '\0') {
              uVar52 = 0x3f800000;
            }
            fVar34 = fVar33;
            if (1.0 < fVar33) {
              fVar34 = 1.0;
            }
            if (fVar33 < 0.0) {
              fVar34 = 0.0;
            }
            fVar33 = *(float *)(lVar13 + 0xd8);
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            fVar34 = expf(fVar34 * 4.0 + 0.0);
            FUN_026a991c(uVar52,fVar32,fVar34,1.0 / (float)*(int *)(lVar13 + 0xd4),param_14,param_24
                         ,0);
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(local_d8 + 0x6c) == 2) {
              fVar51 = 1.0 / (float)*(int *)(local_d8 + 0xd4);
              fVar32 = cosf(fVar51 * DAT_028aa15c);
              fVar32 = fVar32 - fVar33 * fVar32;
              fVar51 = fVar51 * DAT_028aaa70;
              fVar34 = tanf(fVar51 * 0.5);
              FUN_026a991c(fVar33,fVar32,fVar51,fVar34 * fVar32,param_14,param_25,0);
            }
            else {
              FUN_026a991c(fVar33,0,0,0,param_14,param_25,0);
            }
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_318 = local_318 * fVar30;
            local_31c = local_31c * fVar30;
            fVar54 = fVar45 * fVar54 * fVar31;
            fVar55 = fVar55 * fVar27;
            uVar10 = (ulong)(uint)fVar55;
            fVar40 = fVar45 * fVar40 * fVar26;
            fVar45 = fVar45 * fVar55;
            fVar55 = fVar50 - fVar50;
            if (*(char *)(local_d8 + 0x44) != '\0') {
              iVar9 = *(int *)(local_d8 + 0x48);
              if (iVar9 + -1 != 0) {
                iVar20 = *(int *)(local_d8 + 0x74);
                fVar30 = (float)(iVar9 + -1);
                uVar42 = (ulong)(uint)fVar30;
                fVar30 = (*(float *)(local_d8 + 0x78) + *(float *)(local_d8 + 0x78)) / fVar30;
                if (iVar20 == 0) {
                  if (0 < iVar9) {
                    iVar9 = 0;
                    local_348 = 0.0;
                    do {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar27 = fVar25 + fVar25 * (local_2c4 + -1.0);
                      fVar26 = fVar50 + fVar50 * (local_2c4 + -1.0);
                      fVar31 = -fVar27;
                      fVar27 = fVar5 * fVar26 - fVar49 * fVar27;
                      uVar10 = (ulong)(uint)(fVar5 * fVar31);
                      uVar42 = (ulong)(uint)(fVar5 * fVar31 - fVar49 * fVar26);
                      if (*(char *)(local_d8 + 0xb4) == '\0') {
                        uVar39 = (ulong)(uint)local_318;
                        uVar17 = (ulong)(uint)local_31c;
                      }
                      else {
                        if ((*(int *)(*(long *)
                                       Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                     + 0xe0) == 0) && (thunk_FUN_00d32864(), local_d8 == 0)) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar10 = uVar42;
                        fVar31 = fVar49 * fVar29 + fVar5 * fVar55;
                        uVar39 = FUN_023b3a14(fVar27,*(undefined8 *)(local_d8 + 0xc0),&local_d8,
                                              &local_f8);
                        uVar17 = uVar10;
                        if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                      }
                      fVar33 = (float)uVar10;
                      fVar26 = 0.5;
                      iVar20 = *(int *)(local_d8 + 0x48) + -1;
                      if (iVar20 != 0 && 0 < *(int *)(local_d8 + 0x48)) {
                        fVar33 = (float)iVar20;
                        fVar26 = (float)iVar9 / fVar33;
                      }
                      if (*(long *)(local_d8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c(fVar26);
                      }
                      fVar26 = (float)FUN_0269ad38(*(long *)(local_d8 + 0x98),0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar53 = *(undefined4 *)(local_d8 + 0x24);
                      uVar52 = *(undefined4 *)(local_d8 + 0x28);
                      cVar1 = *(char *)(local_d8 + 0x68);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_023b00dc(fVar25,fVar50,uVar53,uVar52,fVar27,uVar42,fVar23,0x3f800000,
                                   cVar1 != '\0');
                      FUN_026a991c(param_14,param_21,0);
                      FUN_026a991c(fVar25,fVar50,uVar39,uVar17,param_14,param_23,0);
                      uVar10 = (ulong)(uint)(fVar45 * fVar31);
                      FUN_026a991c(fVar54 * fVar26,fVar40 * fVar33,param_14,param_20,0);
                      if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_023c3c70(param_14,param_8,iVar7,0);
                      local_2c4 = fVar30 + local_2c4;
                      local_f0 = CONCAT44(local_f0._4_4_,local_2c4);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      iVar9 = iVar9 + 1;
                      local_348 = local_348 + *(float *)(local_d8 + 0xe0);
                      uVar42 = (ulong)(uint)local_348;
                    } while (iVar9 < *(int *)(local_d8 + 0x48));
                  }
                }
                else if (iVar20 == 2) {
                  auVar56 = FUN_026829e4(0);
                  if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__get_totalVertices
                            (*(undefined4 *)(local_d8 + 0x90),0);
                  if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (0 < *(int *)(local_d8 + 0x48)) {
                    iVar9 = 0;
                    do {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      fVar31 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar51 = *(float *)(local_d8 + 0xa0);
                      fVar33 = fVar25 + fVar25 * (local_2c4 + -1.0);
                      fVar26 = fVar50 + fVar50 * (local_2c4 + -1.0);
                      fVar27 = -fVar33;
                      fVar32 = fVar5 * fVar26 - fVar49 * fVar33;
                      fVar34 = fVar5 * fVar27 - fVar49 * fVar26;
                      fVar26 = local_31c;
                      fVar33 = local_318;
                      if (*(char *)(local_d8 + 0xb4) != '\0') {
                        if ((*(int *)(*(long *)
                                       Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                     + 0xe0) == 0) && (thunk_FUN_00d32864(), local_d8 == 0)) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        fVar26 = fVar34;
                        fVar27 = fVar49 * fVar29 + fVar5 * fVar55;
                        fVar33 = (float)FUN_023b3a14(fVar32,*(undefined8 *)(local_d8 + 0xc0),
                                                     &local_d8,&local_f8);
                        if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                      }
                      fVar35 = *(float *)(local_d8 + 0xac);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      fVar36 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar13 = *(long *)(local_d8 + 0x98);
                      fVar41 = 1.0;
                      FUN_02682ae0(0,0);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar37 = (float)FUN_0269ad38(lVar13,0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_02682ae0(0xbf800000,0x3f800000,0);
                      FUN_02682ae0(DAT_02956d44,DAT_028aa15c,0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar31 = fVar31 * fVar51 + 1.0;
                      if (0.0 < fVar31) {
                        uVar52 = *(undefined4 *)(local_d8 + 0x24);
                        cVar1 = *(char *)(local_d8 + 0x68);
                        uVar53 = *(undefined4 *)(local_d8 + 0x28);
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_023b00dc(fVar25,fVar50,uVar52,uVar53,fVar32,fVar34,fVar23,0x3f800000,
                                     cVar1 != '\0');
                        FUN_026a991c(param_14,param_21,0);
                        fVar35 = fVar35 * fVar36;
                        FUN_026a991c(fVar25,fVar50,fVar33 + fVar33 * fVar35,fVar26 + fVar26 * fVar35
                                     ,param_14,param_23,0);
                        FUN_026a991c(fVar31 * fVar54 * fVar37,fVar31 * fVar40 * fVar41,
                                     fVar31 * fVar45 * fVar27,param_14,param_20,0);
                        if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_023c3c70(param_14,param_8,iVar7,0);
                      }
                      local_2c4 = fVar30 + local_2c4;
                      local_f0._0_4_ = local_2c4;
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      fVar31 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar10 = (ulong)(uint)(fVar30 * 0.5);
                      uVar42 = (ulong)(uint)*(float *)(local_d8 + 0xa4);
                      iVar9 = iVar9 + 1;
                      local_2c4 = local_2c4 + fVar30 * 0.5 * fVar31 * *(float *)(local_d8 + 0xa4);
                      local_f0 = CONCAT44(local_f0._4_4_,local_2c4);
                    } while (iVar9 < *(int *)(local_d8 + 0x48));
                  }
                  FUN_02682a64(auVar56._0_8_,auVar56._8_8_,0);
                }
                else if ((iVar20 == 1) && (0 < iVar9)) {
                  iVar20 = 0;
                  uVar42 = (ulong)(uint)(fVar5 * fVar55);
                  uVar10 = (ulong)(uint)(fVar5 * fVar29);
                  do {
                    fVar30 = (float)uVar42;
                    fVar31 = (float)uVar10;
                    fVar26 = 0.5;
                    if (1 < iVar9) {
                      fVar30 = (float)(iVar9 + -1);
                      fVar26 = (float)iVar20 / fVar30;
                    }
                    if (*(long *)(local_d8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    fVar27 = (float)FUN_0269ad38(fVar26,*(long *)(local_d8 + 0x98),0);
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(local_d8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar9 = FUN_0265fdf0(*(long *)(local_d8 + 0x80),0);
                    fVar33 = 1.0;
                    if (0 < iVar9) {
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(local_d8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar33 = (float)FUN_0265f96c(fVar26,*(long *)(local_d8 + 0x80),0);
                    }
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    fVar32 = *(float *)(local_d8 + 0x78);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    fVar33 = local_2c4 + fVar33 * (fVar32 + fVar32) + -1.0;
                    fVar32 = fVar25 + fVar25 * fVar33;
                    fVar33 = fVar50 + fVar50 * fVar33;
                    fVar34 = fVar5 * fVar33 - fVar49 * fVar32;
                    fVar51 = fVar5 * -fVar32 - fVar49 * fVar33;
                    fVar33 = local_31c;
                    fVar32 = local_318;
                    if (*(char *)(local_d8 + 0xb4) != '\0') {
                      if ((*(int *)(*(long *)
                                     Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                   + 0xe0) == 0) && (thunk_FUN_00d32864(), local_d8 == 0)) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar33 = fVar51;
                      fVar32 = (float)FUN_023b3a14(fVar34,fVar51,fVar49 * fVar29 + fVar5 * fVar55,
                                                   fVar5 * fVar29 - fVar49 * fVar55,local_318,
                                                   local_31c,*(undefined8 *)(local_d8 + 0xc0),
                                                   &local_d8,&local_f8);
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                    }
                    if (*(long *)(local_d8 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar9 = FUN_0265fdf0(*(long *)(local_d8 + 0x88),0);
                    fVar35 = 1.0;
                    if (0 < iVar9) {
                      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(local_d8 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      fVar35 = (float)FUN_0265f96c(fVar26,*(long *)(local_d8 + 0x88),0);
                    }
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(local_d8 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_0265f96c(fVar26,*(long *)(local_d8 + 0xe8),0);
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar52 = *(undefined4 *)(local_d8 + 0x24);
                    uVar53 = *(undefined4 *)(local_d8 + 0x28);
                    cVar1 = *(char *)(local_d8 + 0x68);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_023b00dc(fVar25,fVar50,uVar52,uVar53,fVar34,fVar51,fVar23,0x3f800000,
                                 cVar1 != '\0');
                    FUN_026a991c(param_14,param_21,0);
                    FUN_026a991c(fVar25,fVar50,fVar32 * fVar35,fVar33 * fVar35,param_14,param_23,0);
                    uVar42 = (ulong)(uint)(fVar40 * fVar30);
                    uVar10 = (ulong)(uint)(fVar45 * fVar31);
                    FUN_026a991c(fVar54 * fVar27,param_14,param_20,0);
                    if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_023c3c70(param_14,param_8,iVar7,0);
                    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar9 = *(int *)(local_d8 + 0x48);
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < iVar9);
                }
                goto LAB_023b2a7c;
              }
            }
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar31 = fVar25 + fVar25 * (local_2c4 + -1.0);
            fVar30 = fVar50 + fVar50 * (local_2c4 + -1.0);
            fVar26 = fVar5 * fVar30 - fVar49 * fVar31;
            fVar30 = fVar5 * -fVar31 - fVar49 * fVar30;
            if (*(char *)(local_d8 + 0xb4) != '\0') {
              if ((*(int *)(*(long *)
                             Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                           0xe0) == 0) && (thunk_FUN_00d32864(), local_d8 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar31 = fVar30;
              local_318 = (float)FUN_023b3a14(fVar26,fVar30,fVar49 * fVar29 + fVar5 * fVar55,
                                              fVar5 * fVar29 - fVar49 * fVar55,local_318,local_31c,
                                              *(undefined8 *)(local_d8 + 0xc0),&local_d8,&local_f8);
              local_31c = fVar31;
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            uVar53 = *(undefined4 *)(local_d8 + 0x24);
            uVar52 = *(undefined4 *)(local_d8 + 0x28);
            cVar1 = *(char *)(local_d8 + 0x68);
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_023b00dc(fVar25,fVar50,uVar53,uVar52,fVar26,fVar30,fVar23,0x3f800000,cVar1 != '\0');
            FUN_026a991c(param_14,param_21,0);
            FUN_026a991c(fVar25,fVar50,local_318,local_31c,param_14,param_23,0);
            uVar42 = (ulong)(uint)fVar40;
            uVar10 = (ulong)(uint)fVar45;
            FUN_026a991c(fVar54,param_14,param_20,0);
            if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_023c3c70(param_14,param_8,iVar7,0);
          }
        }
      }
LAB_023b2a7c:
      uVar12 = uVar12 + 1;
      uVar17 = (ulong)*(uint *)(lVar22 + 0x18);
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar22 + 0x18));
  }
  goto LAB_023b18dc;
}


