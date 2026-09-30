/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$RemoveDevices
ENTRY_POINT: 06a207d8
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
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__RemoveDevices(void)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  float *unaff_x21;
  undefined4 unaff_w24;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong in_d3;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined4 uStack0000000000000014;
  int iStack000000000000001c;
  ulong in_stack_00000020;
  float fStack000000000000002c;
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
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  FUN_04507ea0();
  FUN_04aaf96c(&stack0x00000070,&stack0x00000138,*unaff_x20);
  puVar6 = Method_System_Linq_Expressions_PrimitiveParameterExpression<int>__ctor__;
  puVar5 = PTR_DAT_07279c00;
  puVar4 = PTR_DAT_07279bf8;
  puVar3 = PTR_DAT_072795b0;
  fVar2 = DAT_013a01c0;
  iStack000000000000001c = 0;
  uVar1 = in_stack_00000020._4_4_ & 4;
  in_stack_000000e8 = in_stack_00000078;
  in_stack_000000e0 = in_stack_00000070;
  in_stack_000000f8 = in_stack_00000088;
  in_stack_000000f0 = in_stack_00000080;
  in_stack_00000108 = in_stack_00000098;
  in_stack_00000100 = in_stack_00000090;
  fStack000000000000002c = DAT_013a03a0;
  uVar23 = in_stack_00000080;
  uVar25 = in_stack_00000090;
  uStack0000000000000014 = unaff_w24;
