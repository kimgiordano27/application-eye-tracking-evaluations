/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$IsEyeTrackingPermissionGranted
ENTRY_POINT: 06783e44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void Unity_XR_Oculus_Utils__IsEyeTrackingPermissionGranted
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int extraout_w1;
  long unaff_x19;
  long *unaff_x21;
  long lVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long unaff_x25;
  long unaff_x27;
  void *__src;
  void *__dest;
  void *pvVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  int iStack000000000000001c;
  int iStack000000000000004c;
  int iStack0000000000000064;
  int iStack000000000000006c;
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
  undefined8 uVar32;
  long in_stack_00000ad8;
  
  FUN_06668eb0(param_2,param_3,*(undefined8 *)(param_1 + 8));
  uVar13 = FUN_068b21bc(unaff_x19 + 0x68,0);
  puVar6 = PTR_DAT_06f9a540;
  if ((uVar13 & 1) == 0) {
    thunk_FUN_03037804(PTR_DAT_06f6d640);
    uVar14 = thunk_FUN_0301080c();
    uVar18 = thunk_FUN_03037804(Unity_Properties_TypeConverter<uint,_char>_TypeInfo);
    FUN_05aeefcc(uVar14,uVar18,0);
    uVar18 = thunk_FUN_03037804(Unity_Properties_TypeConverter<uint,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar14,uVar18);
  }
  iVar11 = *(int *)(unaff_x19 + 0x98);
  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  iVar8 = FUN_06765ed4(0);
  puVar7 = System_Func<AssemblyName,_Assembly>_TypeInfo;
  puVar5 = PTR_DAT_06f8dce0;
  if (iVar11 == iVar8) {
    uVar14 = FUN_03d0aef0(*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x80),
                          *(undefined8 *)System_Func<AssemblyName,_Assembly>_TypeInfo);
    FUN_068b58dc(uVar14,(long)(*(int *)(unaff_x19 + 0x80) << 2),0);
    uVar14 = FUN_03d0aef0(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98),
                          *(undefined8 *)puVar7);
    FUN_068b58dc(uVar14,(long)(*(int *)(unaff_x19 + 0x98) << 2),0);
  }
  else {
    FUN_04748098((undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_06f8dce0);
    if (*(long *)(unaff_x19 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_068d20c8(*(long *)(unaff_x19 + 0x88),0);
    FUN_04748098(unaff_x19 + 0x90,*(undefined8 *)puVar5);
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_068d20c8(*(long *)(unaff_x19 + 0xa0),0);
    FUN_06783818();
  }
  if (*(long *)(unaff_x27 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar19 = *(long *)(unaff_x27 + 0xd8);
  iVar11 = *(int *)(unaff_x27 + 0x158);
  iStack0000000000000064 = *(int *)(unaff_x27 + 0x15c);
  uVar13 = FUN_0663aecc(*(long *)(unaff_x27 + 400),0);
  if ((uVar13 & 1) == 0) {
    iStack000000000000006c = 1;
  }
  else {
    if (*(long *)(unaff_x27 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar13 = FUN_0663b014(*(long *)(unaff_x27 + 400),0);
    iStack000000000000006c = 1;
    if ((uVar13 & 1) != 0) {
      iStack000000000000006c = 2;
    }
  }
  iVar8 = *(int *)(unaff_x27 + 0x240);
  *(int *)(unaff_x19 + 0x13c) = iVar8;
  if (iVar8 < 1) {
    uVar13 = 0;
  }
  else {
    lVar22 = 0;
    uVar13 = 0;
    do {
      memmove(&stack0x00000720,(void *)(*(long *)(unaff_x27 + 0x238) + lVar22),0x74);
      iVar8 = FUN_069230cc(&stack0x00000720,0);
      if (iVar8 != 1) {
        iVar8 = *(int *)(unaff_x19 + 0x13c);
        break;
      }
      iVar8 = *(int *)(unaff_x19 + 0x13c);
      uVar13 = uVar13 + 1;
      lVar22 = lVar22 + 0x74;
    } while ((long)uVar13 < (long)iVar8);
  }
  puVar5 = Unity_Properties_TypeConverter<uint,_bool>_TypeInfo;
  iVar21 = (int)uVar13;
  *(int *)(unaff_x19 + 0x13c) = iVar8 - iVar21;
  *(int *)(unaff_x19 + 0x54) = iVar21;
  if ((iVar21 != 0) && (*(int *)(unaff_x27 + 0x228) != -1)) {
    *(int *)(unaff_x19 + 0x54) = iVar21 + -1;
  }
  FUN_04758e88((long *)(unaff_x27 + 0x238),uVar13 & 0xffffffff,iVar8 - iVar21,*(undefined8 *)puVar5)
  ;
  auVar31 = FUN_06919d98(unaff_x27 + 8,0);
  pvVar15 = auVar31._0_8_;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_06765f34(0);
  puVar7 = Unity_Properties_TypeConverter<ushort,_char>_TypeInfo;
  puVar5 = PTR_DAT_06f6d508;
  uVar1 = auVar31._8_4_;
  if ((int)uVar9 <= (int)auVar31._8_4_) {
    uVar1 = uVar9;
  }
  iStack000000000000004c = uVar1 + extraout_w1;
  iVar8 = iStack000000000000004c + 0x3e;
  if (-1 < iStack000000000000004c + 0x1f) {
    iVar8 = iStack000000000000004c + 0x1f;
  }
  lVar22 = unaff_x27 + 0x18;
  iVar21 = 4;
  iVar8 = iVar8 >> 5;
  *(int *)(unaff_x19 + 0x130) = iVar8;
  *(undefined4 *)(unaff_x19 + 0x58) = 4;
  while( true ) {
    iVar21 = iVar21 * 2;
    *(int *)(unaff_x19 + 0x58) = iVar21;
    iVar3 = 0;
    if (iVar21 != 0) {
      iVar3 = (iVar21 + -1 + iVar11) / iVar21;
    }
    iVar4 = 0;
    if (iVar21 != 0) {
      iVar4 = (iVar21 + -1 + iStack0000000000000064) / iVar21;
    }
    *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(iVar4,iVar3);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar10 = FUN_06765ed4(0);
    iVar21 = iStack000000000000006c;
    if (iVar3 * iStack000000000000006c * iVar4 * iVar8 <= iVar10) break;
    iVar21 = *(int *)(unaff_x19 + 0x58);
    iVar8 = *(int *)(unaff_x19 + 0x130);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar13 = FUN_068b95d0(lVar19,0);
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar11 = FUN_06765ecc(0);
    fVar24 = (float)FUN_068b91fc(lVar19,0);
    if (DAT_0738e5d9 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e5d9 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar26 = (double)FUN_05aefe9c((double)fVar24,0x4000000000000000,0);
    fVar24 = (float)FUN_068b9174(lVar19,0);
    if (DAT_0738e5d9 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e5d9 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar27 = (double)FUN_05aefe9c((double)fVar24,0x4000000000000000,0);
    iVar8 = 0;
    if (iVar21 != 0) {
      iVar8 = iVar11 / iVar21;
    }
    *(float *)(unaff_x19 + 0x134) =
         (float)iVar8 / (((float)dVar26 - (float)dVar27) * (float)(*(int *)(unaff_x19 + 0x130) + 2))
    ;
    fVar24 = (float)FUN_068b9174(lVar19,0);
    if (DAT_0738e5d9 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e5d9 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar26 = (double)FUN_05aefe9c((double)fVar24,0x4000000000000000,0);
    *(float *)(unaff_x19 + 0x138) = *(float *)(unaff_x19 + 0x134) * -(float)dVar26;
    fVar24 = (float)FUN_068b91fc(lVar19,0);
    if (DAT_0738e5d9 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e5d9 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar26 = (double)FUN_05aefe9c((double)fVar24,0x4000000000000000,0);
    fVar24 = *(float *)(unaff_x19 + 0x134);
    fVar25 = (float)dVar26;
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar8 = FUN_06765ecc(0);
    fVar24 = (float)FUN_068b91fc(lVar19,0);
    fVar25 = (float)FUN_068b9174(lVar19,0);
    iVar11 = 0;
    if (iVar21 != 0) {
      iVar11 = iVar8 / iVar21;
    }
    *(float *)(unaff_x19 + 0x134) =
         (float)iVar11 / ((fVar24 - fVar25) * (float)(*(int *)(unaff_x19 + 0x130) + 2));
    fVar24 = (float)FUN_068b9174(lVar19,0);
    *(float *)(unaff_x19 + 0x138) = *(float *)(unaff_x19 + 0x134) * -fVar24;
    fVar24 = (float)FUN_068b91fc(lVar19,0);
    fVar25 = *(float *)(unaff_x19 + 0x134);
  }
  fVar24 = fVar24 * fVar25 + *(float *)(unaff_x19 + 0x138);
  iVar11 = -0x80000000;
  if (fVar24 != INFINITY) {
    iVar11 = (int)fVar24;
  }
  *(int *)(unaff_x19 + 0x140) = iVar11;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar12 = FUN_05af0054(iVar11,0,0);
  *(undefined4 *)(unaff_x19 + 0x140) = uVar12;
  FUN_0676fd24(&stack0x00000910,lVar22,0,0);
  FUN_0662e5c4(&stack0x00000910,&stack0x00000410,0);
  iVar11 = iVar21 + -1;
  if (iVar21 != 0 && iVar11 != 0) {
    iVar11 = 1;
  }
  FUN_0676fd24(&stack0x00000910,lVar22,iVar11,0);
  FUN_0662e5c4(&stack0x00000910,&stack0x000003d0,0);
  FUN_057cbc90(&stack0x00000910,&stack0x00000200,&stack0x00000a70,*(undefined8 *)puVar7);
  memcpy(&stack0x00000880,&stack0x00000910,0x80);
  FUN_0676fd98(&stack0x00000200,lVar22,0,0);
  FUN_0662e5c4(&stack0x00000200,&stack0x00000310,0);
  FUN_0676fd98(&stack0x00000200,lVar22,iVar11,0);
  FUN_0662e5c4(&stack0x00000200,&stack0x000002d0,0);
  FUN_057cbc90(&stack0x00000200,&stack0x00000a70,&stack0x00000a30,*(undefined8 *)puVar7);
  memcpy(&stack0x00000800,&stack0x00000200,0x80);
  if (1 < (int)uVar1) {
    uVar9 = 0;
    uVar13 = 1;
    pvVar23 = pvVar15;
    do {
      pvVar23 = (void *)((long)pvVar23 + 0x88);
      __src = (void *)((long)pvVar15 + (ulong)uVar9 * 0x88);
      memmove(&stack0x00000698,(void *)((long)pvVar15 + uVar13 * 0x88),0x88);
      uVar20 = uVar13;
      __dest = pvVar23;
      do {
        iVar11 = (int)uVar20;
        memcpy(&stack0x00000910,__src,0x88);
        memcpy(&stack0x00000200,&stack0x00000698,0x88);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        memcpy(&stack0x00000178,&stack0x00000910,0x88);
        memcpy(&stack0x000000f0,&stack0x00000200,0x88);
        uVar16 = FUN_06784ed8(&stack0x00000178,&stack0x000000f0);
        if ((uVar16 & 1) == 0) goto Unity_XR_Oculus_InputFocus__add_InputFocusLost;
        memmove(__dest,__src,0x88);
        uVar20 = uVar20 - 1;
        __dest = (void *)((long)__dest + -0x88);
        __src = (void *)((long)__src + -0x88);
      } while (0 < (int)uVar20);
      iVar11 = 0;
Unity_XR_Oculus_InputFocus__add_InputFocusLost:
      memmove((void *)((long)pvVar15 + (long)iVar11 * 0x88),&stack0x00000698,0x88);
      uVar13 = uVar13 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar1);
  }
  iVar8 = iStack000000000000006c;
  iVar21 = iStack000000000000004c * iStack000000000000006c;
  FUN_0475f980(&stack0x00000a70,iVar21,3,1,*(undefined8 *)PTR_DAT_06f934b8);
  memcpy(&stack0x00000610,&stack0x00000880,0x80);
  puVar6 = Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo;
  FUN_04760790(&stack0x000007f0,0,*(int *)(unaff_x19 + 0x13c) * iVar8,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo);
  iVar11 = *(int *)(unaff_x19 + 0x13c);
  uVar14 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_int>_TypeInfo;
  memcpy(&stack0x00000910,&stack0x00000610,0x80);
  auVar29 = FUN_03c8be88(&stack0x00000910,iVar11 * iVar8,0x20,0,0,uVar14);
  memcpy(&stack0x00000590,&stack0x00000880,0x80);
  FUN_04760790(&stack0x000007f0,*(int *)(unaff_x19 + 0x13c) * iVar8,uVar1 * iVar8,
               *(undefined8 *)puVar6);
  uVar14 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_long>_TypeInfo;
  memcpy(&stack0x00000910,&stack0x00000590,0x80);
  auVar29 = FUN_03c8bf28(&stack0x00000910,uVar1 * iVar8,0x20,auVar29._0_8_,auVar29._8_8_,uVar14);
  iVar8 = *(int *)(unaff_x19 + 0x140);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar28 = *(undefined8 *)(unaff_x19 + 0x134);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x130);
  uVar2 = *(undefined4 *)(unaff_x19 + 0x13c);
  iVar11 = iVar8 + 0xfe;
  if (-1 < iVar8 + 0x7f) {
    iVar11 = iVar8 + 0x7f;
  }
  FUN_068b95d0(lVar19,0);
  uVar32 = CONCAT44(iStack000000000000006c,iVar11 >> 7);
  auVar30 = FUN_03c8c108(&stack0x00000910,(iVar11 >> 7) * iStack000000000000006c,1,auVar29._0_8_,
                         auVar29._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_float>_TypeInfo);
  FUN_068b2130(&stack0x000007e0,0);
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo;
  uVar17 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,0,
                        *(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo);
  in_stack_000000d8 = CONCAT44(uVar12,iVar8);
  in_stack_000000e0 = CONCAT44(uVar1,uVar2);
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000b0 = uVar14;
  in_stack_000000b8 = uVar18;
  in_stack_000000d0 = uVar28;
  in_stack_000000e8 = uVar32;
  FUN_06783a18(uVar17,lVar19,&stack0x000000b0,&stack0x000007dc,&stack0x000007d8,&stack0x000007c8);
  uVar17 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,1,*(undefined8 *)puVar6);
  in_stack_00000098 = CONCAT44(uVar12,iVar8);
  in_stack_000000a0 = CONCAT44(uVar1,uVar2);
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000070 = uVar14;
  in_stack_00000078 = uVar18;
  in_stack_00000090 = uVar28;
  in_stack_000000a8 = uVar32;
  FUN_06783a18(uVar17,lVar19,&stack0x00000070,&stack0x000007c4,&stack0x000007c0,&stack0x000007b0);
  iVar11 = *(int *)(unaff_x19 + 0x60);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  iVar11 = iVar11 * 4;
  uVar1 = iVar11 + 0x83;
  uVar9 = iVar11 + 0x102;
  if (-1 < (int)uVar1) {
    uVar9 = uVar1;
  }
  uVar9 = uVar9 & 0xffffff80;
  uVar1 = uVar9 | 3;
  if (-1 < (int)uVar9) {
    uVar1 = uVar9;
  }
  FUN_046e528c(&stack0x00000a30,iVar21 * ((int)uVar1 >> 2),3,1,
               *(undefined8 *)
                Unity_Entities_TypeManager_SharedTypeIndex<UIButtonDescription>_TypeInfo);
  memcpy(&stack0x000004d0,&stack0x00000880,0x80);
  puVar6 = Unity_Properties_TypeConverter<ushort,_short>_TypeInfo;
  FUN_057cb6dc(in_stack_000007dc,in_stack_000007c4,&stack0x00000450,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_short>_TypeInfo);
  FUN_057cb6dc(in_stack_000007d8,in_stack_000007c0,&stack0x00000350,*(undefined8 *)puVar6);
  FUN_057cbbec(in_stack_000007c8,in_stack_000007cc,in_stack_000007d0,in_stack_000007d4,
               in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,in_stack_000007bc,
               &stack0x00000200,
               *(undefined8 *)Unity_Properties_TypeConverter<ushort,_double>_TypeInfo);
  FUN_068b9174(lVar19,0);
  iStack000000000000001c = iVar21;
  FUN_068b95d0(lVar19,0);
  uVar14 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo;
  memcpy(&stack0x00000948,&stack0x000004d0,0x80);
  auVar29 = System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<GroupedUnchippedObject>
                      (&stack0x00000910,iStack000000000000001c,1,auVar29._0_8_,auVar29._8_8_,uVar14)
  ;
  auVar29 = FUN_03c8bfc8(&stack0x00000910,*(int *)(unaff_x19 + 0x60) * iStack000000000000006c,1,
                         auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_object>_TypeInfo);
  auVar30 = FUN_0475fce8(&stack0x000007f0,auVar30._0_8_,auVar30._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo);
  auVar29 = FUN_046e55e0(&stack0x000007a0,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_string>_TypeInfo);
  auVar29 = FUN_068b225c(auVar30._0_8_,auVar30._8_8_,auVar29._0_8_,auVar29._8_8_,0);
  *(undefined1 (*) [16])(unaff_x19 + 0x68) = auVar29;
  FUN_068b2234(0);
  FUN_06668eb4(&stack0x00000908,0);
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000ad8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


