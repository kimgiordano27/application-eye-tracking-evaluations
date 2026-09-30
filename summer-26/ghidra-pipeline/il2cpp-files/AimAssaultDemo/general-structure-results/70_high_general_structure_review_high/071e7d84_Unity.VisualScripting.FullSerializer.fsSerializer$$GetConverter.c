/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$GetConverter
ENTRY_POINT: 071e7d84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__GetConverter(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  int in_w10;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long *unaff_x20;
  long unaff_x21;
  int iVar19;
  undefined8 uVar20;
  int unaff_w24;
  int unaff_w25;
  undefined8 *puVar21;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
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
  undefined1 uVar25;
  ulong in_stack_00000290;
  ulong uVar26;
  undefined8 in_stack_00000298;
  double in_stack_000002a0;
  double dVar27;
  double dVar28;
  undefined8 in_stack_000002a8;
  undefined8 uVar29;
  int iVar30;
  ulong in_stack_000002b0;
  ulong uVar31;
  long in_stack_000002d0;
  long in_stack_000002d8;
  long in_stack_000002f8;
  
  while (*(int *)(unaff_x21 + 0x1c) = in_w10 + 1, param_1 != 0) {
    uVar12 = *(uint *)(unaff_x21 + 0x18);
    if (uVar12 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar12 + 1;
      *(long *)(param_1 + (long)(int)uVar12 * 8 + 0x20) = param_2;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    do {
      do {
        unaff_w25 = unaff_w25 + 1;
        if (unaff_w24 == unaff_w25) {
          uVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                      System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
                                    );
          FUN_062855bc(uVar6,0);
          puVar21 = (undefined8 *)System_Func<ulong,_short,_object>_TypeInfo;
          puVar4 = System_Func<uint,_sbyte,_object>_TypeInfo;
          if (unaff_x21 == 0) goto LAB_071e889c;
          FUN_049d0818();
          FUN_049cf910(&stack0x00000290);
          puVar15 = (undefined8 *)((ulong)&stack0x00000290 | 1);
          dVar27 = in_stack_000002a0;
          goto LAB_071e7e80;
        }
        auVar24 = FUN_04131270();
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar6 = FUN_075c5fa4(&stack0x00000250,0);
        uVar14 = *unaff_x28;
        if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(unaff_x29 + 0xe0));
        }
        uVar14 = FUN_062519f8(uVar14,0);
        uVar7 = FUN_0625b9c4(uVar6,uVar14,0);
      } while ((uVar7 & 1) != 0);
      if (*(int *)(*(long *)System_Func<short,_double,_object>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_052a1d00(auVar24._0_8_,auVar24._8_8_,
                   *(undefined8 *)System_Func<ulong,_Decimal,_object>_TypeInfo);
      param_2 = FUN_052a1bfc(&stack0x00000240,
                             *(undefined8 *)System_Func<int,_float,_object>_TypeInfo);
    } while (param_2 == 0);
    if (unaff_x21 == 0) break;
    in_w10 = *(int *)(unaff_x21 + 0x1c);
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
  goto LAB_071e889c;
LAB_071e7e80:
  uVar7 = FUN_05d64e98(&stack0x00000220,
                       *(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
  if ((uVar7 & 1) == 0) goto LAB_071e8748;
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar25 = (undefined1)in_stack_00000290;
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
    if (in_stack_000002a0 == 0.0) {
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
    in_stack_00000168 = *(undefined8 *)((long)in_stack_000002a0 + 0x10);
    in_stack_00000160 = (ulong)*(uint *)((long)in_stack_000002a0 + 0x24) << 0x20;
    in_stack_00000160 =
         CONCAT53(in_stack_00000160._3_5_,*(undefined3 *)((long)in_stack_000002a0 + 0x20));
    uVar12 = *(uint *)((long)in_stack_000002a0 + 0x34);
    fVar22 = *(float *)((long)in_stack_000002a0 + 0x38);
    in_stack_00000178 = *(undefined8 *)((long)in_stack_000002a0 + 0x34);
    uVar5 = 0;
    if (*(long *)((long)in_stack_000002a0 + 0x40) != 0) {
      uVar5 = FUN_071e8a8c();
      uVar12 = *(uint *)((long)in_stack_000002a0 + 0x34);
      fVar22 = *(float *)((long)in_stack_000002a0 + 0x38);
    }
    in_stack_00000180 = (double)uVar12 * (double)fVar22;
    in_stack_00000188 = CONCAT44(in_stack_00000188._4_4_,uVar5);
    in_stack_000001a8 = in_stack_00000168;
    in_stack_000001a0 = in_stack_00000160;
    in_stack_000001b8 = in_stack_00000178;
    in_stack_000001b0 = in_stack_00000170;
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001c0 = in_stack_00000180;
    thunk_FUN_037aeb94(&stack0x000001d0,0);
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
    FUN_04ba4dd4(uVar6,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
    in_stack_000001e0 = uVar6;
    thunk_FUN_037aeb94(&stack0x000001e0,uVar6);
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ushort,_object>_TypeInfo);
    Unity_Collections_NativeArray<NativePlane>__Copy
              (uVar6,*(undefined8 *)System_Func<uint,_byte,_object>_TypeInfo);
    in_stack_000001e8 = uVar6;
    thunk_FUN_037aeb94(&stack0x000001e8,uVar6);
    uVar6 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
    memcpy(&stack0x00000290,&stack0x000001a0,0x50);
    FUN_053b3678(in_stack_00000010,&stack0x00000290,uVar6);
  }
  else {
    if (in_stack_000002a0 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    dVar23 = *(double *)((long)in_stack_000002a0 + 0x10);
    FUN_053b3480(&stack0x00000290,in_stack_00000010,
                 *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo);
    if ((((dVar27 < dVar23) ||
         (cVar2 = *(char *)((long)in_stack_000002a0 + 0x20),
         FUN_053b3480(&stack0x00000290,in_stack_00000010,
                      *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
         (cVar2 != '\0') == ((in_stack_00000290 & 1) == 0))) ||
        ((*(char *)((long)in_stack_000002a0 + 0x20) == '\0' &&
         ((*(char *)((long)in_stack_000002a0 + 0x21) != '\0' ||
          (FUN_053b3480(&stack0x00000290,in_stack_00000010,
                        *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
          (in_stack_00000290 & 0x10000) != 0)))))) ||
       ((iVar19 = *(int *)((long)in_stack_000002a0 + 0x24),
        FUN_053b3480(&stack0x00000290,in_stack_00000010,
                     *(undefined8 *)System_Func<ulong,_double,_object>_TypeInfo),
        iVar19 != (int)(in_stack_00000290 >> 0x20) ||
        (*(int *)((long)in_stack_000002a0 + 0x34) != 0)))) goto LAB_071e7fa8;
  }
  FUN_053b34d0(&stack0x00000290,in_stack_00000010,*puVar21);
  uVar6 = *(undefined8 *)((long)puVar15 + 7);
  uVar14 = *puVar15;
  dVar23 = *(double *)((long)in_stack_000002a0 + 0x18);
  if (*(int *)(*(long *)System_Func<string,_uint,_uint>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar8 = FUN_071e77e8(in_stack_000002a0,in_stack_00000038);
  lVar9 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
  FUN_04ba4efc(lVar9,uVar8,*(undefined8 *)System_Func<ushort,_uint,_object>_TypeInfo);
  if ((in_stack_00000290 & 1) == 0) {
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_uint,_object>_TypeInfo);
    FUN_048d6070(lVar10,*(undefined8 *)System_Func<uint,_Decimal,_object>_TypeInfo);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar8 = in_stack_000002a8;
    uVar7 = in_stack_000002b0;
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar19 = 0;
      uVar26 = in_stack_00000290;
      uVar20 = in_stack_00000298;
      dVar28 = dVar27;
      uVar29 = in_stack_000002a8;
      uVar31 = in_stack_000002b0;
      do {
        Unity_Collections_NativeArray<NetworkEndpoint>__Dispose
                  (&stack0x00000290,lVar9,iVar19,
                   *(undefined8 *)System_Func<uint,_float,_object>_TypeInfo);
        in_stack_000000b0 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0.0;
        in_stack_000000e0 = uVar26;
        in_stack_000000e8 = uVar20;
        in_stack_000000f0 = dVar28;
        in_stack_000000f8 = uVar29;
        FUN_056ef254(&stack0x00000090,&stack0x00000290,iVar19,
                     *(undefined8 *)
                      System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                    );
        uVar7 = in_stack_000000b0;
        uVar8 = in_stack_000000a8;
        dVar27 = in_stack_000000a0;
        in_stack_00000298 = in_stack_00000098;
        in_stack_00000290 = in_stack_00000090;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)System_Func<ushort,_Decimal,_object>_TypeInfo;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar12 = *(uint *)(lVar10 + 0x18);
        if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar12 + 1;
          lVar13 = lVar13 + (long)(int)uVar12 * 0x28;
          *(ulong *)(lVar13 + 0x40) = in_stack_000000b0;
          *(undefined8 *)(lVar13 + 0x28) = in_stack_00000098;
          *(ulong *)(lVar13 + 0x20) = in_stack_00000090;
          *(undefined8 *)(lVar13 + 0x38) = in_stack_000000a8;
          *(double *)(lVar13 + 0x30) = in_stack_000000a0;
          thunk_FUN_037aeb94(lVar13 + 0x28,0);
          in_stack_00000290 = uVar26;
          in_stack_00000298 = uVar20;
          dVar27 = dVar28;
          uVar8 = uVar29;
          uVar7 = uVar31;
        }
        else {
          FUN_048d6994(lVar10,&stack0x00000290,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        iVar19 = iVar19 + 1;
        uVar26 = in_stack_00000290;
        uVar20 = in_stack_00000298;
        dVar28 = dVar27;
        uVar29 = uVar8;
        uVar31 = uVar7;
      } while (iVar19 < *(int *)(lVar9 + 0x18));
    }
    lVar9 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar9);
      lVar9 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
    }
    lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar9);
        lVar9 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
      }
      uVar20 = **(undefined8 **)(lVar9 + 0xb8);
      lVar13 = thunk_FUN_037788cc(*(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
      FUN_05815814(lVar13,uVar20,*(undefined8 *)System_Func<ulong,_ulong,_object>_TypeInfo,0);
      plVar11 = (long *)(*(long *)(*(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo +
                                  0xb8) + 8);
      *plVar11 = lVar13;
      thunk_FUN_037aeb94(plVar11,lVar13);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_048d87fc(lVar10,lVar13,*(undefined8 *)System_Func<ushort,_int,_object>_TypeInfo);
    lVar9 = RootMotion_FinalIK_Finger___ctor
                      (*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo,
                       *(undefined4 *)((long)in_stack_000002a0 + 0x30));
    lVar13 = thunk_FUN_037788cc(*(undefined8 *)System_Func<uint,_ulong,_object>_TypeInfo);
    FUN_04ba4dd4(lVar13,*(undefined8 *)System_Func<ushort,_ulong,_object>_TypeInfo);
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar19 = 0;
      uVar26 = in_stack_00000290;
      uVar20 = in_stack_00000298;
      do {
        FUN_048d65d4(&stack0x00000290,lVar10,iVar19,*(undefined8 *)puVar4);
        in_stack_00000140 = uVar26;
        in_stack_00000148 = uVar20;
        in_stack_00000150 = dVar27;
        FUN_048d65d4(&stack0x00000290,lVar10,iVar19,*(undefined8 *)puVar4);
        dVar28 = in_stack_00000150;
        in_stack_00000298 = in_stack_00000148;
        in_stack_00000290 = in_stack_00000140;
        iVar30 = (int)uVar7;
        if ((long)iVar30 < (long)(ulong)(uint)(*(int *)((long)in_stack_000002a0 + 0x30) << 1)) {
          if (in_stack_000002d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (iVar30 < 0) {
            iVar30 = iVar30 + 1;
          }
          if (in_stack_000002d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          iVar1 = *(int *)(in_stack_000002d8 + 0x18);
          uVar12 = iVar30 >> 1;
          if ((uVar7 & 1) == 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            piVar17 = (int *)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
            uVar5 = 1;
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            piVar17 = (int *)(lVar9 + (long)(int)uVar12 * 8 + 0x24);
            uVar5 = 2;
          }
          *piVar17 = iVar19 + *(int *)(in_stack_000002d0 + 0x18);
          in_stack_00000098 = in_stack_00000148;
          in_stack_00000090 = in_stack_00000140;
          in_stack_000000a0 = in_stack_00000150;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar16 = *(long *)(lVar13 + 0x10);
          lVar18 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = *(uint *)(lVar13 + 0x18);
          iVar1 = iVar1 + uVar12;
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            lVar16 = lVar16 + (long)(int)uVar3 * 0x20;
            *(int *)(lVar16 + 0x38) = iVar1;
            *(undefined4 *)(lVar16 + 0x3c) = uVar5;
            *(double *)(lVar16 + 0x30) = in_stack_00000150;
            *(undefined8 *)(lVar16 + 0x28) = in_stack_00000148;
            *(ulong *)(lVar16 + 0x20) = in_stack_00000140;
            thunk_FUN_037aeb94(lVar16 + 0x28,0);
            in_stack_00000290 = uVar26;
            in_stack_00000298 = uVar20;
            dVar28 = dVar27;
          }
          else {
            uVar8 = CONCAT44(uVar5,iVar1);
            FUN_04ba56a8(lVar13,&stack0x00000290,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          in_stack_00000098 = in_stack_00000148;
          in_stack_00000090 = in_stack_00000140;
          in_stack_000000a0 = in_stack_00000150;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar16 = *(long *)(lVar13 + 0x10);
          lVar18 = *(long *)System_Func<ushort,_byte,_object>_TypeInfo;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar12 = *(uint *)(lVar13 + 0x18);
          if (uVar12 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar12 + 1;
            lVar16 = lVar16 + (long)(int)uVar12 * 0x20;
            *(int *)(lVar16 + 0x38) = (int)uVar8;
            *(int *)(lVar16 + 0x3c) = (int)((ulong)uVar8 >> 0x20);
            *(double *)(lVar16 + 0x30) = in_stack_00000150;
            *(undefined8 *)(lVar16 + 0x28) = in_stack_00000148;
            *(ulong *)(lVar16 + 0x20) = in_stack_00000140;
            thunk_FUN_037aeb94(lVar16 + 0x28,0);
            in_stack_00000290 = uVar26;
            in_stack_00000298 = uVar20;
            dVar28 = dVar27;
          }
          else {
            FUN_04ba56a8(lVar13,&stack0x00000290,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar19 = iVar19 + 1;
        uVar26 = in_stack_00000290;
        uVar20 = in_stack_00000298;
        dVar27 = dVar28;
      } while (iVar19 < *(int *)(lVar10 + 0x18));
    }
    if (in_stack_000002d8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba30e0(in_stack_000002d8,lVar9,
                 *(undefined8 *)System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    if (in_stack_000002d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba5904(in_stack_000002d0,lVar13,
                 *(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
  }
  else {
    lVar10 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar10);
      lVar10 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
    }
    lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar13 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar10);
        lVar10 = *(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar13 = thunk_FUN_037788cc(*(undefined8 *)
                                   System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo);
      FUN_0586fb18(lVar13,uVar8,*(undefined8 *)System_Func<ulong,_uint,_object>_TypeInfo,0);
      plVar11 = (long *)(*(long *)(*(long *)System_Func<VFXEventAttribute,_int,_bool>_TypeInfo +
                                  0xb8) + 0x10);
      *plVar11 = lVar13;
      thunk_FUN_037aeb94(plVar11,lVar13);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba7344(lVar9,lVar13,*(undefined8 *)System_Func<ushort,_sbyte,_object>_TypeInfo);
    if (in_stack_000002d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04ba5904(in_stack_000002d0,lVar9,
                 *(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
  }
  uVar8 = *(undefined8 *)System_Func<ulong,_int,_object>_TypeInfo;
  in_stack_00000290 = CONCAT71((int7)(in_stack_00000290 >> 8),uVar25);
  *(undefined8 *)((long)puVar15 + 7) = uVar6;
  *puVar15 = CONCAT17((char)uVar6,(int7)uVar14);
  FUN_053b3678(in_stack_00000010,&stack0x00000290,uVar8);
  puVar21 = (undefined8 *)System_Func<ulong,_short,_object>_TypeInfo;
  dVar27 = dVar23;
  goto LAB_071e7e80;
LAB_071e8748:
  FUN_05d64e94(&stack0x00000220,*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
  if (in_stack_00000010 != 0) {
    lVar9 = RootMotion_FinalIK_Finger___ctor
                      (*(undefined8 *)System_Func<TextShadow,_TextShadow,_bool>_TypeInfo,
                       *(undefined4 *)(in_stack_00000010 + 0x18));
    plVar11 = (long *)(in_stack_00000018 + 0x38);
    *plVar11 = lVar9;
    thunk_FUN_037aeb94(plVar11,lVar9);
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = 0;
      uVar7 = 0;
      while( true ) {
        if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar7) {
          if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000002f8) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        FUN_053b34d0(&stack0x00000090,in_stack_00000010,*puVar21);
        lVar16 = in_stack_000000d8;
        lVar13 = in_stack_000000d0;
        in_stack_00000128 = in_stack_000000b8;
        in_stack_00000120 = in_stack_000000b0;
        in_stack_00000138 = in_stack_000000c8;
        in_stack_00000130 = in_stack_000000c0;
        in_stack_00000108 = in_stack_00000098;
        in_stack_00000100 = in_stack_00000090;
        in_stack_00000118 = in_stack_000000a8;
        in_stack_00000110 = in_stack_000000a0;
        lVar9 = *plVar11;
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_071e88f8:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar9 = lVar9 + lVar10;
        *(undefined8 *)(lVar9 + 0x48) = in_stack_000000b8;
        *(ulong *)(lVar9 + 0x40) = in_stack_000000b0;
        *(undefined8 *)(lVar9 + 0x58) = in_stack_000000c8;
        *(undefined8 *)(lVar9 + 0x50) = in_stack_000000c0;
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000098;
        *(ulong *)(lVar9 + 0x20) = in_stack_00000090;
        *(undefined8 *)(lVar9 + 0x38) = in_stack_000000a8;
        *(double *)(lVar9 + 0x30) = in_stack_000000a0;
        thunk_FUN_037aeb94(lVar9 + 0x50,0);
        lVar9 = *plVar11;
        if ((lVar9 == 0) || (lVar16 == 0)) break;
        uVar6 = FUN_04ba48b4(lVar16,*(undefined8 *)System_Func<ushort,_ushort,_object>_TypeInfo);
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_071e88f8;
        *(undefined8 *)(lVar9 + lVar10 + 0x58) = uVar6;
        thunk_FUN_037aeb94();
        lVar9 = *plVar11;
        if ((lVar9 == 0) || (lVar13 == 0)) break;
        uVar6 = FUN_04ba73d8(lVar13,*(undefined8 *)System_Func<ushort,_float,_object>_TypeInfo);
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_071e88f8;
        *(undefined8 *)(lVar9 + lVar10 + 0x50) = uVar6;
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x40;
        thunk_FUN_037aeb94();
        lVar9 = *plVar11;
        if (lVar9 == 0) break;
      }
    }
  }
LAB_071e889c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


