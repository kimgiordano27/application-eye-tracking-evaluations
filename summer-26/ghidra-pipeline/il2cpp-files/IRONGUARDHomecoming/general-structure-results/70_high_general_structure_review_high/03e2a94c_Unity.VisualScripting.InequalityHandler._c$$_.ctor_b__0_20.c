/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_20
ENTRY_POINT: 03e2a94c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_17;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_20
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  long lVar14;
  int *piVar15;
  float *pfVar16;
  float *pfVar17;
  long unaff_x19;
  int unaff_w20;
  undefined1 *__src;
  long unaff_x22;
  char unaff_w23;
  float unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  uint uVar18;
  long *plVar19;
  int unaff_w28;
  long unaff_x29;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  uint *in_stack_00000050;
  uint *in_stack_00000058;
  uint *in_stack_00000060;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float in_stack_00000250;
  float in_stack_00000254;
  float in_stack_00000258;
  float in_stack_00000270;
  float in_stack_00000274;
  float in_stack_00000278;
  ulong in_stack_00000280;
  float in_stack_00000288;
  float in_stack_00000290;
  float in_stack_00000294;
  float in_stack_00000298;
  float in_stack_0000029c;
  
  do {
    fVar20 = (float)FUN_03c7c6bc(param_4);
    fVar31 = in_stack_00000258;
    fVar41 = in_stack_00000254;
    fVar21 = (float)FUN_03c7c6bc(in_stack_00000250,0);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4();
      DAT_0482ee9b = unaff_w23;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fStack0000000000000030 = param_2 * fVar31 - param_3 * fVar41;
    fVar31 = param_3 * fVar21 - fVar20 * fVar31;
    fVar20 = fVar20 * fVar41 - param_2 * fVar21;
    fVar41 = SQRT(fVar20 * fVar20 +
                  fStack0000000000000030 * fStack0000000000000030 + fVar31 * fVar31);
    if (fVar41 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0482ee12 = unaff_w23;
      }
      pfVar13 = *(float **)(*unaff_x26 + 0xb8);
      fStack0000000000000030 = *pfVar13;
      fStack000000000000002c = pfVar13[1];
      fVar41 = pfVar13[2];
      fVar31 = fStack0000000000000030;
    }
    else {
      fStack0000000000000030 = fStack0000000000000030 / fVar41;
      fStack000000000000002c = fVar31 / fVar41;
      fVar41 = fVar20 / fVar41;
    }
    lVar9 = FUN_04073258(unaff_x29,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar21 = (float)FUN_0407d3c8(lVar9,0);
    fVar22 = (float)FUN_03c7c6bc(fStack000000000000004c,fStack0000000000000048,0);
    fVar23 = (float)FUN_03c7c6bc(in_stack_00000250,in_stack_00000254,0);
    uVar29 = (ulong)(uint)(fVar31 + fStack000000000000003c * fStack000000000000002c +
                                    fStack0000000000000038 * fStack0000000000000048 +
                                    fStack0000000000000040 * in_stack_00000254);
    uVar34 = (ulong)(uint)(fVar20 + fStack000000000000003c * fVar41 +
                                    fStack0000000000000038 * fStack0000000000000044 +
                                    fStack0000000000000040 * in_stack_00000258);
    FUN_0407d468(fVar21 + fStack000000000000003c * fStack0000000000000030 +
                          fStack0000000000000038 * fVar22 + fStack0000000000000040 * fVar23,uVar29,
                 lVar9,0);
    do {
      fVar31 = (float)uVar34;
      uVar27 = (undefined4)(in_stack_00000280 >> 0x20);
      if ((*in_stack_00000058 & 1) != 0) {
        if ((*in_stack_00000058 >> 1 & 1) != 0) {
          FUN_04073258(unaff_x29,0);
          FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                       in_stack_00000280 & 0xffffffff,uVar27,in_stack_00000288);
        }
        lVar9 = FUN_04073258(unaff_x29,0);
        fVar31 = fStack0000000000000090;
        fVar41 = fStack000000000000008c;
        FUN_03c7c6bc(fStack0000000000000094,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar20 = (float)FUN_0407e758(lVar9,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar21 = DAT_00c926ac;
        fVar22 = SQRT(fVar41 * fVar41 + fVar20 * fVar20 + fVar31 * fVar31);
        if (fVar22 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar13 = *(float **)(*unaff_x26 + 0xb8);
          fVar20 = *pfVar13;
          fVar31 = pfVar13[1];
          fVar41 = pfVar13[2];
        }
        else {
          fVar20 = fVar20 / fVar22;
          fVar31 = fVar31 / fVar22;
          fVar41 = fVar41 / fVar22;
        }
        uVar34 = (ulong)(uint)fVar31;
        uVar29 = FUN_03c7c6c0(fVar20,0);
        fVar22 = (float)uVar34;
        lVar9 = FUN_04073258(unaff_x29,0);
        fVar31 = fStack0000000000000084;
        fVar20 = fStack0000000000000080;
        FUN_03c7c6bc(fStack0000000000000088,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar23 = (float)FUN_0407e758(lVar9,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar37 = SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar31 * fVar31);
        if (fVar37 <= fVar21) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar13 = *(float **)(*unaff_x26 + 0xb8);
          fVar23 = *pfVar13;
          fVar31 = pfVar13[1];
          fVar20 = pfVar13[2];
        }
        else {
          fVar23 = fVar23 / fVar37;
          fVar31 = fVar31 / fVar37;
          fVar20 = fVar20 / fVar37;
        }
        uVar35 = (ulong)(uint)fVar31;
        uVar30 = FUN_03c7c6c0(fVar23,0);
        uVar36 = uVar35;
        fVar23 = fVar20;
        fVar24 = (float)FUN_03e2ce3c(in_stack_00000058);
        fVar32 = (float)uVar36;
        fVar42 = fVar22;
        fVar33 = fVar41;
        fVar25 = (float)FUN_03c7c6bc(uVar29,0);
        uVar36 = uVar35;
        fVar37 = fVar20;
        fVar26 = (float)FUN_03c7c6bc(uVar30,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar31 = fVar42 * fVar37 - fVar33 * (float)uVar36;
        fVar33 = fVar33 * fVar26 - fVar25 * fVar37;
        fVar37 = fVar25 * (float)uVar36 - fVar42 * fVar26;
        fVar42 = SQRT(fVar37 * fVar37 + fVar31 * fVar31 + fVar33 * fVar33);
        if (fVar42 <= fVar21) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar13 = *(float **)(*unaff_x26 + 0xb8);
          fStack000000000000004c = *pfVar13;
          fStack000000000000002c = pfVar13[1];
          fVar37 = pfVar13[2];
        }
        else {
          fVar31 = fVar31 / fVar42;
          fVar33 = fVar33 / fVar42;
          fVar37 = fVar37 / fVar42;
          fStack000000000000002c = fVar33;
          fStack000000000000004c = fVar31;
        }
        lVar9 = FUN_04073258(unaff_x29,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar21 = (float)FUN_0407d9e8(lVar9,0);
        fVar42 = (float)FUN_03c7c6bc(uVar29 & 0xffffffff,uVar34 & 0xffffffff,0);
        fVar25 = (float)FUN_03c7c6bc(uVar30,uVar35,0);
        uVar29 = (ulong)(uint)(fVar33 + fVar24 * fStack000000000000002c + fVar32 * fVar22 +
                                        fVar23 * (float)uVar35);
        fVar31 = fVar31 + fVar24 * fVar37 + fVar32 * fVar41 + fVar23 * fVar20;
        FUN_0407da88(fVar21 + fVar24 * fStack000000000000004c + fVar32 * fVar42 + fVar23 * fVar25,
                     uVar29,lVar9,0);
      }
      if ((*in_stack_00000050 & 1) != 0) {
        if ((*in_stack_00000050 >> 1 & 1) != 0) {
          uVar29 = (ulong)(uint)in_stack_00000274;
          FUN_04073258(unaff_x29,0);
          fVar31 = in_stack_00000278;
          FUN_03e2cbdc(in_stack_00000270,uVar29,in_stack_00000278,in_stack_00000280 & 0xffffffff,
                       uVar27,in_stack_00000288);
          if (*(int *)(unaff_x19 + 0x94) == 3) {
            puVar12 = *(undefined4 **)
                       (*(long *)
                         Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                       + 0xb8);
            uVar29 = (ulong)(uint)puVar12[1];
            fVar31 = (float)puVar12[2];
            fStack0000000000000070 = (float)puVar12[3];
            fStack000000000000007c = (float)FUN_03cb3880(*puVar12,0);
            fStack0000000000000078 = (float)uVar29;
            fStack0000000000000074 = fVar31;
          }
        }
        uVar27 = FUN_03e2ce3c(in_stack_00000050);
        fVar41 = fStack0000000000000090;
        fVar21 = fStack000000000000008c;
        fVar23 = (float)FUN_03c7c6bc(0);
        fVar20 = fStack0000000000000080;
        fVar22 = fStack0000000000000084;
        fVar37 = (float)FUN_03c7c6bc(0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar42 = fVar41 * fVar20 - fVar21 * fVar22;
        fVar20 = fVar21 * fVar37 - fVar23 * fVar20;
        fVar41 = fVar23 * fVar22 - fVar41 * fVar37;
        fVar21 = SQRT(fVar41 * fVar41 + fVar42 * fVar42 + fVar20 * fVar20);
        if (fVar21 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar13 = *(float **)(*unaff_x26 + 0xb8);
          fVar42 = *pfVar13;
          fVar20 = pfVar13[1];
          fVar41 = pfVar13[2];
        }
        else {
          fVar42 = fVar42 / fVar21;
          fVar20 = fVar20 / fVar21;
          fVar41 = fVar41 / fVar21;
        }
        fVar37 = fStack000000000000008c;
        fVar33 = fStack0000000000000090;
        fVar24 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
        fVar25 = (float)FUN_040674b0(uVar29,0);
        fVar21 = fVar41;
        fVar22 = fVar20;
        fVar23 = fVar42;
        fVar26 = (float)FUN_040674b0(uVar27,0);
        uVar29 = (ulong)(uint)fStack0000000000000084;
        uVar36 = (ulong)(uint)fStack0000000000000080;
        uVar30 = FUN_03c7c6bc(fStack0000000000000088,uVar29,uVar36,0);
        uVar38 = (ulong)(uint)((fVar25 * fVar23 + fVar37 * fVar22 + fVar33 * fVar21) -
                              fVar24 * fVar26);
        uVar34 = (ulong)(uint)((fVar33 * fVar26 + fVar37 * fVar23 + fVar24 * fVar21) -
                              fVar25 * fVar22);
        FUN_040677e4((fVar24 * fVar22 + fVar37 * fVar26 + fVar25 * fVar21) - fVar33 * fVar23,uVar34,
                     uVar38,((fVar37 * fVar21 - fVar25 * fVar26) - fVar24 * fVar23) -
                            fVar33 * fVar22,uVar30,uVar29,uVar36,0);
        uVar29 = FUN_03c7c6c0(0);
        fVar33 = (float)uVar34;
        fVar24 = (float)uVar38;
        fVar23 = (float)FUN_040674b0(uVar27,0);
        fVar21 = fVar24;
        fVar22 = fVar33;
        fVar37 = (float)FUN_03c7c6bc(uVar29,0);
        fVar31 = (float)FUN_040674b0(fVar31,0);
        uVar36 = (ulong)(uint)fStack0000000000000090;
        uVar39 = (ulong)(uint)fStack000000000000008c;
        uVar30 = FUN_03c7c6bc(fStack0000000000000094,uVar36,uVar39,0);
        uVar40 = (ulong)(uint)((fVar23 * fVar37 + fVar41 * fVar22 + fVar20 * fVar21) -
                              fVar42 * fVar31);
        uVar35 = (ulong)(uint)((fVar20 * fVar31 + fVar41 * fVar37 + fVar42 * fVar21) -
                              fVar23 * fVar22);
        FUN_040677e4((fVar42 * fVar22 + fVar41 * fVar31 + fVar23 * fVar21) - fVar20 * fVar37,uVar35,
                     uVar40,((fVar41 * fVar21 - fVar23 * fVar31) - fVar42 * fVar37) -
                            fVar20 * fVar22,uVar30,uVar36,uVar39,0);
        uVar30 = FUN_03c7c6c0(0);
        lVar9 = FUN_04073258(unaff_x29,0);
        FUN_03cb4cf0(uVar29 & 0xffffffff,uVar34 & 0xffffffff,uVar38 & 0xffffffff,uVar30,uVar35,
                     uVar40,0);
        fVar41 = (float)uVar30;
        fVar31 = (float)FUN_03cb3880(0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407d5e8((fStack0000000000000074 * fVar33 +
                     fStack000000000000007c * fVar41 + fStack0000000000000070 * fVar31) -
                     fStack0000000000000078 * fVar24,
                     (fStack000000000000007c * fVar24 +
                     fStack0000000000000078 * fVar41 + fStack0000000000000070 * fVar33) -
                     fStack0000000000000074 * fVar31,
                     (fStack0000000000000078 * fVar31 +
                     fStack0000000000000074 * fVar41 + fStack0000000000000070 * fVar24) -
                     fStack000000000000007c * fVar33,
                     ((fStack0000000000000070 * fVar41 - fStack000000000000007c * fVar31) -
                     fStack0000000000000078 * fVar33) - fStack0000000000000074 * fVar24,lVar9,0);
      }
      unaff_w28 = unaff_w28 + 1;
      unaff_w27 = unaff_w27 + 1;
      if (unaff_w20 == unaff_w28) {
        do {
          unaff_w28 = unaff_w20;
          FUN_03e1c250(&stack0x000002a0);
          puVar4 = Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
          iStack0000000000000020 = iStack0000000000000020 + 1;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar7 = (long *)FUN_03e18b6c(),
             plVar19 = (long *)
                       Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
             , puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
             plVar7 == (long *)0x0)) {
LAB_03e29e84:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *plVar7;
          uVar29 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar29 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
              }
              uVar29 = uVar29 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar29 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
          iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if (iVar6 <= iStack0000000000000020) {
            *(undefined1 *)(unaff_x19 + 0xf8) = 0;
            return;
          }
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar7 = (long *)FUN_03e18b6c(), plVar7 == (long *)0x0)) goto LAB_03e29e84;
          lVar9 = *plVar7;
          uVar29 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar29 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03e2a18c;
              }
              uVar29 = uVar29 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar29 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01ecb238(plVar7,*(long *)
                                        Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                                ,0);
LAB_03e2a18c:
          uVar30 = (*(code *)*puVar8)(plVar7,iStack0000000000000020,puVar8[1]);
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar9 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0)) goto LAB_03e29e84;
          FUN_0407cee0(&stack0x00000098,lVar9,0);
          in_stack_00000128 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
          in_stack_00000130 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
          in_stack_00000120 = in_stack_00000098;
          in_stack_00000138 = in_stack_000000b0;
          in_stack_00000148 = in_stack_000000c0;
          in_stack_00000140 = in_stack_000000b8;
          in_stack_00000158 = in_stack_000000d0;
          in_stack_00000150 = in_stack_000000c8;
          FUN_03c8e558(&stack0x00000098,&stack0x00000120,0);
          in_stack_000000e8 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
          in_stack_000000f0 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
          in_stack_000000e0 = in_stack_00000098;
          in_stack_000000f8 = in_stack_000000b0;
          in_stack_00000108 = in_stack_000000c0;
          in_stack_00000100 = in_stack_000000b8;
          in_stack_00000118 = in_stack_000000d0;
          in_stack_00000110 = in_stack_000000c8;
          Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88
                    (&stack0x000002a0,uVar30,&stack0x000000e0,3);
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar31 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                       *(undefined8 *)
                                        Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                      );
          fVar41 = fVar31 + fStack0000000000000014;
          if (*(int *)(unaff_x19 + 0x38) == 0) {
            bVar2 = in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
                    fVar41 < in_stack_00000068._4_4_;
            if (in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
                fVar41 < in_stack_00000068._4_4_) {
              in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - fVar31;
            }
          }
          else {
            bVar2 = false;
            in_stack_00000068._4_4_ = 0.0;
          }
          lVar9 = *(long *)(unaff_x19 + 0x108);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          unaff_w20 = unaff_w28;
          if (!bVar2 && in_stack_00000068._4_4_ <= fVar41) {
            while (uVar29 = FUN_03e2c8c8(), (uVar29 & 1) != 0) {
              lVar9 = *(long *)(unaff_x19 + 0x108);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar11 = *(long *)(lVar9 + 0x10);
              lVar14 = *plVar19;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(float *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000068._4_4_ / fVar31;
              }
              else {
                FUN_0314b890(lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              iVar6 = *(int *)(unaff_x19 + 0x38);
              if (iVar6 == 0) {
                fVar20 = in_stack_00000018._4_4_;
                if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
                bVar5 = in_stack_00000068._4_4_ < fVar31;
                fVar20 = fStack0000000000000010 + in_stack_00000068._4_4_;
                bVar2 = bVar5 && fVar41 < fVar20;
                in_stack_00000068._4_4_ = fVar20 - fVar31;
                if (!bVar5 || fVar41 >= fVar20) {
                  in_stack_00000068._4_4_ = fVar20;
                }
              }
              else if (iVar6 == 1) {
                fStack0000000000000024 =
                     (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),
                                         *(undefined4 *)(unaff_x19 + 0x44),0);
                fVar20 = fStack0000000000000024;
LAB_03e2b708:
                bVar2 = false;
                in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar20;
              }
              else if (iVar6 == 2) {
                if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
                  fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
                }
                else {
                  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar9 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                      );
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar9 = FUN_023361c8(lVar9,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                      );
                  if (DAT_0482ee18 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee18 = unaff_w23;
                  }
                  lVar11 = *unaff_x26;
                  iVar6 = *(int *)(unaff_x19 + 0x4c);
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  if ((iVar6 == 2) || (iVar6 == 5)) {
                    if (DAT_0482ee1d == '\0') {
                      thunk_FUN_01efb3a4();
                      lVar11 = *unaff_x26;
                      iVar6 = *(int *)(unaff_x19 + 0x4c);
                      lVar14 = *(long *)(lVar11 + 0xb8);
                      DAT_0482ee1d = unaff_w23;
                    }
                    pfVar13 = (float *)(lVar14 + 0x48);
                    pfVar16 = (float *)(lVar14 + 0x4c);
                    pfVar17 = (float *)(lVar14 + 0x50);
                  }
                  else {
                    pfVar13 = (float *)(lVar14 + 0x3c);
                    pfVar16 = (float *)(lVar14 + 0x40);
                    pfVar17 = (float *)(lVar14 + 0x44);
                  }
                  if ((iVar6 == 1) || (iVar6 == 4)) {
                    if (DAT_0482ee19 == '\0') {
                      thunk_FUN_01efb3a4();
                      lVar11 = *unaff_x26;
                      DAT_0482ee19 = unaff_w23;
                    }
                    lVar11 = *(long *)(lVar11 + 0xb8);
                    pfVar13 = (float *)(lVar11 + 0x18);
                    pfVar16 = (float *)(lVar11 + 0x1c);
                    pfVar17 = (float *)(lVar11 + 0x20);
                  }
                  fVar22 = *pfVar17;
                  fVar21 = *pfVar16;
                  fVar20 = *pfVar13;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar29 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                     (lVar9,0,0);
                  if ((uVar29 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar9 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                         *(undefined8 *)
                                          Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                        );
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar9 = FUN_0233642c(lVar9,*(undefined8 *)PTR_DAT_04579bb8);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar29 = FUN_04073094(lVar9,0,0);
                    if ((uVar29 & 1) != 0) {
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar11 = FUN_04070398(lVar9,0);
                      if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar14 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                            *(undefined8 *)
                                             Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                           );
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar14 = FUN_04073258(lVar14,0);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_0407e3a8(fVar20,lVar14,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      fVar20 = (float)FUN_0407e758(lVar11,0);
                      fVar23 = fVar21;
                      fVar37 = fVar22;
                      lVar11 = FUN_04070398(lVar9,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      fVar42 = (float)FUN_0407ec3c(lVar11,0);
                      fVar20 = fVar20 * fVar42;
                      fVar21 = fVar21 * fVar23;
                      fVar22 = fVar22 * fVar37;
                    }
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar29 = FUN_04073094(lVar9,0,0);
                  plVar19 = (long *)
                            Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                  ;
                  if ((uVar29 & 1) != 0) {
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar11 = FUN_04050c14(lVar9,0);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_04051ba0(&stack0x00000098,lVar11,0);
                    fVar42 = fStack00000000000000ac;
                    fVar37 = fStack00000000000000a8;
                    fVar23 = fStack00000000000000a4;
                    lVar9 = FUN_022c6694(lVar9,*(undefined8 *)
                                                Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__
                                        );
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar1 = *(uint *)(lVar9 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar18 = 0;
                      fVar37 = fVar42;
                      do {
                        if (uVar1 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        lVar11 = *(long *)(lVar9 + (long)(int)uVar18 * 8 + 0x20);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar11 = FUN_04050c14(lVar11,0);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        FUN_04051ba0(&stack0x00000098,lVar11,0);
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        fVar42 = fVar23 + fVar23;
                        if (fVar23 + fVar23 <= fStack00000000000000a4 + fStack00000000000000a4) {
                          fVar42 = fStack00000000000000a4 + fStack00000000000000a4;
                        }
                        fVar23 = fVar37 + fVar37;
                        if (fVar37 + fVar37 <= fStack00000000000000ac + fStack00000000000000ac) {
                          fVar23 = fStack00000000000000ac + fStack00000000000000ac;
                        }
                        uVar18 = uVar18 + 1;
                        fVar37 = fVar23 * 0.5;
                        fVar23 = fVar42 * 0.5;
                        fVar42 = fVar37;
                      } while ((int)uVar18 < (int)uVar1);
                    }
                    plVar19 = (long *)
                              Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                    ;
                    if (DAT_0482f03e == '\0') {
                      thunk_FUN_01efb3a4();
                      DAT_0482f03e = unaff_w23;
                    }
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    fVar20 = fVar20 * (fVar23 + fVar23);
                    fVar21 = fVar21 * (fVar37 + fVar37);
                    fVar22 = fVar22 * (fVar42 + fVar42);
                    fStack0000000000000024 =
                         SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20);
                  }
                }
                memcpy(&stack0x00000098,&stack0x000002a0,0x48);
                if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar28 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w20,
                                      *(undefined8 *)
                                       Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                     );
                uVar30 = *(undefined8 *)PTR_DAT_04579bd0;
                memcpy(&stack0x000002e8,&stack0x00000098,0x48);
                FUN_0240e31c(uVar28,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar30)
                ;
                bVar2 = false;
                in_stack_00000068._4_4_ = fVar31 + 1.0;
                if (in_stack_0000029c < 1.0) {
                  in_stack_00000068._4_4_ = fVar31 * in_stack_0000029c;
                }
              }
              else {
                bVar2 = false;
              }
              unaff_w20 = unaff_w20 + 1;
              if ((bVar2) || (fVar41 < in_stack_00000068._4_4_)) break;
            }
          }
          lVar9 = *(long *)(unaff_x19 + 0xd0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = *(int *)(lVar9 + 0x18) + -1;
          if (unaff_w20 <= iVar6) {
            while( true ) {
              uVar30 = FUN_030f28e4(lVar9,iVar6,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar29 = FUN_04073094(uVar30,0,0);
              if ((uVar29 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar30 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar6,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_040770d0(uVar30,0);
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar6,*(undefined8 *)PTR_DAT_04579bc0);
              }
              iVar6 = iVar6 + -1;
              if (iVar6 < unaff_w20) break;
              lVar9 = *(long *)(unaff_x19 + 0xd0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            }
          }
        } while (unaff_w20 <= unaff_w28);
        unaff_w27 = 0;
      }
      if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x29 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w28,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                              );
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar28 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w27,
                            *(undefined8 *)
                             Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                           );
      uVar30 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
      memcpy(&stack0x00000330,&stack0x000002a0,0x48);
      FUN_02409430(uVar28,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,uVar30
                  );
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_04073258(unaff_x29,0);
      fVar31 = in_stack_00000294;
      fVar41 = in_stack_00000298;
      FUN_03c7c6bc(in_stack_00000290,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407d468(lVar9,0);
      if (*(int *)(unaff_x19 + 0x38) == 2) {
        memcpy(&stack0x00000330,&stack0x000002a0,0x48);
        if (unaff_w28 + 1 < unaff_w20) {
          memcpy(&stack0x00000200,&stack0x00000330,0x48);
          if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar30 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w27 + 1,
                                *(undefined8 *)
                                 Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                               );
          __src = &stack0x00000200;
        }
        else {
          __src = &stack0x000001b0;
          memcpy(&stack0x000001b0,&stack0x00000330,0x48);
          uVar30 = 0x3f800000;
        }
        memcpy(&stack0x00000160,__src,0x48);
        uVar28 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
        memcpy(&stack0x00000378,&stack0x00000160,0x48);
        fVar20 = (float)FUN_0240a9dc(uVar30,&stack0x00000378,uVar28);
        in_stack_00000280 = CONCAT44(fVar31 - in_stack_00000294,fVar20 - in_stack_00000290);
        in_stack_00000288 = fVar41 - in_stack_00000298;
      }
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        cVar10 = *(char *)(unaff_x22 + 0xe1a);
      }
      else {
        cVar10 = '\x01';
      }
      fVar31 = in_stack_00000278 * in_stack_00000278 +
               in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
      fVar41 = 1.0 / SQRT(fVar31);
      fVar20 = (float)in_stack_00000280;
      fVar21 = (float)(in_stack_00000280 >> 0x20);
      fStack0000000000000094 = in_stack_00000270 * fVar41;
      fStack0000000000000090 = in_stack_00000274 * fVar41;
      fStack000000000000008c = in_stack_00000278 * fVar41;
      if (fVar31 <= unaff_w24) {
        fStack0000000000000090 = 0.0;
        fStack0000000000000094 = 0.0;
        fStack000000000000008c = 0.0;
      }
      if (cVar10 == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar31 = in_stack_00000288 * in_stack_00000288 + fVar20 * fVar20 + fVar21 * fVar21;
      fVar41 = 1.0 / SQRT(fVar31);
      fVar20 = fVar20 * fVar41;
      fVar22 = fVar21 * fVar41;
      fStack0000000000000088 = fVar20;
      fStack0000000000000084 = fVar22;
      fStack0000000000000080 = in_stack_00000288 * fVar41;
      if (fVar31 <= unaff_w24) {
        fStack0000000000000084 = 0.0;
        fStack0000000000000088 = 0.0;
        fStack0000000000000080 = 0.0;
      }
      if (*(int *)(unaff_x19 + 0x3c) == 1) {
        lVar9 = FUN_04070398();
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee19 = unaff_w23;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(*unaff_x26 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar11 + 0x1c);
        fStack000000000000008c = *(float *)(lVar11 + 0x20);
        FUN_0407e3a8(*(undefined4 *)(lVar11 + 0x18),lVar9,0);
        fStack0000000000000094 = (float)FUN_03c7c6c0(0);
        lVar9 = FUN_04070398();
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee1d = unaff_w23;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(*unaff_x26 + 0xb8);
        fVar20 = *(float *)(lVar11 + 0x4c);
        fVar22 = *(float *)(lVar11 + 0x50);
        FUN_0407e3a8(*(undefined4 *)(lVar11 + 0x48),lVar9,0);
        fStack0000000000000088 = (float)FUN_03c7c6c0(0);
        fStack0000000000000080 = fVar22;
        fStack0000000000000084 = fVar20;
      }
      else if (*(int *)(unaff_x19 + 0x3c) == 2) {
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee19 = unaff_w23;
        }
        lVar9 = *(long *)(*unaff_x26 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar9 + 0x1c);
        fStack000000000000008c = *(float *)(lVar9 + 0x20);
        fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar9 + 0x18),0);
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee1d = unaff_w23;
        }
        lVar9 = *(long *)(*unaff_x26 + 0xb8);
        fVar20 = *(float *)(lVar9 + 0x4c);
        fVar22 = *(float *)(lVar9 + 0x50);
        fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar9 + 0x48),0);
        fStack0000000000000080 = fVar22;
        fStack0000000000000084 = fVar20;
      }
      fVar31 = (float)FUN_03e23f04();
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar23 = fVar22 * fVar22 + fVar31 * fVar31 + fVar20 * fVar20;
      fVar37 = 1.0 / SQRT(fVar23);
      fVar31 = fVar31 * fVar37;
      fVar20 = fVar20 * fVar37;
      fVar42 = 0.0;
      fVar41 = fVar31;
      fStack0000000000000078 = fVar20;
      fStack0000000000000074 = fVar22 * fVar37;
      if (fVar23 <= unaff_w24) {
        fVar41 = fVar42;
        fStack0000000000000078 = fVar42;
        fStack0000000000000074 = fVar42;
      }
      fVar22 = (float)FUN_03e23f04();
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar31 = fVar20 * fVar20 + fVar22 * fVar22 + fVar31 * fVar31;
      fStack0000000000000070 = fVar22 * (1.0 / SQRT(fVar31));
      if (fVar31 <= unaff_w24) {
        fStack0000000000000070 = 0.0;
      }
      FUN_03cb4cf0(fVar41,0);
      FUN_03cb3880(0);
      fStack000000000000007c = (float)FUN_04066fb8(0);
      lVar9 = FUN_04073258(unaff_x29,0);
      fVar31 = fStack0000000000000094;
      fVar41 = fStack0000000000000084;
      fVar20 = fStack0000000000000080;
      FUN_03cb4cf0(fStack0000000000000088,0);
      fVar22 = (float)FUN_03cb3880(0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar34 = (ulong)(uint)((fStack0000000000000078 * fVar22 +
                             fStack0000000000000074 * fVar31 + fStack0000000000000070 * fVar20) -
                            fStack000000000000007c * fVar41);
      uVar29 = (ulong)(uint)((fStack000000000000007c * fVar20 +
                             fStack0000000000000078 * fVar31 + fStack0000000000000070 * fVar41) -
                            fStack0000000000000074 * fVar22);
      FUN_0407d5e8((fStack0000000000000074 * fVar41 +
                   fStack000000000000007c * fVar31 + fStack0000000000000070 * fVar22) -
                   fStack0000000000000078 * fVar20,uVar29,uVar34,
                   ((fStack0000000000000070 * fVar31 - fStack000000000000007c * fVar22) -
                   fStack0000000000000078 * fVar41) - fStack0000000000000074 * fVar20,lVar9,0);
      fStack0000000000000040 = (float)uVar34;
    } while ((*in_stack_00000060 & 1) == 0);
    if ((*in_stack_00000060 >> 1 & 1) != 0) {
      uVar29 = (ulong)(uint)in_stack_00000274;
      FUN_04073258(unaff_x29,0);
      fStack0000000000000040 = in_stack_00000278;
      FUN_03e2cbdc(in_stack_00000270,uVar29,in_stack_00000278,in_stack_00000280 & 0xffffffff,fVar21,
                   in_stack_00000288);
    }
    fStack0000000000000038 = (float)uVar29;
    fStack000000000000003c = (float)FUN_03e2ce3c(in_stack_00000060);
    param_4 = 0;
    fStack0000000000000048 = fStack0000000000000090;
    fStack000000000000004c = fStack0000000000000094;
    fStack0000000000000044 = fStack000000000000008c;
    in_stack_00000250 = fStack0000000000000088;
    in_stack_00000254 = fStack0000000000000084;
    in_stack_00000258 = fStack0000000000000080;
    param_2 = fStack0000000000000090;
    param_3 = fStack000000000000008c;
  } while( true );
}


