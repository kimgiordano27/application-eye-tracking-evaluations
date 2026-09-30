/*
FUNCTION_NAME: UnityEngine.GL$$LoadProjectionMatrix_Injected
ENTRY_POINT: 0358a5cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 UnityEngine_GL__LoadProjectionMatrix_Injected(long param_1,long param_2,long param_3)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w10;
  int unaff_w19;
  int unaff_w24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  if (in_w10 == 0) {
    thunk_FUN_01a58e78();
    param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    param_1 = *(long *)(param_2 + 0xb8);
    param_3 = *(long *)(param_1 + 0x80);
  }
  if (unaff_w19 == 0) {
    if (param_3 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(param_3 + 0x18) < 7) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar2 = *(short *)(param_3 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      param_1 = *(long *)(param_2 + 0xb8);
      param_3 = *(long *)(param_1 + 0x80);
    }
    if (unaff_w24 == 0xd && sVar2 == 0x23) {
      uVar3 = 0xd;
      goto LAB_0358b424;
    }
    if (param_3 == 0) goto LAB_0358c010;
    if (*(uint *)(param_3 + 0x18) < 7) goto LAB_0358bfac;
    sVar2 = *(short *)(param_3 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      param_2 = thunk_FUN_01a58e78();
      param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
    }
    if (unaff_w24 == 0xf && sVar2 == 0x23) {
      param_3 = *(long *)(param_1 + 0x80);
      uVar3 = 0xf;
      goto LAB_0358b424;
    }
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) goto LAB_0358c010;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0358bfac;
    iVar1 = *(int *)(lVar4 + 0x24);
    if (iVar1 < 0x3829ca) {
      if (iVar1 < -0x232c3b1) {
        if (iVar1 == -0x3b2cd120) {
          in_stack_00000070 = 0xffe6d8ad;
        }
        else {
          if (iVar1 != -0x232c3b2) {
            return 0;
          }
          in_stack_00000070 = 0xfff020a0;
        }
      }
      else {
        if (iVar1 == 0x1e9d3) {
          uVar5 = 0x3f800000;
FUN_0358c134:
          uVar6 = 0;
LAB_0358c138:
          uVar7 = 0;
          goto LAB_0358c14c;
        }
        if (iVar1 == 0x36863e) {
          uVar5 = 0;
          uVar6 = 0;
LAB_0358c148:
          uVar7 = 0x3f800000;
          goto LAB_0358c14c;
        }
        if (iVar1 != 0x3829c9) {
          return 0;
        }
        in_stack_00000070 = 0xff808080;
      }
    }
    else {
      if (0x7071a47 < iVar1) {
        if (iVar1 == 0x73d641b) {
          uVar5 = 0;
          uVar6 = 0x3f800000;
          goto LAB_0358c138;
        }
        if (iVar1 == 0x85daee7) {
          uVar5 = 0x3f800000;
          uVar6 = 0x3f800000;
          goto LAB_0358c148;
        }
        if (iVar1 != 0x21063284) {
          return 0;
        }
        uVar5 = 0x3f800000;
        uVar6 = DAT_00d38808;
        uVar7 = DAT_00d388f0;
LAB_0358c14c:
        in_stack_00000070 = FUN_01b6d7fc(uVar5,uVar6,uVar7,0x3f800000,0);
        goto LAB_035870dc;
      }
      if (iVar1 != 0x19536f0) {
        if (iVar1 != 0x7071a47) {
          return 0;
        }
        uVar5 = 0;
        goto FUN_0358c134;
      }
      in_stack_00000070 = 0xff0080ff;
    }
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = in_stack_00000070;
    uVar3 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
  }
  else {
    uVar3 = 0xb;
LAB_0358b424:
    in_stack_00000070 = FUN_0359237c(param_2,param_3,uVar3);
LAB_035870dc:
    *(undefined4 *)(in_stack_00000020 + 0x4ec) = in_stack_00000070;
    uVar3 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
  }
  FUN_0209ad50(in_stack_00000020 + 0x4f0,&stack0x00000070,uVar3);
  return 1;
}


