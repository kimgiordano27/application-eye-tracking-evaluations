/*
FUNCTION_NAME: FullSerializer.Internal.fsReflectionUtility$$GetInterface
ENTRY_POINT: 00e3a770
PROGRAM: Lovesick-libil2cpp.so
SCORE: 134
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsReflectionUtility__GetInterface
               (long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long unaff_x19;
  int iVar16;
  ulong *unaff_x20;
  long *unaff_x21;
  int iVar17;
  uint uVar18;
  uint unaff_w23;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  float unaff_s8;
  float unaff_s9;
  float fVar30;
  float fVar31;
  ulong *in_stack_00000010;
  long *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined4 in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  undefined4 in_stack_000000d0;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  undefined4 in_stack_00000110;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  undefined4 in_stack_00000150;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  undefined4 in_stack_00000190;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined4 in_stack_000001d0;
  float fStack00000000000001e0;
  ulong in_stack_000001e8;
  long in_stack_00000218;
  
  while (FUN_0132138c(param_1,param_2,param_3,param_4), in_stack_00000160 != 0) {
    FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
    uVar20 = unaff_w23;
LAB_00e3a5f8:
    if (*(long *)(unaff_x19 + 0x500) == 0) break;
    fVar30 = *(float *)(*(long *)(unaff_x19 + 0x500) + 0x74);
    do {
      uVar20 = uVar20 + 1;
      if (*(int *)(unaff_x19 + 0x4f8) <= (int)uVar20) {
        if (*(char *)(unaff_x19 + 0x370) != '\0') {
          uVar9 = FUN_00e47070();
          *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
        }
        FUN_00e4c428();
        puVar3 = StringLiteral_4747;
        puVar2 = OVREyeGaze_TypeInfo;
        if (*(int *)(unaff_x19 + 0x4f8) < 1) {
          uVar25 = 0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
             _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
          uVar25 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
        }
        lVar10 = *(long *)(unaff_x19 + 0x58);
        *(undefined4 *)(unaff_x19 + 0x440) = uVar25;
        if (lVar10 == 0) goto LAB_00e3b024;
        if (*(int *)(lVar10 + 0x18) < 1) {
          fVar30 = *(float *)(unaff_x19 + 0x104);
        }
        else {
          FUN_0132138c(lVar10,0,&stack0x000001e0,*(undefined8 *)puVar2);
          fVar30 = fStack00000000000001e0;
        }
        *(float *)(unaff_x19 + 0x444) = -fVar30;
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
        iVar16 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
        if (iVar16 < 1) goto LAB_00e3aef4;
        iVar7 = 0;
        iVar17 = 0;
        goto LAB_00e3ace0;
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
      FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x000001e0,*unaff_x27);
      *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
      uVar9 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar9,0,0);
      plVar12 = unaff_x21;
      if ((uVar11 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x500) == 0) ||
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar10 == 0))
        goto LAB_00e3b024;
        plVar12 = (long *)(lVar10 + 0x18);
      }
      lVar10 = *plVar12;
      *(long *)(unaff_x19 + 0x450) = lVar10;
      uVar25 = FUN_00e4b938(uVar11,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
      if (lVar10 == 0) goto LAB_00e3b024;
      uVar9 = FUN_0272bf48(lVar10,10,unaff_x20,uVar25,*(undefined4 *)(unaff_x19 + 0x11c),0);
      lVar10 = *(long *)(unaff_x19 + 0x450);
      uVar25 = FUN_00e4b938(uVar9,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
      if (lVar10 == 0) goto LAB_00e3b024;
      uVar9 = FUN_0272bfb4(lVar10,*(undefined8 *)
                                   Method_System_Xml_XsdValidatingReader_MoveToAttribute__,uVar25,
                           *(undefined4 *)(unaff_x19 + 0x11c),0);
      lVar10 = *(long *)(unaff_x19 + 0x450);
      uVar25 = FUN_00e4b938(uVar9,lVar10,*(undefined8 *)(unaff_x19 + 0x500));
      if (lVar10 == 0) goto LAB_00e3b024;
      FUN_0272bf48(lVar10,0xad,in_stack_00000018,uVar25,*(undefined4 *)(unaff_x19 + 0x11c),0);
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
      sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),uVar20,0);
      if (sVar6 == 10) {
LAB_00e39d14:
        lVar10 = *(long *)(unaff_x19 + 0x500);
        if (lVar10 == 0) goto LAB_00e3b024;
        fVar30 = *(float *)(lVar10 + 0x74);
        *(float *)(lVar10 + 0x44) = fVar30;
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        sVar6 = FUN_015fa29c(*unaff_x28,uVar20,0);
        if (sVar6 == 0xd) goto LAB_00e39d14;
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        sVar6 = FUN_015fa29c(*unaff_x28,uVar20,0);
        lVar10 = *(long *)(unaff_x19 + 0x500);
        if (lVar10 == 0) goto LAB_00e3b024;
        *(float *)(lVar10 + 0x44) = fVar30;
        if (sVar6 == 9) {
          fVar31 = *(float *)(unaff_x19 + 0x138) * unaff_s9 * *(float *)(lVar10 + 0x80);
          fVar23 = *(float *)(unaff_x19 + 0x25c) + fVar31;
        }
        else {
          fVar31 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),lVar10,0);
          if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
          fVar23 = *(float *)(unaff_x19 + 0x25c);
          fVar24 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),
                                       *(long *)(unaff_x19 + 0x500),0);
          fVar23 = fVar23 + fVar24;
        }
        fVar30 = fVar30 + fVar31;
        *(float *)(unaff_x19 + 0x25c) = fVar23;
      }
    } while ((fVar30 <= *(float *)(unaff_x19 + 0x4f4)) ||
            (iVar16 = unaff_w23 + 1, unaff_x20 = in_stack_00000010, (int)uVar20 <= iVar16));
    lVar10 = *unaff_x29;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *unaff_x29;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar10 == 0) break;
    uVar9 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(lVar10 + 0x18));
    uVar11 = 0;
    *(undefined8 *)(unaff_x19 + 0x438) = uVar9;
    while( true ) {
      lVar10 = *unaff_x29;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *unaff_x29;
      }
      lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar13 == 0) goto LAB_00e3b024;
      lVar22 = *(long *)(unaff_x19 + 0x438);
      if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar11) break;
      lVar21 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar13 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_00e3b024;
      }
      FUN_0132138c(lVar13,uVar11 & 0xffffffff,&stack0x000001e0,
                   *(undefined8 *)Method_System_Collections_Generic_List<CatchAssistData>_get_Item__
                  );
      if ((lVar21 == 0) ||
         (uVar25 = FUN_01605170(lVar21,_fStack00000000000001e0 & 0xffff,uVar20,0), lVar22 == 0))
      goto LAB_00e3b024;
      if (*(uint *)(lVar22 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar10 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(lVar22 + lVar10 + 0x20) = uVar25;
    }
    if (lVar22 == 0) break;
    iVar7 = (int)*(ulong *)(lVar22 + 0x18);
    if (iVar7 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(uint *)(lVar22 + 0x20);
      if (1 < iVar7) {
        lVar10 = (*(ulong *)(lVar22 + 0x18) & 0xffffffff) - 1;
        puVar15 = (uint *)(lVar22 + 0x24);
        uVar19 = uVar18;
        do {
          uVar18 = *puVar15;
          if ((int)*puVar15 <= (int)uVar19) {
            uVar18 = uVar19;
          }
          lVar10 = lVar10 + -1;
          puVar15 = puVar15 + 1;
          uVar19 = uVar18;
        } while (lVar10 != 0);
      }
    }
    if (*unaff_x28 == 0) break;
    iVar7 = FUN_01605170(*unaff_x28,10,uVar20,0);
    if ((((int)uVar18 <= iVar7) || (uVar18 == 0xffffffff)) || (*(char *)(unaff_x19 + 0x142) != '\0')
       ) {
      uVar18 = uVar20;
      if (0 < (int)uVar20) {
        do {
          lVar10 = *unaff_x29;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *unaff_x29;
          }
          if (*unaff_x28 == 0) goto LAB_00e3b024;
          uVar19 = uVar18 - 1;
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          uVar5 = FUN_015fa29c(*unaff_x28,uVar19,0);
          if (lVar10 == 0) goto LAB_00e3b024;
          _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar5);
          uVar11 = FUN_01322618(lVar10,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
          if ((uVar11 & 1) == 0) {
            lVar10 = *unaff_x28;
            if (lVar10 == 0) goto LAB_00e3b024;
            if ((int)uVar18 < *(int *)(lVar10 + 0x10)) {
              lVar13 = *unaff_x29;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar13);
                lVar10 = *unaff_x28;
                if (lVar10 == 0) goto LAB_00e3b024;
                lVar13 = *unaff_x29;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
              uVar5 = FUN_015fa29c(lVar10,uVar18,0);
              if (lVar13 == 0) goto LAB_00e3b024;
              _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar5);
              uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
              uVar1 = uVar18;
              if ((uVar11 & 1) == 0) goto joined_r0x00e3a144;
            }
          }
          uVar18 = uVar19;
        } while (iVar16 < (int)uVar19);
        uVar18 = 0xffffffff;
        uVar1 = uVar18;
joined_r0x00e3a144:
        do {
          do {
            do {
              do {
                do {
                  do {
                    uVar19 = uVar1;
                    if ((int)uVar19 <= iVar16) goto LAB_00e3a2c0;
                    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
                    uVar1 = uVar19 - 1;
                    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar1,&stack0x000001e0,*unaff_x27);
                    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
                  } while (*(float *)(_fStack00000000000001e0 + 0x44) /
                           *(float *)(unaff_x19 + 0x4f4) <= unaff_s8);
                  lVar10 = *unaff_x28;
                  if (lVar10 == 0) goto LAB_00e3b024;
                } while (*(int *)(lVar10 + 0x10) <= (int)uVar19);
                lVar13 = *unaff_x29;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar13);
                  lVar10 = *unaff_x28;
                  if (lVar10 == 0) goto LAB_00e3b024;
                  lVar13 = *unaff_x29;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                uVar5 = FUN_015fa29c(lVar10,uVar19,0);
                if (lVar13 == 0) goto LAB_00e3b024;
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar5);
                uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
              } while ((uVar11 & 1) == 0);
              lVar10 = *unaff_x29;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *unaff_x29;
              }
              if (*unaff_x28 == 0) goto LAB_00e3b024;
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              uVar5 = FUN_015fa29c(*unaff_x28,uVar1,0);
              if (lVar10 == 0) goto LAB_00e3b024;
              _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar5);
              uVar11 = FUN_01322618(lVar10,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
            } while ((uVar11 & 1) != 0);
            lVar10 = *unaff_x28;
            if (lVar10 == 0) goto LAB_00e3b024;
          } while (*(int *)(lVar10 + 0x10) <= (int)uVar19);
          lVar13 = *unaff_x29;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar13);
            lVar10 = *unaff_x28;
            if (lVar10 == 0) goto LAB_00e3b024;
            lVar13 = *unaff_x29;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
          uVar5 = FUN_015fa29c(lVar10,uVar19,0);
          if (lVar13 == 0) goto LAB_00e3b024;
          _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar5);
          uVar11 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
        } while ((uVar11 & 1) != 0);
        if ((int)(uVar19 | uVar18) < 0) {
LAB_00e3a2c0:
          unaff_w23 = uVar20;
          if (-1 < (int)uVar18) {
            unaff_w23 = uVar18;
          }
        }
        else {
                    /* try { // try from 00e3a964 to 00f3a977 has its CatchHandler @ 00e3ad20 */
          unaff_w23 = uVar18;
          if ((int)uVar19 <= (int)uVar18) {
            unaff_w23 = uVar19;
          }
        }
        lVar10 = *(long *)(unaff_x19 + 0x78);
        if (*(char *)(unaff_x19 + 0x143) == '\0') {
          if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0
             ) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_01731954(0);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
          }
          uVar9 = FUN_016f8fb8(&stack0x00000214,uVar9,0);
          if (lVar10 == 0) break;
          uVar9 = FUN_01600e54(lVar10,unaff_w23,uVar9,0);
          lVar10 = *(long *)(unaff_x19 + 0x48);
          *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
          if (lVar10 == 0) break;
          FUN_0132138c(lVar10,unaff_w23,&stack0x000001e0,*unaff_x27);
          uVar4 = _fStack00000000000001e0;
          uVar29 = in_stack_00000010[3];
          uVar28 = in_stack_00000010[2];
          uVar27 = in_stack_00000010[5];
          uVar26 = in_stack_00000010[4];
          uVar11 = in_stack_00000010[6];
          in_stack_000001e8 = in_stack_00000010[1];
          _fStack00000000000001e0 = *in_stack_00000010;
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                       DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                     );
          if (lVar13 == 0) break;
          in_stack_00000028 = in_stack_000001e8;
          in_stack_00000020 = _fStack00000000000001e0;
          in_stack_00000030 = uVar28;
          in_stack_00000038 = uVar29;
          in_stack_00000040 = uVar26;
          in_stack_00000048 = uVar27;
          in_stack_00000050 = (int)uVar11;
          FUN_00e5f6e0(lVar13,uVar4,&stack0x00000020,0);
          FUN_01323a14(lVar10,unaff_w23,lVar13,
                       *(undefined8 *)
                        Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                      );
          *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w23,&stack0x00000160,*unaff_x27),
             in_stack_00000160 == 0)) break;
          FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
        }
        else {
          if (lVar10 == 0) break;
          uVar9 = FUN_01600e54(lVar10,unaff_w23,
                               *(undefined8 *)
                                UnityEngine_ProBuilder_EdgeLookup_<>c__DisplayClass16_0_TypeInfo,0);
          lVar10 = *(long *)(unaff_x19 + 0x48);
          *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
          if (lVar10 == 0) break;
          FUN_0132138c(lVar10,unaff_w23,&stack0x000001e0,*unaff_x27);
          uVar4 = _fStack00000000000001e0;
          uVar29 = in_stack_00000010[3];
          uVar28 = in_stack_00000010[2];
          uVar27 = in_stack_00000010[5];
          uVar26 = in_stack_00000010[4];
          uVar11 = in_stack_00000010[6];
          in_stack_000001e8 = in_stack_00000010[1];
          _fStack00000000000001e0 = *in_stack_00000010;
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                       DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                     );
          if (lVar13 == 0) break;
          in_stack_000000a8 = in_stack_000001e8;
          in_stack_000000a0 = _fStack00000000000001e0;
          in_stack_000000b0 = uVar28;
          in_stack_000000b8 = uVar29;
          in_stack_000000c0 = uVar26;
          in_stack_000000c8 = uVar27;
          in_stack_000000d0 = (int)uVar11;
          FUN_00e5f6e0(lVar13,uVar4,&stack0x000000a0,0);
          FUN_01323a14(lVar10,unaff_w23,lVar13,
                       *(undefined8 *)
                        Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                      );
          *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w23,&stack0x00000160,*unaff_x27),
             in_stack_00000160 == 0)) break;
          FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
          lVar10 = *(long *)(unaff_x19 + 0x48);
          if (lVar10 == 0) break;
          FUN_0132138c(lVar10,unaff_w23,&stack0x00000160,*unaff_x27);
          lVar13 = in_stack_00000160;
          in_stack_00000178 = in_stack_00000018[3];
          in_stack_00000170 = in_stack_00000018[2];
          in_stack_00000188 = in_stack_00000018[5];
          in_stack_00000180 = in_stack_00000018[4];
          in_stack_00000190 = (undefined4)in_stack_00000018[6];
          in_stack_00000168 = in_stack_00000018[1];
          in_stack_00000160 = *in_stack_00000018;
          lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                       DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                     );
          if (lVar22 == 0) break;
          in_stack_00000068 = in_stack_00000168;
          in_stack_00000060 = in_stack_00000160;
          in_stack_00000078 = in_stack_00000178;
          in_stack_00000070 = in_stack_00000170;
          in_stack_00000088 = in_stack_00000188;
          in_stack_00000080 = in_stack_00000180;
          in_stack_00000090 = in_stack_00000190;
          FUN_00e5f6e0(lVar22,lVar13,&stack0x00000060,0);
          FUN_01323a14(lVar10,unaff_w23,lVar22,
                       *(undefined8 *)
                        Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                      );
          *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w23,&stack0x00000218,*unaff_x27),
             in_stack_00000218 == 0)) break;
          FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
          unaff_w23 = unaff_w23 + 1;
        }
      }
      goto LAB_00e3a5f8;
    }
    if (*unaff_x28 == 0) break;
    sVar6 = FUN_015fa29c(*unaff_x28,uVar18,0);
    if (sVar6 == 0x20) {
LAB_00e39f90:
      if (*unaff_x28 == 0) break;
      lVar10 = FUN_01601ad8(*unaff_x28,uVar18,1,0);
      *unaff_x28 = lVar10;
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01731954(0);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
      }
      uVar9 = FUN_016f8fb8(&stack0x00000214,uVar9,0);
      if (lVar10 == 0) break;
      uVar9 = FUN_01600e54(lVar10,uVar18,uVar9,0);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar18,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      FUN_00e5eb18(_fStack00000000000001e0,*(undefined1 *)(unaff_x19 + 0x37d),0);
      unaff_w23 = uVar18;
      uVar20 = uVar18;
      goto LAB_00e3a5f8;
    }
    if (*unaff_x28 == 0) break;
    sVar6 = FUN_015fa29c(*unaff_x28,uVar18,0);
    if (sVar6 == 0x3000) goto LAB_00e39f90;
    if (*unaff_x28 == 0) break;
    sVar6 = FUN_015fa29c(*unaff_x28,uVar18,0);
    if (sVar6 == 0x200b) goto LAB_00e39f90;
    if (*(char *)(unaff_x19 + 0x143) != '\0') {
      if (*unaff_x28 == 0) break;
      sVar6 = FUN_015fa29c(*unaff_x28,uVar18,0);
      if (sVar6 == 0x2d) goto LAB_00e3a640;
      if (*unaff_x28 == 0) break;
      iVar16 = uVar18 + 1;
      uVar9 = FUN_01600e54(*unaff_x28,iVar16,*(undefined8 *)PTR_DAT_033f0398,0);
      lVar10 = *(long *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
      if (lVar10 == 0) break;
                    /* try { // try from 00e3a7c4 to 00f3a7eb has its CatchHandler @ 00e3a7c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a7c4 with catch @ 00e3a7c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a8a8 with catch @ 00e3a7c4
                        */
      FUN_0132138c(lVar10,uVar18,&stack0x000001e0,*unaff_x27);
      uVar4 = _fStack00000000000001e0;
      uVar29 = in_stack_00000010[3];
      uVar28 = in_stack_00000010[2];
      uVar27 = in_stack_00000010[5];
      uVar26 = in_stack_00000010[4];
      uVar11 = in_stack_00000010[6];
      in_stack_000001e8 = in_stack_00000010[1];
      _fStack00000000000001e0 = *in_stack_00000010;
                    /* try { // try from 00e3a7ec to 00f3a7fb has its CatchHandler @ 00e3a89c */
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                 );
      if (lVar13 == 0) break;
                    /* try { // try from 00e3a81c to 00f3a823 has its CatchHandler @ 00e3a898 */
      in_stack_000001a8 = in_stack_000001e8;
      in_stack_000001a0 = _fStack00000000000001e0;
      in_stack_000001b0 = uVar28;
      in_stack_000001b8 = uVar29;
      in_stack_000001c0 = uVar26;
      in_stack_000001c8 = uVar27;
      in_stack_000001d0 = (int)uVar11;
      FUN_00e5f6e0(lVar13,uVar4,&stack0x000001a0,0);
                    /* try { // try from 00e3a83c to 00f3a843 has its CatchHandler @ 00e3a894 */
      FUN_01323a14(lVar10,iVar16,lVar13,
                   *(undefined8 *)
                    Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                  );
      *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000160,*unaff_x27),
         in_stack_00000160 == 0)) break;
      FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) break;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a83c with catch @ 00e3a894
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a81c with catch @ 00e3a898
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a7ec with catch @ 00e3a89c
                        */
      FUN_0132138c(lVar10,uVar18,&stack0x00000160,*unaff_x27);
      lVar13 = in_stack_00000160;
      in_stack_00000178 = in_stack_00000018[3];
      in_stack_00000170 = in_stack_00000018[2];
                    /* try { // try from 00e3a8a0 to 00f3a8a7 has its CatchHandler @ 00e3a8b0 */
                    /* try { // try from 00e3a8a8 to 00f3a8b3 has its CatchHandler @ 00e3a7c4 */
      in_stack_00000188 = in_stack_00000018[5];
      in_stack_00000180 = in_stack_00000018[4];
      in_stack_00000190 = (undefined4)in_stack_00000018[6];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a8a0 with catch @ 00e3a8b0
                        */
      in_stack_00000168 = in_stack_00000018[1];
      in_stack_00000160 = *in_stack_00000018;
                    /* try { // try from 00e3a8b4 to 00f3a963 has its CatchHandler @ 00e3a8b4
                       catch() { ... } // from try @ 00e3a8b4 with catch @ 00e3a8b4
                       catch() { ... } // from try @ 00e3acc8 with catch @ 00e3a8b4 */
      lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                   DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                 );
      if (lVar22 == 0) break;
      in_stack_00000128 = in_stack_00000168;
      in_stack_00000120 = in_stack_00000160;
      in_stack_00000138 = in_stack_00000178;
      in_stack_00000130 = in_stack_00000170;
      in_stack_00000148 = in_stack_00000188;
      in_stack_00000140 = in_stack_00000180;
      in_stack_00000150 = in_stack_00000190;
      FUN_00e5f6e0(lVar22,lVar13,&stack0x00000120,0);
      FUN_01323a14(lVar10,iVar16,lVar22,
                   *(undefined8 *)
                    Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                  );
      *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000218,*unaff_x27),
         in_stack_00000218 == 0)) break;
      FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
      unaff_w23 = uVar18 + 2;
      uVar20 = unaff_w23;
      goto LAB_00e3a5f8;
    }
