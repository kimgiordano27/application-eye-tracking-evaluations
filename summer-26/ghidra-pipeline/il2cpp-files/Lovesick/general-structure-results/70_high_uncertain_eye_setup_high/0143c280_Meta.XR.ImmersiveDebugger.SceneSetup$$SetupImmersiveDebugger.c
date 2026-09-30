/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.SceneSetup$$SetupImmersiveDebugger
ENTRY_POINT: 0143c280
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


void Meta_XR_ImmersiveDebugger_SceneSetup__SetupImmersiveDebugger
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint unaff_w21;
  int iVar10;
  long unaff_x24;
  ulong uVar11;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar12;
  int iVar13;
  int iVar14;
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
  
  FUN_01320e50(param_2,*param_1);
  iVar9 = *(int *)(unaff_x27 + 0x18);
  if ((0 < *(int *)(unaff_x24 + 0x18)) || (0 < iVar9)) {
    iVar13 = 0;
    iVar10 = 0;
    uVar8 = unaff_w21;
    do {
      while (lVar4 = FUN_0143d76c(unaff_x28,unaff_x24,uVar8,unaff_w21,iVar9 == 0), lVar4 == 0) {
        if (3 < *(int *)(unaff_x28 + 0x10)) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)StringLiteral_7799,0);
        }
        if (in_stack_00000058 == 0) goto LAB_0143c8c0;
        uVar5 = FUN_01325140(in_stack_00000058,*(undefined8 *)StringLiteral_9168);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
        if (lVar4 == 0) goto LAB_0143c8c0;
        FUN_017b46ec(lVar4,0);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(int *)(lVar4 + 0x10) = iVar13;
        *(int *)(lVar4 + 0x14) = iVar10;
        lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__,
                             *(undefined4 *)(unaff_x27 + 0x18));
        lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                             *(undefined4 *)(unaff_x27 + 0x18));
        if (0 < *(int *)(unaff_x27 + 0x18)) {
          uVar11 = 0;
          do {
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143c8c0;
            iVar9 = *(int *)(in_stack_00000098 + 0x1c);
            FUN_0132138c();
            if (in_stack_00000098 == 0) goto LAB_0143c8c0;
            iVar14 = *(int *)(in_stack_00000098 + 0x20);
            iVar10 = iVar13;
            if (*(char *)(unaff_x28 + 0x1c) == '\0') {
              FUN_0132138c();
              if (in_stack_00000098 == 0) goto LAB_0143c8c0;
              iVar10 = *(int *)(in_stack_00000098 + 0x14);
            }
            FUN_0132138c();
            if ((in_stack_00000098 == 0) ||
               (FUN_0268834c((float)iVar9,(float)iVar14,(float)iVar10,
                             (float)*(int *)(in_stack_00000098 + 0x18),&stack0x000000c0,0),
               lVar6 == 0)) goto LAB_0143c8c0;
            if (*(uint *)(lVar6 + 0x18) <= uVar11) {
LAB_0143c8c4:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar11 * 0x10);
            puVar1[1] = in_stack_000000c8;
            *puVar1 = in_stack_000000c0;
            FUN_0132138c();
            if ((in_stack_00000098 == 0) || (lVar7 == 0)) goto LAB_0143c8c0;
            if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0143c8c4;
            *(undefined4 *)(lVar7 + 0x20 + uVar11 * 4) = *(undefined4 *)(in_stack_00000098 + 0x10);
            uVar11 = uVar11 + 1;
            unaff_x28 = in_stack_00000090;
          } while ((long)uVar11 < (long)*(int *)(unaff_x27 + 0x18));
        }
        *(long *)(lVar4 + 0x20) = lVar6;
        *(long *)(lVar4 + 0x30) = lVar7;
        lVar6 = *(long *)PTR_DAT_033ebc68;
        *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
        uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
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
        lVar6 = *(long *)PTR_DAT_033ef6d8;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
        if ((uVar11 & 1) == 0) {
          *(undefined4 *)(unaff_x26 + 0x18) = 0;
        }
        else {
          iVar9 = *(int *)(unaff_x26 + 0x18);
          *(undefined4 *)(unaff_x26 + 0x18) = 0;
          if (0 < iVar9) {
            FUN_0179519c(*(undefined8 *)(unaff_x26 + 0x10),0,iVar9,0);
          }
        }
        FUN_00bbfcc8(in_stack_00000080,lVar4,*(undefined8 *)PTR_DAT_033f3448);
        iVar9 = *(int *)(unaff_x27 + 0x18);
        unaff_x24 = in_stack_00000068;
        iVar10 = 0;
        unaff_w21 = in_stack_00000088._4_4_;
        uVar8 = in_stack_00000088._4_4_;
        if ((*(int *)(in_stack_00000068 + 0x18) < 1) && (iVar10 = 0, iVar9 < 1)) goto LAB_0143c648;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      *(int *)(lVar4 + 0x20) = iVar10;
      FUN_00bbf6f0();
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      FUN_0268834c(0,(float)iVar10,(float)*(int *)(lVar4 + 0x14),(float)*(int *)(lVar4 + 0x18),
                   &stack0x00000098,0);
      FUN_00bbfeb8(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,uStack00000000000000a0,
                   uStack00000000000000a4,unaff_x26,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InitSpatialAnchor>d__11>__
                  );
      iVar9 = *(int *)(unaff_x27 + 0x18);
      iVar10 = *(int *)(lVar4 + 0x18) + iVar10;
      if (iVar13 <= *(int *)(lVar4 + 0x14)) {
        iVar13 = *(int *)(lVar4 + 0x14);
      }
      uVar8 = unaff_w21 - iVar10;
    } while ((0 < *(int *)(unaff_x24 + 0x18)) || (0 < iVar9));
  }
LAB_0143c648:
  puVar3 = Method_System_Globalization_IdnMapping_ToUnicode__;
  fVar2 = DAT_0293f7bc;
  if (0 < *(int *)(in_stack_00000080 + 0x18)) {
    iVar9 = 0;
    do {
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if (in_stack_00000098 == 0) goto LAB_0143c8c0;
      uVar8 = *(uint *)(in_stack_00000098 + 0x14);
      in_stack_000000d8 = uVar8;
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
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
      iVar10 = *(int *)(in_stack_00000098 + 0x10);
      FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
      if ((in_stack_00000098 == 0) || (in_stack_00000058 == 0)) goto LAB_0143c8c0;
      iVar13 = *(int *)(in_stack_00000098 + 0x14);
      FUN_0132138c(in_stack_00000058,0,&stack0x00000098,*(undefined8 *)StringLiteral_4419);
      FUN_01435f44((float)iVar10,(float)iVar13,in_stack_00000090);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_stack_00000080 + 0x18));
    if (0 < *(int *)(in_stack_00000080 + 0x18)) {
      iVar9 = 0;
      do {
        FUN_0132138c(in_stack_00000080,iVar9,&stack0x00000098,*(undefined8 *)puVar3);
        uVar11 = in_stack_00000098;
        uVar5 = FUN_0132138c(in_stack_00000058,iVar9,&stack0x00000098,
                             *(undefined8 *)StringLiteral_4419);
        FUN_01436444(uVar5,uVar11,in_stack_00000098);
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
  FUN_01325140(in_stack_00000080,
               *(undefined8 *)
                Method_GreenroomCipherWheel_<LerpTo_Coroutine>d__24_System_Collections_IEnumerator_Reset__
              );
  return;
}


