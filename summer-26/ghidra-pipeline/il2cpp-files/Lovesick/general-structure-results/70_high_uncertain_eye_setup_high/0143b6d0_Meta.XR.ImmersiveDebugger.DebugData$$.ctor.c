/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugData$$.ctor
ENTRY_POINT: 0143b6d0
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


void Meta_XR_ImmersiveDebugger_DebugData___ctor(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int in_w8;
  int iVar11;
  int in_w10;
  int iVar12;
  uint uVar13;
  int unaff_w20;
  int iVar14;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar15;
  ulong unaff_x25;
  long unaff_x27;
  float unaff_w28;
  int unaff_w29;
  float fVar16;
  int iVar17;
  int iVar18;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000070;
  int iStack0000000000000074;
  long in_stack_00000078;
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
    if (in_w8 <= in_w10) {
      in_w8 = in_w10;
    }
    iVar14 = unaff_w22 + (int)unaff_x25 * 2;
    *(int *)(unaff_x21 + 0x10) = unaff_w20;
    *(int *)(unaff_x21 + 0x14) = in_w8;
    if (iVar14 <= iStack0000000000000074) {
      iVar14 = iStack0000000000000074;
    }
    *(int *)(unaff_x21 + 0x18) = iVar14;
    FUN_0132138c();
    *(int *)(unaff_x21 + 0x18) = iVar14 + (int)fStack0000000000000098 * -2;
    FUN_00bbf6f0(in_stack_00000060,unaff_x21,
                 *(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x27 + 0x18) <= unaff_w20) break;
    FUN_0132138c();
    fVar2 = fStack0000000000000098;
    FUN_0132138c();
    if (unaff_x23 == 0) goto LAB_0143be20;
    fVar16 = fStack000000000000009c;
    FUN_0132138c();
    unaff_x25 = _fStack0000000000000098;
    unaff_x21 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
    if (unaff_x21 == 0) goto LAB_0143be20;
    iVar14 = unaff_w29;
    if (fVar2 != unaff_w28) {
      iVar14 = (int)fVar2;
    }
    unaff_w22 = unaff_w29;
    if (fVar16 != unaff_w28) {
      unaff_w22 = (int)fVar16;
    }
    FUN_017b46ec(unaff_x21,0);
    in_w8 = ((uint)(unaff_x25 >> 0x1f) & 0xfffffffe) + iVar14;
    in_w10 = iStack0000000000000070;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5f38);
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    FUN_01324f34(in_stack_00000060,lVar5,*(undefined8 *)puVar3);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    puVar3 = System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_8754);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar6 != 0) {
        FUN_01320e50(lVar6,*(undefined8 *)
                            Method_System_Collections_Generic_List<HashSet<int>>_GetEnumerator__);
        puVar3 = System_Data_AutoIncrementBigInteger_TypeInfo;
        iVar14 = *(int *)(lVar5 + 0x18);
        if ((*(int *)(in_stack_00000060 + 0x18) < 1) && (iVar14 < 1)) goto LAB_0143bbac;
        iStack0000000000000058 = 0;
        iVar17 = 0;
        iVar12 = iStack0000000000000058;
        uVar13 = in_stack_00000088._4_4_;
        goto LAB_0143b800;
      }
    }
  }
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0143b800:
  do {
    lVar7 = FUN_0143d76c(in_stack_00000090,in_stack_00000060,uVar13,in_stack_00000088._4_4_,
                         iVar14 == 0);
    if (lVar7 == 0) {
      if (3 < *(int *)(in_stack_00000090 + 0x10)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
      }
      if (in_stack_00000078 == 0) goto LAB_0143be20;
      uVar8 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (lVar7 == 0) goto LAB_0143be20;
      FUN_017b46ec(lVar7,0);
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      *(int *)(lVar7 + 0x10) = iStack0000000000000058;
      *(int *)(lVar7 + 0x14) = iVar17;
      lVar9 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(undefined4 *)(lVar5 + 0x18));
      lVar10 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(lVar5 + 0x18));
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar15 = 0;
        do {
          FUN_0132138c(lVar5,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
          if (_fStack0000000000000098 == 0) goto LAB_0143be20;
          iVar14 = *(int *)(_fStack0000000000000098 + 0x1c);
          FUN_0132138c(lVar5,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
          if (_fStack0000000000000098 == 0) goto LAB_0143be20;
          iVar12 = *(int *)(_fStack0000000000000098 + 0x20);
          FUN_0132138c(lVar5,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
          if (_fStack0000000000000098 == 0) goto LAB_0143be20;
          iVar18 = *(int *)(_fStack0000000000000098 + 0x14);
          iVar11 = iVar17;
          if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
            FUN_0132138c(lVar5,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
            if (_fStack0000000000000098 == 0) goto LAB_0143be20;
            iVar11 = *(int *)(_fStack0000000000000098 + 0x18);
          }
          FUN_0268834c((float)iVar14,(float)iVar12,(float)iVar18,(float)iVar11,&stack0x000000c0,0);
          if (lVar9 == 0) goto LAB_0143be20;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar15 * 0x10);
          puVar1[1] = in_stack_000000c8;
          *puVar1 = in_stack_000000c0;
          FUN_0132138c(lVar5,uVar15 & 0xffffffff,&stack0x00000098,*(undefined8 *)puVar3);
          if ((_fStack0000000000000098 == 0) || (lVar10 == 0)) goto LAB_0143be20;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0143be24;
          *(undefined4 *)(lVar10 + 0x20 + uVar15 * 4) =
               *(undefined4 *)(_fStack0000000000000098 + 0x10);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)*(int *)(lVar5 + 0x18));
      }
      *(long *)(lVar7 + 0x20) = lVar9;
      *(long *)(lVar7 + 0x30) = lVar10;
      FUN_014359a0(lVar7);
      lVar9 = *(long *)PTR_DAT_033ebc68;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      uVar15 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      else {
        iVar14 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if (0 < iVar14) {
          FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar14,0);
        }
      }
      lVar9 = *(long *)PTR_DAT_033ef6d8;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      uVar15 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar6 + 0x18) = 0;
      }
      else {
        iVar14 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        if (0 < iVar14) {
          FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar14,0);
        }
      }
      FUN_00bbfcc8(in_stack_00000080,lVar7,*(undefined8 *)PTR_DAT_033f3448);
      iVar14 = *(int *)(lVar5 + 0x18);
      iVar12 = 0;
      iVar17 = 0;
      uVar13 = in_stack_00000088._4_4_;
      if (0 < *(int *)(in_stack_00000060 + 0x18)) goto LAB_0143b800;
      iVar17 = 0;
    }
    else {
      *(int *)(lVar7 + 0x1c) = iVar12;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      FUN_00bbf6f0(lVar5,lVar7,*(undefined8 *)Method_System_Nullable<ErrorCode>_get_HasValue__);
      _fStack0000000000000098 = 0;
      _uStack00000000000000a0 = 0;
      FUN_0268834c((float)iVar12,0,(float)*(int *)(lVar7 + 0x14),(float)*(int *)(lVar7 + 0x18),
                   &stack0x00000098,0);
      FUN_00bbfeb8(_fStack0000000000000098 & 0xffffffff,fStack000000000000009c,
                   uStack00000000000000a0,uStack00000000000000a4,lVar6,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                  );
      iVar14 = *(int *)(lVar5 + 0x18);
      iVar12 = *(int *)(lVar7 + 0x14) + iVar12;
      if (iVar17 <= *(int *)(lVar7 + 0x18)) {
        iVar17 = *(int *)(lVar7 + 0x18);
      }
      uVar13 = in_stack_00000088._4_4_ - iVar12;
      iStack0000000000000058 = iVar12;
      if (0 < *(int *)(in_stack_00000060 + 0x18)) goto LAB_0143b800;
    }
  } while (0 < iVar14);
