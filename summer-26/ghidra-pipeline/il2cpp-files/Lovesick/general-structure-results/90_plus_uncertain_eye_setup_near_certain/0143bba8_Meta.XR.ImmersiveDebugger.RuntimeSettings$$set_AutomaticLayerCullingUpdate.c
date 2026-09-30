/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_AutomaticLayerCullingUpdate
ENTRY_POINT: 0143bba8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_AutomaticLayerCullingUpdate
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int in_w8;
  int iVar10;
  uint uVar11;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar12;
  long unaff_x23;
  int unaff_w24;
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
  
  while (iVar10 = in_stack_00000058, !(bool)in_ZR && in_NG == in_OV) {
    do {
      while (lVar6 = FUN_0143d76c(unaff_x22,unaff_x23,param_3,unaff_w21,in_w8 == 0), lVar6 == 0) {
        if (3 < *(int *)(unaff_x22 + 0x10)) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
        }
        if (in_stack_00000078 == 0) goto LAB_0143be20;
        uVar9 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
        if (lVar6 == 0) goto LAB_0143be20;
        FUN_017b46ec(lVar6,0);
        *(undefined8 *)(lVar6 + 0x28) = uVar9;
        *(int *)(lVar6 + 0x10) = in_stack_00000058;
        *(int *)(lVar6 + 0x14) = unaff_w24;
        lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                             *(undefined4 *)(unaff_x27 + 0x18));
        lVar8 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                             *(undefined4 *)(unaff_x27 + 0x18));
        if (0 < *(int *)(unaff_x27 + 0x18)) {
          uVar12 = 0;
          do {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143be20;
            iVar10 = *(int *)(in_stack_00000098 + 0x1c);
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143be20;
            iVar1 = *(int *)(in_stack_00000098 + 0x20);
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143be20;
            iVar15 = *(int *)(in_stack_00000098 + 0x14);
            iVar14 = unaff_w24;
            if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
              FUN_0132138c();
              if (in_stack_00000098 == 0) goto LAB_0143be20;
              iVar14 = *(int *)(in_stack_00000098 + 0x18);
            }
            FUN_0268834c((float)iVar10,(float)iVar1,(float)iVar15,(float)iVar14,&stack0x000000c0,0);
            if (lVar7 == 0) goto LAB_0143be20;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_0143be24:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            puVar2 = (undefined8 *)(lVar7 + 0x20 + uVar12 * 0x10);
            puVar2[1] = in_stack_000000c8;
            *puVar2 = in_stack_000000c0;
            FUN_0132138c();
            if ((in_stack_00000098 == 0) || (lVar8 == 0)) goto LAB_0143be20;
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_0143be24;
            *(undefined4 *)(lVar8 + 0x20 + uVar12 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)*(int *)(unaff_x27 + 0x18));
        }
        *(long *)(lVar6 + 0x20) = lVar7;
        *(long *)(lVar6 + 0x30) = lVar8;
        FUN_014359a0(lVar6);
        lVar7 = *(long *)PTR_DAT_033ebc68;
        *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
        uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
        if ((uVar12 & 1) == 0) {
          *(undefined4 *)(unaff_x27 + 0x18) = 0;
        }
        else {
          iVar10 = *(int *)(unaff_x27 + 0x18);
          *(undefined4 *)(unaff_x27 + 0x18) = 0;
          if (0 < iVar10) {
            FUN_0179519c(*(undefined8 *)(unaff_x27 + 0x10),0,iVar10,0);
          }
        }
        lVar7 = *(long *)PTR_DAT_033ef6d8;
        *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
        uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
        if ((uVar12 & 1) == 0) {
          *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
        }
        else {
          iVar10 = *(int *)(in_stack_00000050 + 0x18);
          *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
          if (0 < iVar10) {
            FUN_0179519c(*(undefined8 *)(in_stack_00000050 + 0x10),0,iVar10,0);
          }
        }
        FUN_00bbfcc8(in_stack_00000080,lVar6,*(undefined8 *)PTR_DAT_033f3448);
        in_w8 = *(int *)(unaff_x27 + 0x18);
        unaff_w24 = 0;
        param_3 = (ulong)in_stack_00000088._4_4_;
        unaff_x22 = in_stack_00000090;
        unaff_x23 = in_stack_00000060;
        unaff_x25 = in_stack_00000050;
        iVar10 = 0;
        unaff_w21 = in_stack_00000088._4_4_;
        if (*(int *)(in_stack_00000060 + 0x18) < 1) {
          unaff_w24 = 0;
          param_3 = (ulong)in_stack_00000088._4_4_;
          if (in_w8 < 1) goto LAB_0143bbac;
        }
      }
      *(int *)(lVar6 + 0x1c) = iVar10;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      FUN_00bbf6f0();
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      FUN_0268834c((float)iVar10,0,(float)*(int *)(lVar6 + 0x14),(float)*(int *)(lVar6 + 0x18),
                   &stack0x00000098,0);
      FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                   uStack00000000000000a4,unaff_x25,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                  );
      in_w8 = *(int *)(unaff_x27 + 0x18);
      iVar10 = *(int *)(lVar6 + 0x14) + iVar10;
      if (unaff_w24 <= *(int *)(lVar6 + 0x18)) {
        unaff_w24 = *(int *)(lVar6 + 0x18);
      }
      param_3 = (ulong)(unaff_w21 - iVar10);
      in_stack_00000058 = iVar10;
    } while (0 < *(int *)(unaff_x23 + 0x18));
    in_NG = in_w8 < 0;
    in_OV = '\0';
    in_ZR = in_w8 == 0;
  }