LAB_06a20870:
  do {
    do {
      uVar8 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                        (&stack0x000000e0,*(undefined8 *)puVar6);
      iVar7 = iStack000000000000001c;
      if ((uVar8 & 1) == 0) {
        FUN_04507ea0(&stack0x00000118,iStack000000000000001c,uStack0000000000000014,1,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__);
        puVar3 = Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__;
        FUN_04508934(in_stack_00000128,in_stack_00000130,in_stack_00000118,in_stack_00000120,iVar7,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__);
        in_stack_000000b8 = in_stack_00000120;
        in_stack_000000b0 = in_stack_00000118;
        FUN_045081ec(&stack0x00000128,*(undefined8 *)puVar3);
        auVar33._8_8_ = in_stack_000000b8;
        auVar33._0_8_ = in_stack_000000b0;
        return auVar33;
      }
      lVar9 = FUN_052d5cb0(&stack0x000000e0,
                           *(undefined8 *)
                            Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__
                          );
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar10 = FUN_06be6b04(lVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar19 = FUN_06bf4b0c(lVar10,0);
      if (DAT_076cd760 == '\0') {
        thunk_FUN_032e1da0(puVar3);
        DAT_076cd760 = '\x01';
      }
      lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar15 = (float)FUN_06bde1c4(uVar19,uVar23,uVar25,in_d3,*(undefined4 *)(lVar11 + 0x18),
                                   *(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20),0);
      fVar27 = (float)uVar23;
      fVar28 = (float)uVar25;
      fVar22 = fVar28;
      fVar32 = fVar27;
      fVar16 = (float)FUN_06bf3d9c(lVar10,0);
      if (DAT_076cd827 == '\0') {
        thunk_FUN_032e1da0(puVar5);
        DAT_076cd827 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar17 = SQRT(fVar28 * fVar28 + fVar15 * fVar15 + fVar27 * fVar27);
      if (fVar17 <= fVar2) {
        if (DAT_076cd829 == '\0') {
          thunk_FUN_032e1da0(puVar3);
          DAT_076cd829 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
        fVar15 = *pfVar12;
        fVar27 = pfVar12[1];
        fVar28 = pfVar12[2];
      }
      else {
        fVar15 = fVar15 / fVar17;
        fVar27 = fVar27 / fVar17;
        fVar28 = fVar28 / fVar17;
      }
      fVar20 = *unaff_x21;
      fVar17 = unaff_x21[1];
      fVar26 = unaff_x21[4];
      fVar31 = unaff_x21[5];
      fVar18 = unaff_x21[2];
      fVar29 = unaff_x21[3];
      if (DAT_076ce2ba == '\0') {
        thunk_FUN_032e1da0(puVar4);
        DAT_076ce2ba = '\x01';
      }
      fVar26 = fVar28 * fVar31 + fVar15 * fVar29 + fVar27 * fVar26;
      fVar29 = ABS(fVar26);
      in_d3 = 0;
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar21 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
      fVar31 = fVar29 * fStack000000000000002c;
      if (fVar29 * fStack000000000000002c <= fVar21) {
        fVar31 = fVar21;
      }
      uVar23 = (ulong)(uint)fVar31;
      uVar25 = (ulong)(uint)ABS(0.0 - fVar26);
    } while (ABS(0.0 - fVar26) < fVar31);
    in_d3 = (ulong)(uint)(fVar22 * fVar28);
    fVar17 = fVar28 * fVar18 + fVar15 * fVar20 + fVar27 * fVar17;
    fVar22 = (fVar22 * fVar28 + fVar16 * fVar15 + fVar32 * fVar27) - fVar17;
    fVar26 = fVar22 / fVar26;
    uVar23 = (ulong)(uint)fVar22;
    uVar25 = (ulong)(uint)fVar17;
  } while (fVar26 <= 0.0);
  uVar19 = *(undefined8 *)unaff_x21;
  fVar22 = unaff_x21[2];
  uVar30 = *(undefined8 *)(unaff_x21 + 3);
  fVar32 = unaff_x21[5];
  lVar10 = FUN_06be6b04(lVar9,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  in_d3 = FUN_06bf4b0c(lVar10,0);
  if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar24 = (ulong)(uint)(fVar22 + fVar26 * fVar32);
  uVar8 = (ulong)(uint)((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar30 >> 0x20) * fVar26);
  FUN_06bf2b34(&stack0x000000c0,0);
  lVar10 = FUN_06be6b04(lVar9,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_06bf4b0c(lVar10,0);
  uVar19 = FUN_06bdd998(0);
  fVar15 = in_stack_000000c8;
  fVar32 = fStack00000000000000c4;
  fVar22 = fStack00000000000000c0;
  uVar23 = uVar8;
  uVar25 = uVar24;
  lVar10 = FUN_06be6b04(lVar9,0);
  fVar27 = (float)uVar25;
  fVar16 = (float)uVar23;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  fVar28 = (float)FUN_06bf3d9c(lVar10,0);
  uVar19 = FUN_06bde1c4(uVar19,uVar8,uVar24,in_d3,fVar22 - fVar28,fVar32 - fVar16,fVar15 - fVar27,0)
  ;
  uVar23 = uVar8;
  uVar25 = uVar24;
  uVar14 = uVar1;
  if ((in_stack_00000020 & 0xa00000000) != 0) {
    fVar22 = (float)FUN_06a1f848(lVar9);
    fVar32 = (float)FUN_06a1f914(lVar9);
    fVar22 = ABS((float)uVar19 - fVar22);
    uVar23 = (ulong)(uint)fVar22;
    if ((fVar22 <= fVar32) &&
       (FUN_06a1f914(lVar9), ABS((float)uVar24 - (float)uVar8) <= (float)uVar23)) {
      uVar14 = in_stack_00000020._4_4_ & 0xe;
    }
  }
  if ((in_stack_00000020 & 0x100000000) == 0) goto LAB_06a20be4;
  FUN_06a1fb88(lVar9);
  iVar7 = FUN_06a20e38(uVar19);
  uVar23 = uVar24;
  if (iVar7 == 0) goto LAB_06a20be4;
  uVar14 = uVar14 | 1;
  goto LAB_06a20bf0;
LAB_06a20be4:
  if (uVar14 != 0) {
LAB_06a20bf0:
    auVar33 = FUN_05013cdc(lVar9,*(undefined8 *)
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
    FUN_06a4816c(fVar26,&stack0x00000070,auVar33._0_8_,auVar33._8_8_,&stack0x00000050,uVar14,0);
    puVar13 = (undefined8 *)(in_stack_00000128 + (long)iStack000000000000001c * 0x38);
    iStack000000000000001c = iStack000000000000001c + 1;
    puVar13[6] = in_stack_000000a0;
    puVar13[3] = in_stack_00000088;
    puVar13[2] = in_stack_00000080;
    puVar13[5] = in_stack_00000098;
    puVar13[4] = in_stack_00000090;
    puVar13[1] = in_stack_00000078;
    *puVar13 = in_stack_00000070;
    uVar23 = in_stack_00000080;
    uVar25 = in_stack_00000090;
  }
  goto LAB_06a20870;
}


