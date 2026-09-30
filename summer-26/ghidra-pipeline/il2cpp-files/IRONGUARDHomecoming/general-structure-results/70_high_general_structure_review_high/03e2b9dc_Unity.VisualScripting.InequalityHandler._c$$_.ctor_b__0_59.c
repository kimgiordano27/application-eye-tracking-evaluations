/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_59
ENTRY_POINT: 03e2b9dc
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


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_59(float param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  int *piVar14;
  float *pfVar15;
  float *pfVar16;
  long unaff_x19;
  int unaff_w20;
  undefined1 *__src;
  undefined8 uVar17;
  long unaff_x22;
  char unaff_w23;
  float unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  uint uVar18;
  long *unaff_x27;
  long *unaff_x28;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  float fVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float unaff_s8;
  float unaff_s13;
  float unaff_s14;
  float fVar41;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int iStack0000000000000018;
  float fStack000000000000001c;
  int in_stack_00000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack000000000000004c;
  uint *in_stack_00000050;
  uint *in_stack_00000058;
  uint *in_stack_00000060;
  float fStack000000000000006c;
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
  ulong in_stack_00000280;
  float in_stack_00000288;
  float in_stack_00000290;
  float in_stack_00000294;
  float in_stack_00000298;
  float in_stack_0000029c;
  
  do {
    fStack0000000000000024 = SQRT(param_2 + param_1);
LAB_03e2b9f4:
    do {
      memcpy(&stack0x00000098,&stack0x000002a0,0x48);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar32 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w20,
                            *(undefined8 *)
                             Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                           );
      uVar17 = *(undefined8 *)PTR_DAT_04579bd0;
      memcpy(&stack0x000002e8,&stack0x00000098,0x48);
      FUN_0240e31c(uVar32,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar17);
      bVar2 = false;
      fStack000000000000006c = unaff_s14;
      if (in_stack_0000029c < 1.0) {
        fStack000000000000006c = unaff_s8 * in_stack_0000029c;
      }
LAB_03e2ba7c:
      unaff_w20 = unaff_w20 + 1;
      if ((!bVar2) && (fStack000000000000006c <= unaff_s13)) goto LAB_03e2b550;
      do {
        do {
          lVar10 = *(long *)(unaff_x19 + 0xd0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar5 = *(int *)(lVar10 + 0x18) + -1;
          if (unaff_w20 <= iVar5) {
            while( true ) {
              uVar17 = FUN_030f28e4(lVar10,iVar5,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar31 = FUN_04073094(uVar17,0,0);
              if ((uVar31 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar17 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar5,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_040770d0(uVar17,0);
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar5,*(undefined8 *)PTR_DAT_04579bc0);
              }
              iVar5 = iVar5 + -1;
              if (iVar5 < unaff_w20) break;
              lVar10 = *(long *)(unaff_x19 + 0xd0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            }
          }
          if (iStack0000000000000018 < unaff_w20) {
            iVar5 = 0;
            do {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar10 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iStack0000000000000018,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar32 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar5,
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                   );
              uVar17 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
              memcpy(&stack0x00000330,&stack0x000002a0,0x48);
              FUN_02409430(uVar32,&stack0x00000330,&stack0x00000290,&stack0x00000280,
                           &stack0x00000270,uVar17);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar8 = FUN_04073258(lVar10,0);
              fVar20 = in_stack_00000294;
              fVar21 = in_stack_00000298;
              FUN_03c7c6bc(in_stack_00000290,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0407d468(lVar8,0);
              if (*(int *)(unaff_x19 + 0x38) == 2) {
                memcpy(&stack0x00000330,&stack0x000002a0,0x48);
                if (iStack0000000000000018 + 1 < unaff_w20) {
                  memcpy(&stack0x00000200,&stack0x00000330,0x48);
                  if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar17 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar5 + 1,
                                        *(undefined8 *)
                                         Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                       );
                  __src = &stack0x00000200;
                }
                else {
                  __src = &stack0x000001b0;
                  memcpy(&stack0x000001b0,&stack0x00000330,0x48);
                  uVar17 = 0x3f800000;
                }
                memcpy(&stack0x00000160,__src,0x48);
                uVar32 = *(undefined8 *)
                          Method_System_Configuration_ConfigurationSection_SerializeSection__;
                memcpy(&stack0x00000378,&stack0x00000160,0x48);
                fVar19 = (float)FUN_0240a9dc(uVar17,&stack0x00000378,uVar32);
                in_stack_00000280 = CONCAT44(fVar20 - in_stack_00000294,fVar19 - in_stack_00000290);
                in_stack_00000288 = fVar21 - in_stack_00000298;
              }
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
              fVar20 = in_stack_00000278 * in_stack_00000278 +
                       in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274
              ;
              fVar21 = 1.0 / SQRT(fVar20);
              fVar19 = (float)in_stack_00000280;
              fVar41 = (float)(in_stack_00000280 >> 0x20);
              fStack0000000000000094 = in_stack_00000270 * fVar21;
              fStack0000000000000090 = in_stack_00000274 * fVar21;
              fStack000000000000008c = in_stack_00000278 * fVar21;
              if (fVar20 <= unaff_w24) {
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
              fVar20 = in_stack_00000288 * in_stack_00000288 + fVar19 * fVar19 + fVar41 * fVar41;
              fVar21 = 1.0 / SQRT(fVar20);
              fVar19 = fVar19 * fVar21;
              fVar37 = fVar41 * fVar21;
              fStack0000000000000088 = fVar19;
              fStack0000000000000084 = fVar37;
              fStack0000000000000080 = in_stack_00000288 * fVar21;
              if (fVar20 <= unaff_w24) {
                fStack0000000000000084 = 0.0;
                fStack0000000000000088 = 0.0;
                fStack0000000000000080 = 0.0;
              }
              if (*(int *)(unaff_x19 + 0x3c) == 1) {
                lVar8 = FUN_04070398();
                if (DAT_0482ee19 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee19 = unaff_w23;
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar13 = *(long *)(*unaff_x26 + 0xb8);
                fStack0000000000000090 = *(float *)(lVar13 + 0x1c);
                fStack000000000000008c = *(float *)(lVar13 + 0x20);
                FUN_0407e3a8(*(undefined4 *)(lVar13 + 0x18),lVar8,0);
                fStack0000000000000094 = (float)FUN_03c7c6c0(0);
                lVar8 = FUN_04070398();
                if (DAT_0482ee1d == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee1d = unaff_w23;
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar13 = *(long *)(*unaff_x26 + 0xb8);
                fVar19 = *(float *)(lVar13 + 0x4c);
                fVar37 = *(float *)(lVar13 + 0x50);
                FUN_0407e3a8(*(undefined4 *)(lVar13 + 0x48),lVar8,0);
                fStack0000000000000088 = (float)FUN_03c7c6c0(0);
                fStack0000000000000080 = fVar37;
                fStack0000000000000084 = fVar19;
              }
              else if (*(int *)(unaff_x19 + 0x3c) == 2) {
                if (DAT_0482ee19 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee19 = unaff_w23;
                }
                lVar8 = *(long *)(*unaff_x26 + 0xb8);
                fStack0000000000000090 = *(float *)(lVar8 + 0x1c);
                fStack000000000000008c = *(float *)(lVar8 + 0x20);
                fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar8 + 0x18),0);
                if (DAT_0482ee1d == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee1d = unaff_w23;
                }
                lVar8 = *(long *)(*unaff_x26 + 0xb8);
                fVar19 = *(float *)(lVar8 + 0x4c);
                fVar37 = *(float *)(lVar8 + 0x50);
                fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar8 + 0x48),0);
                fStack0000000000000080 = fVar37;
                fStack0000000000000084 = fVar19;
              }
              fVar20 = (float)FUN_03e23f04();
              if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
                thunk_FUN_01efb3a4();
                *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar22 = fVar37 * fVar37 + fVar20 * fVar20 + fVar19 * fVar19;
              fVar23 = 1.0 / SQRT(fVar22);
              fVar20 = fVar20 * fVar23;
              fVar19 = fVar19 * fVar23;
              fVar24 = 0.0;
              fVar21 = fVar20;
              fStack0000000000000078 = fVar19;
              fStack0000000000000074 = fVar37 * fVar23;
              if (fVar22 <= unaff_w24) {
                fVar21 = fVar24;
                fStack0000000000000078 = fVar24;
                fStack0000000000000074 = fVar24;
              }
              fVar37 = (float)FUN_03e23f04();
              if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
                thunk_FUN_01efb3a4();
                *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar20 = fVar19 * fVar19 + fVar37 * fVar37 + fVar20 * fVar20;
              fStack0000000000000070 = fVar37 * (1.0 / SQRT(fVar20));
              if (fVar20 <= unaff_w24) {
                fStack0000000000000070 = 0.0;
              }
              FUN_03cb4cf0(fVar21,0);
              FUN_03cb3880(0);
              fStack000000000000007c = (float)FUN_04066fb8(0);
              lVar8 = FUN_04073258(lVar10,0);
              fVar20 = fStack0000000000000094;
              fVar21 = fStack0000000000000084;
              fVar19 = fStack0000000000000080;
              FUN_03cb4cf0(fStack0000000000000088,0);
              fVar37 = (float)FUN_03cb3880(0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar22 = (fStack0000000000000078 * fVar37 +
                       fStack0000000000000074 * fVar20 + fStack0000000000000070 * fVar19) -
                       fStack000000000000007c * fVar21;
              uVar31 = (ulong)(uint)((fStack000000000000007c * fVar19 +
                                     fStack0000000000000078 * fVar20 +
                                     fStack0000000000000070 * fVar21) -
                                    fStack0000000000000074 * fVar37);
              FUN_0407d5e8((fStack0000000000000074 * fVar21 +
                           fStack000000000000007c * fVar20 + fStack0000000000000070 * fVar37) -
                           fStack0000000000000078 * fVar19,uVar31,fVar22,
                           ((fStack0000000000000070 * fVar20 - fStack000000000000007c * fVar37) -
                           fStack0000000000000078 * fVar21) - fStack0000000000000074 * fVar19,lVar8,
                           0);
              if ((*in_stack_00000060 & 1) != 0) {
                if ((*in_stack_00000060 >> 1 & 1) != 0) {
                  uVar31 = (ulong)(uint)in_stack_00000274;
                  FUN_04073258(lVar10,0);
                  fVar22 = in_stack_00000278;
                  FUN_03e2cbdc(in_stack_00000270,uVar31,in_stack_00000278,
                               in_stack_00000280 & 0xffffffff,fVar41,in_stack_00000288);
                }
                fVar33 = (float)uVar31;
                fVar23 = (float)FUN_03e2ce3c(in_stack_00000060);
                fVar21 = fStack0000000000000090;
                fVar19 = fStack000000000000008c;
                fVar24 = (float)FUN_03c7c6bc(0);
                fVar20 = fStack0000000000000080;
                fVar37 = fStack0000000000000084;
                fVar25 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
                if (DAT_0482ee9b == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee9b = unaff_w23;
                }
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fStack0000000000000030 = fVar21 * fVar20 - fVar19 * fVar37;
                fVar20 = fVar19 * fVar25 - fVar24 * fVar20;
                fVar19 = fVar24 * fVar37 - fVar21 * fVar25;
                fVar21 = SQRT(fVar19 * fVar19 +
                              fStack0000000000000030 * fStack0000000000000030 + fVar20 * fVar20);
                if (fVar21 <= DAT_00c926ac) {
                  if (DAT_0482ee12 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee12 = unaff_w23;
                  }
                  pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                  fStack0000000000000030 = *pfVar12;
                  fStack000000000000002c = pfVar12[1];
                  fVar21 = pfVar12[2];
                  fVar20 = fStack0000000000000030;
                }
                else {
                  fStack0000000000000030 = fStack0000000000000030 / fVar21;
                  fStack000000000000002c = fVar20 / fVar21;
                  fVar21 = fVar19 / fVar21;
                }
                lVar8 = FUN_04073258(lVar10,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                fVar26 = (float)FUN_0407d3c8(lVar8,0);
                fVar37 = fStack000000000000008c;
                fVar24 = fStack0000000000000090;
                fVar27 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
                fVar25 = fStack0000000000000084;
                fVar29 = fStack0000000000000080;
                fVar28 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
                fVar28 = fVar22 * fVar28;
                uVar31 = (ulong)(uint)(fVar20 + fVar23 * fStack000000000000002c + fVar33 * fVar24 +
                                                fVar22 * fVar25);
                fVar22 = fVar19 + fVar23 * fVar21 + fVar33 * fVar37 + fVar22 * fVar29;
                FUN_0407d468(fVar26 + fVar23 * fStack0000000000000030 + fVar33 * fVar27 + fVar28,
                             uVar31,lVar8,0);
              }
              if ((*in_stack_00000058 & 1) != 0) {
                if ((*in_stack_00000058 >> 1 & 1) != 0) {
                  FUN_04073258(lVar10,0);
                  FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                               in_stack_00000280 & 0xffffffff,fVar41,in_stack_00000288);
                }
                lVar8 = FUN_04073258(lVar10,0);
                fVar20 = fStack0000000000000090;
                fVar21 = fStack000000000000008c;
                FUN_03c7c6bc(fStack0000000000000094,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                fVar19 = (float)FUN_0407e758(lVar8,0);
                if (DAT_0482ee9b == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee9b = unaff_w23;
                }
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar37 = DAT_00c926ac;
                fVar22 = SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20);
                if (fVar22 <= DAT_00c926ac) {
                  if (DAT_0482ee12 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee12 = unaff_w23;
                  }
                  pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                  fVar19 = *pfVar12;
                  fVar20 = pfVar12[1];
                  fVar21 = pfVar12[2];
                }
                else {
                  fVar19 = fVar19 / fVar22;
                  fVar20 = fVar20 / fVar22;
                  fVar21 = fVar21 / fVar22;
                }
                uVar34 = (ulong)(uint)fVar20;
                uVar31 = FUN_03c7c6c0(fVar19,0);
                fVar23 = (float)uVar34;
                lVar8 = FUN_04073258(lVar10,0);
                fVar20 = fStack0000000000000084;
                fVar19 = fStack0000000000000080;
                FUN_03c7c6bc(fStack0000000000000088,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                fVar22 = (float)FUN_0407e758(lVar8,0);
                if (DAT_0482ee9b == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee9b = unaff_w23;
                }
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar24 = SQRT(fVar19 * fVar19 + fVar22 * fVar22 + fVar20 * fVar20);
                if (fVar24 <= fVar37) {
                  if (DAT_0482ee12 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee12 = unaff_w23;
                  }
                  pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                  fVar22 = *pfVar12;
                  fVar20 = pfVar12[1];
                  fVar19 = pfVar12[2];
                }
                else {
                  fVar22 = fVar22 / fVar24;
                  fVar20 = fVar20 / fVar24;
                  fVar19 = fVar19 / fVar24;
                }
                uVar35 = (ulong)(uint)fVar20;
                uVar17 = FUN_03c7c6c0(fVar22,0);
                uVar36 = uVar35;
                fVar20 = fVar19;
                fVar29 = (float)FUN_03e2ce3c(in_stack_00000058);
                fVar28 = (float)uVar36;
                fVar25 = fVar23;
                fVar33 = fVar21;
                fVar26 = (float)FUN_03c7c6bc(uVar31,0);
                uVar36 = uVar35;
                fVar24 = fVar19;
                fVar27 = (float)FUN_03c7c6bc(uVar17,0);
                if (DAT_0482ee9b == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee9b = unaff_w23;
                }
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar22 = fVar25 * fVar24 - fVar33 * (float)uVar36;
                fVar33 = fVar33 * fVar27 - fVar26 * fVar24;
                fVar24 = fVar26 * (float)uVar36 - fVar25 * fVar27;
                fVar25 = SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar33 * fVar33);
                if (fVar25 <= fVar37) {
                  if (DAT_0482ee12 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee12 = unaff_w23;
                  }
                  pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                  fStack000000000000004c = *pfVar12;
                  fStack000000000000002c = pfVar12[1];
                  fVar24 = pfVar12[2];
                }
                else {
                  fVar22 = fVar22 / fVar25;
                  fVar33 = fVar33 / fVar25;
                  fVar24 = fVar24 / fVar25;
                  fStack000000000000002c = fVar33;
                  fStack000000000000004c = fVar22;
                }
                lVar8 = FUN_04073258(lVar10,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                fVar37 = (float)FUN_0407d9e8(lVar8,0);
                fVar25 = (float)FUN_03c7c6bc(uVar31 & 0xffffffff,uVar34 & 0xffffffff,0);
                fVar26 = (float)FUN_03c7c6bc(uVar17,uVar35,0);
                uVar31 = (ulong)(uint)(fVar33 + fVar29 * fStack000000000000002c + fVar28 * fVar23 +
                                                fVar20 * (float)uVar35);
                fVar22 = fVar22 + fVar29 * fVar24 + fVar28 * fVar21 + fVar20 * fVar19;
                FUN_0407da88(fVar37 + fVar29 * fStack000000000000004c + fVar28 * fVar25 +
                                      fVar20 * fVar26,uVar31,lVar8,0);
              }
              if ((*in_stack_00000050 & 1) != 0) {
                if ((*in_stack_00000050 >> 1 & 1) != 0) {
                  uVar31 = (ulong)(uint)in_stack_00000274;
                  FUN_04073258(lVar10,0);
                  fVar22 = in_stack_00000278;
                  FUN_03e2cbdc(in_stack_00000270,uVar31,in_stack_00000278,
                               in_stack_00000280 & 0xffffffff,fVar41,in_stack_00000288);
                  if (*(int *)(unaff_x19 + 0x94) == 3) {
                    puVar11 = *(undefined4 **)
                               (*(long *)
                                 Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                               + 0xb8);
                    uVar31 = (ulong)(uint)puVar11[1];
                    fVar22 = (float)puVar11[2];
                    fStack0000000000000070 = (float)puVar11[3];
                    fStack000000000000007c = (float)FUN_03cb3880(*puVar11,0);
                    fStack0000000000000078 = (float)uVar31;
                    fStack0000000000000074 = fVar22;
                  }
                }
                uVar30 = FUN_03e2ce3c(in_stack_00000050);
                fVar20 = fStack0000000000000090;
                fVar19 = fStack000000000000008c;
                fVar37 = (float)FUN_03c7c6bc(0);
                fVar21 = fStack0000000000000080;
                fVar41 = fStack0000000000000084;
                fVar23 = (float)FUN_03c7c6bc(0);
                if (DAT_0482ee9b == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee9b = unaff_w23;
                }
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar24 = fVar20 * fVar21 - fVar19 * fVar41;
                fVar21 = fVar19 * fVar23 - fVar37 * fVar21;
                fVar20 = fVar37 * fVar41 - fVar20 * fVar23;
                fVar19 = SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fVar21 * fVar21);
                if (fVar19 <= DAT_00c926ac) {
                  if (DAT_0482ee12 == '\0') {
                    thunk_FUN_01efb3a4();
                    DAT_0482ee12 = unaff_w23;
                  }
                  pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                  fVar24 = *pfVar12;
                  fVar21 = pfVar12[1];
                  fVar20 = pfVar12[2];
                }
                else {
                  fVar24 = fVar24 / fVar19;
                  fVar21 = fVar21 / fVar19;
                  fVar20 = fVar20 / fVar19;
                }
                fVar23 = fStack000000000000008c;
                fVar25 = fStack0000000000000090;
                fVar33 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
                fVar29 = (float)FUN_040674b0(uVar31,0);
                fVar19 = fVar20;
                fVar41 = fVar21;
                fVar37 = fVar24;
                fVar26 = (float)FUN_040674b0(uVar30,0);
                uVar31 = (ulong)(uint)fStack0000000000000084;
                uVar36 = (ulong)(uint)fStack0000000000000080;
                uVar17 = FUN_03c7c6bc(fStack0000000000000088,uVar31,uVar36,0);
                uVar38 = (ulong)(uint)((fVar29 * fVar37 + fVar23 * fVar41 + fVar25 * fVar19) -
                                      fVar33 * fVar26);
                uVar34 = (ulong)(uint)((fVar25 * fVar26 + fVar23 * fVar37 + fVar33 * fVar19) -
                                      fVar29 * fVar41);
                FUN_040677e4((fVar33 * fVar41 + fVar23 * fVar26 + fVar29 * fVar19) - fVar25 * fVar37
                             ,uVar34,uVar38,
                             ((fVar23 * fVar19 - fVar29 * fVar26) - fVar33 * fVar37) -
                             fVar25 * fVar41,uVar17,uVar31,uVar36,0);
                uVar31 = FUN_03c7c6c0(0);
                fVar25 = (float)uVar34;
                fVar33 = (float)uVar38;
                fVar37 = (float)FUN_040674b0(uVar30,0);
                fVar19 = fVar33;
                fVar41 = fVar25;
                fVar23 = (float)FUN_03c7c6bc(uVar31,0);
                fVar22 = (float)FUN_040674b0(fVar22,0);
                uVar36 = (ulong)(uint)fStack0000000000000090;
                uVar39 = (ulong)(uint)fStack000000000000008c;
                uVar17 = FUN_03c7c6bc(fStack0000000000000094,uVar36,uVar39,0);
                uVar40 = (ulong)(uint)((fVar37 * fVar23 + fVar20 * fVar41 + fVar21 * fVar19) -
                                      fVar24 * fVar22);
                uVar35 = (ulong)(uint)((fVar21 * fVar22 + fVar20 * fVar23 + fVar24 * fVar19) -
                                      fVar37 * fVar41);
                FUN_040677e4((fVar24 * fVar41 + fVar20 * fVar22 + fVar37 * fVar19) - fVar21 * fVar23
                             ,uVar35,uVar40,
                             ((fVar20 * fVar19 - fVar37 * fVar22) - fVar24 * fVar23) -
                             fVar21 * fVar41,uVar17,uVar36,uVar39,0);
                uVar17 = FUN_03c7c6c0(0);
                lVar10 = FUN_04073258(lVar10,0);
                FUN_03cb4cf0(uVar31 & 0xffffffff,uVar34 & 0xffffffff,uVar38 & 0xffffffff,uVar17,
                             uVar35,uVar40,0);
                fVar21 = (float)uVar17;
                fVar20 = (float)FUN_03cb3880(0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_0407d5e8((fStack0000000000000074 * fVar25 +
                             fStack000000000000007c * fVar21 + fStack0000000000000070 * fVar20) -
                             fStack0000000000000078 * fVar33,
                             (fStack000000000000007c * fVar33 +
                             fStack0000000000000078 * fVar21 + fStack0000000000000070 * fVar25) -
                             fStack0000000000000074 * fVar20,
                             (fStack0000000000000078 * fVar20 +
                             fStack0000000000000074 * fVar21 + fStack0000000000000070 * fVar33) -
                             fStack000000000000007c * fVar25,
                             ((fStack0000000000000070 * fVar21 - fStack000000000000007c * fVar20) -
                             fStack0000000000000078 * fVar25) - fStack0000000000000074 * fVar33,
                             lVar10,0);
              }
              iStack0000000000000018 = iStack0000000000000018 + 1;
              iVar5 = iVar5 + 1;
            } while (unaff_w20 != iStack0000000000000018);
          }
          FUN_03e1c250(&stack0x000002a0);
          puVar3 = Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
          in_stack_00000020 = in_stack_00000020 + 1;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar6 = (long *)FUN_03e18b6c(),
             unaff_x27 = (long *)
                         Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
             , unaff_x28 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
             plVar6 == (long *)0x0)) {
LAB_03e29e84:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *plVar6;
          uVar31 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar31 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
              }
              uVar31 = uVar31 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar31 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
          iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (iVar5 <= in_stack_00000020) {
            *(undefined1 *)(unaff_x19 + 0xf8) = 0;
            return;
          }
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar6 = (long *)FUN_03e18b6c(), plVar6 == (long *)0x0)) goto LAB_03e29e84;
          lVar10 = *plVar6;
          uVar31 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar31 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e2a18c;
              }
              uVar31 = uVar31 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar31 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                                ,0);
LAB_03e2a18c:
          uVar17 = (*(code *)*puVar7)(plVar6,in_stack_00000020,puVar7[1]);
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
                    (&stack0x000002a0,uVar17,&stack0x000000e0,3);
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          unaff_s8 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),in_stack_00000020,
                                         *(undefined8 *)
                                          Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                        );
          unaff_s13 = unaff_s8 + fStack0000000000000014;
          if (*(int *)(unaff_x19 + 0x38) == 0) {
            bVar2 = fStack000000000000006c <= in_stack_00000008._4_4_ &&
                    unaff_s13 < fStack000000000000006c;
            if (fStack000000000000006c <= in_stack_00000008._4_4_ &&
                unaff_s13 < fStack000000000000006c) {
              fStack000000000000006c = fStack000000000000006c - unaff_s8;
            }
          }
          else {
            bVar2 = false;
            fStack000000000000006c = 0.0;
          }
          lVar10 = *(long *)(unaff_x19 + 0x108);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          iStack0000000000000018 = unaff_w20;
        } while (bVar2 || unaff_s13 < fStack000000000000006c);
        unaff_s14 = unaff_s8 + 1.0;
