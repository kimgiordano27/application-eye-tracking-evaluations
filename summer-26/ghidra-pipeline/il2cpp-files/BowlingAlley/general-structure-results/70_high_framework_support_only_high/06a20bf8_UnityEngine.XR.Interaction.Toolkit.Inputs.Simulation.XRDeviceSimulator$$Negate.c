/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$Negate
ENTRY_POINT: 06a20bf8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__Negate(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  char unaff_w28;
  undefined8 *unaff_x29;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong in_d3;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  int iStack0000000000000020;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  float in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  do {
    auVar26 = FUN_05013cdc(unaff_x26,*param_1);
    in_stack_00000050 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
    in_stack_000000a0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_00000058 = in_stack_000000c8;
    uStack0000000000000064 = uStack00000000000000d4;
    uStack0000000000000060 = uStack00000000000000d0;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    FUN_06a4816c(in_stack_00000040,&stack0x00000070,auVar26._0_8_,auVar26._8_8_,&stack0x00000050,
                 unaff_w27,0);
    puVar7 = (undefined8 *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
    iStack000000000000001c = iStack000000000000001c + 1;
    puVar7[6] = in_stack_000000a0;
    puVar7[3] = in_stack_00000088;
    puVar7[2] = in_stack_00000080;
    puVar7[5] = in_stack_00000098;
    puVar7[4] = in_stack_00000090;
    puVar7[1] = in_stack_00000078;
    *puVar7 = in_stack_00000070;
    uVar15 = in_stack_00000080;
    uVar17 = in_stack_00000090;
    do {
      do {
        do {
          uVar3 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                            (&stack0x000000e0,*unaff_x29);
          if ((uVar3 & 1) == 0) {
            FUN_04507ea0(&stack0x00000118,iStack000000000000001c,in_stack_00000010._4_4_,1,
                         *(undefined8 *)
                          Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__
                        );
            puVar1 = Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__;
            FUN_04508934(in_stack_00000128,in_stack_00000130,in_stack_00000118,in_stack_00000120,
                         iStack000000000000001c,
                         *(undefined8 *)
                          Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__
                        );
            in_stack_000000b8 = in_stack_00000120;
            in_stack_000000b0 = in_stack_00000118;
            FUN_045081ec(&stack0x00000128,*(undefined8 *)puVar1);
            auVar26._8_8_ = in_stack_000000b8;
            auVar26._0_8_ = in_stack_000000b0;
            return auVar26;
          }
          unaff_x26 = FUN_052d5cb0(&stack0x000000e0,
                                   *(undefined8 *)
                                    Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__
                                  );
          if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar4 = FUN_06be6b04(unaff_x26,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar12 = FUN_06bf4b0c(lVar4,0);
          if (*(char *)(unaff_x20 + 0x760) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x20 + 0x760) = unaff_w28;
          }
          lVar5 = *(long *)(*unaff_x23 + 0xb8);
          fVar8 = (float)FUN_06bde1c4(uVar12,uVar15,uVar17,in_d3,*(undefined4 *)(lVar5 + 0x18),
                                      *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0)
          ;
          fVar19 = (float)uVar15;
          fVar20 = (float)uVar17;
          fVar21 = fVar20;
          fVar25 = fVar19;
          fVar9 = (float)FUN_06bf3d9c(lVar4,0);
          if (*(char *)(unaff_x19 + 0x827) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x19 + 0x827) = unaff_w28;
          }
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          fVar10 = SQRT(fVar20 * fVar20 + fVar8 * fVar8 + fVar19 * fVar19);
          if (fVar10 <= in_stack_00000030) {
            if (DAT_076cd829 == '\0') {
              thunk_FUN_032e1da0();
              DAT_076cd829 = unaff_w28;
            }
            pfVar6 = *(float **)(*unaff_x23 + 0xb8);
            fVar8 = *pfVar6;
            fVar19 = pfVar6[1];
            fVar20 = pfVar6[2];
          }
          else {
            fVar8 = fVar8 / fVar10;
            fVar19 = fVar19 / fVar10;
            fVar20 = fVar20 / fVar10;
          }
          fVar13 = *unaff_x21;
          fVar10 = unaff_x21[1];
          fVar18 = unaff_x21[4];
          fVar24 = unaff_x21[5];
          fVar11 = unaff_x21[2];
          fVar22 = unaff_x21[3];
          if (*(char *)(unaff_x22 + 0x2ba) == '\0') {
            thunk_FUN_032e1da0();
            *(char *)(unaff_x22 + 0x2ba) = unaff_w28;
          }
          fVar18 = fVar20 * fVar24 + fVar8 * fVar22 + fVar19 * fVar18;
          fVar22 = ABS(fVar18);
          in_d3 = 0;
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar14 = **(float **)(*unaff_x25 + 0xb8) * 8.0;
          fVar24 = fVar22 * fStack000000000000002c;
          if (fVar22 * fStack000000000000002c <= fVar14) {
            fVar24 = fVar14;
          }
          uVar15 = (ulong)(uint)fVar24;
          uVar17 = (ulong)(uint)ABS(0.0 - fVar18);
        } while (ABS(0.0 - fVar18) < fVar24);
        in_d3 = (ulong)(uint)(fVar21 * fVar20);
        fVar10 = fVar20 * fVar11 + fVar8 * fVar13 + fVar19 * fVar10;
        uVar17 = (ulong)(uint)fVar10;
        fVar10 = (fVar21 * fVar20 + fVar9 * fVar8 + fVar25 * fVar19) - fVar10;
        uVar15 = (ulong)(uint)fVar10;
        fVar10 = fVar10 / fVar18;
        in_stack_00000040 = (ulong)(uint)fVar10;
      } while (fVar10 <= 0.0);
      uVar12 = *(undefined8 *)unaff_x21;
      fVar21 = unaff_x21[2];
      uVar23 = *(undefined8 *)(unaff_x21 + 3);
      fVar25 = unaff_x21[5];
      lVar4 = FUN_06be6b04(unaff_x26,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_d3 = FUN_06bf4b0c(lVar4,0);
      if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar16 = (ulong)(uint)(fVar21 + fVar10 * fVar25);
      uVar3 = (ulong)(uint)((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar23 >> 0x20) * fVar10
                           );
      FUN_06bf2b34(&stack0x000000c0,0);
      lVar4 = FUN_06be6b04(unaff_x26,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06bf4b0c(lVar4,0);
      uVar12 = FUN_06bdd998(0);
      fVar8 = in_stack_000000c8;
      fVar25 = fStack00000000000000c4;
      fVar21 = fStack00000000000000c0;
      uVar15 = uVar3;
      uVar17 = uVar16;
      lVar4 = FUN_06be6b04(unaff_x26,0);
      fVar19 = (float)uVar17;
      fVar9 = (float)uVar15;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      fVar20 = (float)FUN_06bf3d9c(lVar4,0);
      uVar12 = FUN_06bde1c4(uVar12,uVar3,uVar16,in_d3,fVar21 - fVar20,fVar25 - fVar9,fVar8 - fVar19,
                            0);
      uVar15 = uVar3;
      uVar17 = uVar16;
      unaff_w27 = uStack0000000000000028;
      if (iStack0000000000000020 != 0) {
        fVar21 = (float)FUN_06a1f848(unaff_x26);
        fVar25 = (float)FUN_06a1f914(unaff_x26);
        fVar21 = ABS((float)uVar12 - fVar21);
        uVar15 = (ulong)(uint)fVar21;
        if ((fVar21 <= fVar25) &&
           (FUN_06a1f914(unaff_x26), ABS((float)uVar16 - (float)uVar3) <= (float)uVar15)) {
          unaff_w27 = uStack0000000000000018;
        }
      }
      if ((_iStack0000000000000020 & 0x100000000) != 0) {
        FUN_06a1fb88(unaff_x26);
        iVar2 = FUN_06a20e38(uVar12);
        uVar15 = uVar16;
        if (iVar2 != 0) {
          unaff_w27 = unaff_w27 | 1;
          param_1 = (undefined8 *)
                    Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
          break;
        }
      }
      param_1 = (undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
    } while (unaff_w27 == 0);
  } while( true );
}


