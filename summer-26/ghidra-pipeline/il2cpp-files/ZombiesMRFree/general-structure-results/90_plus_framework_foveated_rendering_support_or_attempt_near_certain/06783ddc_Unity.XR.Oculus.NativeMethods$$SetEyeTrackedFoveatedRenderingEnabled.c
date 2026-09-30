/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06783ddc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 148
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int extraout_w1;
  int iVar22;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  long unaff_x25;
  long unaff_x27;
  void *__src;
  void *__dest;
  void *pvVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
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
  undefined8 uVar35;
  long in_stack_00000ad8;
  
  *(undefined4 *)(unaff_x22 + 3) = 0;
  *(undefined4 *)(unaff_x21 + 0x17) = 0;
  puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo;
  if (*(char *)(unaff_x19 + 0x51) != '\0') {
    lVar15 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar8;
    }
    FUN_06668eb0(&stack0x00000908,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8),0);
    uVar16 = FUN_068b21bc(unaff_x19 + 0x68,0);
    puVar6 = PTR_DAT_06f9a540;
    if ((uVar16 & 1) == 0) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar17 = thunk_FUN_0301080c();
      uVar21 = thunk_FUN_03037804(Unity_Properties_TypeConverter<uint,_char>_TypeInfo);
      FUN_05aeefcc(uVar17,uVar21,0);
      uVar21 = thunk_FUN_03037804(Unity_Properties_TypeConverter<uint,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar17,uVar21);
    }
    iVar13 = *(int *)(unaff_x19 + 0x98);
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar9 = FUN_06765ed4(0);
    puVar7 = System_Func<AssemblyName,_Assembly>_TypeInfo;
    puVar5 = PTR_DAT_06f8dce0;
    if (iVar13 == iVar9) {
      uVar17 = FUN_03d0aef0(*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x80),
                            *(undefined8 *)System_Func<AssemblyName,_Assembly>_TypeInfo);
      FUN_068b58dc(uVar17,(long)(*(int *)(unaff_x19 + 0x80) << 2),0);
      uVar17 = FUN_03d0aef0(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98),
                            *(undefined8 *)puVar7);
      FUN_068b58dc(uVar17,(long)(*(int *)(unaff_x19 + 0x98) << 2),0);
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
    lVar15 = *(long *)(unaff_x27 + 0xd8);
    iVar13 = *(int *)(unaff_x27 + 0x158);
    iVar9 = *(int *)(unaff_x27 + 0x15c);
    uVar16 = FUN_0663aecc(*(long *)(unaff_x27 + 400),0);
    if ((uVar16 & 1) == 0) {
      iVar22 = 1;
    }
    else {
      if (*(long *)(unaff_x27 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar16 = FUN_0663b014(*(long *)(unaff_x27 + 400),0);
      iVar22 = 1;
      if ((uVar16 & 1) != 0) {
        iVar22 = 2;
      }
    }
    iVar10 = *(int *)(unaff_x27 + 0x240);
    *(int *)(unaff_x19 + 0x13c) = iVar10;
    if (iVar10 < 1) {
      uVar16 = 0;
    }
    else {
      lVar25 = 0;
      uVar16 = 0;
      do {
        memmove(&stack0x00000720,(void *)(*(long *)(unaff_x27 + 0x238) + lVar25),0x74);
        iVar10 = FUN_069230cc(&stack0x00000720,0);
        if (iVar10 != 1) {
          iVar10 = *(int *)(unaff_x19 + 0x13c);
          break;
        }
        iVar10 = *(int *)(unaff_x19 + 0x13c);
        uVar16 = uVar16 + 1;
        lVar25 = lVar25 + 0x74;
      } while ((long)uVar16 < (long)iVar10);
    }
    puVar5 = Unity_Properties_TypeConverter<uint,_bool>_TypeInfo;
    iVar24 = (int)uVar16;
    *(int *)(unaff_x19 + 0x13c) = iVar10 - iVar24;
    *(int *)(unaff_x19 + 0x54) = iVar24;
    if ((iVar24 != 0) && (*(int *)(unaff_x27 + 0x228) != -1)) {
      *(int *)(unaff_x19 + 0x54) = iVar24 + -1;
    }
    FUN_04758e88((long *)(unaff_x27 + 0x238),uVar16 & 0xffffffff,iVar10 - iVar24,
                 *(undefined8 *)puVar5);
    auVar34 = FUN_06919d98(unaff_x27 + 8,0);
    pvVar18 = auVar34._0_8_;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar11 = FUN_06765f34(0);
    puVar7 = Unity_Properties_TypeConverter<ushort,_char>_TypeInfo;
    puVar5 = PTR_DAT_06f6d508;
    uVar1 = auVar34._8_4_;
    if ((int)uVar11 <= (int)auVar34._8_4_) {
      uVar1 = uVar11;
    }
    iVar10 = uVar1 + extraout_w1;
    iVar24 = iVar10 + 0x3e;
    if (-1 < iVar10 + 0x1f) {
      iVar24 = iVar10 + 0x1f;
    }
    lVar25 = unaff_x27 + 0x18;
    iVar12 = 4;
    iVar24 = iVar24 >> 5;
    *(int *)(unaff_x19 + 0x130) = iVar24;
    *(undefined4 *)(unaff_x19 + 0x58) = 4;
    while( true ) {
      iVar12 = iVar12 * 2;
      *(int *)(unaff_x19 + 0x58) = iVar12;
      iVar3 = 0;
      if (iVar12 != 0) {
        iVar3 = (iVar12 + -1 + iVar13) / iVar12;
      }
      iVar4 = 0;
      if (iVar12 != 0) {
        iVar4 = (iVar12 + -1 + iVar9) / iVar12;
      }
      *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(iVar4,iVar3);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar12 = FUN_06765ed4(0);
      if (iVar3 * iVar22 * iVar4 * iVar24 <= iVar12) break;
      iVar12 = *(int *)(unaff_x19 + 0x58);
      iVar24 = *(int *)(unaff_x19 + 0x130);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar16 = FUN_068b95d0(lVar15,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar13 = FUN_06765ecc(0);
      fVar27 = (float)FUN_068b91fc(lVar15,0);
      if (DAT_0738e5d9 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e5d9 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar29 = (double)FUN_05aefe9c((double)fVar27,0x4000000000000000,0);
      fVar27 = (float)FUN_068b9174(lVar15,0);
      if (DAT_0738e5d9 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e5d9 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar30 = (double)FUN_05aefe9c((double)fVar27,0x4000000000000000,0);
      iVar9 = 0;
      if (iVar22 != 0) {
        iVar9 = iVar13 / iVar22;
      }
      *(float *)(unaff_x19 + 0x134) =
           (float)iVar9 /
           (((float)dVar29 - (float)dVar30) * (float)(*(int *)(unaff_x19 + 0x130) + 2));
      fVar27 = (float)FUN_068b9174(lVar15,0);
      if (DAT_0738e5d9 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e5d9 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar29 = (double)FUN_05aefe9c((double)fVar27,0x4000000000000000,0);
      *(float *)(unaff_x19 + 0x138) = *(float *)(unaff_x19 + 0x134) * -(float)dVar29;
      fVar27 = (float)FUN_068b91fc(lVar15,0);
      if (DAT_0738e5d9 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e5d9 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar29 = (double)FUN_05aefe9c((double)fVar27,0x4000000000000000,0);
      fVar27 = *(float *)(unaff_x19 + 0x134);
      fVar28 = (float)dVar29;
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar9 = FUN_06765ecc(0);
      fVar27 = (float)FUN_068b91fc(lVar15,0);
      fVar28 = (float)FUN_068b9174(lVar15,0);
      iVar13 = 0;
      if (iVar22 != 0) {
        iVar13 = iVar9 / iVar22;
      }
      *(float *)(unaff_x19 + 0x134) =
           (float)iVar13 / ((fVar27 - fVar28) * (float)(*(int *)(unaff_x19 + 0x130) + 2));
      fVar27 = (float)FUN_068b9174(lVar15,0);
      *(float *)(unaff_x19 + 0x138) = *(float *)(unaff_x19 + 0x134) * -fVar27;
      fVar27 = (float)FUN_068b91fc(lVar15,0);
      fVar28 = *(float *)(unaff_x19 + 0x134);
    }
    fVar27 = fVar27 * fVar28 + *(float *)(unaff_x19 + 0x138);
    iVar13 = -0x80000000;
    if (fVar27 != INFINITY) {
      iVar13 = (int)fVar27;
    }
    *(int *)(unaff_x19 + 0x140) = iVar13;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar14 = FUN_05af0054(iVar13,0,0);
    *(undefined4 *)(unaff_x19 + 0x140) = uVar14;
    FUN_0676fd24(&stack0x00000910,lVar25,0,0);
    FUN_0662e5c4(&stack0x00000910,&stack0x00000410,0);
    iVar13 = iVar22 + -1;
    if (iVar22 != 0 && iVar13 != 0) {
      iVar13 = 1;
    }
    FUN_0676fd24(&stack0x00000910,lVar25,iVar13,0);
    FUN_0662e5c4(&stack0x00000910,&stack0x000003d0,0);
    FUN_057cbc90(&stack0x00000910,&stack0x00000200,&stack0x00000a70,*(undefined8 *)puVar7);
    memcpy(&stack0x00000880,&stack0x00000910,0x80);
    FUN_0676fd98(&stack0x00000200,lVar25,0,0);
    FUN_0662e5c4(&stack0x00000200,&stack0x00000310,0);
    FUN_0676fd98(&stack0x00000200,lVar25,iVar13,0);
    FUN_0662e5c4(&stack0x00000200,&stack0x000002d0,0);
    FUN_057cbc90(&stack0x00000200,&stack0x00000a70,&stack0x00000a30,*(undefined8 *)puVar7);
    memcpy(&stack0x00000800,&stack0x00000200,0x80);
    if (1 < (int)uVar1) {
      uVar11 = 0;
      uVar16 = 1;
      pvVar26 = pvVar18;
      do {
        pvVar26 = (void *)((long)pvVar26 + 0x88);
        __src = (void *)((long)pvVar18 + (ulong)uVar11 * 0x88);
        memmove(&stack0x00000698,(void *)((long)pvVar18 + uVar16 * 0x88),0x88);
        uVar23 = uVar16;
        __dest = pvVar26;
        do {
          iVar13 = (int)uVar23;
          memcpy(&stack0x00000910,__src,0x88);
          memcpy(&stack0x00000200,&stack0x00000698,0x88);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          memcpy(&stack0x00000178,&stack0x00000910,0x88);
          memcpy(&stack0x000000f0,&stack0x00000200,0x88);
          uVar19 = FUN_06784ed8(&stack0x00000178,&stack0x000000f0);
          if ((uVar19 & 1) == 0) goto Unity_XR_Oculus_InputFocus__add_InputFocusLost;
          memmove(__dest,__src,0x88);
          uVar23 = uVar23 - 1;
          __dest = (void *)((long)__dest + -0x88);
          __src = (void *)((long)__src + -0x88);
        } while (0 < (int)uVar23);
        iVar13 = 0;
Unity_XR_Oculus_InputFocus__add_InputFocusLost:
        memmove((void *)((long)pvVar18 + (long)iVar13 * 0x88),&stack0x00000698,0x88);
        uVar16 = uVar16 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar16 != uVar1);
    }
    iVar10 = iVar10 * iVar22;
    FUN_0475f980(&stack0x00000a70,iVar10,3,1,*(undefined8 *)PTR_DAT_06f934b8);
    memcpy(&stack0x00000610,&stack0x00000880,0x80);
    puVar6 = Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo;
    FUN_04760790(&stack0x000007f0,0,*(int *)(unaff_x19 + 0x13c) * iVar22,
                 *(undefined8 *)Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo);
    iVar13 = *(int *)(unaff_x19 + 0x13c);
    uVar17 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_int>_TypeInfo;
    memcpy(&stack0x00000910,&stack0x00000610,0x80);
    auVar32 = FUN_03c8be88(&stack0x00000910,iVar13 * iVar22,0x20,0,0,uVar17);
    memcpy(&stack0x00000590,&stack0x00000880,0x80);
    FUN_04760790(&stack0x000007f0,*(int *)(unaff_x19 + 0x13c) * iVar22,uVar1 * iVar22,
                 *(undefined8 *)puVar6);
    uVar17 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_long>_TypeInfo;
    memcpy(&stack0x00000910,&stack0x00000590,0x80);
    auVar32 = FUN_03c8bf28(&stack0x00000910,uVar1 * iVar22,0x20,auVar32._0_8_,auVar32._8_8_,uVar17);
    iVar9 = *(int *)(unaff_x19 + 0x140);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar31 = *(undefined8 *)(unaff_x19 + 0x134);
    uVar14 = *(undefined4 *)(unaff_x19 + 0x130);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x13c);
    iVar13 = iVar9 + 0xfe;
    if (-1 < iVar9 + 0x7f) {
      iVar13 = iVar9 + 0x7f;
    }
    FUN_068b95d0(lVar15,0);
    uVar35 = CONCAT44(iVar22,iVar13 >> 7);
    auVar33 = FUN_03c8c108(&stack0x00000910,(iVar13 >> 7) * iVar22,1,auVar32._0_8_,auVar32._8_8_,
                           *(undefined8 *)Unity_Properties_TypeConverter<ushort,_float>_TypeInfo);
    FUN_068b2130(&stack0x000007e0,0);
    puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo;
    uVar20 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,0,
                          *(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<TwoLongTapMe>_TypeInfo);
    in_stack_000000d8 = CONCAT44(uVar14,iVar9);
    in_stack_000000e0 = CONCAT44(uVar1,uVar2);
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000b0 = uVar17;
    in_stack_000000b8 = uVar21;
    in_stack_000000d0 = uVar31;
    in_stack_000000e8 = uVar35;
    FUN_06783a18(uVar20,lVar15,&stack0x000000b0,&stack0x000007dc,&stack0x000007d8,&stack0x000007c8);
    uVar20 = FUN_057cbcb4(&stack0x00000910,&stack0x00000800,1,*(undefined8 *)puVar6);
    in_stack_00000098 = CONCAT44(uVar14,iVar9);
    in_stack_000000a0 = CONCAT44(uVar1,uVar2);
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000070 = uVar17;
    in_stack_00000078 = uVar21;
    in_stack_00000090 = uVar31;
    in_stack_000000a8 = uVar35;
    FUN_06783a18(uVar20,lVar15,&stack0x00000070,&stack0x000007c4,&stack0x000007c0,&stack0x000007b0);
    iVar13 = *(int *)(unaff_x19 + 0x60);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar13 = iVar13 * 4;
    uVar1 = iVar13 + 0x83;
    uVar11 = iVar13 + 0x102;
    if (-1 < (int)uVar1) {
      uVar11 = uVar1;
    }
    uVar11 = uVar11 & 0xffffff80;
    uVar1 = uVar11 | 3;
    if (-1 < (int)uVar11) {
      uVar1 = uVar11;
    }
    FUN_046e528c(&stack0x00000a30,iVar10 * ((int)uVar1 >> 2),3,1,
                 *(undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<UIButtonDescription>_TypeInfo);
    memcpy(&stack0x000004d0,&stack0x00000880,0x80);
    puVar8 = Unity_Properties_TypeConverter<ushort,_short>_TypeInfo;
    FUN_057cb6dc(in_stack_000007dc,in_stack_000007c4,&stack0x00000450,
                 *(undefined8 *)Unity_Properties_TypeConverter<ushort,_short>_TypeInfo);
    FUN_057cb6dc(in_stack_000007d8,in_stack_000007c0,&stack0x00000350,*(undefined8 *)puVar8);
    FUN_057cbbec(in_stack_000007c8,in_stack_000007cc,in_stack_000007d0,in_stack_000007d4,
                 in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,in_stack_000007bc,
                 &stack0x00000200,
                 *(undefined8 *)Unity_Properties_TypeConverter<ushort,_double>_TypeInfo);
    FUN_068b9174(lVar15,0);
    FUN_068b95d0(lVar15,0);
    uVar17 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo;
    memcpy(&stack0x00000948,&stack0x000004d0,0x80);
    auVar32 = System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<GroupedUnchippedObject>
                        (&stack0x00000910,iVar10,1,auVar32._0_8_,auVar32._8_8_,uVar17);
    auVar32 = FUN_03c8bfc8(&stack0x00000910,*(int *)(unaff_x19 + 0x60) * iVar22,1,auVar32._0_8_,
                           auVar32._8_8_,
                           *(undefined8 *)Unity_Properties_TypeConverter<ushort,_object>_TypeInfo);
    auVar33 = FUN_0475fce8(&stack0x000007f0,auVar33._0_8_,auVar33._8_8_,
                           *(undefined8 *)Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo);
    auVar32 = FUN_046e55e0(&stack0x000007a0,auVar32._0_8_,auVar32._8_8_,
                           *(undefined8 *)Unity_Properties_TypeConverter<ushort,_string>_TypeInfo);
    auVar32 = FUN_068b225c(auVar33._0_8_,auVar33._8_8_,auVar32._0_8_,auVar32._8_8_,0);
    *(undefined1 (*) [16])(unaff_x19 + 0x68) = auVar32;
    FUN_068b2234(0);
    FUN_06668eb4(&stack0x00000908,0);
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000ad8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