LAB_03e2b550:
        uVar31 = FUN_03e2c8c8();
      } while ((uVar31 & 1) == 0);
      lVar10 = *(long *)(unaff_x19 + 0x108);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar13 = *unaff_x27;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = fStack000000000000006c / unaff_s8;
      }
      else {
        FUN_0314b890(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      iVar5 = *(int *)(unaff_x19 + 0x38);
      if (iVar5 == 0) {
        fVar20 = fStack000000000000001c;
        if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
        bVar4 = fStack000000000000006c < unaff_s8;
        fVar20 = fStack0000000000000010 + fStack000000000000006c;
        bVar2 = bVar4 && unaff_s13 < fVar20;
        fStack000000000000006c = fVar20 - unaff_s8;
        if (!bVar4 || unaff_s13 >= fVar20) {
          fStack000000000000006c = fVar20;
        }
        goto LAB_03e2ba7c;
      }
      if (iVar5 == 1) {
        fStack0000000000000024 =
             (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44)
                                 ,0);
        fVar20 = fStack0000000000000024;
LAB_03e2b708:
        bVar2 = false;
        fStack000000000000006c = fStack000000000000006c + fVar20;
        goto LAB_03e2ba7c;
      }
      if (iVar5 != 2) {
        bVar2 = false;
        goto LAB_03e2ba7c;
      }
      if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
        fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
        goto LAB_03e2b9f4;
      }
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
      lVar8 = *unaff_x26;
      iVar5 = *(int *)(unaff_x19 + 0x4c);
      lVar13 = *(long *)(lVar8 + 0xb8);
      if ((iVar5 == 2) || (iVar5 == 5)) {
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4();
          lVar8 = *unaff_x26;
          iVar5 = *(int *)(unaff_x19 + 0x4c);
          lVar13 = *(long *)(lVar8 + 0xb8);
          DAT_0482ee1d = unaff_w23;
        }
        pfVar12 = (float *)(lVar13 + 0x48);
        pfVar15 = (float *)(lVar13 + 0x4c);
        pfVar16 = (float *)(lVar13 + 0x50);
      }
      else {
        pfVar12 = (float *)(lVar13 + 0x3c);
        pfVar15 = (float *)(lVar13 + 0x40);
        pfVar16 = (float *)(lVar13 + 0x44);
      }
      if ((iVar5 == 1) || (iVar5 == 4)) {
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4();
          lVar8 = *unaff_x26;
          DAT_0482ee19 = unaff_w23;
        }
        lVar8 = *(long *)(lVar8 + 0xb8);
        pfVar12 = (float *)(lVar8 + 0x18);
        pfVar15 = (float *)(lVar8 + 0x1c);
        pfVar16 = (float *)(lVar8 + 0x20);
      }
      param_2 = *pfVar16;
      fVar21 = *pfVar15;
      fVar20 = *pfVar12;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar31 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                         (lVar10,0,0);
      if ((uVar31 & 1) != 0) {
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
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar31 = FUN_04073094(lVar10,0,0);
        if ((uVar31 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = FUN_04070398(lVar10,0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                               );
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = FUN_04073258(lVar13,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407e3a8(fVar20,lVar13,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar20 = (float)FUN_0407e758(lVar8,0);
          fVar19 = fVar21;
          fVar41 = param_2;
          lVar8 = FUN_04070398(lVar10,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar37 = (float)FUN_0407ec3c(lVar8,0);
          fVar20 = fVar20 * fVar37;
          fVar21 = fVar21 * fVar19;
          param_2 = param_2 * fVar41;
        }
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar31 = FUN_04073094(lVar10,0,0);
      unaff_x27 = (long *)
                  Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
      ;
    } while ((uVar31 & 1) == 0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = FUN_04050c14(lVar10,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04051ba0(&stack0x00000098,lVar8,0);
    fVar37 = fStack00000000000000ac;
    fVar41 = fStack00000000000000a8;
    fVar19 = fStack00000000000000a4;
    lVar10 = FUN_022c6694(lVar10,*(undefined8 *)
                                  Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      uVar18 = 0;
      fVar41 = fVar37;
      do {
        if (uVar1 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar8 = *(long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_04050c14(lVar8,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_04051ba0(&stack0x00000098,lVar8,0);
        uVar1 = *(uint *)(lVar10 + 0x18);
        fVar37 = fVar19 + fVar19;
        if (fVar19 + fVar19 <= fStack00000000000000a4 + fStack00000000000000a4) {
          fVar37 = fStack00000000000000a4 + fStack00000000000000a4;
        }
        fVar19 = fVar41 + fVar41;
        if (fVar41 + fVar41 <= fStack00000000000000ac + fStack00000000000000ac) {
          fVar19 = fStack00000000000000ac + fStack00000000000000ac;
        }
        uVar18 = uVar18 + 1;
        fVar41 = fVar19 * 0.5;
        fVar19 = fVar37 * 0.5;
        fVar37 = fVar41;
      } while ((int)uVar18 < (int)uVar1);
    }
    unaff_x27 = (long *)
                Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
    ;
    if (DAT_0482f03e == '\0') {
      thunk_FUN_01efb3a4();
      DAT_0482f03e = unaff_w23;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar20 = fVar20 * (fVar19 + fVar19);
    fVar21 = fVar21 * (fVar41 + fVar41);
    param_2 = param_2 * (fVar37 + fVar37);
    param_1 = fVar21 * fVar21 + fVar20 * fVar20;
    param_2 = param_2 * param_2;
  } while( true );
}


