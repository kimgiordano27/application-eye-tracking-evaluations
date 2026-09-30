/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 067841fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 150
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  uint uVar8;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  ulong uVar10;
  void *unaff_x24;
  int unaff_w25;
  ulong uVar11;
  long *unaff_x26;
  undefined8 uVar12;
  void *__src;
  int unaff_w28;
  void *__dest;
  undefined8 *unaff_x29;
  void *pvVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  float unaff_s8;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iStack000000000000001c;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000007b0;
  undefined4 in_stack_000007b4;
  undefined4 in_stack_000007b8;
  undefined4 in_stack_000007bc;
  undefined4 in_stack_000007c0;
  undefined4 in_stack_000007c4;
  undefined4 in_stack_000007c8;
  undefined4 in_stack_000007cc;
  undefined4 in_stack_000007d0;
  undefined4 in_stack_000007d4;
  undefined4 in_stack_000007d8;
  undefined4 in_stack_000007dc;
  undefined8 uVar21;
  long in_stack_00000ad8;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  dVar15 = (double)FUN_05aefe9c((double)unaff_s8,0x4000000000000000,0);
  fVar14 = (float)FUN_068b9174();
  if (*(char *)(unaff_x20 + 0x5d9) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x20 + 0x5d9) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  dVar16 = (double)FUN_05aefe9c((double)fVar14,0x4000000000000000,0);
  iVar9 = 0;
  if (unaff_w25 != 0) {
    iVar9 = unaff_w28 / unaff_w25;
  }
  *(float *)(unaff_x19 + 0x134) =
       (float)iVar9 / (((float)dVar15 - (float)dVar16) * (float)(*(int *)(unaff_x19 + 0x130) + 2));
  fVar14 = (float)FUN_068b9174();
  if (*(char *)(unaff_x20 + 0x5d9) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x20 + 0x5d9) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  dVar15 = (double)FUN_05aefe9c((double)fVar14,0x4000000000000000,0);
  *(float *)(unaff_x19 + 0x138) = *(float *)(unaff_x19 + 0x134) * -(float)dVar15;
  fVar14 = (float)FUN_068b91fc();
  if (*(char *)(unaff_x20 + 0x5d9) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x20 + 0x5d9) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  dVar15 = (double)FUN_05aefe9c((double)fVar14,0x4000000000000000,0);
  fVar14 = *(float *)(unaff_x19 + 0x134) * (float)dVar15 + *(float *)(unaff_x19 + 0x138);
  iVar9 = -0x80000000;
  if (fVar14 != INFINITY) {
    iVar9 = (int)fVar14;
  }
  *(int *)(unaff_x19 + 0x140) = iVar9;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar5 = FUN_05af0054(iVar9,0,0);
  *(undefined4 *)(unaff_x19 + 0x140) = uVar5;
  FUN_0676fd24(&stack0x00000910);
  FUN_0662e5c4(&stack0x00000910,&stack0x00000410,0);
  FUN_0676fd24(&stack0x00000910);
  FUN_0662e5c4(&stack0x00000910,&stack0x000003d0,0);
  FUN_057cbc90(&stack0x00000910,&stack0x00000200,&stack0x00000a70,*unaff_x29);
  memcpy(&stack0x00000880,&stack0x00000910,0x80);
  FUN_0676fd98(&stack0x00000200);
  FUN_0662e5c4(&stack0x00000200,&stack0x00000310,0);
  FUN_0676fd98(&stack0x00000200);
  FUN_0662e5c4(&stack0x00000200,&stack0x000002d0,0);
  FUN_057cbc90(&stack0x00000200,&stack0x00000a70,&stack0x00000a30,*unaff_x29);
  memcpy(&stack0x00000800,&stack0x00000200,0x80);
  if (1 < (int)in_stack_00000060) {
    uVar8 = 0;
    uVar11 = 1;
    pvVar13 = unaff_x24;
    do {
      pvVar13 = (void *)((long)pvVar13 + 0x88);
      __src = (void *)((long)unaff_x24 + (ulong)uVar8 * 0x88);
      memmove(&stack0x00000698,(void *)((long)unaff_x24 + uVar11 * 0x88),0x88);
      uVar10 = uVar11;
      __dest = pvVar13;
      do {
        iVar9 = (int)uVar10;
        memcpy(&stack0x00000910,__src,0x88);
        memcpy(&stack0x00000200,&stack0x00000698,0x88);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        memcpy(&stack0x00000178,&stack0x00000910,0x88);
        memcpy(&stack0x000000f0,&stack0x00000200,0x88);
        uVar6 = FUN_06784ed8(&stack0x00000178,&stack0x000000f0);
        if ((uVar6 & 1) == 0) goto Unity_XR_Oculus_InputFocus__add_InputFocusLost;
        memmove(__dest,__src,0x88);
        uVar10 = uVar10 - 1;
        __dest = (void *)((long)__dest + -0x88);
        __src = (void *)((long)__src + -0x88);
      } while (0 < (int)uVar10);
      iVar9 = 0;
Unity_XR_Oculus_InputFocus__add_InputFocusLost:
      memmove((void *)((long)unaff_x24 + (long)iVar9 * 0x88),&stack0x00000698,0x88);
      uVar11 = uVar11 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar11 != in_stack_00000060);
  }
  in_stack_00000048._4_4_ = in_stack_00000048._4_4_ * in_stack_00000068._4_4_;
  FUN_0475f980(&stack0x00000a70,in_stack_00000048._4_4_,3,1,*(undefined8 *)PTR_DAT_06f934b8);
  memcpy(&stack0x00000610,&stack0x00000880,0x80);
  puVar4 = Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo;
  FUN_04760790(&stack0x000007f0,0,*(int *)(unaff_x19 + 0x13c) * in_stack_00000068._4_4_,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo);
  iVar9 = *(int *)(unaff_x19 + 0x13c);
  uVar12 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_int>_TypeInfo;
  memcpy(&stack0x00000910,&stack0x00000610,0x80);
  auVar19 = FUN_03c8be88(&stack0x00000910,iVar9 * in_stack_00000068._4_4_,0x20,0,0,uVar12);
  memcpy(&stack0x00000590,&stack0x00000880,0x80);
  FUN_04760790(&stack0x000007f0,*(int *)(unaff_x19 + 0x13c) * in_stack_00000068._4_4_,
               in_stack_00000060 * in_stack_00000068._4_4_,*(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_long>_TypeInfo;
  memcpy(&stack0x00000910,&stack0x00000590,0x80);
  auVar19 = FUN_03c8bf28(&stack0x00000910,in_stack_00000060 * in_stack_00000068._4_4_,0x20,
                         auVar19._0_8_,auVar19._8_8_,uVar12);
  iVar2 = *(int *)(unaff_x19 + 0x140);
  uVar17 = in_stack_00000028[1];
  uVar12 = *in_stack_00000028;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x134);
  uVar5 = *(undefined4 *)(unaff_x19 + 0x130);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x13c);
  iVar9 = iVar2 + 0xfe;
  if (-1 < iVar2 + 0x7f) {
    iVar9 = iVar2 + 0x7f;
  }
  FUN_068b95d0(in_stack_00000058,0);
  uVar21 = CONCAT44(in_stack_00000068._4_4_,iVar9 >> 7);
  auVar20 = FUN_03c8c108(&stack0x00000910,(iVar9 >> 7) * in_stack_00000068._4_4_,1,auVar19._0_8_,
                         auVar19._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_float>_TypeInfo);
  FUN_068b2130(&stack0x000007e0,0);
  puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo;
  uVar7 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,0,
                       *(undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo);
  in_stack_000000d8 = CONCAT44(uVar5,iVar2);
  in_stack_000000e0 = CONCAT44(in_stack_00000060,uVar3);
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000b0 = uVar12;
  in_stack_000000b8 = uVar17;
  in_stack_000000d0 = uVar18;
  in_stack_000000e8 = uVar21;
  FUN_06783a18(uVar7,in_stack_00000058,&stack0x000000b0,&stack0x000007dc,&stack0x000007d8,
               &stack0x000007c8);
  uVar7 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,1,*(undefined8 *)puVar4);
  in_stack_00000098 = CONCAT44(uVar5,iVar2);
  in_stack_000000a0 = CONCAT44(in_stack_00000060,uVar3);
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000070 = uVar12;
  in_stack_00000078 = uVar17;
  in_stack_00000090 = uVar18;
  in_stack_000000a8 = uVar21;
  FUN_06783a18(uVar7,in_stack_00000058,&stack0x00000070,&stack0x000007c4,&stack0x000007c0,
               &stack0x000007b0);
  iVar9 = *(int *)(unaff_x19 + 0x60);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  iVar9 = iVar9 * 4;
  uVar8 = iVar9 + 0x83;
  uVar1 = iVar9 + 0x102;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
  uVar1 = uVar1 & 0xffffff80;
  uVar8 = uVar1 | 3;
  if (-1 < (int)uVar1) {
    uVar8 = uVar1;
  }
  FUN_046e528c(&stack0x00000a30,in_stack_00000048._4_4_ * ((int)uVar8 >> 2),3,1,
               *(undefined8 *)
                Unity_Entities_TypeManager_SharedTypeIndex<UIButtonDescription>_TypeInfo);
  memcpy(&stack0x000004d0,&stack0x00000880,0x80);
  puVar4 = Unity_Properties_TypeConverter<ushort,_short>_TypeInfo;
  FUN_057cb6dc(in_stack_000007dc,in_stack_000007c4,&stack0x00000450,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_short>_TypeInfo);
  FUN_057cb6dc(in_stack_000007d8,in_stack_000007c0,&stack0x00000350,*(undefined8 *)puVar4);
  FUN_057cbbec(in_stack_000007c8,in_stack_000007cc,in_stack_000007d0,in_stack_000007d4,
               in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,in_stack_000007bc,
               &stack0x00000200,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_double>_TypeInfo);
  FUN_068b9174(in_stack_00000058,0);
  iStack000000000000001c = in_stack_00000048._4_4_;
  FUN_068b95d0(in_stack_00000058,0);
  uVar12 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo;
  memcpy(&stack0x00000948,&stack0x000004d0,0x80);
  auVar19 = System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<GroupedUnchippedObject>
                      (&stack0x00000910,iStack000000000000001c,1,auVar19._0_8_,auVar19._8_8_,uVar12)
  ;
  auVar19 = FUN_03c8bfc8(&stack0x00000910,*(int *)(unaff_x19 + 0x60) * in_stack_00000068._4_4_,1,
                         auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_object>_TypeInfo);
  auVar20 = FUN_0475fce8(&stack0x000007f0,auVar20._0_8_,auVar20._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo);
  auVar19 = FUN_046e55e0(&stack0x000007a0,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_string>_TypeInfo);
  auVar19 = FUN_068b225c(auVar20._0_8_,auVar20._8_8_,auVar19._0_8_,auVar19._8_8_,0);
  *(undefined1 (*) [16])(unaff_x19 + 0x68) = auVar19;
  FUN_068b2234(0);
  FUN_06668eb4(&stack0x00000908,0);
  if (*(long *)(in_stack_00000030 + 0x28) == in_stack_00000ad8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


