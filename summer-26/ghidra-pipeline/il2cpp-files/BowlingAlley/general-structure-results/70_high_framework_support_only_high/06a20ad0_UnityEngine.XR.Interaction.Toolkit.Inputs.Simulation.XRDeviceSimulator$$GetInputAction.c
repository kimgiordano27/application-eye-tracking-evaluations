/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$GetInputAction
ENTRY_POINT: 06a20ad0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__GetInputAction
          (ulong param_1,float param_2)

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
  uint uVar8;
  char unaff_w28;
  undefined8 *unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  ulong unaff_d8;
  float fVar22;
  float unaff_s13;
  float fVar23;
  undefined8 uVar24;
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
    uVar3 = (ulong)(uint)(unaff_s13 + param_2);
    param_1 = param_1 >> 0x20;
    FUN_06bf2b34(&stack0x000000c0,0);
    lVar4 = FUN_06be6b04(unaff_x26,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06bf4b0c(lVar4,0);
    uVar16 = FUN_06bdd998(0);
    fVar9 = in_stack_000000c8;
    fVar15 = fStack00000000000000c4;
    fVar14 = fStack00000000000000c0;
    uVar19 = param_1;
    uVar20 = uVar3;
    lVar4 = FUN_06be6b04(unaff_x26,0);
    fVar22 = (float)uVar20;
    fVar10 = (float)uVar19;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    fVar13 = (float)FUN_06bf3d9c(lVar4,0);
    uVar16 = FUN_06bde1c4(uVar16,param_1,uVar3,unaff_d8,fVar14 - fVar13,fVar15 - fVar10,
                          fVar9 - fVar22,0);
    uVar19 = param_1;
    uVar20 = uVar3;
    uVar8 = uStack0000000000000028;
    if (iStack0000000000000020 != 0) {
      fVar14 = (float)FUN_06a1f848(unaff_x26);
      fVar15 = (float)FUN_06a1f914(unaff_x26);
      fVar14 = ABS((float)uVar16 - fVar14);
      uVar19 = (ulong)(uint)fVar14;
      if ((fVar14 <= fVar15) &&
         (FUN_06a1f914(unaff_x26), ABS((float)uVar3 - (float)param_1) <= (float)uVar19)) {
        uVar8 = uStack0000000000000018;
      }
    }
    if ((_iStack0000000000000020 & 0x100000000) == 0) {
LAB_06a20be4:
      if (uVar8 != 0) goto LAB_06a20bf0;
    }
    else {
      FUN_06a1fb88(unaff_x26);
      iVar2 = FUN_06a20e38(uVar16);
      uVar19 = uVar3;
      if (iVar2 == 0) goto LAB_06a20be4;
      uVar8 = uVar8 | 1;
LAB_06a20bf0:
      auVar26 = FUN_05013cdc(unaff_x26,
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__)
      ;
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
                   uVar8,0);
      puVar7 = (undefined8 *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
      iStack000000000000001c = iStack000000000000001c + 1;
      puVar7[6] = in_stack_000000a0;
      puVar7[3] = in_stack_00000088;
      puVar7[2] = in_stack_00000080;
      puVar7[5] = in_stack_00000098;
      puVar7[4] = in_stack_00000090;
      puVar7[1] = in_stack_00000078;
      *puVar7 = in_stack_00000070;
      uVar19 = in_stack_00000080;
      uVar20 = in_stack_00000090;
    }
    do {
      do {
        uVar3 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x000000e0,*unaff_x29);
        if ((uVar3 & 1) == 0) {
          FUN_04507ea0(&stack0x00000118,iStack000000000000001c,in_stack_00000010._4_4_,1,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__)
          ;
          puVar1 = Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__;
          FUN_04508934(in_stack_00000128,in_stack_00000130,in_stack_00000118,in_stack_00000120,
                       iStack000000000000001c,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__);
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
        uVar16 = FUN_06bf4b0c(lVar4,0);
        if (*(char *)(unaff_x20 + 0x760) == '\0') {
          thunk_FUN_032e1da0();
          *(char *)(unaff_x20 + 0x760) = unaff_w28;
        }
        lVar5 = *(long *)(*unaff_x23 + 0xb8);
        fVar9 = (float)FUN_06bde1c4(uVar16,uVar19,uVar20,unaff_d8,*(undefined4 *)(lVar5 + 0x18),
                                    *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
        fVar22 = (float)uVar19;
        fVar13 = (float)uVar20;
        fVar14 = fVar13;
        fVar15 = fVar22;
        fVar10 = (float)FUN_06bf3d9c(lVar4,0);
        if (*(char *)(unaff_x19 + 0x827) == '\0') {
          thunk_FUN_032e1da0();
          *(char *)(unaff_x19 + 0x827) = unaff_w28;
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar11 = SQRT(fVar13 * fVar13 + fVar9 * fVar9 + fVar22 * fVar22);
        if (fVar11 <= in_stack_00000030) {
          if (DAT_076cd829 == '\0') {
            thunk_FUN_032e1da0();
            DAT_076cd829 = unaff_w28;
          }
          pfVar6 = *(float **)(*unaff_x23 + 0xb8);
          fVar9 = *pfVar6;
          fVar22 = pfVar6[1];
          fVar13 = pfVar6[2];
        }
        else {
          fVar9 = fVar9 / fVar11;
          fVar22 = fVar22 / fVar11;
          fVar13 = fVar13 / fVar11;
        }
        fVar17 = *unaff_x21;
        fVar11 = unaff_x21[1];
        fVar21 = unaff_x21[4];
        fVar25 = unaff_x21[5];
        fVar12 = unaff_x21[2];
        fVar23 = unaff_x21[3];
        if (*(char *)(unaff_x22 + 0x2ba) == '\0') {
          thunk_FUN_032e1da0();
          *(char *)(unaff_x22 + 0x2ba) = unaff_w28;
        }
        fVar21 = fVar13 * fVar25 + fVar9 * fVar23 + fVar22 * fVar21;
        fVar23 = ABS(fVar21);
        unaff_d8 = 0;
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar18 = **(float **)(*unaff_x25 + 0xb8) * 8.0;
        fVar25 = fVar23 * fStack000000000000002c;
        if (fVar23 * fStack000000000000002c <= fVar18) {
          fVar25 = fVar18;
        }
        uVar19 = (ulong)(uint)fVar25;
        uVar20 = (ulong)(uint)ABS(0.0 - fVar21);
      } while (ABS(0.0 - fVar21) < fVar25);
      unaff_d8 = (ulong)(uint)(fVar14 * fVar13);
      fVar11 = fVar13 * fVar12 + fVar9 * fVar17 + fVar22 * fVar11;
      uVar20 = (ulong)(uint)fVar11;
      fVar11 = (fVar14 * fVar13 + fVar10 * fVar9 + fVar15 * fVar22) - fVar11;
      uVar19 = (ulong)(uint)fVar11;
      fVar11 = fVar11 / fVar21;
      in_stack_00000040 = (ulong)(uint)fVar11;
    } while (fVar11 <= 0.0);
    uVar16 = *(undefined8 *)unaff_x21;
    unaff_s13 = unaff_x21[2];
    uVar24 = *(undefined8 *)(unaff_x21 + 3);
    param_2 = unaff_x21[5];
    lVar4 = FUN_06be6b04(unaff_x26,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_d8 = FUN_06bf4b0c(lVar4,0);
    if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    param_2 = fVar11 * param_2;
    param_1 = (ulong)(uint)((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar24 >> 0x20) * fVar11
                           ) << 0x20;
  } while( true );
}


