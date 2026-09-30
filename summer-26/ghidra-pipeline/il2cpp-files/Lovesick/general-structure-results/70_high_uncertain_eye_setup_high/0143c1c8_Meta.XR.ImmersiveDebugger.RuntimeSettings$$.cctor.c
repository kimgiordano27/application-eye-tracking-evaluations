/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$.cctor
ENTRY_POINT: 0143c1c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings___cctor(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int unaff_w20;
  int iVar11;
  int iVar12;
  long unaff_x23;
  ulong uVar13;
  undefined8 *unaff_x25;
  long unaff_x27;
  float unaff_w28;
  int unaff_w29;
  float fVar14;
  int iVar15;
  int iVar16;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  int iStack0000000000000078;
  int iStack000000000000007c;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  uint in_stack_000000d8;
  undefined4 in_stack_00000150;
  
  while( true ) {
    FUN_00bbf6f0(in_stack_00000068,param_2,
                 *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x27 + 0x18) <= unaff_w20) break;
    FUN_0132138c();
    fVar2 = fStack0000000000000098;
    FUN_0132138c();
    if (unaff_x23 == 0) goto LAB_0143c8c0;
    fVar14 = fStack000000000000009c;
    FUN_0132138c(unaff_x23,unaff_w20,&stack0x00000098,*unaff_x25);
    uVar13 = _fStack0000000000000098;
    param_2 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
    if (param_2 == 0) goto LAB_0143c8c0;
    iVar11 = unaff_w29;
    if (fVar2 != unaff_w28) {
      iVar11 = (int)fVar2;
    }
    iVar12 = unaff_w29;
    if (fVar14 != unaff_w28) {
      iVar12 = (int)fVar14;
    }
    FUN_017b46ec(param_2,0);
    iVar11 = ((uint)(uVar13 >> 0x1f) & 0xfffffffe) + iVar11;
    iVar12 = iVar12 + (int)uVar13 * 2;
    if (iVar11 <= iStack0000000000000078) {
      iVar11 = iStack0000000000000078;
    }
    *(int *)(param_2 + 0x10) = unaff_w20;
    *(int *)(param_2 + 0x14) = iVar11;
    if (iVar12 <= iStack000000000000007c) {
      iVar12 = iStack000000000000007c;
    }
    *(int *)(param_2 + 0x18) = iVar12;
    FUN_0132138c(unaff_x23,unaff_w20,&stack0x00000098,*unaff_x25);
    *(uint *)(param_2 + 0x14) = iVar11 - ((uint)(_fStack0000000000000098 >> 0x1f) & 0xfffffffe);
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4789);
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    FUN_01324f34(in_stack_00000068,lVar4,*(undefined8 *)puVar3);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
    if (lVar4 != 0) {
      FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_8754);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar5 != 0) {
        FUN_01320e50(lVar5,*(undefined8 *)
                            Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
        puVar3 = System_Data_AutoIncrementBigInteger_TypeInfo;
        iVar11 = *(int *)(lVar4 + 0x18);
        if ((0 < *(int *)(in_stack_00000068 + 0x18)) || (0 < iVar11)) {
          iVar15 = 0;
          iVar12 = 0;
          uVar10 = in_stack_00000088._4_4_;
          do {
            while (lVar6 = FUN_0143d76c(in_stack_00000090,in_stack_00000068,uVar10,
                                        in_stack_00000088._4_4_,iVar11 == 0), lVar6 == 0) {
              if (3 < *(int *)(in_stack_00000090 + 0x10)) {
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
              }
              if (unaff_x23 == 0) goto LAB_0143c8c0;
              uVar7 = FUN_01325140(unaff_x23,*(undefined8 *)StringLiteral_9168);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__)
              ;
              if (lVar6 == 0) goto LAB_0143c8c0;
              FUN_017b46ec(lVar6,0);
              *(undefined8 *)(lVar6 + 0x28) = uVar7;
              *(int *)(lVar6 + 0x10) = iVar15;
              *(int *)(lVar6 + 0x14) = iVar12;
              lVar8 = FUN_00da4fb8(*(undefined8 *)
                                    Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                                   *(undefined4 *)(lVar4 + 0x18));
              lVar9 = FUN_00da4fb8(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                   *(undefined4 *)(lVar4 + 0x18));
              if (0 < *(int *)(lVar4 + 0x18)) {
                uVar13 = 0;
                do {
                  FUN_0132138c(lVar4,uVar13 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                  if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                  iVar11 = *(int *)(_fStack0000000000000098 + 0x1c);
                  FUN_0132138c(lVar4,uVar13 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                  if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                  iVar16 = *(int *)(_fStack0000000000000098 + 0x20);
                  iVar12 = iVar15;
                  if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
                    FUN_0132138c(lVar4,uVar13 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                    if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
                    iVar12 = *(int *)(_fStack0000000000000098 + 0x14);
                  }
                  FUN_0132138c(lVar4,uVar13 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                  if ((_fStack0000000000000098 == 0) ||
                     (FUN_0268834c((float)iVar11,(float)iVar16,(float)iVar12,
                                   (float)*(int *)(_fStack0000000000000098 + 0x18),&stack0x000000c0,
                                   0), lVar8 == 0)) goto LAB_0143c8c0;
                  if (*(uint *)(lVar8 + 0x18) <= uVar13) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  puVar1 = (undefined8 *)(lVar8 + 0x20 + uVar13 * 0x10);
                  puVar1[1] = in_stack_000000c8;
                  *puVar1 = in_stack_000000c0;
                  FUN_0132138c(lVar4,uVar13 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
                  if ((_fStack0000000000000098 == 0) || (lVar9 == 0)) goto LAB_0143c8c0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_0143c8c4;
                  *(undefined4 *)(lVar9 + 0x20 + uVar13 * 4) =
                       *(undefined4 *)(_fStack0000000000000098 + 0x10);
                  uVar13 = uVar13 + 1;
                } while ((long)uVar13 < (long)*(int *)(lVar4 + 0x18));
              }
              *(long *)(lVar6 + 0x20) = lVar8;
              *(long *)(lVar6 + 0x30) = lVar9;
              lVar8 = *(long *)PTR_DAT_033ebc68;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              uVar13 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 200)
                                   );
              if ((uVar13 & 1) == 0) {
                *(undefined4 *)(lVar4 + 0x18) = 0;
              }
              else {
                iVar11 = *(int *)(lVar4 + 0x18);
                *(undefined4 *)(lVar4 + 0x18) = 0;
                if (0 < iVar11) {
                  FUN_0179519c(*(undefined8 *)(lVar4 + 0x10),0,iVar11,0);
                }
              }
              lVar8 = *(long *)PTR_DAT_033ef6d8;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              uVar13 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 200)
                                   );
              if ((uVar13 & 1) == 0) {
                *(undefined4 *)(lVar5 + 0x18) = 0;
              }
              else {
                iVar11 = *(int *)(lVar5 + 0x18);
                *(undefined4 *)(lVar5 + 0x18) = 0;
                if (0 < iVar11) {
                  FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar11,0);
                }
              }
              FUN_00bbfcc8(in_stack_00000080,lVar6,*(undefined8 *)PTR_DAT_033f3448);
              iVar11 = *(int *)(lVar4 + 0x18);
              iVar12 = 0;
              uVar10 = in_stack_00000088._4_4_;
              if ((*(int *)(in_stack_00000068 + 0x18) < 1) && (iVar12 = 0, iVar11 < 1))
              goto LAB_0143c648;
            }
            *(undefined4 *)(lVar6 + 0x1c) = 0;
            *(int *)(lVar6 + 0x20) = iVar12;
            FUN_00bbf6f0(lVar4,lVar6,*(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__
                        );
            _fStack0000000000000098 = 0;
            _uStack00000000000000a0 = 0;
            FUN_0268834c(0,(float)iVar12,(float)*(int *)(lVar6 + 0x14),(float)*(int *)(lVar6 + 0x18)
                         ,&stack0x00000098,0);
            FUN_00bbfeb8(_fStack0000000000000098 & 0xffffffff,fStack000000000000009c,
                         uStack00000000000000a0,uStack00000000000000a4,lVar5,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                        );
            iVar11 = *(int *)(lVar4 + 0x18);
            iVar12 = *(int *)(lVar6 + 0x18) + iVar12;
            if (iVar15 <= *(int *)(lVar6 + 0x14)) {
              iVar15 = *(int *)(lVar6 + 0x14);
            }
            uVar10 = in_stack_00000088._4_4_ - iVar12;
          } while ((0 < *(int *)(in_stack_00000068 + 0x18)) || (0 < iVar11));
        }
LAB_0143c648:
        puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
        fVar2 = DAT_0293f7bc;
        if (0 < *(int *)(in_stack_00000080 + 0x18)) {
          iVar11 = 0;
          do {
            FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
            if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
            uVar10 = *(uint *)(_fStack0000000000000098 + 0x14);
            in_stack_000000d8 = uVar10;
            FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
            if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
            in_stack_000000b8._4_4_ = *(int *)(_fStack0000000000000098 + 0x10);
            if (in_stack_00000070._4_4_ <= *(int *)(_fStack0000000000000098 + 0x10)) {
              in_stack_000000b8._4_4_ = in_stack_00000070._4_4_;
            }
            if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
              fVar14 = logf((float)(int)uVar10);
              fVar14 = exp2f((float)(int)(fVar14 / fVar2));
              uVar10 = 0x80000000;
              if (fVar14 != INFINITY) {
                uVar10 = (int)fVar14;
              }
              if (uVar10 < 3) {
                uVar10 = 2;
              }
            }
            if ((int)in_stack_00000088._4_4_ <= (int)uVar10) {
              uVar10 = in_stack_00000088._4_4_;
            }
            in_stack_000000d8 = uVar10;
            FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
            if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
            *(uint *)(_fStack0000000000000098 + 0x14) = uVar10;
            FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
            if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
            iVar12 = *(int *)(_fStack0000000000000098 + 0x10);
            FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
            if ((_fStack0000000000000098 == 0) || (unaff_x23 == 0)) goto LAB_0143c8c0;
            iVar15 = *(int *)(_fStack0000000000000098 + 0x14);
            FUN_0132138c(unaff_x23,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
            FUN_01435f44((float)iVar12,(float)iVar15,in_stack_00000090,lVar4,in_stack_00000070._4_4_
                         ,in_stack_00000088._4_4_,_fStack0000000000000098,iStack0000000000000078,
                         iStack000000000000007c,in_stack_00000060._4_4_);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(in_stack_00000080 + 0x18));
          if (0 < *(int *)(in_stack_00000080 + 0x18)) {
            iVar11 = 0;
            do {
              FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
              uVar13 = _fStack0000000000000098;
              uVar7 = FUN_0132138c(unaff_x23,iVar11,&stack0x00000098,
                                   *(undefined8 *)StringLiteral_4419);
              FUN_01436444(uVar7,uVar13,_fStack0000000000000098);
              FUN_0132138c(in_stack_00000080,iVar11,&stack0x00000098,*(undefined8 *)puVar3);
              if (_fStack0000000000000098 == 0) goto LAB_0143c8c0;
              FUN_014359a0();
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(in_stack_00000080 + 0x18));
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
LAB_0143c8c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


