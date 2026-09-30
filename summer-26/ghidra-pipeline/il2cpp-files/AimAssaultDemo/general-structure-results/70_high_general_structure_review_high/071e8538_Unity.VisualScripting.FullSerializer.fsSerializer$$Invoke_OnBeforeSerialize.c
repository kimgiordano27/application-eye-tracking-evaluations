/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeSerialize
ENTRY_POINT: 071e8538
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeSerialize(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  int in_w8;
  long lVar12;
  double in_x9;
  undefined4 in_w10;
  long lVar13;
  long in_x11;
  int *piVar14;
  long in_x13;
  ulong uVar15;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar16;
  int unaff_w22;
  undefined8 *unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar17;
  double dVar18;
  double unaff_d8;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  double in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  double in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  double in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  ulong in_stack_00000140;
  undefined8 in_stack_00000148;
  double in_stack_00000150;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  double in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  double in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  long in_stack_00000230;
  ulong in_stack_00000260;
  undefined8 in_stack_00000268;
  ulong in_stack_00000290;
  undefined8 in_stack_00000298;
  double in_stack_000002a0;
  undefined8 uVar19;
  undefined8 in_stack_000002a8;
  ulong in_stack_000002b0;
  undefined7 in_stack_000002e8;
  undefined1 in_stack_000002ef;
  undefined7 in_stack_000002f0;
  long in_stack_000002f8;
  
code_r0x071e8538:
  lVar8 = in_x11 + in_x13 * 0x20;
  *(int *)(lVar8 + 0x38) = in_w8;
  *(undefined4 *)(lVar8 + 0x3c) = in_w10;
  *(double *)(lVar8 + 0x30) = in_x9;
  *(undefined8 *)(lVar8 + 0x28) = in_stack_00000268;
  *(ulong *)(lVar8 + 0x20) = in_stack_00000260;
  thunk_FUN_037aeb94(lVar8 + 0x28,0);
LAB_071e85c0:
  unaff_w22 = unaff_w22 + 1;
  if (*(int *)(unaff_x28 + 0x18) <= unaff_w22) {
LAB_071e85d0:
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba30e0(unaff_x26,unaff_x21,
                 *(undefined8 *)System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba5904(unaff_x27,unaff_x29,*(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo
                );
    in_stack_000002a0 = unaff_d8;
    uVar15 = in_stack_00000290;
    do {
      uVar10 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
      in_stack_00000290 = CONCAT71((int7)(uVar15 >> 8),in_stack_00000048._4_1_);
      *(ulong *)((long)in_stack_00000040 + 7) = CONCAT71(in_stack_000002f0,in_stack_000002ef);
      *in_stack_00000040 = CONCAT17(in_stack_000002ef,in_stack_000002e8);
      unaff_x23[4] = in_stack_00000210;
      unaff_x23[1] = in_stack_000001f8;
      *unaff_x23 = in_stack_000001f0;
      unaff_x23[3] = in_stack_00000208;
      unaff_x23[2] = in_stack_00000200;
      FUN_053b3678(in_stack_00000010,&stack0x00000290,uVar10);
      puVar4 = System_Func<ulong,_short,_object>_TypeInfo;
      uVar7 = FUN_05d64e98(&stack0x00000220,
                           *(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
      if ((uVar7 & 1) == 0) {
        FUN_05d64e94(&stack0x00000220,
                     *(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
        if (in_stack_00000010 == 0) goto LAB_071e889c;
        lVar8 = RootMotion_FinalIK_Finger___ctor
                          (*(undefined8 *)System_Func<TextShadow,_TextShadow,_bool>_TypeInfo,
                           *(undefined4 *)(in_stack_00000010 + 0x18));
        plVar9 = (long *)(in_stack_00000018 + 0x38);
        *plVar9 = lVar8;
        thunk_FUN_037aeb94(plVar9,lVar8);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_071e889c;
        lVar12 = 0;
        uVar15 = 0;
        goto LAB_071e8794;
      }
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(in_stack_00000010 + 0x18) == 0) {
        in_stack_000001d8 = 0;
        in_stack_000001d0 = 0;
        in_stack_000001e8 = 0;
        in_stack_000001e0 = 0;
        in_stack_000001b8 = 0;
        in_stack_000001b0 = 0;
        in_stack_000001c8 = 0;
        in_stack_000001c0 = 0.0;
        in_stack_00000198 = 0;
        in_stack_00000190 = 0;
        in_stack_000001a8 = 0;
        in_stack_000001a0 = 0;
        in_stack_00000168 = 0;
        in_stack_00000160 = 0;
        in_stack_00000178 = 0;
        in_stack_00000170 = 0;
        in_stack_00000188 = 0;
        in_stack_00000180 = 0.0;
        if (in_stack_00000230 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
LAB_071e7fa8:
        in_stack_000001e8 = 0;
        in_stack_000001e0 = 0;
        in_stack_000001d8 = 0;
        in_stack_000001d0 = 0;
        in_stack_000001c8 = 0;
        in_stack_000001c0 = 0.0;
        in_stack_000001b8 = 0;
        in_stack_000001b0 = 0;
        in_stack_000001a8 = 0;
        in_stack_000001a0 = 0;
        in_stack_00000198 = 0;
        in_stack_00000190 = 0;
        in_stack_00000188 = 0;
        in_stack_00000180 = 0.0;
        in_stack_00000170 = 0;
        in_stack_00000168 = *(undefined8 *)(in_stack_00000230 + 0x10);
        in_stack_00000160 = (ulong)*(uint *)(in_stack_00000230 + 0x24) << 0x20;
        in_stack_00000160 =
             CONCAT53(in_stack_00000160._3_5_,*(undefined3 *)(in_stack_00000230 + 0x20));
        uVar11 = *(uint *)(in_stack_00000230 + 0x34);
        fVar17 = *(float *)(in_stack_00000230 + 0x38);
        in_stack_00000178 = *(undefined8 *)(in_stack_00000230 + 0x34);
        uVar6 = 0;
        if (*(long *)(in_stack_00000230 + 0x40) != 0) {
          uVar6 = FUN_071e8a8c();
          uVar11 = *(uint *)(in_stack_00000230 + 0x34);
          fVar17 = *(float *)(in_stack_00000230 + 0x38);
        }
        in_stack_00000180 = (double)uVar11 * (double)fVar17;
        in_stack_00000188 = CONCAT44(in_stack_00000188._4_4_,uVar6);
        in_stack_000001a8 = in_stack_00000168;
        in_stack_000001a0 = in_stack_00000160;
        in_stack_000001b8 = in_stack_00000178;
        in_stack_000001b0 = in_stack_00000170;
        in_stack_000001c8 = in_stack_00000188;
        in_stack_000001d8 = in_stack_00000198;
        in_stack_000001d0 = in_stack_00000190;
        in_stack_000001c0 = in_stack_00000180;
        thunk_FUN_037aeb94(in_stack_00000030,0);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
        FUN_04ba4dd4(uVar10,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
        in_stack_000001e0 = uVar10;
        thunk_FUN_037aeb94(in_stack_00000028,uVar10);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ushort,_object>_TypeInfo);
        Unity_Collections_NativeArray<NativePlane>__Copy
                  (uVar10,*(undefined8 *)System_Func<uint,_byte,_object>_TypeInfo);
        in_stack_000001e8 = uVar10;
        thunk_FUN_037aeb94(in_stack_00000020,uVar10);
        uVar10 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
        memcpy(&stack0x00000290,&stack0x000001a0,0x50);
        FUN_053b3678(in_stack_00000010,&stack0x00000290,uVar10);
      }
      else {
        if (in_stack_00000230 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        dVar18 = *(double *)(in_stack_00000230 + 0x10);
        FUN_053b3480(&stack0x00000290,in_stack_00000010,
                     *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo);
        if ((((in_stack_000002a0 < dVar18) ||
             (cVar2 = *(char *)(in_stack_00000230 + 0x20),
             FUN_053b3480(&stack0x00000290,in_stack_00000010,
                          *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
             (cVar2 != '\0') == ((in_stack_00000048 & 0x100000000) == 0))) ||
            ((*(char *)(in_stack_00000230 + 0x20) == '\0' &&
             ((*(char *)(in_stack_00000230 + 0x21) != '\0' ||
              (FUN_053b3480(&stack0x00000290,in_stack_00000010,
                            *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
              (uVar15 & 0x10000) != 0)))))) ||
           ((iVar16 = *(int *)(in_stack_00000230 + 0x24),
            FUN_053b3480(&stack0x00000290,in_stack_00000010,
                         *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
            iVar16 != (int)(uVar15 >> 0x20) || (*(int *)(in_stack_00000230 + 0x34) != 0))))
        goto LAB_071e7fa8;
      }
      FUN_053b34d0(&stack0x00000290,in_stack_00000010,*(undefined8 *)puVar4);
      in_stack_00000210 = unaff_x23[4];
      in_stack_000001f8 = unaff_x23[1];
      in_stack_000001f0 = *unaff_x23;
      in_stack_00000208 = unaff_x23[3];
      in_stack_00000200 = unaff_x23[2];
      in_stack_000002e8 = (undefined7)*in_stack_00000040;
      in_stack_000002ef = (undefined1)*(undefined8 *)((long)in_stack_00000040 + 7);
      in_stack_000002f0 = (undefined7)((ulong)*(undefined8 *)((long)in_stack_00000040 + 7) >> 8);
      unaff_d8 = *(double *)(in_stack_00000230 + 0x18);
      if (*(int *)(*(long *)System_Func<string,_uint,_uint>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_071e77e8(in_stack_00000230,in_stack_00000038);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
      FUN_04ba4efc(lVar8,uVar10,*(undefined8 *)System_Func<ushort,_uint,_object>_TypeInfo);
      if ((in_stack_00000048 & 0x100000000) == 0) goto code_r0x071e815c;
      lVar12 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar12);
        lVar12 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar12);
          lVar12 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
        }
        uVar10 = **(undefined8 **)(lVar12 + 0xb8);
        lVar13 = thunk_FUN_037788cc(*(undefined8 *)
                                     System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo);
        FUN_0586fb18(lVar13,uVar10,*(undefined8 *)System_Func<ulong,_uint,_object>_TypeInfo,0);
        plVar9 = (long *)(*(long *)(*(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo +
                                   0xb8) + 0x10);
        *plVar9 = lVar13;
        thunk_FUN_037aeb94(plVar9,lVar13);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_04ba7344(lVar8,lVar13,*(undefined8 *)System_Func<ushort,_sbyte,_object>_TypeInfo);
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_04ba5904(unaff_x27,lVar8,*(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
      in_stack_000002a0 = unaff_d8;
      uVar15 = in_stack_00000290;
    } while( true );
  }
  goto LAB_071e8398;
LAB_071e8794:
  if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar15) {
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000002f8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_053b34d0(&stack0x00000090,in_stack_00000010,*(undefined8 *)puVar4);
  lVar5 = in_stack_000000d8;
  lVar13 = in_stack_000000d0;
  in_stack_00000128 = in_stack_000000b8;
  in_stack_00000120 = in_stack_000000b0;
  in_stack_00000138 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000c0;
  in_stack_00000108 = in_stack_00000098;
  in_stack_00000100 = in_stack_00000090;
  in_stack_00000118 = in_stack_000000a8;
  in_stack_00000110 = in_stack_000000a0;
  lVar8 = *plVar9;
  if (lVar8 == 0) {
LAB_071e889c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar15) {
LAB_071e88f8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  lVar8 = lVar8 + lVar12;
  *(undefined8 *)(lVar8 + 0x48) = in_stack_000000b8;
  *(ulong *)(lVar8 + 0x40) = in_stack_000000b0;
  *(undefined8 *)(lVar8 + 0x58) = in_stack_000000c8;
  *(undefined8 *)(lVar8 + 0x50) = in_stack_000000c0;
  *(undefined8 *)(lVar8 + 0x28) = in_stack_00000098;
  *(ulong *)(lVar8 + 0x20) = in_stack_00000090;
  *(undefined8 *)(lVar8 + 0x38) = in_stack_000000a8;
  *(double *)(lVar8 + 0x30) = in_stack_000000a0;
  thunk_FUN_037aeb94(lVar8 + 0x50,0);
  lVar8 = *plVar9;
  if ((lVar8 == 0) || (lVar5 == 0)) goto LAB_071e889c;
  uVar10 = FUN_04ba48b4(lVar5,*(undefined8 *)System_Func<ushort,_ushort,_object>_TypeInfo);
  if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_071e88f8;
  *(undefined8 *)(lVar8 + lVar12 + 0x58) = uVar10;
  thunk_FUN_037aeb94();
  lVar8 = *plVar9;
  if ((lVar8 == 0) || (lVar13 == 0)) goto LAB_071e889c;
  uVar10 = FUN_04ba73d8(lVar13,*(undefined8 *)System_Func<ushort,_float,_object>_TypeInfo);
  if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_071e88f8;
  *(undefined8 *)(lVar8 + lVar12 + 0x50) = uVar10;
  uVar15 = uVar15 + 1;
  lVar12 = lVar12 + 0x40;
  thunk_FUN_037aeb94();
  lVar8 = *plVar9;
  if (lVar8 == 0) goto LAB_071e889c;
  goto LAB_071e8794;
code_r0x071e815c:
  unaff_x28 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_uint,_object>_TypeInfo);
  FUN_048d6070(unaff_x28,*(undefined8 *)System_Func<uint,_Decimal,_object>_TypeInfo);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (0 < *(int *)(lVar8 + 0x18)) {
    iVar16 = 0;
    uVar15 = in_stack_00000290;
    uVar10 = in_stack_00000298;
    dVar18 = in_stack_000002a0;
    uVar19 = in_stack_000002a8;
    uVar7 = in_stack_000002b0;
    do {
      Unity_Collections_NativeArray<NetworkEndpoint>__Dispose
                (&stack0x00000290,lVar8,iVar16,
                 *(undefined8 *)System_Func<uint,_float,_object>_TypeInfo);
      in_stack_000000b0 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0.0;
      in_stack_000000e0 = uVar15;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = dVar18;
      in_stack_000000f8 = uVar19;
      FUN_056ef254(&stack0x00000090,&stack0x00000290,iVar16,
                   *(undefined8 *)
                    System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                  );
      in_stack_000002b0 = in_stack_000000b0;
      in_stack_000002a8 = in_stack_000000a8;
      in_stack_000002a0 = in_stack_000000a0;
      in_stack_00000298 = in_stack_00000098;
      in_stack_00000290 = in_stack_00000090;
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar12 = *(long *)(unaff_x28 + 0x10);
      lVar13 = *(long *)System_Func<ushort,_Decimal,_object>_TypeInfo;
      *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar11 = *(uint *)(unaff_x28 + 0x18);
      if (uVar11 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x28 + 0x18) = uVar11 + 1;
        lVar12 = lVar12 + (long)(int)uVar11 * 0x28;
        *(ulong *)(lVar12 + 0x40) = in_stack_000000b0;
        *(undefined8 *)(lVar12 + 0x28) = in_stack_00000098;
        *(ulong *)(lVar12 + 0x20) = in_stack_00000090;
        *(undefined8 *)(lVar12 + 0x38) = in_stack_000000a8;
        *(double *)(lVar12 + 0x30) = in_stack_000000a0;
        thunk_FUN_037aeb94(lVar12 + 0x28,0);
        in_stack_00000290 = uVar15;
        in_stack_00000298 = uVar10;
        in_stack_000002a0 = dVar18;
        in_stack_000002a8 = uVar19;
        in_stack_000002b0 = uVar7;
      }
      else {
        FUN_048d6994(unaff_x28,&stack0x00000290,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      iVar16 = iVar16 + 1;
      uVar15 = in_stack_00000290;
      uVar10 = in_stack_00000298;
      dVar18 = in_stack_000002a0;
      uVar19 = in_stack_000002a8;
      uVar7 = in_stack_000002b0;
    } while (iVar16 < *(int *)(lVar8 + 0x18));
  }
  lVar8 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar8);
    lVar8 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
  }
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar8);
      lVar8 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
    }
    uVar10 = **(undefined8 **)(lVar8 + 0xb8);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    FUN_05815814(lVar12,uVar10,*(undefined8 *)System_Func<ulong,_ulong,_object>_TypeInfo,0);
    plVar9 = (long *)(*(long *)(*(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo + 0xb8)
                     + 8);
    *plVar9 = lVar12;
    thunk_FUN_037aeb94(plVar9,lVar12);
  }
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_048d87fc(unaff_x28,lVar12,*(undefined8 *)System_Func<ushort,_int,_object>_TypeInfo);
  unaff_x21 = RootMotion_FinalIK_Finger___ctor
                        (*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo,
                         *(undefined4 *)(in_stack_00000230 + 0x30));
  unaff_x29 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
  FUN_04ba4dd4(unaff_x29,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
  if (0 < *(int *)(unaff_x28 + 0x18)) goto code_r0x071e8394;
  goto LAB_071e85d0;
code_r0x071e8394:
  unaff_w22 = 0;
  unaff_x25 = in_stack_00000230;
LAB_071e8398:
  FUN_048d65d4(&stack0x00000290,unaff_x28,unaff_w22,*unaff_x20);
  in_stack_00000140 = in_stack_00000290;
  in_stack_00000148 = in_stack_00000298;
  in_stack_00000150 = in_stack_000002a0;
  FUN_048d65d4(&stack0x00000290,unaff_x28,unaff_w22,*unaff_x20);
  dVar18 = in_stack_00000150;
  uVar10 = in_stack_00000148;
  uVar15 = in_stack_00000140;
  iVar16 = (int)in_stack_000002b0;
  if ((long)(ulong)(uint)(*(int *)(unaff_x25 + 0x30) << 1) <= (long)iVar16) {
    in_stack_00000098 = in_stack_00000148;
    in_stack_00000090 = in_stack_00000140;
    in_stack_000000a0 = in_stack_00000150;
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar8 = *(long *)(unaff_x29 + 0x10);
    lVar12 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar11 = *(uint *)(unaff_x29 + 0x18);
    if (uVar11 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x29 + 0x18) = uVar11 + 1;
      lVar8 = lVar8 + (long)(int)uVar11 * 0x20;
      *(int *)(lVar8 + 0x38) = (int)in_stack_000002a8;
      *(int *)(lVar8 + 0x3c) = (int)((ulong)in_stack_000002a8 >> 0x20);
      *(double *)(lVar8 + 0x30) = in_stack_00000150;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000148;
      *(ulong *)(lVar8 + 0x20) = in_stack_00000140;
      thunk_FUN_037aeb94(lVar8 + 0x28,0);
    }
    else {
      FUN_04ba56a8(unaff_x29,&stack0x00000290,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      in_stack_00000290 = uVar15;
      in_stack_00000298 = uVar10;
      in_stack_000002a0 = dVar18;
    }
    goto LAB_071e85c0;
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (iVar16 < 0) {
    iVar16 = iVar16 + 1;
  }
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = *(int *)(unaff_x26 + 0x18);
  uVar11 = iVar16 >> 1;
  if ((in_stack_000002b0 & 1) == 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    piVar14 = (int *)(unaff_x21 + (long)(int)uVar11 * 8 + 0x20);
    in_w10 = 1;
  }
  else {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    piVar14 = (int *)(unaff_x21 + (long)(int)uVar11 * 8 + 0x24);
    in_w10 = 2;
  }
  *piVar14 = unaff_w22 + *(int *)(unaff_x27 + 0x18);
  in_stack_00000098 = in_stack_00000148;
  in_stack_00000090 = in_stack_00000140;
  in_stack_000000a0 = in_stack_00000150;
  if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  in_x11 = *(long *)(unaff_x29 + 0x10);
  lVar8 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
  *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
  if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = *(uint *)(unaff_x29 + 0x18);
  in_x13 = (long)(int)uVar3;
  in_w8 = iVar1 + uVar11;
  if (*(uint *)(in_x11 + 0x18) <= uVar3) {
    in_stack_000002a8 = CONCAT44(in_w10,in_w8);
    FUN_04ba56a8(unaff_x29,&stack0x00000290,
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    in_stack_00000290 = uVar15;
    in_stack_00000298 = uVar10;
    in_stack_000002a0 = dVar18;
    goto LAB_071e85c0;
  }
  *(uint *)(unaff_x29 + 0x18) = uVar3 + 1;
  in_x9 = in_stack_00000150;
  in_stack_00000260 = in_stack_00000140;
  in_stack_00000268 = in_stack_00000148;
  goto code_r0x071e8538;
}


