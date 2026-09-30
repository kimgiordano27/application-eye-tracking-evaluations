/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 0143c034
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 *unaff_x19;
  int iVar12;
  uint uVar13;
  int iVar14;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  ulong uVar15;
  long unaff_x27;
  float fVar16;
  int iVar17;
  int iVar18;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  int iStack0000000000000078;
  int iStack000000000000007c;
  long in_stack_00000080;
  uint uStack000000000000008c;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  uint in_stack_000000d8;
  undefined4 in_stack_00000150;
  
  uVar4 = FUN_0176eb1c(&stack0x000000dc,0);
  uVar4 = FUN_015f5b28(*unaff_x19,uVar4,0);
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_02660dac(uVar4,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
  if ((lVar5 != 0) &&
     (uStack000000000000008c = unaff_w23, FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_8754),
     puVar3 = StringLiteral_4419, unaff_x27 != 0)) {
    if (0 < *(int *)(unaff_x27 + 0x18)) {
      iVar12 = 0;
      do {
        FUN_0132138c();
        fVar2 = fStack0000000000000098;
        FUN_0132138c();
        if (unaff_x22 == 0) goto LAB_0143c8c0;
        fVar16 = fStack000000000000009c;
        FUN_0132138c(unaff_x22,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
        uVar15 = _fStack0000000000000098;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
        if (lVar6 == 0) goto LAB_0143c8c0;
        iVar14 = -0x80000000;
        if (fVar2 != INFINITY) {
          iVar14 = (int)fVar2;
        }
        iVar17 = -0x80000000;
        if (fVar16 != INFINITY) {
          iVar17 = (int)fVar16;
        }
        FUN_017b46ec(lVar6,0);
        iVar14 = ((uint)(uVar15 >> 0x1f) & 0xfffffffe) + iVar14;
        iVar17 = iVar17 + (int)uVar15 * 2;
        if (iVar14 <= iStack0000000000000078) {
          iVar14 = iStack0000000000000078;
        }
        *(int *)(lVar6 + 0x10) = iVar12;
        *(int *)(lVar6 + 0x14) = iVar14;
        if (iVar17 <= iStack000000000000007c) {
          iVar17 = iStack000000000000007c;
        }
        *(int *)(lVar6 + 0x18) = iVar17;
        FUN_0132138c(unaff_x22,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
        *(uint *)(lVar6 + 0x14) = iVar14 - ((uint)(_fStack0000000000000098 >> 0x1f) & 0xfffffffe);
        FUN_00bbf6f0(lVar5,lVar6,*(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(unaff_x27 + 0x18));
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4789);
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
    if (lVar6 != 0) {
      FUN_017b46ec(lVar6,0);
      FUN_01324f34(lVar5,lVar6,*(undefined8 *)puVar3);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
      uVar13 = uStack000000000000008c;
      puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
      if (lVar6 != 0) {
        FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_8754);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar7 != 0) {
          FUN_01320e50(lVar7,*(undefined8 *)
                              Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
          puVar3 = System_Data_AutoIncrementBigInteger_TypeInfo;
          iVar12 = *(int *)(lVar6 + 0x18);
          if ((0 < *(int *)(lVar5 + 0x18)) || (0 < iVar12)) {
            iVar17 = 0;
            iVar14 = 0;
            uVar11 = uVar13;
            do {
              while (lVar8 = FUN_0143d76c(unaff_x24,lVar5,uVar11,uVar13,iVar12 == 0), lVar8 == 0) {
                if (3 < *(int *)(unaff_x24 + 0x10)) {
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
                }
                if (unaff_x22 == 0) goto LAB_0143c8c0;
                uVar4 = FUN_01325140(unaff_x22,*(undefined8 *)StringLiteral_9168);
                lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__
                                          );
                if (lVar8 == 0) goto LAB_0143c8c0;
                FUN_017b46ec(lVar8,0);
                *(undefined8 *)(lVar8 + 0x28) = uVar4;
                *(int *)(lVar8 + 0x10) = iVar17;
                *(int *)(lVar8 + 0x14) = iVar14;
                lVar9 = FUN_00da4fb8(*(undefined8 *)
                                      Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                     *(undefined4 *)(lVar6 + 0x18));
                lVar10 = FUN_00da4fb8(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                      *(undefined4 *)(lVar6 + 0x18));
                if (0 < *(int *)(lVar6 + 0x18)) {
                  uVar15 = 0;
                  do {
                    FUN_0132138c(lVar6,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                    if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                    iVar12 = *(int *)(_fStack0000000000000098 + 0x1c);
                    FUN_0132138c(lVar6,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                    if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                    iVar18 = *(int *)(_fStack0000000000000098 + 0x20);
                    iVar14 = iVar17;
                    if (*(char *)(unaff_x24 + 0x1c) == '\0') {
                      FUN_0132138c(lVar6,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3)
                      ;
                      if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                      iVar14 = *(int *)(_fStack0000000000000098 + 0x14);
                    }
                    FUN_0132138c(lVar6,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                    if ((_fStack0000000000000098 == 0) ||
                       (FUN_0268834c((float)iVar12,(float)iVar18,(float)iVar14,
                                     (float)*(int *)(_fStack0000000000000098 + 0x18),
                                     &stack0x000000c0,0), lVar9 == 0)) goto LAB_0143c8c0;
                    if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar15 * 0x10);
                    puVar1[1] = in_stack_000000c8;
                    *puVar1 = in_stack_000000c0;
                    FUN_0132138c(lVar6,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                    if ((_fStack0000000000000098 == 0) || (lVar10 == 0)) goto LAB_0143c8c0;
                    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0143c8c4;
                    *(undefined4 *)(lVar10 + 0x20 + uVar15 * 4) =
                         *(undefined4 *)(_fStack0000000000000098 + 0x10);
                    uVar15 = uVar15 + 1;
                  } while ((long)uVar15 < (long)*(int *)(lVar6 + 0x18));
                }
                *(long *)(lVar8 + 0x20) = lVar9;
                *(long *)(lVar8 + 0x30) = lVar10;
                lVar9 = *(long *)PTR_DAT_033ebc68;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                uVar15 = FUN_00da5b18(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
                uVar13 = uStack000000000000008c;
                if ((uVar15 & 1) == 0) {
                  *(undefined4 *)(lVar6 + 0x18) = 0;
                }
                else {
                  iVar12 = *(int *)(lVar6 + 0x18);
                  *(undefined4 *)(lVar6 + 0x18) = 0;
                  if (0 < iVar12) {
                    FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar12,0);
                  }
                }
                lVar9 = *(long *)PTR_DAT_033ef6d8;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                uVar15 = FUN_00da5b18(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
                if ((uVar15 & 1) == 0) {
                  *(undefined4 *)(lVar7 + 0x18) = 0;
                }
                else {
                  iVar12 = *(int *)(lVar7 + 0x18);
                  *(undefined4 *)(lVar7 + 0x18) = 0;
                  if (0 < iVar12) {
                    FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar12,0);
                  }
                }
                FUN_00bbfcc8(in_stack_00000080,lVar8,*(undefined8 *)PTR_DAT_033f3448);
                iVar12 = *(int *)(lVar6 + 0x18);
                iVar14 = 0;
                uVar11 = uVar13;
                if ((*(int *)(lVar5 + 0x18) < 1) && (iVar14 = 0, iVar12 < 1)) goto LAB_0143c648;
              }
              *(undefined4 *)(lVar8 + 0x1c) = 0;
              *(int *)(lVar8 + 0x20) = iVar14;
              FUN_00bbf6f0(lVar6,lVar8,
                           *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
              _fStack0000000000000098 = 0;
              _uStack00000000000000a0 = 0;
              FUN_0268834c(0,(float)iVar14,(float)*(int *)(lVar8 + 0x14),
                           (float)*(int *)(lVar8 + 0x18),&stack0x00000098,0);
              FUN_00bbfeb8(_fStack0000000000000098 & 0xffffffff,fStack000000000000009c,
                           uStack00000000000000a0,uStack00000000000000a4,lVar7,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                          );
              iVar12 = *(int *)(lVar6 + 0x18);
              iVar14 = *(int *)(lVar8 + 0x18) + iVar14;
              if (iVar17 <= *(int *)(lVar8 + 0x14)) {
                iVar17 = *(int *)(lVar8 + 0x14);
              }
              uVar11 = uVar13 - iVar14;
            } while ((0 < *(int *)(lVar5 + 0x18)) || (0 < iVar12));
          }
LAB_0143c648:
          puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
          fVar2 = DAT_0293f7bc;
          if (0 < *(int *)(in_stack_00000080 + 0x18)) {
            iVar12 = 0;
            do {
              FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
              if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
              uVar13 = *(uint *)(_fStack0000000000000098 + 0x14);
              in_stack_000000d8 = uVar13;
              FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
              if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
              in_stack_000000b8._4_4_ = *(int *)(_fStack0000000000000098 + 0x10);
              if (in_stack_00000070._4_4_ <= *(int *)(_fStack0000000000000098 + 0x10)) {
                in_stack_000000b8._4_4_ = in_stack_00000070._4_4_;
              }
              if (*(char *)(unaff_x24 + 0x14) != '\0') {
                fVar16 = logf((float)(int)uVar13);
                fVar16 = exp2f((float)(int)(fVar16 / fVar2));
                uVar13 = 0x80000000;
                if (fVar16 != INFINITY) {
                  uVar13 = (int)fVar16;
                }
                if (uVar13 < 3) {
                  uVar13 = 2;
                }
              }
              if ((int)uStack000000000000008c <= (int)uVar13) {
                uVar13 = uStack000000000000008c;
              }
              in_stack_000000d8 = uVar13;
              FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
              if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
              *(uint *)(_fStack0000000000000098 + 0x14) = uVar13;
              FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
              if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
              iVar14 = *(int *)(_fStack0000000000000098 + 0x10);
              FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
              if ((_fStack0000000000000098 == 0) || (unaff_x22 == 0)) goto LAB_0143c8c0;
              iVar17 = *(int *)(_fStack0000000000000098 + 0x14);
              FUN_0132138c(unaff_x22,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
              FUN_01435f44((float)iVar14,(float)iVar17,unaff_x24,lVar6,in_stack_00000070._4_4_,
                           uStack000000000000008c,_fStack0000000000000098,iStack0000000000000078,
                           iStack000000000000007c,in_stack_00000060._4_4_);
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(in_stack_00000080 + 0x18));
            if (0 < *(int *)(in_stack_00000080 + 0x18)) {
              iVar12 = 0;
              do {
                FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
                uVar15 = _fStack0000000000000098;
                uVar4 = FUN_0132138c(unaff_x22,iVar12,&stack0x00000098,
                                     *(undefined8 *)StringLiteral_4419);
                FUN_01436444(uVar4,uVar15,_fStack0000000000000098);
                FUN_0132138c(in_stack_00000080,iVar12,&stack0x00000098,*(undefined8 *)puVar3);
                if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                FUN_014359a0();
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(in_stack_00000080 + 0x18));
            }
          }
          FUN_01325140(in_stack_00000080,
                       *(undefined8 *)
                        Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
                      );
          return;
        }
      }
    }
  }
LAB_0143c8c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


