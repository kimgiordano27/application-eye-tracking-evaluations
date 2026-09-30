/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 07c9e7d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan
               (undefined4 param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while (unaff_x22 != 0) {
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x20) {
LAB_07c9e97c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    puVar6 = (undefined4 *)(unaff_x22 + unaff_x29);
    puVar6[-3] = param_1;
    puVar6[-2] = (int)param_2;
    puVar6[-1] = (int)param_3;
    *puVar6 = param_4;
    uVar2 = FUN_095258d0(unaff_x23,0);
    FUN_07c09014(&stack0x00000070,uVar2,0,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar2 = FUN_095258d0();
    FUN_07c1d8a4(&stack0x00000070,uVar2,&stack0x00000090,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    uVar7 = *(undefined8 *)(unaff_x25 + 0x14);
    uVar2 = *(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000084 = (undefined4)uVar7;
    in_stack_00000088 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack000000000000007c = (undefined4)uVar2;
    uStack0000000000000080 = (undefined4)((ulong)uVar2 >> 0x20);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
    uVar8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar5 = (undefined8 *)(lVar4 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar5 + 0x14) = uVar7;
      *(undefined8 *)((long)puVar5 + 0xc) = uVar2;
      puVar5[1] = uVar8;
      *puVar5 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_07c9e978;
      param_2 = in_stack_00000070;
      unaff_x23 = FUN_05badb74(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_09f1eba8);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar1 = FUN_0952c404(unaff_x23,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07c9e978;
      unaff_x22 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar1 & 1) == 0) break;
      if (*(char *)(unaff_x24 + 0xf45) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      if (unaff_x22 == 0) goto LAB_07c9e978;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(unaff_x22 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(unaff_x22 + unaff_x29 + -0xc) = uVar2;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07c9e978;
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x26 + 0xf43) == '\0') {
        FUN_04447ba8();
        cVar3 = *(char *)(unaff_x24 + 0xf45);
        *(undefined1 *)(unaff_x26 + 0xf43) = 1;
      }
      else {
        cVar3 = '\x01';
      }
      puVar6 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      param_3 = (ulong)(uint)puVar6[2];
      if (cVar3 == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_4 = *puVar6;
      in_stack_00000070 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_09537b20(uVar9,uVar10,param_3,param_4,puVar6[1],puVar6[2],puVar6[3],&stack0x00000070,0);
      if (lVar4 == 0) goto LAB_07c9e978;
      uVar7 = CONCAT44(in_stack_00000088,uStack0000000000000084);
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar2 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar5 = (undefined8 *)(lVar4 + unaff_x28);
    }
    if ((unaff_x23 == 0) || (lVar4 = FUN_095258d0(unaff_x23,0), lVar4 == 0)) break;
    param_1 = FUN_0953a358(lVar4,0);
  }
LAB_07c9e978:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


