/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceDestroy
ENTRY_POINT: 03698d48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceDestroy
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  ulong uVar9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  ulong in_stack_00000000;
  uint in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  uVar9 = in_stack_00000000 >> 0x20;
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x58) = unaff_s11;
    *(undefined4 *)(lVar2 + 0x5c) = unaff_s10;
    *(undefined4 *)(lVar2 + 0x60) = unaff_s9;
    *(undefined4 *)(lVar2 + 100) = unaff_s8;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = FUN_04073094(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03698e94;
      FUN_03695c0c(*(long *)(unaff_x19 + 0x20),0);
      in_stack_00000000 = in_stack_00000000 & 0xffffffff;
      uVar1 = (ulong)in_stack_00000008;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_03698e94;
      in_stack_00000000 = FUN_0407d3c8(*(long *)(unaff_x19 + 0x38),0);
      uVar9 = param_2;
      uVar1 = param_3;
    }
    fVar7 = (float)param_3;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
      uStack0000000000000040 = *(undefined8 *)(lVar2 + 0x168);
      uStack0000000000000028 = *(undefined8 *)(lVar2 + 0x150);
      uStack0000000000000020 = *(undefined8 *)(lVar2 + 0x148);
      uStack0000000000000038 = *(undefined8 *)(lVar2 + 0x160);
      uVar3 = *(undefined8 *)(lVar2 + 0x158);
      uStack0000000000000030 = uVar3;
      if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar5 = (float)uVar3;
      fVar4 = (float)FUN_03694cd0(&stack0x00000020,0);
      uVar6 = (ulong)(uint)(fVar5 - (float)uVar9);
      uVar8 = (ulong)(uint)(fVar7 - (float)uVar1);
      uVar3 = FUN_0406761c(fVar4 - (float)in_stack_00000000,uVar6,uVar8,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_03637e30(in_stack_00000000,uVar9,uVar1,uVar3,uVar6,uVar8,param_4,
                     *(long *)(unaff_x19 + 0x30),0);
        return;
      }
    }
  }
LAB_03698e94:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


