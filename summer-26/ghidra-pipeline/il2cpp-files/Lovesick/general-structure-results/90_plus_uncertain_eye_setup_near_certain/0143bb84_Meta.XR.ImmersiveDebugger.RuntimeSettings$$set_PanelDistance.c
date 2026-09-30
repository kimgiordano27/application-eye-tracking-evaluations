/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_PanelDistance
ENTRY_POINT: 0143bb84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelDistance(void)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int in_w9;
  int in_w10;
  int in_w11;
  int unaff_w19;
  uint uVar9;
  int iVar10;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar11;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x27;
  float fVar12;
  int iVar13;
  int iVar14;
  long in_stack_00000050;
  int iStack0000000000000058;
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
    iVar10 = *(int *)(unaff_x27 + 0x18);
    unaff_w19 = in_w9 + unaff_w19;
    if (unaff_w24 <= in_w10) {
      unaff_w24 = in_w10;
    }
    uVar9 = unaff_w21 - unaff_w19;
    iStack0000000000000058 = unaff_w19;
    fVar3 = DAT_0293f7bc;
    puVar2 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
    if (in_w11 < 1) goto joined_r0x0143bba8;
    while (lVar5 = FUN_0143d76c(unaff_x22,unaff_x23,uVar9,unaff_w21,iVar10 == 0), lVar5 == 0) {
      if (3 < *(int *)(unaff_x22 + 0x10)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
      }
      if (in_stack_00000078 == 0) goto LAB_0143be20;
      uVar8 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (lVar5 == 0) goto LAB_0143be20;
      FUN_017b46ec(lVar5,0);
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      *(int *)(lVar5 + 0x10) = iStack0000000000000058;
      *(int *)(lVar5 + 0x14) = unaff_w24;
      lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      if (0 < *(int *)(unaff_x27 + 0x18)) {
        uVar11 = 0;
        do {
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar10 = *(int *)(in_stack_00000098 + 0x1c);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar1 = *(int *)(in_stack_00000098 + 0x20);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143be20;
          iVar14 = *(int *)(in_stack_00000098 + 0x14);
          iVar13 = unaff_w24;
          if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143be20;
            iVar13 = *(int *)(in_stack_00000098 + 0x18);
          }
          FUN_0268834c((float)iVar10,(float)iVar1,(float)iVar14,(float)iVar13,&stack0x000000c0,0);
          if (lVar6 == 0) goto LAB_0143be20;
          if (*(uint *)(lVar6 + 0x18) <= uVar11) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar11 * 0x10);
          puVar2[1] = in_stack_000000c8;
          *puVar2 = in_stack_000000c0;
          FUN_0132138c();
          if ((in_stack_00000098 == 0) || (lVar7 == 0)) goto LAB_0143be20;
          if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0143be24;
          *(undefined4 *)(lVar7 + 0x20 + uVar11 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)*(int *)(unaff_x27 + 0x18));
      }
      *(long *)(lVar5 + 0x20) = lVar6;
      *(long *)(lVar5 + 0x30) = lVar7;
      FUN_014359a0(lVar5);
      lVar6 = *(long *)PTR_DAT_033ebc68;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(unaff_x27 + 0x18) = 0;
      }
      else {
        iVar10 = *(int *)(unaff_x27 + 0x18);
        *(undefined4 *)(unaff_x27 + 0x18) = 0;
        if (0 < iVar10) {
          FUN_0179519c(*(undefined8 *)(unaff_x27 + 0x10),0,iVar10,0);
        }
      }
      lVar6 = *(long *)PTR_DAT_033ef6d8;
      *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
      uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
      }
      else {
        iVar10 = *(int *)(in_stack_00000050 + 0x18);
        *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
        if (0 < iVar10) {
          FUN_0179519c(*(undefined8 *)(in_stack_00000050 + 0x10),0,iVar10,0);
        }
      }
      FUN_00bbfcc8(in_stack_00000080,lVar5,*(undefined8 *)PTR_DAT_033f3448);
      iVar10 = *(int *)(unaff_x27 + 0x18);
      unaff_w19 = 0;
      unaff_w24 = 0;
      unaff_x22 = in_stack_00000090;
      unaff_x23 = in_stack_00000060;
      unaff_x25 = in_stack_00000050;
      unaff_w21 = in_stack_00000088._4_4_;
      uVar9 = in_stack_00000088._4_4_;
      if (*(int *)(in_stack_00000060 + 0x18) < 1) {
        unaff_w24 = 0;
        fVar3 = DAT_0293f7bc;
        puVar2 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
joined_r0x0143bba8:
        DAT_0293f7bc = fVar3;
        Method_System_Globalization_IdnMapping_ToUnicode__ = (undefined *)puVar2;
        if (iVar10 < 1) {
          if (*(int *)(in_stack_00000080 + 0x18) < 1) goto LAB_0143bde4;
          iVar10 = 0;
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled;
        }
      }
    }
    *(int *)(lVar5 + 0x1c) = unaff_w19;
    *(undefined4 *)(lVar5 + 0x20) = 0;
    FUN_00bbf6f0();
    in_stack_00000098 = 0;
    _uStack00000000000000a0 = 0;
    FUN_0268834c((float)unaff_w19,0,(float)*(int *)(lVar5 + 0x14),(float)*(int *)(lVar5 + 0x18),
                 &stack0x00000098,0);
    FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                 uStack00000000000000a4,unaff_x25,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                );
    in_w9 = *(int *)(lVar5 + 0x14);
    in_w10 = *(int *)(lVar5 + 0x18);
    in_w11 = *(int *)(unaff_x23 + 0x18);
  } while( true );
  while( true ) {
    uVar9 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar9;
    FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar12 = logf((float)(int)uVar9);
      fVar12 = exp2f((float)(int)(fVar12 / fVar3));
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
    FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar9;
    FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar1 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar13 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar1,(float)iVar13,in_stack_00000090);
    puVar4 = StringLiteral_4419;
    iVar10 = iVar10 + 1;
    if (*(int *)(in_stack_00000080 + 0x18) <= iVar10) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled:
    FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
  }
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar10 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
      uVar11 = in_stack_00000098;
      uVar8 = FUN_0132138c(in_stack_00000078,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      FUN_01436444(uVar8,uVar11,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*puVar2);
      if (in_stack_00000098 == 0) {
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014359a0();
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(in_stack_00000080 + 0x18));
  }
LAB_0143bde4:
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


