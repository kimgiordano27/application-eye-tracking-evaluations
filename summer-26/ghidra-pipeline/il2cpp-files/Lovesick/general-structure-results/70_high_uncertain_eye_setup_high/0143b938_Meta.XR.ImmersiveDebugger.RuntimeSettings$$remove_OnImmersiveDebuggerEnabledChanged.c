/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$remove_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 0143b938
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__remove_OnImmersiveDebuggerEnabledChanged(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x29;
  float fVar9;
  int iVar10;
  int iVar11;
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
  
  while (FUN_0132138c(), in_stack_00000098 != 0) {
    iVar11 = *(int *)(in_stack_00000098 + 0x14);
    iVar7 = unaff_w24;
    if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
      FUN_0132138c();
      if (in_stack_00000098 == 0) break;
      iVar7 = *(int *)(in_stack_00000098 + 0x18);
    }
    FUN_0268834c((float)unaff_w26,(float)unaff_w25,(float)iVar11,(float)iVar7,&stack0x000000c0,0);
    if (unaff_x21 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined8 *)(unaff_x19 + unaff_x23 * 0x10);
    puVar1[1] = in_stack_000000c8;
    *puVar1 = in_stack_000000c0;
    FUN_0132138c();
    if ((in_stack_00000098 == 0) || (unaff_x22 == 0)) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) goto LAB_0143be24;
    *(undefined4 *)(unaff_x29 + unaff_x23 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x27 + 0x18) <= (long)unaff_x23) {
      do {
        *(long *)(unaff_x20 + 0x20) = unaff_x21;
        *(long *)(unaff_x20 + 0x30) = unaff_x22;
        FUN_014359a0(unaff_x20);
        lVar6 = *(long *)PTR_DAT_033ebc68;
        *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
        uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(unaff_x27 + 0x18) = 0;
        }
        else {
          iVar7 = *(int *)(unaff_x27 + 0x18);
          *(undefined4 *)(unaff_x27 + 0x18) = 0;
          if (0 < iVar7) {
            FUN_0179519c(*(undefined8 *)(unaff_x27 + 0x10),0,iVar7,0);
          }
        }
        lVar6 = *(long *)PTR_DAT_033ef6d8;
        *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
        uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
        }
        else {
          iVar7 = *(int *)(in_stack_00000050 + 0x18);
          *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
          if (0 < iVar7) {
            FUN_0179519c(*(undefined8 *)(in_stack_00000050 + 0x10),0,iVar7,0);
          }
        }
        FUN_00bbfcc8(in_stack_00000080,unaff_x20,*(undefined8 *)PTR_DAT_033f3448);
        iVar11 = *(int *)(unaff_x27 + 0x18);
        iVar7 = 0;
        unaff_w24 = 0;
        uVar8 = in_stack_00000088._4_4_;
        if (*(int *)(in_stack_00000060 + 0x18) < 1) {
          unaff_w24 = 0;
          iVar7 = 0;
          fVar2 = DAT_0293f7bc;
          puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
          goto joined_r0x0143bb14;
        }
        while (lVar6 = FUN_0143d76c(in_stack_00000090,in_stack_00000060,uVar8,
                                    in_stack_00000088._4_4_,iVar11 == 0), lVar6 != 0) {
          *(int *)(lVar6 + 0x1c) = iVar7;
          *(undefined4 *)(lVar6 + 0x20) = 0;
          FUN_00bbf6f0();
          in_stack_00000098 = 0;
          _uStack00000000000000a0 = 0;
          FUN_0268834c((float)iVar7,0,(float)*(int *)(lVar6 + 0x14),(float)*(int *)(lVar6 + 0x18),
                       &stack0x00000098,0);
          FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0
                       ,uStack00000000000000a4,in_stack_00000050,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                      );
          iVar11 = *(int *)(unaff_x27 + 0x18);
          iVar7 = *(int *)(lVar6 + 0x14) + iVar7;
          if (unaff_w24 <= *(int *)(lVar6 + 0x18)) {
            unaff_w24 = *(int *)(lVar6 + 0x18);
          }
          uVar8 = in_stack_00000088._4_4_ - iVar7;
          in_stack_00000058 = iVar7;
          fVar2 = DAT_0293f7bc;
          puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
          if (*(int *)(in_stack_00000060 + 0x18) < 1) {
joined_r0x0143bb14:
            DAT_0293f7bc = fVar2;
            Method_System_Globalization_IdnMapping_ToUnicode__ = (undefined *)puVar1;
            if (iVar11 < 1) {
              if (*(int *)(in_stack_00000080 + 0x18) < 1) goto LAB_0143bde4;
              iVar7 = 0;
              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled;
            }
          }
        }
        if (3 < *(int *)(in_stack_00000090 + 0x10)) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
        }
        if (in_stack_00000078 == 0) goto LAB_0143be20;
        uVar5 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
        unaff_x20 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
        if (unaff_x20 == 0) goto LAB_0143be20;
        FUN_017b46ec(unaff_x20,0);
        *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
        *(int *)(unaff_x20 + 0x10) = in_stack_00000058;
        *(int *)(unaff_x20 + 0x14) = unaff_w24;
        unaff_x21 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__
                                 ,*(undefined4 *)(unaff_x27 + 0x18));
        unaff_x22 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                 ,*(undefined4 *)(unaff_x27 + 0x18));
      } while (*(int *)(unaff_x27 + 0x18) < 1);
      unaff_x23 = 0;
      unaff_x19 = unaff_x21 + 0x20;
      unaff_x29 = unaff_x22 + 0x20;
    }
    FUN_0132138c();
    if (in_stack_00000098 == 0) break;
    unaff_w26 = *(int *)(in_stack_00000098 + 0x1c);
    FUN_0132138c();
    if (in_stack_00000098 == 0) break;
    unaff_w25 = *(int *)(in_stack_00000098 + 0x20);
  }
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar8 = *(uint *)(in_stack_00000098 + 0x10);
    in_stack_000000d8 = uVar8;
    FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
    if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
      in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar9 = logf((float)(int)uVar8);
      fVar9 = exp2f((float)(int)(fVar9 / fVar2));
      uVar8 = 0x80000000;
      if (fVar9 != INFINITY) {
        uVar8 = (int)fVar9;
      }
      if (uVar8 < 3) {
        uVar8 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar8) {
      uVar8 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar8;
    FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    *(uint *)(in_stack_00000098 + 0x10) = uVar8;
    FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
    iVar11 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
    if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
    iVar10 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar11,(float)iVar10,in_stack_00000090);
    puVar3 = StringLiteral_4419;
    iVar7 = iVar7 + 1;
    if (*(int *)(in_stack_00000080 + 0x18) <= iVar7) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataEnabled:
    FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143be20;
  }
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar7 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
      uVar4 = in_stack_00000098;
      uVar5 = FUN_0132138c(in_stack_00000078,iVar7,&stack0x00000098,*(undefined8 *)puVar3);
      FUN_01436444(uVar5,uVar4,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar7,&stack0x00000098,*puVar1);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      FUN_014359a0();
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_stack_00000080 + 0x18));
  }
LAB_0143bde4:
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