LAB_00e3a640:
    lVar10 = *unaff_x28;
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01731954(0);
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
    }
    uVar9 = FUN_016f8fb8(&stack0x00000214,uVar9,0);
    if (lVar10 == 0) break;
    unaff_w23 = uVar18 + 1;
    uVar9 = FUN_01600e54(lVar10,unaff_w23,uVar9,0);
    lVar10 = *(long *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
    if (lVar10 == 0) break;
    FUN_0132138c(lVar10,uVar18,&stack0x000001e0,*unaff_x27);
    uVar4 = _fStack00000000000001e0;
    uVar29 = in_stack_00000010[3];
    uVar28 = in_stack_00000010[2];
    uVar27 = in_stack_00000010[5];
    uVar26 = in_stack_00000010[4];
    uVar11 = in_stack_00000010[6];
    in_stack_000001e8 = in_stack_00000010[1];
    _fStack00000000000001e0 = *in_stack_00000010;
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                 DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                               );
    if (lVar13 == 0) break;
    in_stack_000000e8 = in_stack_000001e8;
    in_stack_000000e0 = _fStack00000000000001e0;
    in_stack_000000f0 = uVar28;
    in_stack_000000f8 = uVar29;
    in_stack_00000100 = uVar26;
    in_stack_00000108 = uVar27;
    in_stack_00000110 = (int)uVar11;
    FUN_00e5f6e0(lVar13,uVar4,&stack0x000000e0,0);
    FUN_01323a14(lVar10,unaff_w23,lVar13,
                 *(undefined8 *)
                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                );
    param_1 = *(long *)(unaff_x19 + 0x48);
    *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
    if (param_1 == 0) break;
    param_4 = *unaff_x27;
    param_3 = &stack0x00000160;
    param_2 = (ulong)unaff_w23;
  }
  goto LAB_00e3b024;
  while( true ) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x000001e0,*unaff_x27);
    *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar9 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_02681b9c(uVar9,0,0);
    puVar14 = (undefined8 *)(unaff_x19 + 0x80);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar10 == 0)) goto LAB_00e3b024;
      puVar14 = (undefined8 *)(lVar10 + 0x18);
    }
    uVar9 = *puVar14;
    *(undefined8 *)(unaff_x19 + 0x450) = uVar9;
    iVar8 = FUN_00e4b938(uVar11,uVar9,*(undefined8 *)(unaff_x19 + 0x500));
    lVar10 = *(long *)(unaff_x19 + 0x500);
    if (lVar10 == 0) goto LAB_00e3b024;
    *(undefined8 *)(lVar10 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
    *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar17,0);
    if (sVar6 == 10) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
      iVar8 = 0;
      if (iVar17 != 0) {
        iVar8 = iVar17 + -1;
      }
      FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar8,*(undefined8 *)puVar3);
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      lVar10 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      if (lVar10 == 0) goto LAB_00e3b024;
      if (iVar7 < *(int *)(lVar10 + 0x18)) {
        fVar30 = *(float *)(unaff_x19 + 0x444);
        iVar7 = iVar7 + 1;
        FUN_0132138c(lVar10,iVar7,&stack0x000001e0,*(undefined8 *)puVar2);
        *(float *)(unaff_x19 + 0x444) = fVar30 - fStack00000000000001e0;
      }
      else {
        iVar7 = iVar7 + 1;
      }
    }
    else {
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar6 = FUN_015fa29c(*unaff_x28,iVar17,0);
      if (sVar6 == 0xd) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        iVar8 = 0;
        if (iVar17 != 0) {
          iVar8 = iVar17 + -1;
        }
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar8,*(undefined8 *)puVar3);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      }
      else if (iVar17 - iVar16 == -1) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar16 + -1,*(undefined8 *)puVar3);
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        fVar30 = (float)iVar8;
        sVar6 = FUN_015fa29c(*unaff_x28,iVar17,0);
        fVar31 = *(float *)(unaff_x19 + 0x440);
        lVar10 = *(long *)(unaff_x19 + 0x500);
        if (sVar6 == 9) {
          if (lVar10 == 0) goto LAB_00e3b024;
          fVar30 = fVar30 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                   (*(float *)(lVar10 + 0x80) / fVar30);
        }
        else {
          if (lVar10 == 0) goto LAB_00e3b024;
          fVar30 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar30,lVar10,0);
        }
        *(float *)(unaff_x19 + 0x440) = fVar31 + fVar30;
      }
    }
    iVar17 = iVar17 + 1;
    if (iVar17 == iVar16) break;
