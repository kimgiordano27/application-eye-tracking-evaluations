/*
FUNCTION_NAME: FullSerializer.Internal.fsDictionaryConverter$$AddItemToDictionary
ENTRY_POINT: 00e39c84
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


void FullSerializer_Internal_fsDictionaryConverter__AddItemToDictionary(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long unaff_x19;
  int iVar16;
  ulong *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int iVar17;
  uint unaff_w23;
  uint uVar18;
  uint uVar19;
  long unaff_x24;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float unaff_s8;
  float fVar29;
  float unaff_s9;
  float unaff_s10;
  float fVar30;
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
  
  while( true ) {
    uVar11 = FUN_0272bfb4(unaff_x24,
                          *(undefined8 *)Method_System_Xml_XsdValidatingReader_MoveToAttribute__,
                          param_1,*(undefined4 *)(unaff_x19 + 0x11c),0);
    lVar20 = *(long *)(unaff_x19 + 0x450);
                    /* try { // try from 00e39cb0 to 00f39cff has its CatchHandler @ 00e39860 */
    uVar8 = FUN_00e4b938(uVar11,lVar20,*(undefined8 *)(unaff_x19 + 0x500));
    if (lVar20 == 0) break;
    FUN_0272bf48(lVar20,0xad,in_stack_00000018,uVar8,*(undefined4 *)(unaff_x19 + 0x11c),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) break;
    sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),unaff_w22,0);
    if (sVar6 == 10) {
LAB_00e39d14:
      lVar20 = *(long *)(unaff_x19 + 0x500);
      if (lVar20 == 0) break;
      unaff_s10 = *(float *)(lVar20 + 0x74);
      *(float *)(lVar20 + 0x44) = unaff_s10;
    }
    else {
      if (*unaff_x28 == 0) break;
                    /* try { // try from 00e39d00 to 00f39d77 has its CatchHandler @ 00e39fec */
      sVar6 = FUN_015fa29c(*unaff_x28,unaff_w22,0);
      if (sVar6 == 0xd) goto LAB_00e39d14;
      if (*unaff_x28 == 0) break;
      sVar6 = FUN_015fa29c(*unaff_x28,unaff_w22,0);
      lVar20 = *(long *)(unaff_x19 + 0x500);
      if (lVar20 == 0) break;
      *(float *)(lVar20 + 0x44) = unaff_s10;
      if (sVar6 == 9) {
        fVar29 = *(float *)(unaff_x19 + 0x138) * unaff_s9 * *(float *)(lVar20 + 0x80);
        fVar24 = *(float *)(unaff_x19 + 0x25c) + fVar29;
      }
      else {
                    /* try { // try from 00e39d78 to 00f39dc7 has its CatchHandler @ 00e39860 */
        fVar29 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),lVar20,0);
        if (*(long *)(unaff_x19 + 0x500) == 0) break;
        fVar24 = *(float *)(unaff_x19 + 0x25c);
        fVar30 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),*(long *)(unaff_x19 + 0x500)
                                     ,0);
        fVar24 = fVar24 + fVar30;
      }
      unaff_s10 = unaff_s10 + fVar29;
      *(float *)(unaff_x19 + 0x25c) = fVar24;
    }
    if ((*(float *)(unaff_x19 + 0x4f4) < unaff_s10) &&
       (iVar16 = unaff_w23 + 1, unaff_x20 = in_stack_00000010, iVar16 < (int)unaff_w22)) {
                    /* try { // try from 00e39dc8 to 00f39e3f has its CatchHandler @ 00e39ff0 */
      lVar20 = *unaff_x29;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar20 = *unaff_x29;
      }
      lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
      if (lVar20 == 0) break;
      uVar11 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(lVar20 + 0x18));
      uVar21 = 0;
      *(undefined8 *)(unaff_x19 + 0x438) = uVar11;
      while( true ) {
        lVar20 = *unaff_x29;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *unaff_x29;
        }
        lVar13 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_00e3b024;
        lVar23 = *(long *)(unaff_x19 + 0x438);
        if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar21) break;
        lVar22 = *unaff_x28;
        if (*(int *)(lVar20 + 0xe0) == 0) {
                    /* try { // try from 00e39e40 to 00f39f57 has its CatchHandler @ 00e39860 */
          thunk_FUN_00d32864();
          lVar13 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
          if (lVar13 == 0) goto LAB_00e3b024;
        }
        FUN_0132138c(lVar13,uVar21 & 0xffffffff,&stack0x000001e0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<CatchAssistData>_get_Item__);
        if ((lVar22 == 0) ||
           (uVar8 = FUN_01605170(lVar22,_fStack00000000000001e0 & 0xffff,unaff_w22,0), lVar23 == 0))
        goto LAB_00e3b024;
        if (*(uint *)(lVar23 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar20 = uVar21 * 4;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(lVar23 + lVar20 + 0x20) = uVar8;
      }
      if (lVar23 == 0) break;
      iVar9 = (int)*(ulong *)(lVar23 + 0x18);
      if (iVar9 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(uint *)(lVar23 + 0x20);
        if (1 < iVar9) {
          lVar20 = (*(ulong *)(lVar23 + 0x18) & 0xffffffff) - 1;
          puVar15 = (uint *)(lVar23 + 0x24);
          uVar18 = uVar19;
          do {
            uVar19 = *puVar15;
            if ((int)*puVar15 <= (int)uVar18) {
              uVar19 = uVar18;
            }
            lVar20 = lVar20 + -1;
            puVar15 = puVar15 + 1;
            uVar18 = uVar19;
          } while (lVar20 != 0);
        }
      }
      if (*unaff_x28 == 0) break;
      iVar9 = FUN_01605170(*unaff_x28,10,unaff_w22,0);
      if (((iVar9 < (int)uVar19) && (uVar19 != 0xffffffff)) &&
         (*(char *)(unaff_x19 + 0x142) == '\0')) {
        if (*unaff_x28 == 0) break;
        sVar6 = FUN_015fa29c(*unaff_x28,uVar19,0);
        if (sVar6 != 0x20) {
          if (*unaff_x28 == 0) break;
                    /* try { // try from 00e39f58 to 00f39f5f has its CatchHandler @ 00e39fe0 */
                    /* try { // try from 00e39f60 to 00f39f67 has its CatchHandler @ 00e39fdc */
          sVar6 = FUN_015fa29c(*unaff_x28,uVar19,0);
                    /* try { // try from 00e39f68 to 00f39f6f has its CatchHandler @ 00e39fd8 */
          if (sVar6 != 0x3000) {
                    /* try { // try from 00e39f70 to 00f39f77 has its CatchHandler @ 00e39fd4 */
            if (*unaff_x28 == 0) break;
                    /* try { // try from 00e39f78 to 00f39f7f has its CatchHandler @ 00e39fd0 */
                    /* try { // try from 00e39f80 to 00f39f93 has its CatchHandler @ 00e39860 */
            sVar6 = FUN_015fa29c(*unaff_x28,uVar19,0);
            if (sVar6 != 0x200b) {
              if (*(char *)(unaff_x19 + 0x143) != '\0') {
                if (*unaff_x28 == 0) break;
                sVar6 = FUN_015fa29c(*unaff_x28,uVar19,0);
                if (sVar6 != 0x2d) {
                  if (*unaff_x28 != 0) {
                    iVar16 = uVar19 + 1;
                    uVar11 = FUN_01600e54(*unaff_x28,iVar16,*(undefined8 *)PTR_DAT_033f0398,0);
                    lVar20 = *(long *)(unaff_x19 + 0x48);
                    *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
                    if (lVar20 != 0) {
                      FUN_0132138c(lVar20,uVar19,&stack0x000001e0,*unaff_x27);
                      uVar5 = _fStack00000000000001e0;
                      uVar28 = in_stack_00000010[3];
                      uVar27 = in_stack_00000010[2];
                      uVar26 = in_stack_00000010[5];
                      uVar25 = in_stack_00000010[4];
                      uVar21 = in_stack_00000010[6];
                      in_stack_000001e8 = in_stack_00000010[1];
                      _fStack00000000000001e0 = *in_stack_00000010;
                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                                 );
                      if (lVar13 != 0) {
                        in_stack_000001a8 = in_stack_000001e8;
                        in_stack_000001a0 = _fStack00000000000001e0;
                        in_stack_000001b0 = uVar27;
                        in_stack_000001b8 = uVar28;
                        in_stack_000001c0 = uVar25;
                        in_stack_000001c8 = uVar26;
                        in_stack_000001d0 = (int)uVar21;
                        FUN_00e5f6e0(lVar13,uVar5,&stack0x000001a0,0);
                        FUN_01323a14(lVar20,iVar16,lVar13,
                                     *(undefined8 *)
                                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                    );
                        *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000160,
                                         *unaff_x27), in_stack_00000160 != 0)) {
                          FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
                          lVar20 = *(long *)(unaff_x19 + 0x48);
                          if (lVar20 != 0) {
                            FUN_0132138c(lVar20,uVar19,&stack0x00000160,*unaff_x27);
                            lVar13 = in_stack_00000160;
                            in_stack_00000178 = in_stack_00000018[3];
                            in_stack_00000170 = in_stack_00000018[2];
                            in_stack_00000188 = in_stack_00000018[5];
                            in_stack_00000180 = in_stack_00000018[4];
                            in_stack_00000190 = (undefined4)in_stack_00000018[6];
                            in_stack_00000168 = in_stack_00000018[1];
                            in_stack_00000160 = *in_stack_00000018;
                            lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                  
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                                  );
                            if (lVar23 != 0) {
                              in_stack_00000128 = in_stack_00000168;
                              in_stack_00000120 = in_stack_00000160;
                              in_stack_00000138 = in_stack_00000178;
                              in_stack_00000130 = in_stack_00000170;
                              in_stack_00000148 = in_stack_00000188;
                              in_stack_00000140 = in_stack_00000180;
                              in_stack_00000150 = in_stack_00000190;
                              FUN_00e5f6e0(lVar23,lVar13,&stack0x00000120,0);
                              FUN_01323a14(lVar20,iVar16,lVar23,
                                           *(undefined8 *)
                                            Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                          );
                              *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                              if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                                 (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x00000218,
                                               *unaff_x27), in_stack_00000218 != 0)) {
                                FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0)
                                ;
                                uVar19 = uVar19 + 2;
                                unaff_w22 = uVar19;
                                goto LAB_00e3a5f8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  break;
                }
              }
              lVar20 = *unaff_x28;
              if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_01731954(0);
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
              }
              uVar11 = FUN_016f8fb8(&stack0x00000214,uVar11,0);
              if (lVar20 != 0) {
                unaff_w22 = uVar19 + 1;
                uVar11 = FUN_01600e54(lVar20,unaff_w22,uVar11,0);
                lVar20 = *(long *)(unaff_x19 + 0x48);
                *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
                if (lVar20 != 0) {
                  FUN_0132138c(lVar20,uVar19,&stack0x000001e0,*unaff_x27);
                  uVar5 = _fStack00000000000001e0;
                  uVar28 = in_stack_00000010[3];
                  uVar27 = in_stack_00000010[2];
                  uVar26 = in_stack_00000010[5];
                  uVar25 = in_stack_00000010[4];
                  uVar21 = in_stack_00000010[6];
                  in_stack_000001e8 = in_stack_00000010[1];
                  _fStack00000000000001e0 = *in_stack_00000010;
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                             );
                  if (lVar13 != 0) {
                    in_stack_000000e8 = in_stack_000001e8;
                    in_stack_000000e0 = _fStack00000000000001e0;
                    in_stack_000000f0 = uVar27;
                    in_stack_000000f8 = uVar28;
                    in_stack_00000100 = uVar25;
                    in_stack_00000108 = uVar26;
                    in_stack_00000110 = (int)uVar21;
                    FUN_00e5f6e0(lVar13,uVar5,&stack0x000000e0,0);
                    FUN_01323a14(lVar20,unaff_w22,lVar13,
                                 *(undefined8 *)
                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                                );
                    *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
                    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                       (FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w22,&stack0x00000160,
                                     *unaff_x27), in_stack_00000160 != 0)) {
                      FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
                      uVar19 = unaff_w22;
                      goto LAB_00e3a5f8;
                    }
                  }
                }
              }
              break;
            }
          }
        }
                    /* try { // try from 00e39f94 to 00f39f9f has its CatchHandler @ 00e39fe0 */
        if (*unaff_x28 == 0) break;
                    /* try { // try from 00e39fa0 to 00f39fab has its CatchHandler @ 00e39fdc */
        lVar20 = FUN_01601ad8(*unaff_x28,uVar19,1,0);
        *unaff_x28 = lVar20;
                    /* try { // try from 00e39fac to 00f39fb7 has its CatchHandler @ 00e39fd8 */
                    /* try { // try from 00e39fb8 to 00f39fc3 has its CatchHandler @ 00e39fd4 */
                    /* try { // try from 00e39fc4 to 00f39fcf has its CatchHandler @ 00e39fd0 */
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01731954(0);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
        }
        uVar11 = FUN_016f8fb8(&stack0x00000214,uVar11,0);
        if (lVar20 == 0) break;
        uVar11 = FUN_01600e54(lVar20,uVar19,uVar11,0);
        *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar19,&stack0x000001e0,*unaff_x27),
           _fStack00000000000001e0 == 0)) break;
        FUN_00e5eb18(_fStack00000000000001e0,*(undefined1 *)(unaff_x19 + 0x37d),0);
        unaff_w22 = uVar19;
      }
      else {
        uVar19 = unaff_w23;
        uVar18 = unaff_w22;
        if (0 < (int)unaff_w22) {
          do {
            lVar20 = *unaff_x29;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *unaff_x29;
            }
            if (*unaff_x28 == 0) goto LAB_00e3b024;
            uVar19 = uVar18 - 1;
            lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
            uVar7 = FUN_015fa29c(*unaff_x28,uVar19,0);
            if (lVar20 == 0) goto LAB_00e3b024;
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar7);
            uVar21 = FUN_01322618(lVar20,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
            if ((uVar21 & 1) == 0) {
              lVar20 = *unaff_x28;
              if (lVar20 == 0) goto LAB_00e3b024;
              if ((int)uVar18 < *(int *)(lVar20 + 0x10)) {
                lVar13 = *unaff_x29;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar13);
                  lVar20 = *unaff_x28;
                  if (lVar20 == 0) goto LAB_00e3b024;
                  lVar13 = *unaff_x29;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
                uVar7 = FUN_015fa29c(lVar20,uVar18,0);
                if (lVar13 == 0) goto LAB_00e3b024;
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar7);
                uVar21 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                uVar1 = uVar18;
                if ((uVar21 & 1) == 0) goto joined_r0x00e3a144;
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
                      uVar2 = uVar1;
                      if ((int)uVar2 <= iVar16) goto LAB_00e3a2c0;
                      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
                      uVar1 = uVar2 - 1;
                      FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar1,&stack0x000001e0,*unaff_x27);
                      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
                    } while (*(float *)(_fStack00000000000001e0 + 0x44) /
                             *(float *)(unaff_x19 + 0x4f4) <= unaff_s8);
                    lVar20 = *unaff_x28;
                    if (lVar20 == 0) goto LAB_00e3b024;
                  } while (*(int *)(lVar20 + 0x10) <= (int)uVar2);
                  lVar13 = *unaff_x29;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar13);
                    lVar20 = *unaff_x28;
                    if (lVar20 == 0) goto LAB_00e3b024;
                    lVar13 = *unaff_x29;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                  uVar7 = FUN_015fa29c(lVar20,uVar2,0);
                  if (lVar13 == 0) goto LAB_00e3b024;
                  _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar7);
                  uVar21 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                } while ((uVar21 & 1) == 0);
                lVar20 = *unaff_x29;
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar20 = *unaff_x29;
                }
                if (*unaff_x28 == 0) goto LAB_00e3b024;
                lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
                uVar7 = FUN_015fa29c(*unaff_x28,uVar1,0);
                if (lVar20 == 0) goto LAB_00e3b024;
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar7);
                uVar21 = FUN_01322618(lVar20,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
              } while ((uVar21 & 1) != 0);
              lVar20 = *unaff_x28;
              if (lVar20 == 0) goto LAB_00e3b024;
            } while (*(int *)(lVar20 + 0x10) <= (int)uVar2);
            lVar13 = *unaff_x29;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar13);
              lVar20 = *unaff_x28;
              if (lVar20 == 0) goto LAB_00e3b024;
              lVar13 = *unaff_x29;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            uVar7 = FUN_015fa29c(lVar20,uVar2,0);
            if (lVar13 == 0) goto LAB_00e3b024;
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar7);
            uVar21 = FUN_01322618(lVar13,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
          } while ((uVar21 & 1) != 0);
          if ((int)(uVar2 | uVar18) < 0) {
LAB_00e3a2c0:
            uVar19 = unaff_w22;
            if (-1 < (int)uVar18) {
              uVar19 = uVar18;
            }
          }
          else {
            uVar19 = uVar18;
            if ((int)uVar2 <= (int)uVar18) {
              uVar19 = uVar2;
            }
          }
          lVar20 = *(long *)(unaff_x19 + 0x78);
          if (*(char *)(unaff_x19 + 0x143) == '\0') {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_01731954(0);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
            }
            uVar11 = FUN_016f8fb8(&stack0x00000214,uVar11,0);
            if (lVar20 == 0) break;
            uVar11 = FUN_01600e54(lVar20,uVar19,uVar11,0);
            lVar20 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
            if (lVar20 == 0) break;
            FUN_0132138c(lVar20,uVar19,&stack0x000001e0,*unaff_x27);
            uVar5 = _fStack00000000000001e0;
            uVar28 = in_stack_00000010[3];
            uVar27 = in_stack_00000010[2];
            uVar26 = in_stack_00000010[5];
            uVar25 = in_stack_00000010[4];
            uVar21 = in_stack_00000010[6];
            in_stack_000001e8 = in_stack_00000010[1];
            _fStack00000000000001e0 = *in_stack_00000010;
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar13 == 0) break;
            in_stack_00000028 = in_stack_000001e8;
            in_stack_00000020 = _fStack00000000000001e0;
            in_stack_00000030 = uVar27;
            in_stack_00000038 = uVar28;
            in_stack_00000040 = uVar25;
            in_stack_00000048 = uVar26;
            in_stack_00000050 = (int)uVar21;
            FUN_00e5f6e0(lVar13,uVar5,&stack0x00000020,0);
            FUN_01323a14(lVar20,uVar19,lVar13,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar19,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) break;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
          }
          else {
            if (lVar20 == 0) break;
            uVar11 = FUN_01600e54(lVar20,uVar19,
                                  *(undefined8 *)
                                   UnityEngine_ProBuilder_EdgeLookup_<>c__DisplayClass16_0_TypeInfo,
                                  0);
            lVar20 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
            if (lVar20 == 0) break;
            FUN_0132138c(lVar20,uVar19,&stack0x000001e0,*unaff_x27);
            uVar5 = _fStack00000000000001e0;
            uVar28 = in_stack_00000010[3];
            uVar27 = in_stack_00000010[2];
            uVar26 = in_stack_00000010[5];
            uVar25 = in_stack_00000010[4];
            uVar21 = in_stack_00000010[6];
            in_stack_000001e8 = in_stack_00000010[1];
            _fStack00000000000001e0 = *in_stack_00000010;
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar13 == 0) break;
            in_stack_000000a8 = in_stack_000001e8;
            in_stack_000000a0 = _fStack00000000000001e0;
            in_stack_000000b0 = uVar27;
            in_stack_000000b8 = uVar28;
            in_stack_000000c0 = uVar25;
            in_stack_000000c8 = uVar26;
            in_stack_000000d0 = (int)uVar21;
            FUN_00e5f6e0(lVar13,uVar5,&stack0x000000a0,0);
            FUN_01323a14(lVar20,uVar19,lVar13,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar19,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) break;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
            lVar20 = *(long *)(unaff_x19 + 0x48);
            if (lVar20 == 0) break;
            FUN_0132138c(lVar20,uVar19,&stack0x00000160,*unaff_x27);
            lVar13 = in_stack_00000160;
            in_stack_00000178 = in_stack_00000018[3];
            in_stack_00000170 = in_stack_00000018[2];
            in_stack_00000188 = in_stack_00000018[5];
            in_stack_00000180 = in_stack_00000018[4];
            in_stack_00000190 = (undefined4)in_stack_00000018[6];
            in_stack_00000168 = in_stack_00000018[1];
            in_stack_00000160 = *in_stack_00000018;
            lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar23 == 0) break;
            in_stack_00000068 = in_stack_00000168;
            in_stack_00000060 = in_stack_00000160;
            in_stack_00000078 = in_stack_00000178;
            in_stack_00000070 = in_stack_00000170;
            in_stack_00000088 = in_stack_00000188;
            in_stack_00000080 = in_stack_00000180;
            in_stack_00000090 = in_stack_00000190;
            FUN_00e5f6e0(lVar23,lVar13,&stack0x00000060,0);
            FUN_01323a14(lVar20,uVar19,lVar23,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar19,&stack0x00000218,*unaff_x27),
               in_stack_00000218 == 0)) break;
            FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
            uVar19 = uVar19 + 1;
          }
        }
      }