LAB_0143bbac:
  puVar4 = Method_System_Globalization_IdnMapping_ToUnicode__;
  fVar3 = DAT_0293f7bc;
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar10 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      uVar11 = *(uint *)(in_stack_00000098 + 0x10);
      in_stack_000000d8 = uVar11;
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      in_stack_000000b8._4_4_ = *(int *)(in_stack_00000098 + 0x14);
      if (in_stack_00000068._4_4_ <= *(int *)(in_stack_00000098 + 0x14)) {
        in_stack_000000b8._4_4_ = in_stack_00000068._4_4_;
      }
      if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
        fVar13 = logf((float)(int)uVar11);
        fVar13 = exp2f((float)(int)(fVar13 / fVar3));
        uVar11 = 0x80000000;
        if (fVar13 != INFINITY) {
          uVar11 = (int)fVar13;
        }
        if (uVar11 < 3) {
          uVar11 = 2;
        }
      }
      if ((int)in_stack_00000088._4_4_ <= (int)uVar11) {
        uVar11 = in_stack_00000088._4_4_;
      }
      in_stack_000000d8 = uVar11;
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      *(uint *)(in_stack_00000098 + 0x10) = uVar11;
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      if (in_stack_00000098 == 0) goto LAB_0143be20;
      iVar1 = *(int *)(in_stack_00000098 + 0x10);
      FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
      if ((in_stack_00000098 == 0) || (in_stack_00000078 == 0)) goto LAB_0143be20;
      iVar14 = *(int *)(in_stack_00000098 + 0x14);
      FUN_0132138c(in_stack_00000078,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
      FUN_01435f44((float)iVar1,(float)iVar14,in_stack_00000090);
      puVar5 = StringLiteral_4419;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(in_stack_00000080 + 0x18));
    if (0 < *(int *)(in_stack_00000080 + 0x18)) {
      iVar10 = 0;
      do {
        FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
        uVar12 = in_stack_00000098;
        uVar9 = FUN_0132138c(in_stack_00000078,iVar10,&stack0x00000098,*(undefined8 *)puVar5);
        FUN_01436444(uVar9,uVar12,in_stack_00000098);
        FUN_0132138c(in_stack_00000080,iVar10,&stack0x00000098,*(undefined8 *)puVar4);
        if (in_stack_00000098 == 0) {
LAB_0143be20:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_014359a0();
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(in_stack_00000080 + 0x18));
    }
  }
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


