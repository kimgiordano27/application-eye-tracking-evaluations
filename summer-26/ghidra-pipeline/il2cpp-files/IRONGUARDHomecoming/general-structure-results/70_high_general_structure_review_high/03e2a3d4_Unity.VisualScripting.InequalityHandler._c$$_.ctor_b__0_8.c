/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_8
ENTRY_POINT: 03e2a3d4
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


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_8
               (undefined **param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,long param_5
               )

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  char cVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  float *pfVar16;
  float *pfVar17;
  long unaff_x19;
  int unaff_w20;
  undefined1 *__src;
  undefined8 uVar18;
  long unaff_x22;
  char unaff_w23;
  float unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  uint uVar19;
  long *plVar20;
  int unaff_w28;
  long unaff_x29;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  float fVar35;
  ulong uVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  float fVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
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
  float in_stack_00000270;
  float in_stack_00000274;
  float in_stack_00000278;
  float in_stack_00000290;
  float in_stack_00000294;
  float in_stack_00000298;
  float in_stack_0000029c;
  
code_r0x03e2a3d4:
  uVar33 = FUN_0314b598(param_5,unaff_w27 + 1,*(undefined8 *)param_1[0x3a]);
  __src = &stack0x00000200;
  do {
    fVar36 = (float)param_4;
    fVar35 = (float)param_3;
    memcpy(&stack0x00000160,__src,0x48);
    uVar18 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_SerializeSection__;
    memcpy(&stack0x00000378,&stack0x00000160,0x48);
    fVar21 = (float)FUN_0240a9dc(uVar33,&stack0x00000378,uVar18);
    fVar21 = fVar21 - in_stack_00000290;
    fVar35 = fVar35 - in_stack_00000294;
    fVar36 = fVar36 - in_stack_00000298;
    do {
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        cVar9 = *(char *)(unaff_x22 + 0xe1a);
      }
      else {
        cVar9 = '\x01';
      }
      fVar22 = in_stack_00000278 * in_stack_00000278 +
               in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
      fVar23 = 1.0 / SQRT(fVar22);
      fStack0000000000000094 = in_stack_00000270 * fVar23;
      fStack0000000000000090 = in_stack_00000274 * fVar23;
      fStack000000000000008c = in_stack_00000278 * fVar23;
      if (fVar22 <= unaff_w24) {
        fStack0000000000000090 = 0.0;
        fStack0000000000000094 = 0.0;
        fStack000000000000008c = 0.0;
      }
      if (cVar9 == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar22 = fVar36 * fVar36 + fVar21 * fVar21 + fVar35 * fVar35;
      fVar23 = 1.0 / SQRT(fVar22);
      fVar37 = fVar21 * fVar23;
      fVar42 = fVar35 * fVar23;
      fStack0000000000000088 = fVar37;
      fStack0000000000000084 = fVar42;
      fStack0000000000000080 = fVar36 * fVar23;
      if (fVar22 <= unaff_w24) {
        fStack0000000000000084 = 0.0;
        fStack0000000000000088 = 0.0;
        fStack0000000000000080 = 0.0;
      }
      if (*(int *)(unaff_x19 + 0x3c) == 1) {
        lVar10 = FUN_04070398();
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee19 = unaff_w23;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(*unaff_x26 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar13 + 0x1c);
        fStack000000000000008c = *(float *)(lVar13 + 0x20);
        FUN_0407e3a8(*(undefined4 *)(lVar13 + 0x18),lVar10,0);
        fStack0000000000000094 = (float)FUN_03c7c6c0(0);
        lVar10 = FUN_04070398();
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee1d = unaff_w23;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(*unaff_x26 + 0xb8);
        fVar37 = *(float *)(lVar13 + 0x4c);
        fVar42 = *(float *)(lVar13 + 0x50);
        FUN_0407e3a8(*(undefined4 *)(lVar13 + 0x48),lVar10,0);
        fStack0000000000000088 = (float)FUN_03c7c6c0(0);
        fStack0000000000000080 = fVar42;
        fStack0000000000000084 = fVar37;
      }
      else if (*(int *)(unaff_x19 + 0x3c) == 2) {
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee19 = unaff_w23;
        }
        lVar10 = *(long *)(*unaff_x26 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar10 + 0x1c);
        fStack000000000000008c = *(float *)(lVar10 + 0x20);
        fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar10 + 0x18),0);
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee1d = unaff_w23;
        }
        lVar10 = *(long *)(*unaff_x26 + 0xb8);
        fVar37 = *(float *)(lVar10 + 0x4c);
        fVar42 = *(float *)(lVar10 + 0x50);
        fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar10 + 0x48),0);
        fStack0000000000000080 = fVar42;
        fStack0000000000000084 = fVar37;
      }
      fVar22 = (float)FUN_03e23f04();
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar24 = fVar42 * fVar42 + fVar22 * fVar22 + fVar37 * fVar37;
      fVar25 = 1.0 / SQRT(fVar24);
      fVar22 = fVar22 * fVar25;
      fVar37 = fVar37 * fVar25;
      fVar26 = 0.0;
      fVar23 = fVar22;
      fStack0000000000000078 = fVar37;
      fStack0000000000000074 = fVar42 * fVar25;
      if (fVar24 <= unaff_w24) {
        fVar23 = fVar26;
        fStack0000000000000078 = fVar26;
        fStack0000000000000074 = fVar26;
      }
      fVar42 = (float)FUN_03e23f04();
      if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
        thunk_FUN_01efb3a4();
        *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar22 = fVar37 * fVar37 + fVar42 * fVar42 + fVar22 * fVar22;
      fStack0000000000000070 = fVar42 * (1.0 / SQRT(fVar22));
      if (fVar22 <= unaff_w24) {
        fStack0000000000000070 = 0.0;
      }
      FUN_03cb4cf0(fVar23,0);
      FUN_03cb3880(0);
      fStack000000000000007c = (float)FUN_04066fb8(0);
      lVar10 = FUN_04073258(unaff_x29,0);
      fVar22 = fStack0000000000000094;
      fVar23 = fStack0000000000000084;
      fVar37 = fStack0000000000000080;
      FUN_03cb4cf0(fStack0000000000000088,0);
      fVar42 = (float)FUN_03cb3880(0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar24 = (fStack0000000000000078 * fVar42 +
               fStack0000000000000074 * fVar22 + fStack0000000000000070 * fVar37) -
               fStack000000000000007c * fVar23;
      uVar34 = (ulong)(uint)((fStack000000000000007c * fVar37 +
                             fStack0000000000000078 * fVar22 + fStack0000000000000070 * fVar23) -
                            fStack0000000000000074 * fVar42);
      FUN_0407d5e8((fStack0000000000000074 * fVar23 +
                   fStack000000000000007c * fVar22 + fStack0000000000000070 * fVar42) -
                   fStack0000000000000078 * fVar37,uVar34,fVar24,
                   ((fStack0000000000000070 * fVar22 - fStack000000000000007c * fVar42) -
                   fStack0000000000000078 * fVar23) - fStack0000000000000074 * fVar37,lVar10,0);
      if ((*in_stack_00000060 & 1) != 0) {
        if ((*in_stack_00000060 >> 1 & 1) != 0) {
          uVar34 = (ulong)(uint)in_stack_00000274;
          FUN_04073258(unaff_x29,0);
          fVar24 = in_stack_00000278;
          FUN_03e2cbdc(in_stack_00000270,uVar34,in_stack_00000278,fVar21,fVar35,fVar36);
        }
        fVar38 = (float)uVar34;
        fVar25 = (float)FUN_03e2ce3c(in_stack_00000060);
        fVar23 = fStack0000000000000090;
        fVar37 = fStack000000000000008c;
        fVar26 = (float)FUN_03c7c6bc(0);
        fVar22 = fStack0000000000000080;
        fVar42 = fStack0000000000000084;
        fVar27 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fStack0000000000000030 = fVar23 * fVar22 - fVar37 * fVar42;
        fVar22 = fVar37 * fVar27 - fVar26 * fVar22;
        fVar37 = fVar26 * fVar42 - fVar23 * fVar27;
        fVar23 = SQRT(fVar37 * fVar37 +
                      fStack0000000000000030 * fStack0000000000000030 + fVar22 * fVar22);
        if (fVar23 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar12 = *(float **)(*unaff_x26 + 0xb8);
          fStack0000000000000030 = *pfVar12;
          fStack000000000000002c = pfVar12[1];
          fVar23 = pfVar12[2];
          fVar22 = fStack0000000000000030;
        }
        else {
          fStack0000000000000030 = fStack0000000000000030 / fVar23;
          fStack000000000000002c = fVar22 / fVar23;
          fVar23 = fVar37 / fVar23;
        }
        lVar10 = FUN_04073258(unaff_x29,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar28 = (float)FUN_0407d3c8(lVar10,0);
        fVar42 = fStack000000000000008c;
        fVar26 = fStack0000000000000090;
        fVar29 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
        fVar27 = fStack0000000000000084;
        fVar31 = fStack0000000000000080;
        fVar30 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
        fVar30 = fVar24 * fVar30;
        uVar34 = (ulong)(uint)(fVar22 + fVar25 * fStack000000000000002c + fVar38 * fVar26 +
                                        fVar24 * fVar27);
        fVar24 = fVar37 + fVar25 * fVar23 + fVar38 * fVar42 + fVar24 * fVar31;
        FUN_0407d468(fVar28 + fVar25 * fStack0000000000000030 + fVar38 * fVar29 + fVar30,uVar34,
                     lVar10,0);
      }
      if ((*in_stack_00000058 & 1) != 0) {
        if ((*in_stack_00000058 >> 1 & 1) != 0) {
          FUN_04073258(unaff_x29,0);
          FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,fVar21,fVar35,fVar36);
        }
        lVar10 = FUN_04073258(unaff_x29,0);
        fVar22 = fStack0000000000000090;
        fVar23 = fStack000000000000008c;
        FUN_03c7c6bc(fStack0000000000000094,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar37 = (float)FUN_0407e758(lVar10,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar42 = DAT_00c926ac;
        fVar24 = SQRT(fVar23 * fVar23 + fVar37 * fVar37 + fVar22 * fVar22);
        if (fVar24 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar12 = *(float **)(*unaff_x26 + 0xb8);
          fVar37 = *pfVar12;
          fVar22 = pfVar12[1];
          fVar23 = pfVar12[2];
        }
        else {
          fVar37 = fVar37 / fVar24;
          fVar22 = fVar22 / fVar24;
          fVar23 = fVar23 / fVar24;
        }
        uVar39 = (ulong)(uint)fVar22;
        uVar34 = FUN_03c7c6c0(fVar37,0);
        fVar25 = (float)uVar39;
        lVar10 = FUN_04073258(unaff_x29,0);
        fVar22 = fStack0000000000000084;
        fVar37 = fStack0000000000000080;
        FUN_03c7c6bc(fStack0000000000000088,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar24 = (float)FUN_0407e758(lVar10,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar26 = SQRT(fVar37 * fVar37 + fVar24 * fVar24 + fVar22 * fVar22);
        if (fVar26 <= fVar42) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar12 = *(float **)(*unaff_x26 + 0xb8);
          fVar24 = *pfVar12;
          fVar22 = pfVar12[1];
          fVar37 = pfVar12[2];
        }
        else {
          fVar24 = fVar24 / fVar26;
          fVar22 = fVar22 / fVar26;
          fVar37 = fVar37 / fVar26;
        }
        uVar40 = (ulong)(uint)fVar22;
        uVar33 = FUN_03c7c6c0(fVar24,0);
        uVar41 = uVar40;
        fVar22 = fVar37;
        fVar31 = (float)FUN_03e2ce3c(in_stack_00000058);
        fVar30 = (float)uVar41;
        fVar27 = fVar25;
        fVar38 = fVar23;
        fVar28 = (float)FUN_03c7c6bc(uVar34,0);
        uVar41 = uVar40;
        fVar26 = fVar37;
        fVar29 = (float)FUN_03c7c6bc(uVar33,0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar24 = fVar27 * fVar26 - fVar38 * (float)uVar41;
        fVar38 = fVar38 * fVar29 - fVar28 * fVar26;
        fVar26 = fVar28 * (float)uVar41 - fVar27 * fVar29;
        fVar27 = SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar38 * fVar38);
        if (fVar27 <= fVar42) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar12 = *(float **)(*unaff_x26 + 0xb8);
          fStack000000000000004c = *pfVar12;
          fStack000000000000002c = pfVar12[1];
          fVar26 = pfVar12[2];
        }
        else {
          fVar24 = fVar24 / fVar27;
          fVar38 = fVar38 / fVar27;
          fVar26 = fVar26 / fVar27;
          fStack000000000000002c = fVar38;
          fStack000000000000004c = fVar24;
        }
        lVar10 = FUN_04073258(unaff_x29,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar42 = (float)FUN_0407d9e8(lVar10,0);
        fVar27 = (float)FUN_03c7c6bc(uVar34 & 0xffffffff,uVar39 & 0xffffffff,0);
        fVar28 = (float)FUN_03c7c6bc(uVar33,uVar40,0);
        uVar34 = (ulong)(uint)(fVar38 + fVar31 * fStack000000000000002c + fVar30 * fVar25 +
                                        fVar22 * (float)uVar40);
        fVar24 = fVar24 + fVar31 * fVar26 + fVar30 * fVar23 + fVar22 * fVar37;
        FUN_0407da88(fVar42 + fVar31 * fStack000000000000004c + fVar30 * fVar27 + fVar22 * fVar28,
                     uVar34,lVar10,0);
      }
      if ((*in_stack_00000050 & 1) != 0) {
        if ((*in_stack_00000050 >> 1 & 1) != 0) {
          uVar34 = (ulong)(uint)in_stack_00000274;
          FUN_04073258(unaff_x29,0);
          fVar24 = in_stack_00000278;
          FUN_03e2cbdc(in_stack_00000270,uVar34,in_stack_00000278,fVar21,fVar35,fVar36);
          if (*(int *)(unaff_x19 + 0x94) == 3) {
            puVar11 = *(undefined4 **)
                       (*(long *)
                         Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                       + 0xb8);
            uVar34 = (ulong)(uint)puVar11[1];
            fVar24 = (float)puVar11[2];
            fStack0000000000000070 = (float)puVar11[3];
            fStack000000000000007c = (float)FUN_03cb3880(*puVar11,0);
            fStack0000000000000078 = (float)uVar34;
            fStack0000000000000074 = fVar24;
          }
        }
        uVar32 = FUN_03e2ce3c(in_stack_00000050);
        fVar22 = fStack0000000000000090;
        fVar37 = fStack000000000000008c;
        fVar25 = (float)FUN_03c7c6bc(0);
        fVar23 = fStack0000000000000080;
        fVar42 = fStack0000000000000084;
        fVar26 = (float)FUN_03c7c6bc(0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = unaff_w23;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar27 = fVar22 * fVar23 - fVar37 * fVar42;
        fVar23 = fVar37 * fVar26 - fVar25 * fVar23;
        fVar22 = fVar25 * fVar42 - fVar22 * fVar26;
        fVar37 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar23 * fVar23);
        if (fVar37 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482ee12 = unaff_w23;
          }
          pfVar12 = *(float **)(*unaff_x26 + 0xb8);
          fVar27 = *pfVar12;
          fVar23 = pfVar12[1];
          fVar22 = pfVar12[2];
        }
        else {
          fVar27 = fVar27 / fVar37;
          fVar23 = fVar23 / fVar37;
          fVar22 = fVar22 / fVar37;
        }
        fVar26 = fStack000000000000008c;
        fVar38 = fStack0000000000000090;
        fVar31 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
        fVar28 = (float)FUN_040674b0(uVar34,0);
        fVar37 = fVar22;
        fVar42 = fVar23;
        fVar25 = fVar27;
        fVar29 = (float)FUN_040674b0(uVar32,0);
        uVar34 = (ulong)(uint)fStack0000000000000084;
        uVar41 = (ulong)(uint)fStack0000000000000080;
        uVar33 = FUN_03c7c6bc(fStack0000000000000088,uVar34,uVar41,0);
        uVar43 = (ulong)(uint)((fVar28 * fVar25 + fVar26 * fVar42 + fVar38 * fVar37) -
                              fVar31 * fVar29);
        uVar39 = (ulong)(uint)((fVar38 * fVar29 + fVar26 * fVar25 + fVar31 * fVar37) -
                              fVar28 * fVar42);
        FUN_040677e4((fVar31 * fVar42 + fVar26 * fVar29 + fVar28 * fVar37) - fVar38 * fVar25,uVar39,
                     uVar43,((fVar26 * fVar37 - fVar28 * fVar29) - fVar31 * fVar25) -
                            fVar38 * fVar42,uVar33,uVar34,uVar41,0);
        uVar34 = FUN_03c7c6c0(0);
        fVar38 = (float)uVar39;
        fVar31 = (float)uVar43;
        fVar25 = (float)FUN_040674b0(uVar32,0);
        fVar37 = fVar31;
        fVar42 = fVar38;
        fVar26 = (float)FUN_03c7c6bc(uVar34,0);
        fVar24 = (float)FUN_040674b0(fVar24,0);
        uVar41 = (ulong)(uint)fStack0000000000000090;
        uVar44 = (ulong)(uint)fStack000000000000008c;
        uVar33 = FUN_03c7c6bc(fStack0000000000000094,uVar41,uVar44,0);
        uVar45 = (ulong)(uint)((fVar25 * fVar26 + fVar22 * fVar42 + fVar23 * fVar37) -
                              fVar27 * fVar24);
        uVar40 = (ulong)(uint)((fVar23 * fVar24 + fVar22 * fVar26 + fVar27 * fVar37) -
                              fVar25 * fVar42);
        FUN_040677e4((fVar27 * fVar42 + fVar22 * fVar24 + fVar25 * fVar37) - fVar23 * fVar26,uVar40,
                     uVar45,((fVar22 * fVar37 - fVar25 * fVar24) - fVar27 * fVar26) -
                            fVar23 * fVar42,uVar33,uVar41,uVar44,0);
        uVar33 = FUN_03c7c6c0(0);
        lVar10 = FUN_04073258(unaff_x29,0);
        FUN_03cb4cf0(uVar34 & 0xffffffff,uVar39 & 0xffffffff,uVar43 & 0xffffffff,uVar33,uVar40,
                     uVar45,0);
        fVar23 = (float)uVar33;
        fVar22 = (float)FUN_03cb3880(0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407d5e8((fStack0000000000000074 * fVar38 +
                     fStack000000000000007c * fVar23 + fStack0000000000000070 * fVar22) -
                     fStack0000000000000078 * fVar31,
                     (fStack000000000000007c * fVar31 +
                     fStack0000000000000078 * fVar23 + fStack0000000000000070 * fVar38) -
                     fStack0000000000000074 * fVar22,
                     (fStack0000000000000078 * fVar22 +
                     fStack0000000000000074 * fVar23 + fStack0000000000000070 * fVar31) -
                     fStack000000000000007c * fVar38,
                     ((fStack0000000000000070 * fVar23 - fStack000000000000007c * fVar22) -
                     fStack0000000000000078 * fVar38) - fStack0000000000000074 * fVar31,lVar10,0);
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
             plVar20 = (long *)
                       Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
             , puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
             plVar7 == (long *)0x0)) {
LAB_03e29e84:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *plVar7;
          uVar34 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar34 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
              }
              uVar34 = uVar34 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar34 != 0);
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
          lVar10 = *plVar7;
          uVar34 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar34 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03e2a18c;
              }
              uVar34 = uVar34 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar34 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01ecb238(plVar7,*(long *)
                                        Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                                ,0);
LAB_03e2a18c:
          uVar33 = (*(code *)*puVar8)(plVar7,iStack0000000000000020,puVar8[1]);
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar10 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar10 == 0)) goto LAB_03e29e84;
          FUN_0407cee0(&stack0x00000098,lVar10,0);
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
                    (&stack0x000002a0,uVar33,&stack0x000000e0,3);
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar22 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                       *(undefined8 *)
                                        Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                      );
          fVar23 = fVar22 + fStack0000000000000014;
          if (*(int *)(unaff_x19 + 0x38) == 0) {
            bVar2 = in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
                    fVar23 < in_stack_00000068._4_4_;
            if (in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
                fVar23 < in_stack_00000068._4_4_) {
              in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - fVar22;
            }
          }
          else {
            bVar2 = false;
            in_stack_00000068._4_4_ = 0.0;
          }
          lVar10 = *(long *)(unaff_x19 + 0x108);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          unaff_w20 = unaff_w28;
          if (!bVar2 && in_stack_00000068._4_4_ <= fVar23) {
            while (uVar34 = FUN_03e2c8c8(), (uVar34 & 1) != 0) {
              lVar10 = *(long *)(unaff_x19 + 0x108);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar14 = *plVar20;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                *(float *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000068._4_4_ / fVar22;
              }
              else {
                FUN_0314b890(lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              iVar6 = *(int *)(unaff_x19 + 0x38);
              if (iVar6 == 0) {
                fVar37 = in_stack_00000018._4_4_;
                if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
                bVar5 = in_stack_00000068._4_4_ < fVar22;
                fVar37 = fStack0000000000000010 + in_stack_00000068._4_4_;
                bVar2 = bVar5 && fVar23 < fVar37;
                in_stack_00000068._4_4_ = fVar37 - fVar22;
                if (!bVar5 || fVar23 >= fVar37) {
                  in_stack_00000068._4_4_ = fVar37;
                }
              }
              else if (iVar6 == 1) {
                fStack0000000000000024 =
                     (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),
                                         *(undefined4 *)(unaff_x19 + 0x44),0);
                fVar37 = fStack0000000000000024;
LAB_03e2b708:
                bVar2 = false;
                in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar37;
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
                  lVar10 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                        *(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                       );
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar10 = FUN_023361c8(lVar10,*(undefined8 *)
                                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                       );
                  if (DAT_0482ee18 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee18 = unaff_w23;
                  }
                  lVar13 = *unaff_x26;
                  iVar6 = *(int *)(unaff_x19 + 0x4c);
                  lVar14 = *(long *)(lVar13 + 0xb8);
                  if ((iVar6 == 2) || (iVar6 == 5)) {
                    if (DAT_0482ee1d == '\0') {
                      thunk_FUN_01efb3a4();
                      lVar13 = *unaff_x26;
                      iVar6 = *(int *)(unaff_x19 + 0x4c);
                      lVar14 = *(long *)(lVar13 + 0xb8);
                      DAT_0482ee1d = unaff_w23;
                    }
                    pfVar12 = (float *)(lVar14 + 0x48);
                    pfVar16 = (float *)(lVar14 + 0x4c);
                    pfVar17 = (float *)(lVar14 + 0x50);
                  }
                  else {
                    pfVar12 = (float *)(lVar14 + 0x3c);
                    pfVar16 = (float *)(lVar14 + 0x40);
                    pfVar17 = (float *)(lVar14 + 0x44);
                  }
                  if ((iVar6 == 1) || (iVar6 == 4)) {
                    if (DAT_0482ee19 == '\0') {
                      thunk_FUN_01efb3a4();
                      lVar13 = *unaff_x26;
                      DAT_0482ee19 = unaff_w23;
                    }
                    lVar13 = *(long *)(lVar13 + 0xb8);
                    pfVar12 = (float *)(lVar13 + 0x18);
                    pfVar16 = (float *)(lVar13 + 0x1c);
                    pfVar17 = (float *)(lVar13 + 0x20);
                  }
                  fVar24 = *pfVar17;
                  fVar42 = *pfVar16;
                  fVar37 = *pfVar12;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar34 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                     (lVar10,0,0);
                  if ((uVar34 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar10 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                          *(undefined8 *)
                                           Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                         );
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar10 = FUN_0233642c(lVar10,*(undefined8 *)PTR_DAT_04579bb8);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar34 = FUN_04073094(lVar10,0,0);
                    if ((uVar34 & 1) != 0) {
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar13 = FUN_04070398(lVar10,0);
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
                      FUN_0407e3a8(fVar37,lVar14,0);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      fVar37 = (float)FUN_0407e758(lVar13,0);
                      fVar25 = fVar42;
                      fVar26 = fVar24;
                      lVar13 = FUN_04070398(lVar10,0);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      fVar27 = (float)FUN_0407ec3c(lVar13,0);
                      fVar37 = fVar37 * fVar27;
                      fVar42 = fVar42 * fVar25;
                      fVar24 = fVar24 * fVar26;
                    }
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar34 = FUN_04073094(lVar10,0,0);
                  plVar20 = (long *)
                            Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                  ;
                  if ((uVar34 & 1) != 0) {
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar13 = FUN_04050c14(lVar10,0);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_04051ba0(&stack0x00000098,lVar13,0);
                    fVar27 = fStack00000000000000ac;
                    fVar26 = fStack00000000000000a8;
                    fVar25 = fStack00000000000000a4;
                    lVar10 = FUN_022c6694(lVar10,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__
                                         );
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar19 = 0;
                      fVar26 = fVar27;
                      do {
                        if (uVar1 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        lVar13 = *(long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar13 = FUN_04050c14(lVar13,0);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        FUN_04051ba0(&stack0x00000098,lVar13,0);
                        uVar1 = *(uint *)(lVar10 + 0x18);
                        fVar27 = fVar25 + fVar25;
                        if (fVar25 + fVar25 <= fStack00000000000000a4 + fStack00000000000000a4) {
                          fVar27 = fStack00000000000000a4 + fStack00000000000000a4;
                        }
                        fVar25 = fVar26 + fVar26;
                        if (fVar26 + fVar26 <= fStack00000000000000ac + fStack00000000000000ac) {
                          fVar25 = fStack00000000000000ac + fStack00000000000000ac;
                        }
                        uVar19 = uVar19 + 1;
                        fVar26 = fVar25 * 0.5;
                        fVar25 = fVar27 * 0.5;
                        fVar27 = fVar26;
                      } while ((int)uVar19 < (int)uVar1);
                    }
                    plVar20 = (long *)
                              Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                    ;
                    if (DAT_0482f03e == '\0') {
                      thunk_FUN_01efb3a4();
                      DAT_0482f03e = unaff_w23;
                    }
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    fVar37 = fVar37 * (fVar25 + fVar25);
                    fVar42 = fVar42 * (fVar26 + fVar26);
                    fVar24 = fVar24 * (fVar27 + fVar27);
                    fStack0000000000000024 =
                         SQRT(fVar24 * fVar24 + fVar42 * fVar42 + fVar37 * fVar37);
                  }
                }
                memcpy(&stack0x00000098,&stack0x000002a0,0x48);
                if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar18 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w20,
                                      *(undefined8 *)
                                       Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                     );
                uVar33 = *(undefined8 *)PTR_DAT_04579bd0;
                memcpy(&stack0x000002e8,&stack0x00000098,0x48);
                FUN_0240e31c(uVar18,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar33)
                ;
                bVar2 = false;
                in_stack_00000068._4_4_ = fVar22 + 1.0;
                if (in_stack_0000029c < 1.0) {
                  in_stack_00000068._4_4_ = fVar22 * in_stack_0000029c;
                }
              }
              else {
                bVar2 = false;
              }
              unaff_w20 = unaff_w20 + 1;
              if ((bVar2) || (fVar23 < in_stack_00000068._4_4_)) break;
            }
          }
          lVar10 = *(long *)(unaff_x19 + 0xd0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = *(int *)(lVar10 + 0x18) + -1;
          if (unaff_w20 <= iVar6) {
            while( true ) {
              uVar33 = FUN_030f28e4(lVar10,iVar6,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar34 = FUN_04073094(uVar33,0,0);
              if ((uVar34 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar33 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar6,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_040770d0(uVar33,0);
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar6,*(undefined8 *)PTR_DAT_04579bc0);
              }
              iVar6 = iVar6 + -1;
              if (iVar6 < unaff_w20) break;
              lVar10 = *(long *)(unaff_x19 + 0xd0);
              if (lVar10 == 0) {
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
      uVar18 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w27,
                            *(undefined8 *)
                             Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                           );
      uVar33 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
      memcpy(&stack0x00000330,&stack0x000002a0,0x48);
      FUN_02409430(uVar18,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,uVar33
                  );
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_04073258(unaff_x29,0);
      param_3 = (ulong)(uint)in_stack_00000294;
      param_4 = (ulong)(uint)in_stack_00000298;
      FUN_03c7c6bc(in_stack_00000290,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407d468(lVar10,0);
    } while (*(int *)(unaff_x19 + 0x38) != 2);
    memcpy(&stack0x00000330,&stack0x000002a0,0x48);
    if (unaff_w28 + 1 < unaff_w20) break;
    __src = &stack0x000001b0;
    memcpy(&stack0x000001b0,&stack0x00000330,0x48);
    uVar33 = 0x3f800000;
  } while( true );
  memcpy(&stack0x00000200,&stack0x00000330,0x48);
  param_5 = *(long *)(unaff_x19 + 0x108);
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_1 = &
            Method_Unity_VisualScripting_UnitPreservation_UnitPortPreservation_<>c__DisplayClass5_0_<GetOrCreateOutput>b__1__
  ;
  goto code_r0x03e2a3d4;
}


