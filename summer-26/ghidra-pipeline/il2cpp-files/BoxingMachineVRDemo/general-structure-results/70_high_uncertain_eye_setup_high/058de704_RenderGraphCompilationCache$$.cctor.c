/*
FUNCTION_NAME: RenderGraphCompilationCache$$.cctor
ENTRY_POINT: 058de704
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void RenderGraphCompilationCache___cctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined4 uStack00000000000000b4;
  undefined4 uStack000000000000014c;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x3c8));
  FUN_02d6084c(OVRPlugin_OVRP_1_78_0_TypeInfo);
  *(undefined1 *)(unaff_x28 + 0xb3a) = 1;
  iVar4 = FUN_03799000(unaff_x21 + 0x160,*unaff_x19);
  iVar1 = *(int *)(unaff_x21 + 0x160);
  if (iVar1 < iVar4) {
    if (iVar1 == 0) {
      plVar5 = (long *)(unaff_x21 + 0x338);
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x388);
      if (lVar6 == 0) goto LAB_058de8cc;
      if (*(uint *)(lVar6 + 0x18) <= iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar5 = (long *)(lVar6 + (long)(int)(iVar1 - 1U) * 0x220 + 0x1f0);
    }
    lVar6 = *plVar5;
    if (lVar6 != 0) goto LAB_058de79c;
  }
  uVar7 = *(undefined8 *)(unaff_x21 + 0x38);
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
  FUN_0636a6b4(lVar6,uVar7,0);
  if (lVar6 == 0) {
LAB_058de8cc:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_058de79c:
  puVar3 = OVRPlugin_OVRP_1_81_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  *(undefined4 *)(lVar6 + 0xfc) = unaff_w27;
  *(undefined4 *)(lVar6 + 0x100) = unaff_w22;
  *(undefined4 *)(lVar6 + 400) = unaff_w26;
  *(undefined4 *)(lVar6 + 0x194) = unaff_w25;
  *(undefined8 *)(lVar6 + 0x180) = unaff_x24;
  thunk_FUN_02dd37b4(lVar6 + 0x180);
  *(undefined8 *)(lVar6 + 0x188) = unaff_x23;
  thunk_FUN_02dd37b4(lVar6 + 0x188);
  FUN_03795394(unaff_x21 + 0x138,unaff_w22,10,*(undefined8 *)puVar2);
  FUN_03798284(unaff_x21 + 0x148,in_stack_00000008,10,*(undefined8 *)puVar3);
  memset(&stack0x00000010,0,0x220);
  in_stack_000001e0 = lVar6;
  thunk_FUN_02dd37b4(&stack0x000001e0,lVar6);
  in_stack_00000010 = 0;
  memset(&stack0x00000018,0,0x98);
  uStack000000000000001c = 3;
  memset(&stack0x000000b0,0,0x98);
  uStack00000000000000b4 = 3;
  memset(&stack0x00000148,0,0x98);
  uStack000000000000014c = 3;
  uVar7 = *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo;
  in_stack_000001e8 = 0;
  memcpy(&stack0x00000230,&stack0x00000010,0x220);
  FUN_03799cc4(unaff_x21 + 0x160,&stack0x00000230,10,uVar7);
  return;
}


