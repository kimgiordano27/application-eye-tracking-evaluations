/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_FollowOverride
ENTRY_POINT: 0143baf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_FollowOverride(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int in_w8;
  int in_w9;
  int iVar9;
  uint uVar10;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar11;
  long unaff_x23;
  int iVar12;
  long unaff_x25;
  long unaff_x27;
  float fVar13;
  int iVar14;
  int iVar15;
  long in_stack_00000050;
  int in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  ulong in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  uint in_stack_000000d8;
  undefined4 in_stack_00000150;
  
  while( true ) {
    iVar9 = 0;
    iVar12 = 0;
    uVar10 = unaff_w21;
    if (in_w9 < 1) {
      iVar12 = 0;
      iVar9 = 0;
      fVar2 = DAT_0293f7bc;
      puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
      goto joined_r0x0143bb14;
    }
    while (lVar4 = FUN_0143d76c(unaff_x22,unaff_x23,uVar10,unaff_w21,in_w8 == 0), lVar4 != 0) {
      *(int *)(lVar4 + 0x1c) = iVar9;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      FUN_00bbf6f0();
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      FUN_0268834c((float)iVar9,0,(float)*(int *)(lVar4 + 0x14),(float)*(int *)(lVar4 + 0x18),
                   &stack0x00000098,0);
      FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                   uStack00000000000000a4,unaff_x25,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                  );
      in_w8 = *(int *)(unaff_x27 + 0x18);
      iVar9 = *(int *)(lVar4 + 0x14) + iVar9;
      if (iVar12 <= *(int *)(lVar4 + 0x18)) {
        iVar12 = *(int *)(lVar4 + 0x18);
      }
      uVar10 = unaff_w21 - iVar9;
      in_stack_00000058 = iVar9;
      fVar2 = DAT_0293f7bc;
      puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
      if (*(int *)(unaff_x23 + 0x18) < 1) {
joined_r0x0143bb14:
        DAT_0293f7bc = fVar2;
        Method_System_Globalization_IdnMapping_ToUnicode__ = (undefined *)puVar1;
        if (in_w8 < 1) {
          if (*(int *)(in_stack_00000080 + 0x18) < 1) goto LAB_0143bde4;
          iVar9 = 0;
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled;
        }
      }
    }
    if (3 < *(int *)(unaff_x22 + 0x10)) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
    }
    if (in_stack_00000078 == 0) break;
    uVar7 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    if (lVar4 == 0) break;
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(int *)(lVar4 + 0x10) = in_stack_00000058;
    *(int *)(lVar4 + 0x14) = iVar12;
    lVar5 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                         *(undefined4 *)(unaff_x27 + 0x18));
    lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                         *(undefined4 *)(unaff_x27 + 0x18));
    if (0 < *(int *)(unaff_x27 + 0x18)) {
      uVar11 = 0;
      do {
        FUN_0132138c();
        if (in_stack_00000098 == 0) goto LAB_0143be20;
        iVar9 = *(int *)(in_stack_00000098 + 0x1c);
        FUN_0132138c();
        if (in_stack_00000098 == 0) goto LAB_0143be20;
        iVar14 = *(int *)(in_stack_00000098 + 0x20);
        FUN_0132138c();
        if (in_stack_00000098 == 0) goto LAB_0143be20;
        iVar15 = *(int *)(in_stack_00000098 + 0x14);
        iVar8 = iVar12;
        if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar8 = *(int *)(in_stack_00000098 + 0x18);
        }
        FUN_0268834c((float)iVar9,(float)iVar14,(float)iVar15,(float)iVar8,&stack0x000000c0,0);
        if (lVar5 == 0) goto LAB_0143be20;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar11 * 0x10);
        puVar1[1] = in_stack_000000c8;
        *puVar1 = in_stack_000000c0;
        FUN_0132138c();
        if ((in_stack_00000098 == 0) || (lVar6 == 0)) goto LAB_0143be20;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0143be24;
        *(undefined4 *)(lVar6 + 0x20 + uVar11 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(unaff_x27 + 0x18));
    }
    *(long *)(lVar4 + 0x20) = lVar5;
    *(long *)(lVar4 + 0x30) = lVar6;
    FUN_014359a0(lVar4);
    lVar5 = *(long *)PTR_DAT_033ebc68;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(unaff_x27 + 0x18) = 0;
    }
    else {
      iVar9 = *(int *)(unaff_x27 + 0x18);
      *(undefined4 *)(unaff_x27 + 0x18) = 0;
      if (0 < iVar9) {
        FUN_0179519c(*(undefined8 *)(unaff_x27 + 0x10),0,iVar9,0);
      }
    }
    lVar5 = *(long *)PTR_DAT_033ef6d8;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
    }
    else {
      iVar9 = *(int *)(in_stack_00000050 + 0x18);
      *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
      if (0 < iVar9) {
        FUN_0179519c(*(undefined8 *)(in_stack_00000050 + 0x10),0,iVar9,0);
      }
    }
    FUN_00bbfcc8(in_stack_00000080,lVar4,*(undefined8 *)PTR_DAT_033f3448);
    in_w9 = *(int *)(in_stack_00000060 + 0x18);
    in_w8 = *(int *)(unaff_x27 + 0x18);
    unaff_x22 = in_stack_00000090;
    unaff_x23 = in_stack_00000060;
    unaff_x25 = in_stack_00000050;
    unaff_w21 = in_stack_00000088._4_4_;
  }
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar10 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar10;
    FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar13 = logf((float)(int)uVar10);
      fVar13 = exp2f((float)(int)(fVar13 / fVar2));
      uVar10 = 0x80000000;
      if (fVar13 != INFINITY) {
        uVar10 = (int)fVar13;
      }
      if (uVar10 < 3) {
        uVar10 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar10) {
      uVar10 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar10;
    FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar10;
    FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar12 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar14 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar12,(float)iVar14,in_stack_00000090);
    puVar3 = StringLiteral_4419;
    iVar9 = iVar9 + 1;
    if (*(int *)(in_stack_00000080 + 0x18) <= iVar9) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled:
    FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
  }
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar9 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
      uVar11 = in_stack_00000098;
      uVar7 = FUN_0132138c(in_stack_00000078,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      FUN_01436444(uVar7,uVar11,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*puVar1);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      FUN_014359a0();
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_stack_00000080 + 0x18));
  }
LAB_0143bde4:
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


