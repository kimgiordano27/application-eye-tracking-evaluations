/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$OnInputDeviceChange
ENTRY_POINT: 06a20850
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
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__OnInputDeviceChange
          (float param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long in_x10;
  float *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint uVar9;
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
  ulong in_stack_00000020;
  uint in_stack_00000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
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
  ulong uStack0000000000000100;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  fStack000000000000002c = *(float *)(in_x10 + 0x3a0);
  fStack0000000000000030 = param_1;
  uStack0000000000000100 = param_3;
LAB_06a20870:
  do {
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
        auVar28._8_8_ = in_stack_000000b8;
        auVar28._0_8_ = in_stack_000000b0;
        return auVar28;
      }
      lVar4 = FUN_052d5cb0(&stack0x000000e0,
                           *(undefined8 *)
                            Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__
                          );
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar5 = FUN_06be6b04(lVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar14 = FUN_06bf4b0c(lVar5,0);
      if (DAT_076cd760 == '\0') {
        thunk_FUN_032e1da0();
        DAT_076cd760 = unaff_w28;
      }
      lVar6 = *(long *)(*unaff_x23 + 0xb8);
      fVar10 = (float)FUN_06bde1c4(uVar14,param_2,param_3,param_4,*(undefined4 *)(lVar6 + 0x18),
                                   *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
      fVar21 = (float)param_2;
      fVar22 = (float)param_3;
      fVar23 = fVar22;
      fVar27 = fVar21;
      fVar11 = (float)FUN_06bf3d9c(lVar5,0);
      if (DAT_076cd827 == '\0') {
        thunk_FUN_032e1da0();
        DAT_076cd827 = unaff_w28;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar12 = SQRT(fVar22 * fVar22 + fVar10 * fVar10 + fVar21 * fVar21);
      if (fVar12 <= fStack0000000000000030) {
        if (DAT_076cd829 == '\0') {
          thunk_FUN_032e1da0();
          DAT_076cd829 = unaff_w28;
        }
        pfVar7 = *(float **)(*unaff_x23 + 0xb8);
        fVar10 = *pfVar7;
        fVar21 = pfVar7[1];
        fVar22 = pfVar7[2];
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
      if (DAT_076ce2ba == '\0') {
        thunk_FUN_032e1da0();
        DAT_076ce2ba = unaff_w28;
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
      param_2 = (ulong)(uint)fVar26;
      param_3 = (ulong)(uint)ABS(0.0 - fVar20);
    } while (ABS(0.0 - fVar20) < fVar26);
    param_4 = (ulong)(uint)(fVar23 * fVar22);
    fVar12 = fVar22 * fVar13 + fVar10 * fVar15 + fVar21 * fVar12;
    param_3 = (ulong)(uint)fVar12;
    fVar12 = (fVar23 * fVar22 + fVar11 * fVar10 + fVar27 * fVar21) - fVar12;
    param_2 = (ulong)(uint)fVar12;
    fVar12 = fVar12 / fVar20;
  } while (fVar12 <= 0.0);
  uVar14 = *(undefined8 *)unaff_x21;
  fVar23 = unaff_x21[2];
  uVar25 = *(undefined8 *)(unaff_x21 + 3);
  fVar27 = unaff_x21[5];
  lVar5 = FUN_06be6b04(lVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  param_4 = FUN_06bf4b0c(lVar5,0);
  if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar18 = (ulong)(uint)(fVar23 + fVar12 * fVar27);
  uVar3 = (ulong)(uint)((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar25 >> 0x20) * fVar12);
  FUN_06bf2b34(&stack0x000000c0,0);
  lVar5 = FUN_06be6b04(lVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_06bf4b0c(lVar5,0);
  uVar14 = FUN_06bdd998(0);
  fVar10 = in_stack_000000c8;
  fVar27 = fStack00000000000000c4;
  fVar23 = fStack00000000000000c0;
  uVar17 = uVar3;
  uVar19 = uVar18;
  lVar5 = FUN_06be6b04(lVar4,0);
  fVar21 = (float)uVar19;
  fVar11 = (float)uVar17;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  fVar22 = (float)FUN_06bf3d9c(lVar5,0);
  uVar14 = FUN_06bde1c4(uVar14,uVar3,uVar18,param_4,fVar23 - fVar22,fVar27 - fVar11,fVar10 - fVar21,
                        0);
  param_2 = uVar3;
  param_3 = uVar18;
  uVar9 = in_stack_00000028;
  if (in_w8 != 0) {
    fVar23 = (float)FUN_06a1f848(lVar4);
    fVar27 = (float)FUN_06a1f914(lVar4);
    fVar23 = ABS((float)uVar14 - fVar23);
    param_2 = (ulong)(uint)fVar23;
    if ((fVar23 <= fVar27) &&
       (FUN_06a1f914(lVar4), ABS((float)uVar18 - (float)uVar3) <= (float)param_2)) {
      uVar9 = uStack0000000000000018;
    }
  }
  if ((in_stack_00000020 & 0x100000000) == 0) goto LAB_06a20be4;
  FUN_06a1fb88(lVar4);
  iVar2 = FUN_06a20e38(uVar14);
  param_2 = uVar18;
  if (iVar2 == 0) goto LAB_06a20be4;
  uVar9 = uVar9 | 1;
  goto LAB_06a20bf0;
LAB_06a20be4:
  if (uVar9 != 0) {
LAB_06a20bf0:
    auVar28 = FUN_05013cdc(lVar4,*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                          );
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
    FUN_06a4816c(fVar12,&stack0x00000070,auVar28._0_8_,auVar28._8_8_,&stack0x00000050,uVar9,0);
    puVar8 = (undefined8 *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
    iStack000000000000001c = iStack000000000000001c + 1;
    puVar8[6] = in_stack_000000a0;
    puVar8[3] = in_stack_00000088;
    puVar8[2] = in_stack_00000080;
    puVar8[5] = in_stack_00000098;
    puVar8[4] = in_stack_00000090;
    puVar8[1] = in_stack_00000078;
    *puVar8 = in_stack_00000070;
    param_2 = in_stack_00000080;
    param_3 = in_stack_00000090;
  }
  goto LAB_06a20870;
}


