/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 0143c5b4
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


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  char in_NG;
  char in_OV;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  uint uVar8;
  long unaff_x19;
  int iVar9;
  uint unaff_w21;
  int unaff_w22;
  ulong uVar10;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  int iVar11;
  long unaff_x28;
  float fVar12;
  int iVar13;
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
  
  while (in_NG == in_OV) {
    do {
      while (lVar4 = FUN_0143d76c(unaff_x28,unaff_x24,param_3,unaff_w21,in_w8 == 0), lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x1c) = 0;
        *(int *)(lVar4 + 0x20) = unaff_w22;
        FUN_00bbf6f0();
        in_stack_00000098 = 0;
        _uStack00000000000000a0 = 0;
        FUN_0268834c(0,(float)unaff_w22,(float)*(int *)(lVar4 + 0x14),(float)*(int *)(lVar4 + 0x18),
                     &stack0x00000098,0);
        FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                     uStack00000000000000a4,unaff_x26,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                    );
        in_w8 = *(int *)(unaff_x27 + 0x18);
        unaff_w22 = *(int *)(lVar4 + 0x18) + unaff_w22;
        if (unaff_w25 <= *(int *)(lVar4 + 0x14)) {
          unaff_w25 = *(int *)(lVar4 + 0x14);
        }
        param_3 = (ulong)(unaff_w21 - unaff_w22);
        if ((*(int *)(unaff_x24 + 0x18) < 1) && (in_w8 < 1)) goto LAB_0143c648;
      }
      if (3 < *(int *)(unaff_x28 + 0x10)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
      }
      if (in_stack_00000058 == 0) goto LAB_0143c8c0;
      uVar7 = FUN_01325140(in_stack_00000058,*(undefined8 *)StringLiteral_9168);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
      if (lVar4 == 0) goto LAB_0143c8c0;
      FUN_017b46ec(lVar4,0);
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(int *)(lVar4 + 0x10) = unaff_w25;
      *(int *)(lVar4 + 0x14) = unaff_w22;
      lVar5 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                           *(undefined4 *)(unaff_x27 + 0x18));
      if (0 < *(int *)(unaff_x27 + 0x18)) {
        uVar10 = 0;
        do {
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143c8c0;
          iVar9 = *(int *)(in_stack_00000098 + 0x1c);
          FUN_0132138c();
          if (in_stack_00000098 == 0) goto LAB_0143c8c0;
          iVar13 = *(int *)(in_stack_00000098 + 0x20);
          iVar11 = unaff_w25;
          if (*(char *)(unaff_x28 + 0x1c) == '\0') {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143c8c0;
            iVar11 = *(int *)(in_stack_00000098 + 0x14);
          }
          FUN_0132138c();
          if ((in_stack_00000098 == 0) ||
             (FUN_0268834c((float)iVar9,(float)iVar13,(float)iVar11,
                           (float)*(int *)(in_stack_00000098 + 0x18),&stack0x000000c0,0), lVar5 == 0
             )) goto LAB_0143c8c0;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar10 * 0x10);
          puVar1[1] = in_stack_000000c8;
          *puVar1 = in_stack_000000c0;
          FUN_0132138c();
          if ((in_stack_00000098 == 0) || (lVar6 == 0)) goto LAB_0143c8c0;
          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0143c8c4;
          *(undefined4 *)(lVar6 + 0x20 + uVar10 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
          uVar10 = uVar10 + 1;
          unaff_x28 = in_stack_00000090;
        } while ((long)uVar10 < (long)*(int *)(unaff_x27 + 0x18));
      }
      *(long *)(lVar4 + 0x20) = lVar5;
      *(long *)(lVar4 + 0x30) = lVar6;
      lVar5 = *(long *)PTR_DAT_033ebc68;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
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
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
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
      in_w8 = *(int *)(unaff_x27 + 0x18);
      unaff_w22 = 0;
      param_3 = (ulong)in_stack_00000088._4_4_;
      unaff_x19 = in_stack_00000080;
      unaff_x24 = in_stack_00000068;
      unaff_x26 = in_stack_00000050;
      unaff_w21 = in_stack_00000088._4_4_;
    } while (0 < *(int *)(in_stack_00000068 + 0x18));
    in_OV = SBORROW4(in_w8,1);
    param_3 = (ulong)in_stack_00000088._4_4_;
    in_NG = in_w8 + -1 < 0;
  }
LAB_0143c648:
  puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
  fVar2 = DAT_0293f7bc;
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar9 = 0;
    do {
      FUN_0132138c(unaff_x19,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if (in_stack_00000098 == 0) goto LAB_0143c8c0;
      uVar8 = *(uint *)(in_stack_00000098 + 0x14);
      in_stack_000000d8 = uVar8;
      FUN_0132138c(unaff_x19,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if (in_stack_00000098 == 0) goto LAB_0143c8c0;
      in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x10);
      if (in_stack_00000070._4_4_ <= *(int *)(in_stack_00000098 + 0x10)) {
        in_stack_000000b8._4_4_ = in_stack_00000070._4_4_;
      }
      if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
        fVar12 = logf((float)(int)uVar8);
        fVar12 = exp2f((float)(int)(fVar12 / fVar2));
        uVar8 = 0x80000000;
        if (fVar12 != INFINITY) {
          uVar8 = (int)fVar12;
        }
        if (uVar8 < 3) {
          uVar8 = 2;
        }
      }
      if ((int)in_stack_00000088._4_4_ <= (int)uVar8) {
        uVar8 = in_stack_00000088._4_4_;
      }
      in_stack_000000d8 = uVar8;
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if (in_stack_00000098 == 0) goto LAB_0143c8c0;
      *(uint *)(in_stack_00000098 + 0x14) = uVar8;
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if (in_stack_00000098 == 0) goto LAB_0143c8c0;
      iVar11 = *(int *)(in_stack_00000098 + 0x10);
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if ((in_stack_00000098 == 0) || (in_stack_00000058 == 0)) goto LAB_0143c8c0;
      iVar13 = *(int *)(in_stack_00000098 + 0x14);
      FUN_0132138c(in_stack_00000058,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
      FUN_01435f44((float)iVar11,(float)iVar13,in_stack_00000090);
      iVar9 = iVar9 + 1;
      unaff_x19 = in_stack_00000080;
    } while (iVar9 < *(int *)(in_stack_00000080 + 0x18));
    if (0 < *(int *)(in_stack_00000080 + 0x18)) {
      iVar9 = 0;
      do {
        FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
        uVar10 = in_stack_00000098;
        uVar7 = FUN_0132138c(in_stack_00000058,iVar9,&stack0x00000098,
                             *(undefined8 *)StringLiteral_4419);
        FUN_01436444(uVar7,uVar10,in_stack_00000098);
        FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
        if (in_stack_00000098 == 0) {
LAB_0143c8c0:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_014359a0();
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(in_stack_00000080 + 0x18));
    }
  }
  FUN_01325140(unaff_x19,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


