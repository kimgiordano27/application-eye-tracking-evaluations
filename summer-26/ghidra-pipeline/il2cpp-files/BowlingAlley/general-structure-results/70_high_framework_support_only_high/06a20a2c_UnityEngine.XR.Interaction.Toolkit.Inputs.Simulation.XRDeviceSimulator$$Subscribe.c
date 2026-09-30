/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$Subscribe
ENTRY_POINT: 06a20a2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__Subscribe(float param_1)

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
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float unaff_s9;
  ulong unaff_d10;
  float unaff_s11;
  float fVar18;
  float unaff_s12;
  undefined8 uVar19;
  float unaff_s13;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  int iStack0000000000000020;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined8 uStack0000000000000048;
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
    uVar11 = (ulong)(uint)(in_stack_00000040 * unaff_s13);
    fVar15 = unaff_s13 * fStack000000000000003c +
             unaff_s11 * fStack0000000000000038 + unaff_s12 * fStack0000000000000034;
    fVar12 = (in_stack_00000040 * unaff_s13 + unaff_s9 * unaff_s11 + (float)unaff_d10 * unaff_s12) -
             fVar15;
    param_1 = fVar12 / param_1;
    uStack0000000000000048 = 0;
    uVar13 = (ulong)(uint)fVar12;
    uVar17 = (ulong)(uint)fVar15;
    if (0.0 < param_1) {
      uVar19 = *(undefined8 *)unaff_x21;
      fVar12 = unaff_x21[2];
      uVar20 = *(undefined8 *)(unaff_x21 + 3);
      fVar15 = unaff_x21[5];
      lVar4 = FUN_06be6b04(unaff_x26,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar11 = FUN_06bf4b0c(lVar4,0);
      if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = (ulong)(uint)(fVar12 + param_1 * fVar15);
      uVar3 = (ulong)(uint)((float)((ulong)uVar19 >> 0x20) +
                           (float)((ulong)uVar20 >> 0x20) * param_1);
      FUN_06bf2b34(&stack0x000000c0,0);
      lVar4 = FUN_06be6b04(unaff_x26,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06bf4b0c(lVar4,0);
      uVar19 = FUN_06bdd998(0);
      fVar9 = in_stack_000000c8;
      fVar15 = fStack00000000000000c4;
      fVar12 = fStack00000000000000c0;
      uVar13 = uVar3;
      uVar17 = uVar14;
      lVar4 = FUN_06be6b04(unaff_x26,0);
      fVar16 = (float)uVar17;
      fVar18 = (float)uVar13;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      fVar10 = (float)FUN_06bf3d9c(lVar4,0);
      uVar19 = FUN_06bde1c4(uVar19,uVar3,uVar14,uVar11,fVar12 - fVar10,fVar15 - fVar18,
                            fVar9 - fVar16,0);
      uVar13 = uVar3;
      uVar17 = uVar14;
      uVar8 = uStack0000000000000028;
      if (iStack0000000000000020 != 0) {
        fVar12 = (float)FUN_06a1f848(unaff_x26);
        fVar15 = (float)FUN_06a1f914(unaff_x26);
        fVar12 = ABS((float)uVar19 - fVar12);
        uVar13 = (ulong)(uint)fVar12;
        if ((fVar12 <= fVar15) &&
           (FUN_06a1f914(unaff_x26), ABS((float)uVar14 - (float)uVar3) <= (float)uVar13)) {
          uVar8 = uStack0000000000000018;
        }
      }
      if ((_iStack0000000000000020 & 0x100000000) == 0) {
LAB_06a20be4:
        if (uVar8 == 0) goto LAB_06a20870;
      }
      else {
        FUN_06a1fb88(unaff_x26);
        iVar2 = FUN_06a20e38(uVar19);
        uVar13 = uVar14;
        if (iVar2 == 0) goto LAB_06a20be4;
        uVar8 = uVar8 | 1;
      }
      auVar21 = FUN_05013cdc(unaff_x26,
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
      FUN_06a4816c(param_1,&stack0x00000070,auVar21._0_8_,auVar21._8_8_,&stack0x00000050,uVar8,0);
      puVar7 = (undefined8 *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
      iStack000000000000001c = iStack000000000000001c + 1;
      puVar7[6] = in_stack_000000a0;
      puVar7[3] = in_stack_00000088;
      puVar7[2] = in_stack_00000080;
      puVar7[5] = in_stack_00000098;
      puVar7[4] = in_stack_00000090;
      puVar7[1] = in_stack_00000078;
      *puVar7 = in_stack_00000070;
      uVar13 = in_stack_00000080;
      uVar17 = in_stack_00000090;
    }
LAB_06a20870:
    do {
      uVar3 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                        (&stack0x000000e0,*unaff_x29);
      if ((uVar3 & 1) == 0) {
        FUN_04507ea0(&stack0x00000118,iStack000000000000001c,in_stack_00000010._4_4_,1,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__);
        puVar1 = Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__;
        FUN_04508934(in_stack_00000128,in_stack_00000130,in_stack_00000118,in_stack_00000120,
                     iStack000000000000001c,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__);
        in_stack_000000b8 = in_stack_00000120;
        in_stack_000000b0 = in_stack_00000118;
        FUN_045081ec(&stack0x00000128,*(undefined8 *)puVar1);
        auVar21._8_8_ = in_stack_000000b8;
        auVar21._0_8_ = in_stack_000000b0;
        return auVar21;
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
      uVar19 = FUN_06bf4b0c(lVar4,0);
      if (*(char *)(unaff_x20 + 0x760) == '\0') {
        thunk_FUN_032e1da0();
        *(char *)(unaff_x20 + 0x760) = unaff_w28;
      }
      lVar5 = *(long *)(*unaff_x23 + 0xb8);
      fVar12 = (float)FUN_06bde1c4(uVar19,uVar13,uVar17,uVar11,*(undefined4 *)(lVar5 + 0x18),
                                   *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
      fVar15 = (float)uVar17;
      unaff_d10 = uVar13;
      in_stack_00000040 = fVar15;
      unaff_s9 = (float)FUN_06bf3d9c(lVar4,0);
      if (*(char *)(unaff_x19 + 0x827) == '\0') {
        thunk_FUN_032e1da0();
        *(char *)(unaff_x19 + 0x827) = unaff_w28;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar18 = (float)uVar13;
      fVar9 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar18 * fVar18);
      if (fVar9 <= fStack0000000000000030) {
        if (DAT_076cd829 == '\0') {
          thunk_FUN_032e1da0();
          DAT_076cd829 = unaff_w28;
        }
        pfVar6 = *(float **)(*unaff_x23 + 0xb8);
        unaff_s11 = *pfVar6;
        unaff_s12 = pfVar6[1];
        unaff_s13 = pfVar6[2];
      }
      else {
        unaff_s11 = fVar12 / fVar9;
        unaff_s12 = fVar18 / fVar9;
        unaff_s13 = fVar15 / fVar9;
      }
      fStack0000000000000038 = *unaff_x21;
      fStack0000000000000034 = unaff_x21[1];
      fVar12 = unaff_x21[4];
      fVar9 = unaff_x21[5];
      fStack000000000000003c = unaff_x21[2];
      fVar15 = unaff_x21[3];
      if (*(char *)(unaff_x22 + 0x2ba) == '\0') {
        thunk_FUN_032e1da0();
        *(char *)(unaff_x22 + 0x2ba) = unaff_w28;
      }
      param_1 = unaff_s13 * fVar9 + unaff_s11 * fVar15 + unaff_s12 * fVar12;
      fVar12 = ABS(param_1);
      uVar11 = 0;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar9 = **(float **)(*unaff_x25 + 0xb8) * 8.0;
      fVar15 = fVar12 * fStack000000000000002c;
      if (fVar12 * fStack000000000000002c <= fVar9) {
        fVar15 = fVar9;
      }
      uVar13 = (ulong)(uint)fVar15;
      uVar17 = (ulong)(uint)ABS(0.0 - param_1);
    } while (ABS(0.0 - param_1) < fVar15);
  } while( true );
}