LAB_00e3ace0:
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
  }
LAB_00e3aef4:
  uVar9 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
  uVar9 = FUN_010dfe04(uVar9,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar9;
  FUN_00e4c7d0();
  fVar30 = DAT_028aa030;
  if ((*(int *)(unaff_x19 + 0x150) != 5) ||
     (-*(float *)(unaff_x19 + 400) <= *(float *)(unaff_x19 + 0x42c))) {
LAB_00e3b030:
    FUN_00e4d29c();
    FUN_00e4d598();
    FUN_00e4d720();
    FUN_00e4da30();
    FUN_00e4de60();
    return;
  }
  lVar10 = *unaff_x28;
  if (lVar10 != 0) {
    iVar16 = 0;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) <= iVar16) {
        FUN_00e38100();
        goto LAB_00e3b030;
      }
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x84) =
           *(float *)(_fStack00000000000001e0 + 0x84) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar30;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x48) =
           *(float *)(_fStack00000000000001e0 + 0x48) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar30;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      iVar16 = iVar16 + 1;
      *(float *)(_fStack00000000000001e0 + 0x54) =
           *(float *)(_fStack00000000000001e0 + 0x54) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar30;
      lVar10 = *(long *)(unaff_x19 + 0x78);
      if (lVar10 == 0) break;
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


