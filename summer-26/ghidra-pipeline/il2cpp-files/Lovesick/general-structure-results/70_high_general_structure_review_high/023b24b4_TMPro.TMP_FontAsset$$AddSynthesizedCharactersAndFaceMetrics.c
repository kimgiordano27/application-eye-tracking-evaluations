/*
FUNCTION_NAME: TMPro.TMP_FontAsset$$AddSynthesizedCharactersAndFaceMetrics
ENTRY_POINT: 023b24b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_16;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void TMPro_TMP_FontAsset__AddSynthesizedCharactersAndFaceMetrics(long param_1,float param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x26;
  long lVar15;
  undefined8 unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  float fVar28;
  ulong uVar29;
  ulong uVar30;
  double dVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float unaff_s10;
  float fVar42;
  undefined4 uVar43;
  float unaff_s11;
  undefined4 uVar44;
  float unaff_s13;
  float fVar45;
  float unaff_s14;
  float unaff_s15;
  undefined1 auVar46 [16];
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined8 in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  undefined8 in_stack_000000a8;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  long in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  int iStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  float fStack000000000000011c;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  ulong in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  uint in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  float in_stack_00000280;
  float in_stack_00000284;
  undefined8 in_stack_000002a0;
  long in_stack_00000308;
  float in_stack_0000033c;
  
code_r0x023b24b4:
  unaff_s15 = unaff_s15 / param_2;
LAB_023b24b8:
  do {
    fStack00000000000000c4 =
         in_stack_00000060._4_4_ * *(float *)(param_1 + 0x38) * *(float *)(unaff_x28 + 0x60);
    fVar19 = *(float *)(param_1 + 0x54);
    fStack00000000000000a4 = *(float *)(param_1 + 0x58);
    fStack00000000000000a0 = *(float *)(param_1 + 0x5c);
    uVar8 = FUN_0268202c(0);
    if ((uVar8 & 1) == 0) {
      if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar39 = -*(float *)(in_stack_00000308 + 0x20);
    }
    else {
      if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar39 = *(float *)(in_stack_00000308 + 0x20);
    }
    sincosf(fVar39 * DAT_028aa4f0,(float *)((long)&stack0x00000158 + 4),&stack0x00000158);
    fVar16 = fStack000000000000015c;
    fVar39 = fStack0000000000000158;
    fStack000000000000011c =
         *(float *)(in_stack_00000308 + 0x14) + *(float *)(in_stack_00000308 + 0x14);
    iVar3 = *(int *)(in_stack_00000308 + 100);
    iVar5 = *(int *)(in_stack_00000308 + 0x6c);
    if (2 < iVar3 - 1U) {
      iVar3 = 0;
    }
    if (iVar5 == 0) {
      FUN_026a9b68(unaff_x27,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
      FUN_026a9b68(unaff_x27,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                   ,0);
    }
    else if (iVar5 == 1) {
      FUN_026a9b24(unaff_x27,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
      FUN_026a9b68(unaff_x27,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                   ,0);
    }
    else if (iVar5 == 2) {
      FUN_026a9b68(unaff_x27,*(undefined8 *)System_Xml_Schema_XsdDateTime_TypeInfo,0);
      FUN_026a9b24(unaff_x27,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_set_pose3DRequested__
                   ,0);
    }
    if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(in_stack_00000308 + 0x6c) - 1U < 2) {
      if (*(char *)(in_stack_00000308 + 0xdc) == '\0') {
        FUN_026a9b68(unaff_x27,*(undefined8 *)StringLiteral_4924,0);
      }
      else {
        FUN_026a9b24(unaff_x27,*(undefined8 *)StringLiteral_4924,0);
      }
    }
    else {
      FUN_026a9b68(unaff_x27,*(undefined8 *)StringLiteral_4924,0);
    }
    if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar14 = *(undefined8 *)(in_stack_00000308 + 0x30);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_02681b9c(uVar14,0,0);
    if ((uVar8 & 1) != 0) {
      if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026af214(&stack0x00000280,*(undefined8 *)(in_stack_00000308 + 0x30),0);
      in_stack_00000168 = *(undefined8 *)(unaff_x24 + 200);
      in_stack_00000160 = *(undefined8 *)(unaff_x24 + 0xc0);
      in_stack_00000178 = *(undefined8 *)(unaff_x24 + 0xd8);
      in_stack_00000170 = *(undefined8 *)(unaff_x24 + 0xd0);
      in_stack_00000180 = in_stack_000002a0;
      FUN_026acb10(unaff_x27,uStack00000000000000d8,&stack0x00000160,0);
    }
    if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = *(int *)(in_stack_00000308 + 0x6c);
    fVar20 = (1.0 - *(float *)(in_stack_00000308 + 0xd0)) + DAT_028aae60;
    fVar21 = fVar20;
    if (1.0 < fVar20) {
      fVar21 = 1.0;
    }
    if (fVar20 < 0.0) {
      fVar21 = 0.0;
    }
    fVar20 = powf(fVar21 + 1.0,5.0);
    if (iVar5 != 2) {
      fVar20 = fVar21;
    }
    fVar21 = 1.0 - *(float *)(in_stack_00000308 + 0xcc);
    uVar43 = 0xbf800000;
    if (*(char *)(unaff_x28 + 100) != '\0') {
      uVar43 = 0x3f800000;
    }
    fVar22 = fVar21;
    if (1.0 < fVar21) {
      fVar22 = 1.0;
    }
    if (fVar21 < 0.0) {
      fVar22 = 0.0;
    }
    fVar21 = *(float *)(in_stack_00000308 + 0xd8);
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    fVar22 = expf(fVar22 * 4.0 + 0.0);
    FUN_026a991c(uVar43,fVar20,fVar22,1.0 / (float)*(int *)(in_stack_00000308 + 0xd4),
                 in_stack_00000128,uStack00000000000000e0,0);
    if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(in_stack_00000308 + 0x6c) == 2) {
      fVar42 = 1.0 / (float)*(int *)(in_stack_00000308 + 0xd4);
      fVar20 = cosf(fVar42 * DAT_028aa15c);
      fVar20 = fVar20 - fVar21 * fVar20;
      fVar42 = fVar42 * DAT_028aaa70;
      fVar22 = tanf(fVar42 * 0.5);
      FUN_026a991c(fVar21,fVar20,fVar42,fVar22 * fVar20,in_stack_00000128,uStack00000000000000e4,0);
    }
    else {
      FUN_026a991c(fVar21,0,0,0,in_stack_00000128,uStack00000000000000e4,0);
    }
    if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fStack00000000000000c8 = unaff_s15 * fStack00000000000000c4;
    fStack00000000000000c4 = unaff_s13 * fStack00000000000000c4;
    fVar19 = unaff_s11 * in_stack_000000a8._4_4_ * fVar19;
    uVar8 = (ulong)(uint)(unaff_s14 * fStack00000000000000a0);
    fStack00000000000000a4 = unaff_s11 * unaff_s10 * fStack00000000000000a4;
    fVar21 = unaff_s11 * unaff_s14 * fStack00000000000000a0;
    fVar20 = fStack00000000000000f8 - fStack00000000000000f8;
    fStack00000000000000a0 = fVar19;
    if (*(char *)(in_stack_00000308 + 0x44) == '\0') {
LAB_023b28d0:
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar22 = fStack00000000000000cc + fStack00000000000000cc * (fStack000000000000011c + -1.0);
      fVar19 = fStack00000000000000f8 + fStack00000000000000f8 * (fStack000000000000011c + -1.0);
      fVar42 = fVar16 * fVar19 - fVar39 * fVar22;
      fVar19 = fVar16 * -fVar22 - fVar39 * fVar19;
      if (*(char *)(in_stack_00000308 + 0xb4) != '\0') {
        if ((*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                     + 0xe0) == 0) && (thunk_FUN_00d32864(), in_stack_00000308 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar22 = fVar19;
        fStack00000000000000c8 =
             (float)FUN_023b3a14(fVar42,fVar19,fVar39 * in_stack_00000050._4_4_ + fVar16 * fVar20,
                                 fVar16 * in_stack_00000050._4_4_ - fVar39 * fVar20,
                                 fStack00000000000000c8,fStack00000000000000c4,
                                 *(undefined8 *)(in_stack_00000308 + 0xc0),&stack0x00000308,
                                 &stack0x000002e8);
        fStack00000000000000c4 = fVar22;
        if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      uVar44 = *(undefined4 *)(in_stack_00000308 + 0x24);
      uVar43 = *(undefined4 *)(in_stack_00000308 + 0x28);
      cVar1 = *(char *)(in_stack_00000308 + 0x68);
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_023b00dc(fStack00000000000000cc,fStack00000000000000f8,uVar44,uVar43,fVar42,fVar19,
                   in_stack_00000118,0x3f800000,cVar1 != '\0');
      FUN_026a991c(in_stack_00000128,uStack0000000000000114,0);
      FUN_026a991c(fStack00000000000000cc,fStack00000000000000f8,fStack00000000000000c8,
                   fStack00000000000000c4,in_stack_00000128,uStack0000000000000110,0);
      uVar30 = (ulong)(uint)fStack00000000000000a4;
      uVar8 = (ulong)(uint)fVar21;
      FUN_026a991c(fStack00000000000000a0,in_stack_00000128,in_stack_00000108._4_4_,0);
      if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_023c3c70(in_stack_00000128,in_stack_00000100,iVar3,0);
    }
    else {
      iVar5 = *(int *)(in_stack_00000308 + 0x48);
      if (iVar5 + -1 == 0) goto LAB_023b28d0;
      iVar12 = *(int *)(in_stack_00000308 + 0x74);
      fVar19 = (float)(iVar5 + -1);
      uVar30 = (ulong)(uint)fVar19;
      fVar19 = (*(float *)(in_stack_00000308 + 0x78) + *(float *)(in_stack_00000308 + 0x78)) /
               fVar19;
      if (iVar12 == 0) {
        if (0 < iVar5) {
          iVar5 = 0;
          fStack0000000000000098 = 0.0;
          do {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar45 = fStack00000000000000cc +
                     fStack00000000000000cc * (fStack000000000000011c + -1.0);
            fVar42 = fStack00000000000000f8 +
                     fStack00000000000000f8 * (fStack000000000000011c + -1.0);
            fVar22 = -fVar45;
            fVar45 = fVar16 * fVar42 - fVar39 * fVar45;
            uVar8 = (ulong)(uint)(fVar16 * fVar22);
            uVar30 = (ulong)(uint)(fVar16 * fVar22 - fVar39 * fVar42);
            if (*(char *)(in_stack_00000308 + 0xb4) == '\0') {
              uVar27 = (ulong)(uint)fStack00000000000000c8;
              uVar10 = (ulong)(uint)fStack00000000000000c4;
            }
            else {
              if ((*(int *)(*(long *)
                             Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                           0xe0) == 0) && (thunk_FUN_00d32864(), in_stack_00000308 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar8 = uVar30;
              fVar22 = fVar39 * in_stack_00000050._4_4_ + fVar16 * fVar20;
              uVar27 = FUN_023b3a14(fVar45,*(undefined8 *)(in_stack_00000308 + 0xc0),
                                    &stack0x00000308,&stack0x000002e8);
              uVar10 = uVar8;
              if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            fVar33 = (float)uVar8;
            fVar42 = 0.5;
            iVar12 = *(int *)(in_stack_00000308 + 0x48) + -1;
            if (iVar12 != 0 && 0 < *(int *)(in_stack_00000308 + 0x48)) {
              fVar33 = (float)iVar12;
              fVar42 = (float)iVar5 / fVar33;
            }
            if (*(long *)(in_stack_00000308 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(fVar42);
            }
            fVar42 = (float)FUN_0269ad38(*(long *)(in_stack_00000308 + 0x98),0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar44 = *(undefined4 *)(in_stack_00000308 + 0x24);
            uVar43 = *(undefined4 *)(in_stack_00000308 + 0x28);
            cVar1 = *(char *)(in_stack_00000308 + 0x68);
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_023b00dc(fStack00000000000000cc,fStack00000000000000f8,uVar44,uVar43,fVar45,uVar30,
                         in_stack_00000118,0x3f800000,cVar1 != '\0');
            FUN_026a991c(in_stack_00000128,uStack0000000000000114,0);
            FUN_026a991c(fStack00000000000000cc,fStack00000000000000f8,uVar27,uVar10,
                         in_stack_00000128,uStack0000000000000110,0);
            uVar8 = (ulong)(uint)(fVar21 * fVar22);
            FUN_026a991c(fStack00000000000000a0 * fVar42,fStack00000000000000a4 * fVar33,
                         in_stack_00000128,in_stack_00000108._4_4_,0);
            if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_023c3c70(in_stack_00000128,in_stack_00000100,iVar3,0);
            fStack000000000000011c = fVar19 + fStack000000000000011c;
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar5 = iVar5 + 1;
            fStack0000000000000098 = fStack0000000000000098 + *(float *)(in_stack_00000308 + 0xe0);
            uVar30 = (ulong)(uint)fStack0000000000000098;
          } while (iVar5 < *(int *)(in_stack_00000308 + 0x48));
        }
      }
      else if (iVar12 == 2) {
        auVar46 = FUN_026829e4(0);
        if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__get_totalVertices
                  (*(undefined4 *)(in_stack_00000308 + 0x90),0);
        if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (0 < *(int *)(in_stack_00000308 + 0x48)) {
          iVar5 = 0;
          do {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar22 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar17 = *(float *)(in_stack_00000308 + 0xa0);
            fVar33 = fStack00000000000000cc +
                     fStack00000000000000cc * (fStack000000000000011c + -1.0);
            fVar42 = fStack00000000000000f8 +
                     fStack00000000000000f8 * (fStack000000000000011c + -1.0);
            fVar45 = -fVar33;
            fVar41 = fVar16 * fVar42 - fVar39 * fVar33;
            fVar40 = fVar16 * fVar45 - fVar39 * fVar42;
            fVar42 = fStack00000000000000c4;
            fVar33 = fStack00000000000000c8;
            if (*(char *)(in_stack_00000308 + 0xb4) != '\0') {
              if ((*(int *)(*(long *)
                             Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                           0xe0) == 0) && (thunk_FUN_00d32864(), in_stack_00000308 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar42 = fVar40;
              fVar45 = fVar39 * in_stack_00000050._4_4_ + fVar16 * fVar20;
              fVar33 = (float)FUN_023b3a14(fVar41,*(undefined8 *)(in_stack_00000308 + 0xc0),
                                           &stack0x00000308,&stack0x000002e8);
              if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            fVar18 = *(float *)(in_stack_00000308 + 0xac);
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar23 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar15 = *(long *)(in_stack_00000308 + 0x98);
            fVar28 = 1.0;
            FUN_02682ae0(0,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar24 = (float)FUN_0269ad38(lVar15,0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_02682ae0(0xbf800000,0x3f800000,0);
            FUN_02682ae0(DAT_02956d44,DAT_028aa15c,0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar22 = fVar22 * fVar17 + 1.0;
            if (0.0 < fVar22) {
              uVar43 = *(undefined4 *)(in_stack_00000308 + 0x24);
              cVar1 = *(char *)(in_stack_00000308 + 0x68);
              uVar44 = *(undefined4 *)(in_stack_00000308 + 0x28);
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_023b00dc(fStack00000000000000cc,fStack00000000000000f8,uVar43,uVar44,fVar41,fVar40
                           ,in_stack_00000118,0x3f800000,cVar1 != '\0');
              FUN_026a991c(in_stack_00000128,uStack0000000000000114,0);
              fVar18 = fVar18 * fVar23;
              FUN_026a991c(fStack00000000000000cc,fStack00000000000000f8,fVar33 + fVar33 * fVar18,
                           fVar42 + fVar42 * fVar18,in_stack_00000128,uStack0000000000000110,0);
              FUN_026a991c(fVar22 * fStack00000000000000a0 * fVar24,
                           fVar22 * fStack00000000000000a4 * fVar28,fVar22 * fVar21 * fVar45,
                           in_stack_00000128,in_stack_00000108._4_4_,0);
              if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_023c3c70(in_stack_00000128,in_stack_00000100,iVar3,0);
            }
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar22 = (float)FUN_02682ae0(0xbf800000,0x3f800000,0);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar8 = (ulong)(uint)(fVar19 * 0.5);
            uVar30 = (ulong)(uint)*(float *)(in_stack_00000308 + 0xa4);
            iVar5 = iVar5 + 1;
            fStack000000000000011c =
                 fVar19 + fStack000000000000011c +
                 fVar19 * 0.5 * fVar22 * *(float *)(in_stack_00000308 + 0xa4);
          } while (iVar5 < *(int *)(in_stack_00000308 + 0x48));
        }
        FUN_02682a64(auVar46._0_8_,auVar46._8_8_,0);
      }
      else if ((iVar12 == 1) && (0 < iVar5)) {
        iVar12 = 0;
        uVar30 = (ulong)(uint)(fVar16 * fVar20);
        uVar8 = (ulong)(uint)(fVar16 * in_stack_00000050._4_4_);
        do {
          fVar19 = (float)uVar30;
          fVar22 = (float)uVar8;
          fVar42 = 0.5;
          if (1 < iVar5) {
            fVar19 = (float)(iVar5 + -1);
            fVar42 = (float)iVar12 / fVar19;
          }
          if (*(long *)(in_stack_00000308 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar45 = (float)FUN_0269ad38(fVar42,*(long *)(in_stack_00000308 + 0x98),0);
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(in_stack_00000308 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar5 = FUN_0265fdf0(*(long *)(in_stack_00000308 + 0x80),0);
          fVar33 = 1.0;
          if (0 < iVar5) {
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(in_stack_00000308 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar33 = (float)FUN_0265f96c(fVar42,*(long *)(in_stack_00000308 + 0x80),0);
          }
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar41 = *(float *)(in_stack_00000308 + 0x78);
          if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar33 = fStack000000000000011c + fVar33 * (fVar41 + fVar41) + -1.0;
          fVar41 = fStack00000000000000cc + fStack00000000000000cc * fVar33;
          fVar33 = fStack00000000000000f8 + fStack00000000000000f8 * fVar33;
          fVar40 = fVar16 * fVar33 - fVar39 * fVar41;
          fVar17 = fVar16 * -fVar41 - fVar39 * fVar33;
          fVar33 = fStack00000000000000c4;
          fVar41 = fStack00000000000000c8;
          if (*(char *)(in_stack_00000308 + 0xb4) != '\0') {
            if ((*(int *)(*(long *)
                           Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                         0xe0) == 0) && (thunk_FUN_00d32864(), in_stack_00000308 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar33 = fVar17;
            fVar41 = (float)FUN_023b3a14(fVar40,fVar17,
                                         fVar39 * in_stack_00000050._4_4_ + fVar16 * fVar20,
                                         fVar16 * in_stack_00000050._4_4_ - fVar39 * fVar20,
                                         fStack00000000000000c8,fStack00000000000000c4,
                                         *(undefined8 *)(in_stack_00000308 + 0xc0),&stack0x00000308,
                                         &stack0x000002e8);
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          if (*(long *)(in_stack_00000308 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar5 = FUN_0265fdf0(*(long *)(in_stack_00000308 + 0x88),0);
          fVar18 = 1.0;
          if (0 < iVar5) {
            if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(in_stack_00000308 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar18 = (float)FUN_0265f96c(fVar42,*(long *)(in_stack_00000308 + 0x88),0);
          }
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(in_stack_00000308 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0265f96c(fVar42,*(long *)(in_stack_00000308 + 0xe8),0);
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar43 = *(undefined4 *)(in_stack_00000308 + 0x24);
          uVar44 = *(undefined4 *)(in_stack_00000308 + 0x28);
          cVar1 = *(char *)(in_stack_00000308 + 0x68);
          if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_023b00dc(fStack00000000000000cc,fStack00000000000000f8,uVar43,uVar44,fVar40,fVar17,
                       in_stack_00000118,0x3f800000,cVar1 != '\0');
          FUN_026a991c(in_stack_00000128,uStack0000000000000114,0);
          FUN_026a991c(fStack00000000000000cc,fStack00000000000000f8,fVar41 * fVar18,fVar33 * fVar18
                       ,in_stack_00000128,uStack0000000000000110,0);
          uVar30 = (ulong)(uint)(fStack00000000000000a4 * fVar19);
          uVar8 = (ulong)(uint)(fVar21 * fVar22);
          FUN_026a991c(fStack00000000000000a0 * fVar45,in_stack_00000128,in_stack_00000108._4_4_,0);
          if (*(int *)(*(long *)StringLiteral_7736 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_023c3c70(in_stack_00000128,in_stack_00000100,iVar3,0);
          if (in_stack_00000308 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar5 = *(int *)(in_stack_00000308 + 0x48);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar5);
      }
    }
LAB_023b2a7c:
    do {
      unaff_x29 = unaff_x29 + 1;
      uVar10 = (ulong)*(uint *)(in_stack_00000120 + 0x18);
      if ((long)(int)*(uint *)(in_stack_00000120 + 0x18) <= (long)unaff_x29) {
LAB_023b18dc:
        do {
          do {
            uVar10 = FUN_012b894c(&stack0x00000310,*unaff_x19);
            if ((uVar10 & 1) == 0) {
              FUN_012b8948(&stack0x00000310,*(undefined8 *)PTR_DAT_033f68f8);
              return;
            }
            unaff_x28 = FUN_00cad2cc(&stack0x00000310,*(undefined8 *)PTR_DAT_033f4320);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_0268b4e0(unaff_x28,0,0);
          } while ((uVar10 & 1) != 0);
          if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar15 = *(long *)(unaff_x28 + 0x18);
          if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_023affb4();
        } while ((uVar10 & 1) != 0);
        FUN_010c2c5c(unaff_x28,&stack0x00000280,
                     *(undefined8 *)
                      Method_Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<>c_<Start>b__3_1__
                    );
        unaff_x26 = CONCAT44(in_stack_00000284,in_stack_00000280);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(unaff_x26,0,0);
        if ((uVar10 & 1) == 0) {
LAB_023b19fc:
          lVar6 = FUN_0268fd10(unaff_x28,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar25 = FUN_0269f578(lVar6,0);
          unaff_w22 = 0;
          uVar10 = uVar30;
          uVar27 = uVar8;
        }
        else {
          if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar3 = FUN_02667810(unaff_x26,0);
          fVar19 = (float)uVar8;
          if (iVar3 != 1) goto LAB_023b19fc;
          lVar6 = FUN_0268fd10(unaff_x26,0);
          fVar39 = (float)uVar30;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar16 = (float)FUN_0269fb58(lVar6,0);
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar21 = (float)FUN_02683ee4();
          uVar25 = (ulong)(uint)-(fVar16 * fVar21);
          unaff_w22 = 1;
          uVar10 = (ulong)(uint)-(fVar39 * fVar21);
          uVar27 = (ulong)(uint)-(fVar19 * fVar21);
        }
        puVar2 = Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        uVar14 = unaff_x20[4];
        uVar32 = unaff_x20[7];
        uVar26 = unaff_x20[6];
        uVar36 = unaff_x20[1];
        uVar34 = *unaff_x20;
        uVar38 = unaff_x20[3];
        uVar37 = unaff_x20[2];
        *(undefined8 *)(unaff_x24 + 0xe8) = unaff_x20[5];
        *(undefined8 *)(unaff_x24 + 0xe0) = uVar14;
        *(undefined8 *)(unaff_x24 + 0xf8) = uVar32;
        *(undefined8 *)(unaff_x24 + 0xf0) = uVar26;
        *(undefined8 *)(unaff_x24 + 200) = uVar36;
        *(undefined8 *)(unaff_x24 + 0xc0) = uVar34;
        *(undefined8 *)(unaff_x24 + 0xd8) = uVar38;
        *(undefined8 *)(unaff_x24 + 0xd0) = uVar37;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        *(undefined8 *)(unaff_x24 + 0x88) = *(undefined8 *)(unaff_x24 + 200);
        *(undefined8 *)(unaff_x24 + 0x80) = *(undefined8 *)(unaff_x24 + 0xc0);
        *(undefined8 *)(unaff_x24 + 0x98) = *(undefined8 *)(unaff_x24 + 0xd8);
        *(undefined8 *)(unaff_x24 + 0x90) = *(undefined8 *)(unaff_x24 + 0xd0);
        *(undefined8 *)(unaff_x24 + 0xa8) = *(undefined8 *)(unaff_x24 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xa0) = *(undefined8 *)(unaff_x24 + 0xe0);
        *(undefined8 *)(unaff_x24 + 0xb8) = *(undefined8 *)(unaff_x24 + 0xf8);
        *(undefined8 *)(unaff_x24 + 0xb0) = *(undefined8 *)(unaff_x24 + 0xf0);
        uVar29 = uVar10;
        uVar35 = uVar27;
        uVar14 = FUN_023b0320(uVar25);
        uVar30 = uVar29;
        uVar8 = uVar35;
        if ((in_stack_00000150 & 1) == 0) {
LAB_023b1b20:
          if ((float)uVar35 < 0.0) goto LAB_023b18dc;
        }
        else {
          FUN_0268532c(0);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_0268b4e0();
          if ((uVar7 & 1) == 0) goto LAB_023b1b20;
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar26 = FUN_02683f6c();
          if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = in_stack_00000130 >> 0x20;
          uVar14 = FUN_023b13d4(uVar14,uVar29,in_stack_00000130 >> 0x20,uStack0000000000000138,
                                uVar26,uStack0000000000000140,uStack000000000000013c);
          uVar30 = uVar29;
        }
        fVar39 = (float)uVar29;
        fVar19 = (float)uVar14;
        if ((*(char *)(unaff_x28 + 100) == '\0') &&
           ((((1.0 < fVar39 || (fVar19 < 0.0)) || (1.0 < fVar19)) || (fVar39 < 0.0))))
        goto LAB_023b18dc;
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = FUN_0268fd10();
        fVar16 = (float)uVar30;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar21 = (float)FUN_0269fb58(lVar6,0);
        fVar40 = (float)uVar25;
        fVar20 = fVar40 - fStack0000000000000144;
        fVar42 = (float)uVar10;
        fVar22 = fVar42 - fStack0000000000000148;
        fVar41 = (float)uVar27;
        fVar45 = fVar41 - fStack000000000000014c;
        fVar33 = (float)uVar8;
        uVar30 = (ulong)(uint)(fVar45 * fVar33);
        if (fVar45 * fVar33 + fVar20 * fVar21 + fVar22 * fVar16 < 0.0) goto LAB_023b18dc;
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1b = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar16 = fVar45 * fVar45;
        fVar21 = SQRT(fVar16 + fVar22 * fVar22 + fVar20 * fVar20);
        fStack000000000000009c = 1.0;
        fStack00000000000000f8 = 1.0;
        if (unaff_w22 == 0) {
          if (*(long *)(unaff_x28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          fVar17 = *(float *)(unaff_x28 + 0x24);
          fVar18 = *(float *)(unaff_x28 + 0x28);
          iVar3 = FUN_0265fdf0(*(long *)(unaff_x28 + 0x30),0);
          fStack000000000000009c = 1.0;
          if (0 < iVar3) {
            if (*(long *)(unaff_x28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar16 = fVar17;
            fStack000000000000009c =
                 (float)FUN_0265f96c(fVar21 / fVar17,*(long *)(unaff_x28 + 0x30),0);
          }
          if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar3 = FUN_0265fdf0(*(long *)(unaff_x28 + 0x38),0);
          if (iVar3 < 1) {
            fStack00000000000000f8 = 1.0;
          }
          else {
            if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar16 = fVar18;
            fStack00000000000000f8 =
                 (float)FUN_0265f96c(fVar21 / fVar18,*(long *)(unaff_x28 + 0x38),0);
          }
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_02681b9c(unaff_x26,0,0);
        fStack000000000000011c = 1.0;
        if (((uVar8 & 1) != 0) &&
           (fStack000000000000011c = 1.0, *(char *)(unaff_x28 + 0x40) != '\0')) {
          if (DAT_0377518c == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_0377518c = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (fVar21 <= fStack00000000000000f4) {
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar9 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar20 = *pfVar9;
            fVar22 = pfVar9[1];
            fVar45 = pfVar9[2];
          }
          else {
            fVar20 = fVar20 / fVar21;
            fVar22 = fVar22 / fVar21;
            fVar45 = fVar45 / fVar21;
          }
          if (in_stack_000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          in_stack_00000280 = -fVar20;
          in_stack_00000284 = -fVar22;
          fVar33 = -fVar45;
          fVar16 = in_stack_00000284;
          (**(code **)(in_stack_000000d0 + 0x18))
                    (*(undefined8 *)(in_stack_000000d0 + 0x40),unaff_x26);
          fStack000000000000011c = in_stack_0000033c;
        }
        lVar6 = FUN_0268fd10();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar21 = (float)FUN_0269f578(lVar6,0);
        fVar20 = fVar16;
        fVar22 = fVar33;
        lVar6 = FUN_0268fd10(unaff_x28,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar45 = (float)FUN_0269f578(lVar6,0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar21 = fVar21 - fVar45;
        fVar16 = fVar16 - fVar20;
        fVar33 = fVar33 - fVar22;
        fVar20 = SQRT(fVar33 * fVar33 + fVar21 * fVar21 + fVar16 * fVar16);
        if (fVar20 <= fStack00000000000000f4) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar9 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fVar21 = *pfVar9;
          fVar16 = pfVar9[1];
          fVar33 = pfVar9[2];
        }
        else {
          fVar21 = fVar21 / fVar20;
          fVar16 = fVar16 / fVar20;
          fVar33 = fVar33 / fVar20;
        }
        puVar2 = Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        uVar14 = unaff_x20[4];
        uVar32 = unaff_x20[7];
        uVar26 = unaff_x20[6];
        uVar36 = unaff_x20[1];
        uVar34 = *unaff_x20;
        uVar38 = unaff_x20[3];
        uVar37 = unaff_x20[2];
        *(undefined8 *)(unaff_x24 + 0xe8) = unaff_x20[5];
        *(undefined8 *)(unaff_x24 + 0xe0) = uVar14;
        *(undefined8 *)(unaff_x24 + 0xf8) = uVar32;
        *(undefined8 *)(unaff_x24 + 0xf0) = uVar26;
        *(undefined8 *)(unaff_x24 + 200) = uVar36;
        *(undefined8 *)(unaff_x24 + 0xc0) = uVar34;
        *(undefined8 *)(unaff_x24 + 0xd8) = uVar38;
        *(undefined8 *)(unaff_x24 + 0xd0) = uVar37;
        fVar20 = *(float *)(unaff_x28 + 0x5c);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar22 = fVar41 + fVar33 * fVar20;
        *(undefined8 *)(unaff_x24 + 0x48) = *(undefined8 *)(unaff_x24 + 200);
        *(undefined8 *)(unaff_x24 + 0x40) = *(undefined8 *)(unaff_x24 + 0xc0);
        *(undefined8 *)(unaff_x24 + 0x58) = *(undefined8 *)(unaff_x24 + 0xd8);
        *(undefined8 *)(unaff_x24 + 0x50) = *(undefined8 *)(unaff_x24 + 0xd0);
        *(undefined8 *)(unaff_x24 + 0x68) = *(undefined8 *)(unaff_x24 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0x60) = *(undefined8 *)(unaff_x24 + 0xe0);
        *(undefined8 *)(unaff_x24 + 0x78) = *(undefined8 *)(unaff_x24 + 0xf8);
        *(undefined8 *)(unaff_x24 + 0x70) = *(undefined8 *)(unaff_x24 + 0xf0);
        FUN_023b0320(fVar40 + fVar21 * fVar20,fVar42 + fVar16 * fVar20);
        if (unaff_w22 == 0) {
          fVar16 = *(float *)(unaff_x28 + 0x54);
        }
        else {
          fVar16 = (float)FUN_023b1534(unaff_x28);
        }
        uVar14 = unaff_x20[4];
        uVar32 = unaff_x20[7];
        uVar26 = unaff_x20[6];
        uVar36 = unaff_x20[1];
        uVar34 = *unaff_x20;
        uVar38 = unaff_x20[3];
        uVar37 = unaff_x20[2];
        *(undefined8 *)(unaff_x24 + 0xe8) = unaff_x20[5];
        *(undefined8 *)(unaff_x24 + 0xe0) = uVar14;
        *(undefined8 *)(unaff_x24 + 0xf8) = uVar32;
        *(undefined8 *)(unaff_x24 + 0xf0) = uVar26;
        *(undefined8 *)(unaff_x24 + 200) = uVar36;
        *(undefined8 *)(unaff_x24 + 0xc0) = uVar34;
        *(undefined8 *)(unaff_x24 + 0xd8) = uVar38;
        *(undefined8 *)(unaff_x24 + 0xd0) = uVar37;
        lVar6 = FUN_0268fd10();
        fVar20 = (float)uVar34;
        fVar21 = (float)uVar26;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar45 = (float)FUN_0269fa60(lVar6,0);
        if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_000001c8 = *(undefined8 *)(unaff_x24 + 200);
        in_stack_000001c0 = *(undefined8 *)(unaff_x24 + 0xc0);
        in_stack_000001d8 = *(undefined8 *)(unaff_x24 + 0xd8);
        in_stack_000001d0 = *(undefined8 *)(unaff_x24 + 0xd0);
        fVar42 = fVar42 + fVar16 * fVar21;
        *(undefined8 *)(unaff_x24 + 0x28) = *(undefined8 *)(unaff_x24 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0x20) = *(undefined8 *)(unaff_x24 + 0xe0);
        *(undefined8 *)(unaff_x24 + 0x38) = *(undefined8 *)(unaff_x24 + 0xf8);
        *(undefined8 *)(unaff_x24 + 0x30) = *(undefined8 *)(unaff_x24 + 0xf0);
        fVar16 = (float)FUN_023b0320(fVar40 + fVar16 * fVar45,fVar42,fVar41 + fVar16 * fVar20);
        if (DAT_03775439 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775439 = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar31 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x28 + 0x58));
        FUN_026a991c(SQRT((fVar16 - fVar19) * (fVar16 - fVar19) +
                          (fVar42 - fVar39) * (fVar42 - fVar39)),(float)dVar31,fVar22,
                     uStack00000000000000ec,in_stack_00000128,uStack00000000000000f0,0);
        if (*(char *)(unaff_x28 + 0x50) == '\0') {
          FUN_026a9b68(in_stack_00000128,*(undefined8 *)PTR_DAT_033f7000,0);
        }
        else {
          FUN_026a9b24(in_stack_00000128,*(undefined8 *)PTR_DAT_033f7000,0);
        }
        lVar6 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar6);
          lVar6 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        }
        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
        if (lVar11 != 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar6);
            lVar11 = *(long *)(*(long *)(*(long *)
                                          Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                        + 0xb8) + 0x28);
            if (lVar11 != 0) goto LAB_023b2100;
            in_stack_000002a0 = 0;
            *(undefined8 *)(unaff_x24 + 200) = 0;
            *(undefined8 *)(unaff_x24 + 0xc0) = 0;
            *(undefined8 *)(unaff_x24 + 0xd8) = 0;
            *(undefined8 *)(unaff_x24 + 0xd0) = 0;
          }
          else {
LAB_023b2100:
            in_stack_000002a0 = *(undefined8 *)(lVar11 + 0x48);
            uVar14 = *(undefined8 *)(lVar11 + 0x28);
            uVar32 = *(undefined8 *)(lVar11 + 0x40);
            uVar26 = *(undefined8 *)(lVar11 + 0x38);
            *(undefined8 *)(unaff_x24 + 200) = *(undefined8 *)(lVar11 + 0x30);
            *(undefined8 *)(unaff_x24 + 0xc0) = uVar14;
            *(undefined8 *)(unaff_x24 + 0xd8) = uVar32;
            *(undefined8 *)(unaff_x24 + 0xd0) = uVar26;
          }
          in_stack_00000198 = *(undefined8 *)(unaff_x24 + 200);
          in_stack_00000190 = *(undefined8 *)(unaff_x24 + 0xc0);
          in_stack_000001a8 = *(undefined8 *)(unaff_x24 + 0xd8);
          in_stack_000001a0 = *(undefined8 *)(unaff_x24 + 0xd0);
          in_stack_000001b0 = in_stack_000002a0;
          FUN_026acb10(in_stack_00000128,uStack00000000000000dc,&stack0x00000190,0);
          lVar6 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar6);
          lVar6 = *(long *)Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
        }
        fVar16 = (float)*(int *)(*(long *)(lVar6 + 0xb8) + 0x18);
        uVar30 = 0x3f000000;
        uVar8 = 0;
        FUN_026a991c((float)iStack00000000000000fc / fVar16 + 0.5 / fVar16,0x3f000000,0,0,
                     in_stack_00000128,uStack00000000000000e8,0);
        if ((*(char *)(unaff_x28 + 0x50) != '\0') && (*(int *)(unaff_x28 + 0x58) != 0)) {
          iStack00000000000000fc = iStack00000000000000fc + 1;
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000120 = *(long *)(lVar15 + 0x18);
        if (in_stack_00000120 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((int)*(ulong *)(in_stack_00000120 + 0x18) < 1) goto LAB_023b18dc;
        uVar8 = (ulong)(uint)DAT_028aa040;
        in_stack_00000090._4_4_ = fStack000000000000009c * fStack000000000000011c;
        uVar30 = (ulong)(uint)(fVar39 + fVar39);
        fStack00000000000000cc = fVar19 + fVar19 + -1.0;
        in_stack_00000068 = fVar39 + fVar39 + -1.0;
        fStack0000000000000074 = -in_stack_00000068;
        fStack0000000000000070 = ABS(fStack00000000000000cc);
        in_stack_00000050._4_4_ = -(fStack00000000000000cc - fStack00000000000000cc);
        unaff_x29 = 0;
        uVar10 = *(ulong *)(in_stack_00000120 + 0x18) & 0xffffffff;
        in_stack_00000060._4_4_ = fStack00000000000000f8 * DAT_028aa040;
      }
      if (uVar10 <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      param_1 = *(long *)(in_stack_00000120 + unaff_x29 * 8 + 0x20);
    } while ((param_1 == 0) || (*(char *)(param_1 + 0x10) == '\0'));
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_0268b4e0(uVar14,0,0);
    fVar19 = (float)uVar8;
    if ((uVar10 & 1) == 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(param_1 + 0x6c) == 0) goto LAB_023b2a7c;
    }
    if ((*(float *)(param_1 + 0x2c) <= 0.0) || (*(int *)(param_1 + 0x48) < 1)) goto LAB_023b2a7c;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar39 = (float)uVar30;
    uVar8 = FUN_02681b9c(unaff_x26,0,0);
    in_stack_000000a8._4_4_ = in_stack_00000090._4_4_;
    unaff_s10 = in_stack_00000090._4_4_;
    unaff_s14 = in_stack_00000090._4_4_;
    if ((uVar8 & 1) != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(char *)(param_1 + 0x70) != '\0') {
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = FUN_02667a34(unaff_x26,0);
        if ((uVar8 & 1) == 0) {
          in_stack_000000a8._4_4_ = (float)FUN_026678c4(unaff_x26,0);
        }
        else {
          in_stack_000000a8._4_4_ = (float)FUN_026678c4(unaff_x26,0);
          fVar16 = fVar39;
          fVar21 = fVar19;
          FUN_026679f8(unaff_x26,0);
          fVar20 = (float)FUN_02699be4(0);
          in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ * fVar20;
          fVar39 = fVar39 * fVar16;
          fVar19 = fVar19 * fVar21;
        }
        in_stack_000000a8._4_4_ = in_stack_00000090._4_4_ * in_stack_000000a8._4_4_;
        unaff_s10 = in_stack_00000090._4_4_ * fVar39;
        unaff_s14 = in_stack_00000090._4_4_ * fVar19;
      }
    }
    uVar4 = FUN_0268202c(0);
    fStack00000000000000f8 = fStack0000000000000074;
    if ((unaff_w22 & (uVar4 ^ 1) & 1) != 0) {
      fStack00000000000000f8 = in_stack_00000068;
    }
    fVar19 = fStack0000000000000070;
    if (fStack0000000000000070 <= ABS(fStack00000000000000f8)) {
      fVar19 = ABS(fStack00000000000000f8);
    }
    if (*(long *)(unaff_x28 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar3 = FUN_0265fdf0(*(long *)(unaff_x28 + 0x48),0);
    fVar39 = 1.0;
    if (0 < iVar3) {
      if (*(long *)(unaff_x28 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar39 = (float)FUN_0265f96c(fVar19,*(long *)(unaff_x28 + 0x48),0);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = (ulong)(uint)*(float *)(param_1 + 0x2c);
    uVar30 = (ulong)(uint)fStack000000000000009c;
    unaff_s11 = fStack000000000000009c *
                fVar39 * *(float *)(unaff_x28 + 0x20) * *(float *)(param_1 + 0x2c);
    if (unaff_s11 <= 0.0) goto LAB_023b2a7c;
    if ((*(int *)(param_1 + 0x6c) == 0) && (*(char *)(param_1 + 0x4c) != '\0')) {
      plVar13 = *(long **)(param_1 + 0x30);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar3 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
      iVar5 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
      param_2 = (float)iVar3 / (float)iVar5;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      param_2 = 1.0;
    }
    unaff_x27 = in_stack_00000128;
    in_stack_00000308 = param_1;
    if (*(char *)(param_1 + 0x4c) != '\0') {
      unaff_s15 = *(float *)(param_1 + 0x3c);
      unaff_s13 = *(float *)(param_1 + 0x40);
      if (param_2 < 1.0) {
        unaff_s13 = param_2 * unaff_s13;
        goto LAB_023b24b8;
      }
      goto code_r0x023b24b4;
    }
    unaff_s15 = *(float *)(param_1 + 0x3c);
    unaff_s13 = *(float *)(param_1 + 0x40);
  } while( true );
}


