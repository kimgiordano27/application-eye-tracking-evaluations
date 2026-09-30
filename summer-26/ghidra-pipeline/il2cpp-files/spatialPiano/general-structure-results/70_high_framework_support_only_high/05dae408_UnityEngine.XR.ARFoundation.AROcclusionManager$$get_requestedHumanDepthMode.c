/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.AROcclusionManager$$get_requestedHumanDepthMode
ENTRY_POINT: 05dae408
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


uint UnityEngine_XR_ARFoundation_AROcclusionManager__get_requestedHumanDepthMode(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 unaff_w20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined4 uStack0000000000000140;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uStack0000000000000140 = *(undefined4 *)(unaff_x25 + 6);
  uStack0000000000000158 = 0;
  uStack0000000000000150 = 0;
  uStack0000000000000168 = 0;
  uStack0000000000000160 = 0;
  uStack0000000000000178 = 0;
  uStack0000000000000170 = 0;
  uStack0000000000000188 = 0;
  uStack0000000000000180 = 0;
  uStack0000000000000198 = 0;
  uStack0000000000000190 = 0;
  uStack00000000000001a8 = 0;
  uStack00000000000001a0 = 0;
  uStack00000000000001b8 = 0;
  uStack00000000000001b0 = 0;
  uStack00000000000001c8 = 0;
  uStack00000000000001c0 = 0;
  uStack0000000000000118 = unaff_x25[1];
  uStack0000000000000110 = *unaff_x25;
  uStack0000000000000128 = unaff_x25[3];
  uStack0000000000000120 = unaff_x25[2];
  uStack0000000000000138 = unaff_x25[5];
  uStack0000000000000130 = unaff_x25[4];
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  in_stack_000000d8 = uStack0000000000000118;
  in_stack_000000d0 = uStack0000000000000110;
  in_stack_000000e8 = uStack0000000000000128;
  in_stack_000000e0 = uStack0000000000000120;
  in_stack_00000100 = uStack0000000000000140;
  in_stack_000000f8 = uStack0000000000000138;
  in_stack_000000f0 = uStack0000000000000130;
  FUN_05dae6a0(&stack0x00000150,0,&stack0x000000d0,0,unaff_w20,unaff_w23,unaff_w22);
  lVar7 = *unaff_x21;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_05dade18(lVar7,&stack0x00000150,0);
  if ((uVar2 & 1) != 0) {
    if (*unaff_x21 != 0) {
      uVar8 = *(undefined8 *)(*unaff_x21 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_060f078c(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*unaff_x21 == 0) || (lVar7 = *(long *)(*unaff_x21 + 0x18), lVar7 == 0))
        goto LAB_05dae69c;
        FUN_060d597c(&stack0x00000110,lVar7,0);
        if ((*unaff_x21 == 0) || (lVar7 = *(long *)(*unaff_x21 + 0x18), lVar7 == 0))
        goto LAB_05dae69c;
        uVar3 = FUN_060cc0f0(lVar7,0);
        if (*unaff_x21 == 0) goto LAB_05dae69c;
        lVar7 = *(long *)(*unaff_x21 + 0x18);
        if (lVar7 == 0) goto LAB_05dae69c;
        uVar9 = FUN_060cc2b8(lVar7,0);
        if ((*unaff_x21 == 0) || (lVar7 = *(long *)(*unaff_x21 + 0x18), lVar7 == 0))
        goto LAB_05dae69c;
        uVar4 = FUN_060cbf28(lVar7,0);
        if (*unaff_x21 == 0) goto LAB_05dae69c;
        lVar7 = *(long *)(*unaff_x21 + 0x18);
        if (lVar7 == 0) goto LAB_05dae69c;
        uVar5 = FUN_060cba90(lVar7,0);
        if (*unaff_x21 == 0) goto LAB_05dae69c;
        uVar8 = *(undefined8 *)(*unaff_x21 + 0x58);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000018 = uStack0000000000000118;
        in_stack_00000010 = uStack0000000000000110;
        in_stack_00000028 = uStack0000000000000128;
        in_stack_00000020 = uStack0000000000000120;
        in_stack_00000040 = uStack0000000000000140;
        in_stack_00000038 = uStack0000000000000138;
        in_stack_00000030 = uStack0000000000000130;
        FUN_05dae6a0(&stack0x00000050,uVar9,&stack0x00000010,0,uVar3,uVar4,uVar5,uVar8);
        lVar7 = *unaff_x21;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dae808(&stack0x00000050,lVar7);
      }
    }
    puVar1 = PTR_DAT_067cb280;
    lVar7 = *(long *)PTR_DAT_067cb280;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) {
LAB_05dae69c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = FUN_05dae8d4(lVar7,&stack0x00000150);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar7 = FUN_05c9de50(unaff_s8);
      *unaff_x21 = lVar7;
    }
  }
  return uVar2 & 1;
}