LAB_00e3a5f8:
      if (*(long *)(unaff_x19 + 0x500) == 0) break;
      unaff_s10 = *(float *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      unaff_w23 = uVar19;
    }
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(unaff_x19 + 0x4f8) <= (int)unaff_w22) {
      if (*(char *)(unaff_x19 + 0x370) != '\0') {
        uVar11 = FUN_00e47070();
        *(undefined8 *)(unaff_x19 + 0x78) = uVar11;
      }
      FUN_00e4c428();
      puVar4 = StringLiteral_4747;
      puVar3 = OVREyeGaze_TypeInfo;
      if (*(int *)(unaff_x19 + 0x4f8) < 1) {
        uVar8 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
           _fStack00000000000001e0 == 0)) break;
        uVar8 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
      }
      lVar20 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = uVar8;
      if (lVar20 != 0) {
        if (*(int *)(lVar20 + 0x18) < 1) {
          fVar29 = *(float *)(unaff_x19 + 0x104);
        }
        else {
          FUN_0132138c(lVar20,0,&stack0x000001e0,*(undefined8 *)puVar3);
          fVar29 = fStack00000000000001e0;
        }
        *(float *)(unaff_x19 + 0x444) = -fVar29;
        if (*(long *)(unaff_x19 + 0x78) != 0) {
          iVar16 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
          if (iVar16 < 1) goto LAB_00e3aef4;
          iVar9 = 0;
          iVar17 = 0;
          goto LAB_00e3ace0;
        }
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),unaff_w22,&stack0x000001e0,*unaff_x27);
    *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) break;
    uVar11 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(uVar11,0,0);
    plVar12 = unaff_x21;
    if ((uVar21 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar20 == 0)) break;
      plVar12 = (long *)(lVar20 + 0x18);
    }
    lVar20 = *plVar12;
    *(long *)(unaff_x19 + 0x450) = lVar20;
    uVar8 = FUN_00e4b938(uVar21,lVar20,*(undefined8 *)(unaff_x19 + 0x500));
    if (lVar20 == 0) break;
    uVar11 = FUN_0272bf48(lVar20,10,unaff_x20,uVar8,*(undefined4 *)(unaff_x19 + 0x11c),0);
    unaff_x24 = *(long *)(unaff_x19 + 0x450);
    param_1 = FUN_00e4b938(uVar11,unaff_x24,*(undefined8 *)(unaff_x19 + 0x500));
    if (unaff_x24 == 0) break;
  }
  goto LAB_00e3b024;
  while( true ) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x000001e0,*unaff_x27);
    *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar11 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(uVar11,0,0);
    puVar14 = (undefined8 *)(unaff_x19 + 0x80);
    if ((uVar21 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar20 == 0)) goto LAB_00e3b024;
      puVar14 = (undefined8 *)(lVar20 + 0x18);
    }
    uVar11 = *puVar14;
    *(undefined8 *)(unaff_x19 + 0x450) = uVar11;
    iVar10 = FUN_00e4b938(uVar21,uVar11,*(undefined8 *)(unaff_x19 + 0x500));
    lVar20 = *(long *)(unaff_x19 + 0x500);
    if (lVar20 == 0) goto LAB_00e3b024;
    *(undefined8 *)(lVar20 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
    *(undefined4 *)(lVar20 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar6 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar17,0);
    if (sVar6 == 10) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
      iVar10 = 0;
      if (iVar17 != 0) {
        iVar10 = iVar17 + -1;
      }
      FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar10,*(undefined8 *)puVar4);
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      lVar20 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      if (lVar20 == 0) goto LAB_00e3b024;
      if (iVar9 < *(int *)(lVar20 + 0x18)) {
        fVar29 = *(float *)(unaff_x19 + 0x444);
        iVar9 = iVar9 + 1;
        FUN_0132138c(lVar20,iVar9,&stack0x000001e0,*(undefined8 *)puVar3);
        *(float *)(unaff_x19 + 0x444) = fVar29 - fStack00000000000001e0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
    else {
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar6 = FUN_015fa29c(*unaff_x28,iVar17,0);
      if (sVar6 == 0xd) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        iVar10 = 0;
        if (iVar17 != 0) {
          iVar10 = iVar17 + -1;
        }
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar10,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      }
      else if (iVar17 - iVar16 == -1) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar16 + -1,*(undefined8 *)puVar4);
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        fVar29 = (float)iVar10;
        sVar6 = FUN_015fa29c(*unaff_x28,iVar17,0);
        fVar30 = *(float *)(unaff_x19 + 0x440);
        lVar20 = *(long *)(unaff_x19 + 0x500);
        if (sVar6 == 9) {
          if (lVar20 == 0) goto LAB_00e3b024;
          fVar29 = fVar29 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                   (*(float *)(lVar20 + 0x80) / fVar29);
        }
        else {
          if (lVar20 == 0) goto LAB_00e3b024;
          fVar29 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar29,lVar20,0);
        }
        *(float *)(unaff_x19 + 0x440) = fVar30 + fVar29;
      }
    }
    iVar17 = iVar17 + 1;
    if (iVar17 == iVar16) break;
LAB_00e3ace0:
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
  }
LAB_00e3aef4:
  uVar11 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
  uVar11 = FUN_010dfe04(uVar11,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                       );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar11;
  FUN_00e4c7d0();
  fVar29 = DAT_028aa030;
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
  lVar20 = *unaff_x28;
  if (lVar20 != 0) {
    iVar16 = 0;
    while( true ) {
      if (*(int *)(lVar20 + 0x10) <= iVar16) {
        FUN_00e38100();
        goto LAB_00e3b030;
      }
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x84) =
           *(float *)(_fStack00000000000001e0 + 0x84) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar29;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x48) =
           *(float *)(_fStack00000000000001e0 + 0x48) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar29;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar16,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      iVar16 = iVar16 + 1;
      *(float *)(_fStack00000000000001e0 + 0x54) =
           *(float *)(_fStack00000000000001e0 + 0x54) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar29;
      lVar20 = *(long *)(unaff_x19 + 0x78);
      if (lVar20 == 0) break;
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