LAB_0143bbac:
  puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
  fVar2 = DAT_0293f7bc;
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar14 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
      uVar13 = *(uint *)(_fStack0000000000000098 + 0x10);
      in_stack_000000d8 = uVar13;
      FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
      in_stack_000000b8._4_4_ = *(int *)(_fStack0000000000000098 + 0x14);
      if (in_stack_00000068._4_4_ <= *(int *)(_fStack0000000000000098 + 0x14)) {
        in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
      }
      if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
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
      if ((int)in_stack_00000088._4_4_ <= (int)uVar13) {
        uVar13 = in_stack_00000088._4_4_;
      }
      in_stack_000000d8 = uVar13;
      FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
      *(uint *)(_fStack0000000000000098 + 0x10) = uVar13;
      FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
      if (_fStack0000000000000098 == 0) goto LAB_0143be20;
      iVar12 = *(int *)(_fStack0000000000000098 + 0x10);
      FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
      if ((_fStack0000000000000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
      iVar17 = *(int *)(_fStack0000000000000098 + 0x14);
      FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
      FUN_01435f44((float)iVar12,(float)iVar17,in_stack_00000090,lVar5,in_stack_00000088._4_4_,
                   in_stack_00000068._4_4_,_fStack0000000000000098,iStack0000000000000070,
                   iStack0000000000000074,uStack000000000000005c);
      puVar4 = StringLiteral_4419;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(in_stack_00000080 + 0x18));
    if (0 < *(int *)(in_stack_00000080 + 0x18)) {
      iVar14 = 0;
      do {
        FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
        uVar15 = _fStack0000000000000098;
        uVar8 = FUN_0132138c(in_stack_00000078,iVar14,&stack0x00000098,*(undefined8 *)puVar4);
        FUN_01436444(uVar8,uVar15,_fStack0000000000000098);
        FUN_0132138c(in_stack_00000080,iVar14,&stack0x00000098,*(undefined8 *)puVar3);
        if (_fStack0000000000000098 == 0) goto LAB_0143be20;
        FUN_014359a0();
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(in_stack_00000080 + 0x18));
    }
  }
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


