/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 0143c620
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(void)

{
  undefined8 *puVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w9;
  int in_w10;
  uint uVar7;
  long unaff_x19;
  int iVar8;
  uint unaff_w21;
  int unaff_w22;
  ulong uVar9;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  int iVar10;
  long unaff_x28;
  float fVar11;
  int iVar12;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
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
    iVar10 = *(int *)(unaff_x24 + 0x18);
    iVar8 = *(int *)(unaff_x27 + 0x18);
    unaff_w22 = in_w9 + unaff_w22;
    if (unaff_w25 <= in_w10) {
      unaff_w25 = in_w10;
    }
    uVar7 = unaff_w21 - unaff_w22;
    fVar2 = DAT_0293f7bc;
    puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
    while( true ) {
      DAT_0293f7bc = fVar2;
      Method_System_Globalization_IdnMapping_ToUnicode__ = (undefined *)puVar1;
      if ((iVar10 < 1) && (iVar8 < 1)) {
        if (*(int *)(unaff_x19 + 0x18) < 1) goto LAB_0143c884;
        iVar8 = 0;
        goto LAB_0143c684;
      }
      lVar3 = FUN_0143d76c(unaff_x28,unaff_x24,uVar7,unaff_w21,iVar8 == 0);
      if (lVar3 != 0) break;
      if (3 < *(int *)(unaff_x28 + 0x10)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
      }
      if (in_stack_00000058 == 0) goto LAB_0143c8c0;
      uVar6 = FUN_01325140(in_stack_00000058,*(undefined8 *)StringLiteral_9168);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (lVar3 == 0) goto LAB_0143c8c0;
      FUN_017b46ec(lVar3,0);
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(int *)(lVar3 + 0x10) = unaff_w25;
      *(int *)(lVar3 + 0x14) = unaff_w22;
      lVar4 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      lVar5 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      if (0 < *(int *)(unaff_x27 + 0x18)) {
        uVar9 = 0;
        do {
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143c8c0;
          iVar8 = *(int *)(in_stack_00000098 + 0x1c);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143c8c0;
          iVar12 = *(int *)(in_stack_00000098 + 0x20);
          iVar10 = unaff_w25;
          if (*(char *)(unaff_x28 + 0x1c) == '\0') {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143c8c0;
            iVar10 = *(int *)(in_stack_00000098 + 0x14);
          }
          FUN_0132138c();
          if ((in_stack_00000098 == 0) ||
             (FUN_0268834c((float)iVar8,(float)iVar12,(float)iVar10,
                           (float)*(int *)(in_stack_00000098 + 0x18),&stack0x000000c0,0), lVar4 == 0
             )) goto LAB_0143c8c0;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar9 * 0x10);
          puVar1[1] = in_stack_000000c8;
          *puVar1 = in_stack_000000c0;
          FUN_0132138c();
          if ((in_stack_00000098 == 0) || (lVar5 == 0)) goto LAB_0143c8c0;
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_0143c8c4;
          *(undefined4 *)(lVar5 + 0x20 + uVar9 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
          uVar9 = uVar9 + 1;
          unaff_x28 = in_stack_00000090;
        } while ((long)uVar9 < (long)*(int *)(unaff_x27 + 0x18));
      }
      *(long *)(lVar3 + 0x20) = lVar4;
      *(long *)(lVar3 + 0x30) = lVar5;
      lVar4 = *(long *)PTR_DAT_033ebc68;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
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
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
      }
      else {
        iVar8 = *(int *)(in_stack_00000050 + 0x18);
        *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
        if (0 < iVar8) {
          FUN_0179519c(*(undefined8 *)(in_stack_00000050 + 0x10),0,iVar8,0);
        }
      }
      FUN_00bbfcc8(in_stack_00000080,lVar3,*(undefined8 *)PTR_DAT_033f3448);
      iVar10 = *(int *)(in_stack_00000068 + 0x18);
      iVar8 = *(int *)(unaff_x27 + 0x18);
      unaff_w22 = 0;
      uVar7 = in_stack_00000088._4_4_;
      unaff_x19 = in_stack_00000080;
      unaff_x24 = in_stack_00000068;
      unaff_x26 = in_stack_00000050;
      unaff_w21 = in_stack_00000088._4_4_;
      fVar2 = DAT_0293f7bc;
      puVar1 = (undefined8 *)Method_System_Globalization_IdnMapping_ToUnicode__;
    }
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(int *)(lVar3 + 0x20) = unaff_w22;
    FUN_00bbf6f0();
    in_stack_00000098 = 0;
    _uStack00000000000000a0 = 0;
    FUN_0268834c(0,(float)unaff_w22,(float)*(int *)(lVar3 + 0x14),(float)*(int *)(lVar3 + 0x18),
                 &stack0x00000098,0);
    FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                 uStack00000000000000a4,unaff_x26,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                );
    in_w10 = *(int *)(lVar3 + 0x14);
    in_w9 = *(int *)(lVar3 + 0x18);
  } while( true );
  while( true ) {
    uVar7 = *(uint *)(in_stack_00000098 + 0x14);
    in_stack_000000d8 = uVar7;
    FUN_0132138c(unaff_x19,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143c8c0;
    in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x10);
    if (in_stack_00000070._4_4_ <= *(int *)(in_stack_00000098 + 0x10)) {
      in_stack_000000b8._4_4_ = in_stack_00000070._4_4_;
    }
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar11 = logf((float)(int)uVar7);
      fVar11 = exp2f((float)(int)(fVar11 / fVar2));
      uVar7 = 0x80000000;
      if (fVar11 != INFINITY) {
        uVar7 = (int)fVar11;
      }
      if (uVar7 < 3) {
        uVar7 = 2;
      }
    }
    if ((int)in_stack_00000088._4_4_ <= (int)uVar7) {
      uVar7 = in_stack_00000088._4_4_;
    }
    in_stack_000000d8 = uVar7;
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143c8c0;
    *(uint *)(in_stack_00000098 + 0x14) = uVar7;
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143c8c0;
    iVar10 = *(int *)(in_stack_00000098 + 0x10);
    FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
    if ((in_stack_00000098 == 0) || (in_stack_00000058 == 0)) goto LAB_0143c8c0;
    iVar12 = *(int *)(in_stack_00000098 + 0x14);
    FUN_0132138c(in_stack_00000058,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
    FUN_01435f44((float)iVar10,(float)iVar12,in_stack_00000090);
    iVar8 = iVar8 + 1;
    unaff_x19 = in_stack_00000080;
    if (*(int *)(in_stack_00000080 + 0x18) <= iVar8) break;
LAB_0143c684:
    FUN_0132138c(unaff_x19,iVar8,&stack0x00000098,*puVar1);
    if (in_stack_00000098 == 0) goto LAB_0143c8c0;
  }
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar8 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
      uVar9 = in_stack_00000098;
      uVar6 = FUN_0132138c(in_stack_00000058,iVar8,&stack0x00000098,
                           *(undefined8 *)StringLiteral_4419);
      FUN_01436444(uVar6,uVar9,in_stack_00000098);
      FUN_0132138c(in_stack_00000080,iVar8,&stack0x00000098,*puVar1);
      if (in_stack_00000098 == 0) {
LAB_0143c8c0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014359a0();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(in_stack_00000080 + 0x18));
  }
LAB_0143c884:
  FUN_01325140(unaff_x19,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


