/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$Negate
ENTRY_POINT: 06a20c18
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__Negate
          (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],ulong param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong *puVar9;
  long unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w27;
  char unaff_w28;
  undefined8 *unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  int iStack0000000000000020;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  ulong in_stack_00000040;
  undefined8 uStack0000000000000050;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  ulong uStack0000000000000070;
  ulong uStack0000000000000078;
  ulong uStack0000000000000080;
  ulong uStack0000000000000088;
  ulong uStack0000000000000090;
  ulong uStack0000000000000098;
  ulong uStack00000000000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  auVar28._8_8_ = param_9;
  auVar28._0_8_ = param_7;
  uStack0000000000000078 = param_3._8_8_;
  uStack0000000000000070 = param_3._0_8_;
  fStack0000000000000058 = param_1._8_4_;
  uStack0000000000000050 = param_1._0_8_;
  do {
    uStack00000000000000a0 = 0;
    uStack000000000000005c = (undefined4)param_2;
    uStack0000000000000060 = (undefined4)((ulong)param_2 >> 0x20);
    uStack0000000000000080 = uStack0000000000000070;
    uStack0000000000000088 = uStack0000000000000078;
    uStack0000000000000090 = uStack0000000000000070;
    uStack0000000000000098 = uStack0000000000000078;
    FUN_06a4816c(in_stack_00000040,&stack0x00000070,auVar28._0_8_,auVar28._8_8_,&stack0x00000050,
                 unaff_w27,0);
    puVar9 = (ulong *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
    iStack000000000000001c = iStack000000000000001c + 1;
    puVar9[6] = uStack00000000000000a0;
    puVar9[3] = uStack0000000000000088;
    puVar9[2] = uStack0000000000000080;
    puVar9[5] = uStack0000000000000098;
    puVar9[4] = uStack0000000000000090;
    puVar9[1] = uStack0000000000000078;
    *puVar9 = uStack0000000000000070;
    uVar17 = uStack0000000000000080;
    uVar19 = uStack0000000000000090;
    do {
      do {
        do {
          uVar4 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                            (&stack0x000000e0,*unaff_x29);
          if ((uVar4 & 1) == 0) {
            FUN_04507ea0(&stack0x00000118,iStack000000000000001c,in_stack_00000010._4_4_,1,
                         *(undefined8 *)
                          Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__
                        );
            puVar2 = Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__;
            FUN_04508934(in_stack_00000128,in_stack_00000130,in_stack_00000118,in_stack_00000120,
                         iStack000000000000001c,
                         *(undefined8 *)
                          Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__
                        );
            in_stack_000000b8 = in_stack_00000120;
            in_stack_000000b0 = in_stack_00000118;
            FUN_045081ec(&stack0x00000128,*(undefined8 *)puVar2);
            auVar1._8_8_ = in_stack_000000b8;
            auVar1._0_8_ = in_stack_000000b0;
            return auVar1;
          }
          lVar5 = FUN_052d5cb0(&stack0x000000e0,
                               *(undefined8 *)
                                Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__
                              );
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar6 = FUN_06be6b04(lVar5,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar14 = FUN_06bf4b0c(lVar6,0);
          if (*(char *)(unaff_x20 + 0x760) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x20 + 0x760) = unaff_w28;
          }
          lVar7 = *(long *)(*unaff_x23 + 0xb8);
          fVar10 = (float)FUN_06bde1c4(uVar14,uVar17,uVar19,param_4,*(undefined4 *)(lVar7 + 0x18),
                                       *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),0
                                      );
          fVar21 = (float)uVar17;
          fVar22 = (float)uVar19;
          fVar23 = fVar22;
          fVar27 = fVar21;
          fVar11 = (float)FUN_06bf3d9c(lVar6,0);
          if (*(char *)(unaff_x19 + 0x827) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x19 + 0x827) = unaff_w28;
          }
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          fVar12 = SQRT(fVar22 * fVar22 + fVar10 * fVar10 + fVar21 * fVar21);
          if (fVar12 <= in_stack_00000030) {
            if (DAT_076cd829 == '\0') {
              thunk_FUN_032e1da0();
              DAT_076cd829 = unaff_w28;
            }
            pfVar8 = *(float **)(*unaff_x23 + 0xb8);
            fVar10 = *pfVar8;
            fVar21 = pfVar8[1];
            fVar22 = pfVar8[2];
          }
          else {
            fVar10 = fVar10 / fVar12;
            fVar21 = fVar21 / fVar12;
            fVar22 = fVar22 / fVar12;
          }
          fVar15 = *unaff_x21;
          fVar12 = unaff_x21[1];
          fVar20 = unaff_x21[4];
          fVar26 = unaff_x21[5];
          fVar13 = unaff_x21[2];
          fVar24 = unaff_x21[3];
          if (*(char *)(unaff_x22 + 0x2ba) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x22 + 0x2ba) = unaff_w28;
          }
          fVar20 = fVar22 * fVar26 + fVar10 * fVar24 + fVar21 * fVar20;
          fVar24 = ABS(fVar20);
          param_4 = 0;
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar16 = **(float **)(*unaff_x25 + 0xb8) * 8.0;
          fVar26 = fVar24 * fStack000000000000002c;
          if (fVar24 * fStack000000000000002c <= fVar16) {
            fVar26 = fVar16;
          }
          uVar17 = (ulong)(uint)fVar26;
          uVar19 = (ulong)(uint)ABS(0.0 - fVar20);
        } while (ABS(0.0 - fVar20) < fVar26);
        param_4 = (ulong)(uint)(fVar23 * fVar22);
        fVar12 = fVar22 * fVar13 + fVar10 * fVar15 + fVar21 * fVar12;
        uVar19 = (ulong)(uint)fVar12;
        fVar12 = (fVar23 * fVar22 + fVar11 * fVar10 + fVar27 * fVar21) - fVar12;
        uVar17 = (ulong)(uint)fVar12;
        fVar12 = fVar12 / fVar20;
        in_stack_00000040 = (ulong)(uint)fVar12;
      } while (fVar12 <= 0.0);
      uVar14 = *(undefined8 *)unaff_x21;
      fVar23 = unaff_x21[2];
      uVar25 = *(undefined8 *)(unaff_x21 + 3);
      fVar27 = unaff_x21[5];
      lVar6 = FUN_06be6b04(lVar5,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      param_4 = FUN_06bf4b0c(lVar6,0);
      if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar18 = (ulong)(uint)(fVar23 + fVar12 * fVar27);
      uVar4 = (ulong)(uint)((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar25 >> 0x20) * fVar12
                           );
      FUN_06bf2b34(&stack0x000000c0,0);
      lVar6 = FUN_06be6b04(lVar5,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06bf4b0c(lVar6,0);
      uVar14 = FUN_06bdd998(0);
      fVar10 = fStack00000000000000c8;
      fVar27 = fStack00000000000000c4;
      fVar23 = fStack00000000000000c0;
      uVar17 = uVar4;
      uVar19 = uVar18;
      lVar6 = FUN_06be6b04(lVar5,0);
      fVar21 = (float)uVar19;
      fVar11 = (float)uVar17;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      fVar22 = (float)FUN_06bf3d9c(lVar6,0);
      uVar14 = FUN_06bde1c4(uVar14,uVar4,uVar18,param_4,fVar23 - fVar22,fVar27 - fVar11,
                            fVar10 - fVar21,0);
      uVar17 = uVar4;
      uVar19 = uVar18;
      unaff_w27 = uStack0000000000000028;
      if (iStack0000000000000020 != 0) {
        fVar23 = (float)FUN_06a1f848(lVar5);
        fVar27 = (float)FUN_06a1f914(lVar5);
        fVar23 = ABS((float)uVar14 - fVar23);
        uVar17 = (ulong)(uint)fVar23;
        if ((fVar23 <= fVar27) &&
           (FUN_06a1f914(lVar5), ABS((float)uVar18 - (float)uVar4) <= (float)uVar17)) {
          unaff_w27 = uStack0000000000000018;
        }
      }
      if ((_iStack0000000000000020 & 0x100000000) != 0) {
        FUN_06a1fb88(lVar5);
        iVar3 = FUN_06a20e38(uVar14);
        uVar17 = uVar18;
        if (iVar3 != 0) {
          unaff_w27 = unaff_w27 | 1;
          break;
        }
      }
    } while (unaff_w27 == 0);
    auVar28 = FUN_05013cdc(lVar5,*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                          );
    uStack0000000000000050 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
    param_2 = CONCAT44(in_stack_000000d0,uStack00000000000000cc);
    uStack0000000000000070 = 0;
    uStack0000000000000078 = 0;
    fStack0000000000000058 = fStack00000000000000c8;
  } while( true );
}


