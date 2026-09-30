/*
FUNCTION_NAME: FUN_0143be28
ENTRY_POINT: 0143be28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0143be28(long param_1,long param_2,long param_3,int param_4,uint param_5,int param_6,
                 int param_7,undefined4 param_8,undefined4 param_9)

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
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  
  puVar3 = 
  Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__;
  if ((DAT_03776a10 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_4789);
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
    DAT_03776a10 = 1;
  }
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a4 = 0;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)Method_System_Data_ConstraintConverter_ConvertTo__);
    puVar3 = Method_System_Convert_ToString__;
    if (3 < *(int *)(param_1 + 0x10)) {
      if (param_2 == 0) goto LAB_0143c8c0;
      local_78 = CONCAT44(*(undefined4 *)(param_2 + 0x18),(undefined4)local_78);
      uVar6 = FUN_0176eb1c((long)&local_78 + 4,0);
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,uVar6,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar6,0);
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if ((lVar7 != 0) &&
       (FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_8754), puVar4 = StringLiteral_4419,
       puVar3 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__, param_2 != 0)) {
      if (0 < *(int *)(param_2 + 0x18)) {
        iVar14 = 0;
        do {
          FUN_0132138c(param_2,iVar14,&local_b8,*(undefined8 *)puVar3);
          fVar2 = (float)local_b8;
          FUN_0132138c(param_2,iVar14,&local_b8,*(undefined8 *)puVar3);
          if (param_3 == 0) goto LAB_0143c8c0;
          fVar17 = local_b8._4_4_;
          FUN_0132138c(param_3,iVar14,&local_b8,*(undefined8 *)puVar4);
          uVar16 = local_b8;
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
          if (lVar8 == 0) goto LAB_0143c8c0;
          iVar15 = -0x80000000;
          if (fVar2 != INFINITY) {
            iVar15 = (int)fVar2;
          }
          iVar18 = -0x80000000;
          if (fVar17 != INFINITY) {
            iVar18 = (int)fVar17;
          }
          FUN_017b46ec(lVar8,0);
          iVar15 = ((uint)(uVar16 >> 0x1f) & 0xfffffffe) + iVar15;
          iVar18 = iVar18 + (int)uVar16 * 2;
          if (iVar15 <= param_6) {
            iVar15 = param_6;
          }
          *(int *)(lVar8 + 0x10) = iVar14;
          *(int *)(lVar8 + 0x14) = iVar15;
          if (iVar18 <= param_7) {
            iVar18 = param_7;
          }
          *(int *)(lVar8 + 0x18) = iVar18;
          FUN_0132138c(param_3,iVar14,&local_b8,*(undefined8 *)puVar4);
          *(uint *)(lVar8 + 0x14) = iVar15 - ((uint)(local_b8 >> 0x1f) & 0xfffffffe);
          FUN_00bbf6f0(lVar7,lVar8,*(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_2 + 0x18));
      }
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4789);
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
      if (lVar8 != 0) {
        FUN_017b46ec(lVar8,0);
        FUN_01324f34(lVar7,lVar8,*(undefined8 *)puVar3);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
        puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
        if (lVar8 != 0) {
          FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_8754);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar9 != 0) {
            FUN_01320e50(lVar9,*(undefined8 *)
                                Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__
                        );
            puVar3 = System_Data_AutoIncrementBigInteger_TypeInfo;
            iVar14 = *(int *)(lVar8 + 0x18);
            if ((0 < *(int *)(lVar7 + 0x18)) || (0 < iVar14)) {
              iVar18 = 0;
              iVar15 = 0;
              uVar13 = param_5;
              do {
                while (lVar10 = FUN_0143d76c(param_1,lVar7,uVar13,param_5,iVar14 == 0), lVar10 == 0)
                {
                  if (3 < *(int *)(param_1 + 0x10)) {
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
                  }
                  if (param_3 == 0) goto LAB_0143c8c0;
                  uVar6 = FUN_01325140(param_3,*(undefined8 *)StringLiteral_9168);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                             );
                  if (lVar10 == 0) goto LAB_0143c8c0;
                  FUN_017b46ec(lVar10,0);
                  *(undefined8 *)(lVar10 + 0x28) = uVar6;
                  *(int *)(lVar10 + 0x10) = iVar18;
                  *(int *)(lVar10 + 0x14) = iVar15;
                  lVar11 = FUN_00da4fb8(*(undefined8 *)
                                         Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                        *(undefined4 *)(lVar8 + 0x18));
                  lVar12 = FUN_00da4fb8(*(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                        *(undefined4 *)(lVar8 + 0x18));
                  if (0 < *(int *)(lVar8 + 0x18)) {
                    uVar16 = 0;
                    do {
                      FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_b8,*(undefined8 *)puVar3);
                      if (local_b8 == 0) goto LAB_0143c8c0;
                      iVar14 = *(int *)(local_b8 + 0x1c);
                      FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_b8,*(undefined8 *)puVar3);
                      if (local_b8 == 0) goto LAB_0143c8c0;
                      iVar19 = *(int *)(local_b8 + 0x20);
                      iVar15 = iVar18;
                      if (*(char *)(param_1 + 0x1c) == '\0') {
                        FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_b8,*(undefined8 *)puVar3);
                        if (local_b8 == 0) goto LAB_0143c8c0;
                        iVar15 = *(int *)(local_b8 + 0x14);
                      }
                      FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_b8,*(undefined8 *)puVar3);
                      if ((local_b8 == 0) ||
                         (FUN_0268834c((float)iVar14,(float)iVar19,(float)iVar15,
                                       (float)*(int *)(local_b8 + 0x18),&local_90,0), lVar11 == 0))
                      goto LAB_0143c8c0;
                      if (*(uint *)(lVar11 + 0x18) <= uVar16) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      puVar1 = (undefined8 *)(lVar11 + 0x20 + uVar16 * 0x10);
                      puVar1[1] = uStack_88;
                      *puVar1 = local_90;
                      FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_b8,*(undefined8 *)puVar3);
                      if ((local_b8 == 0) || (lVar12 == 0)) goto LAB_0143c8c0;
                      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_0143c8c4;
                      *(undefined4 *)(lVar12 + 0x20 + uVar16 * 4) = *(undefined4 *)(local_b8 + 0x10)
                      ;
                      uVar16 = uVar16 + 1;
                    } while ((long)uVar16 < (long)*(int *)(lVar8 + 0x18));
                  }
                  *(long *)(lVar10 + 0x20) = lVar11;
                  *(long *)(lVar10 + 0x30) = lVar12;
                  lVar11 = *(long *)PTR_DAT_033ebc68;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  uVar16 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
                  if ((uVar16 & 1) == 0) {
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                  }
                  else {
                    iVar14 = *(int *)(lVar8 + 0x18);
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                    if (0 < iVar14) {
                      FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar14,0);
                    }
                  }
                  lVar11 = *(long *)PTR_DAT_033ef6d8;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  uVar16 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
                  if ((uVar16 & 1) == 0) {
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                  }
                  else {
                    iVar14 = *(int *)(lVar9 + 0x18);
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                    if (0 < iVar14) {
                      FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar14,0);
                    }
                  }
                  FUN_00bbfcc8(lVar5,lVar10,*(undefined8 *)PTR_DAT_033f3448);
                  iVar14 = *(int *)(lVar8 + 0x18);
                  iVar15 = 0;
                  uVar13 = param_5;
                  if ((*(int *)(lVar7 + 0x18) < 1) && (iVar15 = 0, iVar14 < 1)) goto LAB_0143c648;
                }
                *(undefined4 *)(lVar10 + 0x1c) = 0;
                *(int *)(lVar10 + 0x20) = iVar15;
                FUN_00bbf6f0(lVar8,lVar10,
                             *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
                local_b8 = 0;
                local_b0 = 0;
                FUN_0268834c(0,(float)iVar15,(float)*(int *)(lVar10 + 0x14),
                             (float)*(int *)(lVar10 + 0x18),&local_b8,0);
                FUN_00bbfeb8(local_b8 & 0xffffffff,local_b8._4_4_,(undefined4)local_b0,
                             local_b0._4_4_,lVar9,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                            );
                iVar14 = *(int *)(lVar8 + 0x18);
                iVar15 = *(int *)(lVar10 + 0x18) + iVar15;
                if (iVar18 <= *(int *)(lVar10 + 0x14)) {
                  iVar18 = *(int *)(lVar10 + 0x14);
                }
                uVar13 = param_5 - iVar15;
              } while ((0 < *(int *)(lVar7 + 0x18)) || (0 < iVar14));
            }
LAB_0143c648:
            puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
            fVar2 = DAT_0293f7bc;
            if (0 < *(int *)(lVar5 + 0x18)) {
              iVar14 = 0;
              do {
                FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                if (local_b8 == 0) goto LAB_0143c8c0;
                uVar13 = *(uint *)(local_b8 + 0x14);
                local_78 = CONCAT44(local_78._4_4_,uVar13);
                FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                if (local_b8 == 0) goto LAB_0143c8c0;
                iVar15 = *(int *)(local_b8 + 0x10);
                if (param_4 <= *(int *)(local_b8 + 0x10)) {
                  iVar15 = param_4;
                }
                local_98 = CONCAT44(iVar15,(undefined4)local_98);
                if (*(char *)(param_1 + 0x14) != '\0') {
                  fVar17 = logf((float)(int)uVar13);
                  fVar17 = exp2f((float)(int)(fVar17 / fVar2));
                  uVar13 = 0x80000000;
                  if (fVar17 != INFINITY) {
                    uVar13 = (int)fVar17;
                  }
                  if (uVar13 < 3) {
                    uVar13 = 2;
                  }
                }
                if ((int)param_5 <= (int)uVar13) {
                  uVar13 = param_5;
                }
                local_78 = CONCAT44(local_78._4_4_,uVar13);
                FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                if (local_b8 == 0) goto LAB_0143c8c0;
                *(uint *)(local_b8 + 0x14) = uVar13;
                FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                if (local_b8 == 0) goto LAB_0143c8c0;
                iVar15 = *(int *)(local_b8 + 0x10);
                FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                if ((local_b8 == 0) || (param_3 == 0)) goto LAB_0143c8c0;
                iVar18 = *(int *)(local_b8 + 0x14);
                FUN_0132138c(param_3,0,&local_b8,*(undefined8 *)StringLiteral_4419);
                FUN_01435f44((float)iVar15,(float)iVar18,param_1,lVar8,param_4,param_5,local_b8,
                             param_6,param_7,param_8,param_9,(long)&local_98 + 4,&local_78,&local_98
                             ,(long)&local_a0 + 4,&local_a0,&local_a4);
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar5 + 0x18));
              if (0 < *(int *)(lVar5 + 0x18)) {
                iVar14 = 0;
                do {
                  FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                  uVar16 = local_b8;
                  uVar6 = FUN_0132138c(param_3,iVar14,&local_b8,*(undefined8 *)StringLiteral_4419);
                  FUN_01436444(uVar6,uVar16,local_b8);
                  FUN_0132138c(lVar5,iVar14,&local_b8,*(undefined8 *)puVar3);
                  if (local_b8 == 0) goto LAB_0143c8c0;
                  FUN_014359a0();
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)(lVar5 + 0x18));
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
LAB_0143c8c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


