/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$PopulateSupportedGizmos
ENTRY_POINT: 0143b380
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos
               (long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
               int param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  long lStack0000000000000078;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  
  puVar3 = 
  Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__;
  uStack000000000000005c = param_8;
  iStack000000000000006c = param_5;
  iStack0000000000000070 = param_6;
  iStack0000000000000074 = param_7;
  lStack0000000000000078 = param_3;
  if ((DAT_03776a0f & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033f5f38);
    thunk_FUN_00d48444(StringLiteral_3457);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Nullable<ErrorCode>_get_HasValue__);
    thunk_FUN_00d48444(PTR_DAT_033f3448);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef6d8);
    thunk_FUN_00d48444(PTR_DAT_033ebc68);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__);
    thunk_FUN_00d48444(StringLiteral_9168);
    thunk_FUN_00d48444(
                      Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_8754);
    thunk_FUN_00d48444(Method_System_Data_ConstraintConverter_ConvertTo__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_SetException__
                      );
    thunk_FUN_00d48444(StringLiteral_387);
    thunk_FUN_00d48444(StringLiteral_13670);
    thunk_FUN_00d48444(StringLiteral_4419);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
    thunk_FUN_00d48444(System_Data_AutoIncrementBigInteger_TypeInfo);
    thunk_FUN_00d48444(Method_System_Globalization_IdnMapping_ToUnicode__);
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3ef8);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7799);
    thunk_FUN_00d48444(Method_System_Convert_ToString__);
    DAT_03776a0f = 1;
  }
  _uStack00000000000000d8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  _uStack00000000000000b8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000ac = 0;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)Method_System_Data_ConstraintConverter_ConvertTo__);
    puVar3 = Method_System_Convert_ToString__;
    if (3 < *(int *)(param_1 + 0x10)) {
      if (param_2 == 0) goto LAB_0143be20;
      _uStack00000000000000d8 = CONCAT44(*(undefined4 *)(param_2 + 0x18),uStack00000000000000d8);
      uVar6 = FUN_0176eb1c((long)&stack0x000000d8 + 4,0);
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,uVar6,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar6,0);
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if ((lVar7 != 0) &&
       (FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_8754), lVar9 = lStack0000000000000078,
       puVar4 = StringLiteral_4419,
       puVar3 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__, param_2 != 0)) {
      if (0 < *(int *)(param_2 + 0x18)) {
        iVar16 = 0;
        do {
          FUN_0132138c(param_2,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
          fVar2 = fStack0000000000000098;
          FUN_0132138c(param_2,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
          if (lVar9 == 0) goto LAB_0143be20;
          fVar18 = fStack000000000000009c;
          FUN_0132138c(lVar9,iVar16,&stack0x00000098,*(undefined8 *)puVar4);
          uVar17 = _fStack0000000000000098;
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
          if (lVar8 == 0) goto LAB_0143be20;
          iVar14 = -0x80000000;
          if (fVar2 != INFINITY) {
            iVar14 = (int)fVar2;
          }
          iVar19 = -0x80000000;
          if (fVar18 != INFINITY) {
            iVar19 = (int)fVar18;
          }
          FUN_017b46ec(lVar8,0);
          iVar14 = ((uint)(uVar17 >> 0x1f) & 0xfffffffe) + iVar14;
          if (iVar14 <= iStack0000000000000070) {
            iVar14 = iStack0000000000000070;
          }
          iVar19 = iVar19 + (int)uVar17 * 2;
          *(int *)(lVar8 + 0x10) = iVar16;
          *(int *)(lVar8 + 0x14) = iVar14;
          if (iVar19 <= iStack0000000000000074) {
            iVar19 = iStack0000000000000074;
          }
          *(int *)(lVar8 + 0x18) = iVar19;
          FUN_0132138c(lVar9,iVar16,&stack0x00000098,*(undefined8 *)puVar4);
          *(int *)(lVar8 + 0x18) = iVar19 + (int)fStack0000000000000098 * -2;
          FUN_00bbf6f0(lVar7,lVar8,*(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(param_2 + 0x18));
      }
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5f38);
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
      if (lVar9 != 0) {
        FUN_017b46ec(lVar9,0);
        FUN_01324f34(lVar7,lVar9,*(undefined8 *)puVar3);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
        puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
        if (lVar9 != 0) {
          FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_8754);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar8 != 0) {
            FUN_01320e50(lVar8,*(undefined8 *)
                                Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__
                        );
            puVar3 = System_Data_AutoIncrementBigInteger_TypeInfo;
            iVar16 = *(int *)(lVar9 + 0x18);
            if ((0 < *(int *)(lVar7 + 0x18)) || (0 < iVar16)) {
              iStack0000000000000058 = 0;
              iVar19 = 0;
              iVar14 = iStack0000000000000058;
              uVar15 = param_4;
              do {
                while (lVar10 = FUN_0143d76c(param_1,lVar7,uVar15,param_4,iVar16 == 0), lVar10 == 0)
                {
                  if (3 < *(int *)(param_1 + 0x10)) {
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
                  }
                  if (lStack0000000000000078 == 0) goto LAB_0143be20;
                  uVar6 = FUN_01325140(lStack0000000000000078,*(undefined8 *)StringLiteral_9168);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                             );
                  if (lVar10 == 0) goto LAB_0143be20;
                  FUN_017b46ec(lVar10,0);
                  *(undefined8 *)(lVar10 + 0x28) = uVar6;
                  *(int *)(lVar10 + 0x10) = iStack0000000000000058;
                  *(int *)(lVar10 + 0x14) = iVar19;
                  lVar11 = FUN_00da4fb8(*(undefined8 *)
                                         Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                        *(undefined4 *)(lVar9 + 0x18));
                  lVar12 = FUN_00da4fb8(*(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                        *(undefined4 *)(lVar9 + 0x18));
                  if (0 < *(int *)(lVar9 + 0x18)) {
                    uVar17 = 0;
                    do {
                      FUN_0132138c(lVar9,uVar17 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3)
                      ;
                      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                      iVar16 = *(int *)(_fStack0000000000000098 + 0x1c);
                      FUN_0132138c(lVar9,uVar17 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3)
                      ;
                      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                      iVar14 = *(int *)(_fStack0000000000000098 + 0x20);
                      FUN_0132138c(lVar9,uVar17 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3)
                      ;
                      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                      iVar20 = *(int *)(_fStack0000000000000098 + 0x14);
                      iVar13 = iVar19;
                      if (*(char *)(param_1 + 0x1c) == '\0') {
                        FUN_0132138c(lVar9,uVar17 & 0xffffffff,&stack0x00000098,
                                     *(undefined8 *)puVar3);
                        if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                        iVar13 = *(int *)(_fStack0000000000000098 + 0x18);
                      }
                      FUN_0268834c((float)iVar16,(float)iVar14,(float)iVar20,(float)iVar13,
                                   &stack0x000000c0,0);
                      if (lVar11 == 0) goto LAB_0143be20;
                      if (*(uint *)(lVar11 + 0x18) <= uVar17) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      puVar1 = (undefined8 *)(lVar11 + 0x20 + uVar17 * 0x10);
                      puVar1[1] = in_stack_000000c8;
                      *puVar1 = in_stack_000000c0;
                      FUN_0132138c(lVar9,uVar17 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3)
                      ;
                      if ((_fStack0000000000000098 == 0) || (lVar12 == 0)) goto LAB_0143be20;
                      if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_0143be24;
                      *(undefined4 *)(lVar12 + 0x20 + uVar17 * 4) =
                           *(undefined4 *)(_fStack0000000000000098 + 0x10);
                      uVar17 = uVar17 + 1;
                    } while ((long)uVar17 < (long)*(int *)(lVar9 + 0x18));
                  }
                  *(long *)(lVar10 + 0x20) = lVar11;
                  *(long *)(lVar10 + 0x30) = lVar12;
                  FUN_014359a0(lVar10);
                  lVar11 = *(long *)PTR_DAT_033ebc68;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  uVar17 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
                  if ((uVar17 & 1) == 0) {
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                  }
                  else {
                    iVar16 = *(int *)(lVar9 + 0x18);
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                    if (0 < iVar16) {
                      FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar16,0);
                    }
                  }
                  lVar11 = *(long *)PTR_DAT_033ef6d8;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  uVar17 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
                  if ((uVar17 & 1) == 0) {
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                  }
                  else {
                    iVar16 = *(int *)(lVar8 + 0x18);
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                    if (0 < iVar16) {
                      FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar16,0);
                    }
                  }
                  FUN_00bbfcc8(lVar5,lVar10,*(undefined8 *)PTR_DAT_033f3448);
                  iVar16 = *(int *)(lVar9 + 0x18);
                  iVar19 = 0;
                  iVar14 = 0;
                  uVar15 = param_4;
                  if ((*(int *)(lVar7 + 0x18) < 1) && (iVar19 = 0, iVar16 < 1)) goto LAB_0143bbac;
                }
                *(int *)(lVar10 + 0x1c) = iVar14;
                *(undefined4 *)(lVar10 + 0x20) = 0;
                FUN_00bbf6f0(lVar9,lVar10,
                             *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
                _fStack0000000000000098 = 0;
                _uStack00000000000000a0 = 0;
                FUN_0268834c((float)iVar14,0,(float)*(int *)(lVar10 + 0x14),
                             (float)*(int *)(lVar10 + 0x18),&stack0x00000098,0);
                FUN_00bbfeb8(_fStack0000000000000098 & 0xffffffff,fStack000000000000009c,
                             uStack00000000000000a0,uStack00000000000000a4,lVar8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                iVar16 = *(int *)(lVar9 + 0x18);
                iVar14 = *(int *)(lVar10 + 0x14) + iVar14;
                if (iVar19 <= *(int *)(lVar10 + 0x18)) {
                  iVar19 = *(int *)(lVar10 + 0x18);
                }
                uVar15 = param_4 - iVar14;
                iStack0000000000000058 = iVar14;
              } while ((0 < *(int *)(lVar7 + 0x18)) || (0 < iVar16));
            }
LAB_0143bbac:
            puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
            fVar2 = DAT_0293f7bc;
            if (0 < *(int *)(lVar5 + 0x18)) {
              iVar16 = 0;
              do {
                FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                uVar15 = *(uint *)(_fStack0000000000000098 + 0x10);
                _uStack00000000000000d8 = CONCAT44(uStack00000000000000dc,uVar15);
                FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                iVar14 = *(int *)(_fStack0000000000000098 + 0x14);
                if (iStack000000000000006c <= *(int *)(_fStack0000000000000098 + 0x14)) {
                  iVar14 = iStack000000000000006c;
                }
                _uStack00000000000000b8 = CONCAT44(iVar14,uStack00000000000000b8);
                if (*(char *)(param_1 + 0x14) != '\0') {
                  fVar18 = logf((float)(int)uVar15);
                  fVar18 = exp2f((float)(int)(fVar18 / fVar2));
                  uVar15 = 0x80000000;
                  if (fVar18 != INFINITY) {
                    uVar15 = (int)fVar18;
                  }
                  if (uVar15 < 3) {
                    uVar15 = 2;
                  }
                }
                if ((int)param_4 <= (int)uVar15) {
                  uVar15 = param_4;
                }
                _uStack00000000000000d8 = CONCAT44(uStack00000000000000dc,uVar15);
                FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                *(uint *)(_fStack0000000000000098 + 0x10) = uVar15;
                FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                iVar14 = *(int *)(_fStack0000000000000098 + 0x10);
                FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                if ((_fStack0000000000000098 == 0) || (lStack0000000000000078 == 0))
                goto LAB_0143be20;
                iVar19 = *(int *)(_fStack0000000000000098 + 0x14);
                FUN_0132138c(lStack0000000000000078,0,&stack0x00000098,
                             *(undefined8 *)StringLiteral_4419);
                FUN_01435f44((float)iVar14,(float)iVar19,param_1,lVar9,param_4,
                             iStack000000000000006c,_fStack0000000000000098,iStack0000000000000070,
                             iStack0000000000000074,uStack000000000000005c);
                puVar4 = StringLiteral_4419;
                iVar16 = iVar16 + 1;
              } while (iVar16 < *(int *)(lVar5 + 0x18));
              if (0 < *(int *)(lVar5 + 0x18)) {
                iVar16 = 0;
                do {
                  FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                  uVar17 = _fStack0000000000000098;
                  uVar6 = FUN_0132138c(lStack0000000000000078,iVar16,&stack0x00000098,
                                       *(undefined8 *)puVar4);
                  FUN_01436444(uVar6,uVar17,_fStack0000000000000098);
                  FUN_0132138c(lVar5,iVar16,&stack0x00000098,*(undefined8 *)puVar3);
                  if (_fStack0000000000000098 == 0) goto LAB_0143be20;
                  FUN_014359a0();
                  iVar16 = iVar16 + 1;
                } while (iVar16 < *(int *)(lVar5 + 0x18));
              }
            }
            FUN_01325140(lVar5,*(undefined8 *)
                                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                        );
            return;
          }
        }
      }
    }
  }
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


