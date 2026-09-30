/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 07c9e710
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,ulong param_4,
               undefined4 param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar8;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  do {
    uVar11 = (undefined4)param_3;
    lVar1 = FUN_05badb74(param_6,unaff_x20 & 0xffffffff,*param_1);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar2 = FUN_0952c404(lVar1,0,0);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 07c9e7d4 to 07d9e91b has its CatchHandler @ 07c9e7d4
                       catch() { ... } // from try @ 07c9e7d4 with catch @ 07c9e7d4
                       catch() { ... } // from try @ 07c9ea98 with catch @ 07c9e7d4
                       catch() { ... } // from try @ 07c9ead8 with catch @ 07c9e7d4
                       catch() { ... } // from try @ 07c9eb18 with catch @ 07c9e7d4
                       catch() { ... } // from try @ 07c9eb54 with catch @ 07c9e7d4 */
      if (((lVar1 == 0) || (lVar3 = FUN_095258d0(lVar1,0), lVar3 == 0)) ||
         (uVar12 = FUN_0953a358(lVar3,0), lVar8 == 0)) break;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      puVar7 = (undefined4 *)(lVar8 + unaff_x29);
      puVar7[-3] = uVar12;
      puVar7[-2] = uVar11;
      puVar7[-1] = (int)param_4;
      *puVar7 = param_5;
      uVar4 = FUN_095258d0(lVar1,0);
      FUN_07c09014(&stack0x00000070,uVar4,0,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar4 = FUN_095258d0();
      FUN_07c1d8a4(&stack0x00000070,uVar4,&stack0x00000090,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      if (*(long *)(unaff_x19 + 0x48) == 0) break;
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar9 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar4 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar9;
      in_stack_00000088 = (undefined4)((ulong)uVar9 >> 0x20);
      uStack000000000000007c = (undefined4)uVar4;
      uStack0000000000000080 = (undefined4)((ulong)uVar4 >> 0x20);
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    }
    else {
      if (*(char *)(unaff_x24 + 0xf45) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) {
LAB_07c9e97c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar8 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar8 + unaff_x29 + -0xc) = uVar4;
      if (*(long *)(unaff_x19 + 0x48) == 0) break;
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x22 + 0xf43) == '\0') {
        FUN_04447ba8();
        cVar5 = *(char *)(unaff_x24 + 0xf45);
        *(undefined1 *)(unaff_x22 + 0xf43) = 1;
      }
      else {
        cVar5 = '\x01';
      }
      puVar7 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      param_4 = (ulong)(uint)puVar7[2];
      if (cVar5 == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_5 = *puVar7;
      in_stack_00000070 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_09537b20(uVar11,uVar12,param_4,param_5,puVar7[1],puVar7[2],puVar7[3],&stack0x00000070,0);
      if (lVar1 == 0) break;
      uVar9 = CONCAT44(in_stack_00000088,uStack0000000000000084);
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    }
    puVar6 = (undefined8 *)(lVar1 + unaff_x28);
    unaff_x29 = unaff_x29 + 0x10;
    unaff_x20 = unaff_x20 + 1;
    unaff_x28 = unaff_x28 + 0x1c;
    *(undefined8 *)((long)puVar6 + 0x14) = uVar9;
    *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
    puVar6[1] = uVar10;
    *puVar6 = in_stack_00000070;
    if (unaff_x29 == 0x1cc) {
      return;
    }
    param_6 = *(long *)(unaff_x19 + 0x60);
    param_1 = (undefined8 *)PTR_DAT_09f1eba8;
    param_3 = in_stack_00000070;
  } while (param_6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


