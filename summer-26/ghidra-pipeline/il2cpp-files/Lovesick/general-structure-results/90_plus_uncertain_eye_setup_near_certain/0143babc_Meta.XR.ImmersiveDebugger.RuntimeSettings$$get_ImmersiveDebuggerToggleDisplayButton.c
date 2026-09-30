/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerToggleDisplayButton
ENTRY_POINT: 0143babc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerToggleDisplayButton
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar10;
  long unaff_x23;
  int iVar11;
  long unaff_x25;
  long unaff_x27;
  float fVar12;
  int iVar13;
  int iVar14;
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
  
  do {
    FUN_0179519c(*(undefined8 *)(unaff_x25 + 0x10),0,param_3,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowInspectors:
    do {
      FUN_00bbfcc8(unaff_x19,unaff_x20,*(undefined8 *)PTR_DAT_033f3448);
      iVar13 = *(int *)(unaff_x27 + 0x18);
      iVar8 = 0;
      iVar11 = 0;
      uVar9 = unaff_w21;
      if (*(int *)(unaff_x23 + 0x18) < 1) {
        iVar11 = 0;
        iVar8 = 0;
        fVar2 = DAT_0293f7bc;
        puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
        goto joined_r0x0143bb14;
      }
      while (lVar4 = FUN_0143d76c(unaff_x22,unaff_x23,uVar9,unaff_w21,iVar13 == 0), lVar4 != 0) {
        *(int *)(lVar4 + 0x1c) = iVar8;
        *(undefined4 *)(lVar4 + 0x20) = 0;
        FUN_00bbf6f0();
        in_stack_00000098 = 0;
        _uStack00000000000000a0 = 0;
        FUN_0268834c((float)iVar8,0,(float)*(int *)(lVar4 + 0x14),(float)*(int *)(lVar4 + 0x18),
                     &stack0x00000098,0);
        FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                     uStack00000000000000a4,unaff_x25,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                    );
        iVar13 = *(int *)(unaff_x27 + 0x18);
        iVar8 = *(int *)(lVar4 + 0x14) + iVar8;
        if (iVar11 <= *(int *)(lVar4 + 0x18)) {
          iVar11 = *(int *)(lVar4 + 0x18);
        }
        uVar9 = unaff_w21 - iVar8;
        in_stack_00000058 = iVar8;
        fVar2 = DAT_0293f7bc;
        puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
        if (*(int *)(unaff_x23 + 0x18) < 1) {
joined_r0x0143bb14:
          DAT_0293f7bc = fVar2;
          Method_System_Globalization_IdnMapping_ToUnicode__ = (undefined *)puVar1;
          if (iVar13 < 1) {
            if (*(int *)(in_stack_00000080 + 0x18) < 1) goto LAB_0143bde4;
            iVar8 = 0;
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
      if (in_stack_00000078 == 0) goto LAB_0143be20;
      uVar6 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
      unaff_x20 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (unaff_x20 == 0) goto LAB_0143be20;
      FUN_017b46ec(unaff_x20,0);
      *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
      *(int *)(unaff_x20 + 0x10) = in_stack_00000058;
      *(int *)(unaff_x20 + 0x14) = iVar11;
      lVar4 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      lVar5 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      if (0 < *(int *)(unaff_x27 + 0x18)) {
        uVar10 = 0;
        do {
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar8 = *(int *)(in_stack_00000098 + 0x1c);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar13 = *(int *)(in_stack_00000098 + 0x20);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar14 = *(int *)(in_stack_00000098 + 0x14);
          iVar7 = iVar11;
          if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143be20;
            iVar7 = *(int *)(in_stack_00000098 + 0x18);
          }
          FUN_0268834c((float)iVar8,(float)iVar13,(float)iVar14,(float)iVar7,&stack0x000000c0,0);
          if (lVar4 == 0) goto LAB_0143be20;
          if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar10 * 0x10);
          puVar1[1] = in_stack_000000c8;
          *puVar1 = in_stack_000000c0;
          FUN_0132138c();
          if ((in_stack_00000098 == 0) || (lVar5 == 0)) goto LAB_0143be20;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_0143be24;
          *(undefined4 *)(lVar5 + 0x20 + uVar10 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)*(int *)(unaff_x27 + 0x18));
      }
      *(long *)(unaff_x20 + 0x20) = lVar4;
      *(long *)(unaff_x20 + 0x30) = lVar5;
      FUN_014359a0(unaff_x20);
      lVar4 = *(long *)PTR_DAT_033ebc68;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(unaff_x27 + 0x18) = 0;
      }
      else {
        iVar8 = *(int *)(unaff_x27 + 0x18);
        *(undefined4 *)(unaff_x27 + 0x18) = 0;
        if (0 < iVar8) {
          FUN_0179519c(*(undefined8 *)(unaff_x27 + 0x10),0,iVar8,0);
        }
      }
      lVar4 = *(long *)PTR_DAT_033ef6d8;
      *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
      unaff_x19 = in_stack_00000080;
      unaff_x22 = in_stack_00000090;
      unaff_x23 = in_stack_00000060;
      unaff_x25 = in_stack_00000050;
      unaff_w21 = in_stack_00000088._4_4_;
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowInspectors;
      }
      uVar9 = *(uint *)(in_stack_00000050 + 0x18);
      param_3 = (ulong)uVar9;
      *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
    } while ((int)uVar9 < 1);
  } while( true );
  while( true ) {
    uVar9 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar9;
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar12 = logf((float)(int)uVar9);
      fVar12 = exp2f((float)(int)(fVar12 / fVar2));
      uVar9 = 0x80000000;
      if (fVar12 != INFINITY) {
        uVar9 = (int)fVar12;
      }
      if (uVar9 < 3) {
        uVar9 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar9) {
      uVar9 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar9;
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar9;
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar11 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar13 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar11,(float)iVar13,in_stack_00000090);
    puVar3 = StringLiteral_4419;
    iVar8 = iVar8 + 1;
    if (*(int *)(in_stack_00000080 + 0x18) <= iVar8) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled:
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
  }
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar8 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
      uVar10 = in_stack_00000098;
      uVar6 = FUN_0132138c(in_stack_00000078,iVar8,&stack0x00000098,*(undefined8 *)puVar3);
      FUN_01436444(uVar6,uVar10,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
      if (in_stack_00000098 == 0) {
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014359a0();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(in_stack_00000080 + 0x18));
  }
LAB_0143bde4:
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


