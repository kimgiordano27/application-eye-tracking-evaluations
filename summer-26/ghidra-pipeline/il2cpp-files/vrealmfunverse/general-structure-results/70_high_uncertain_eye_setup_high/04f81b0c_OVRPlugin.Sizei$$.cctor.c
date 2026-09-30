/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 04f81b0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Sizei___cctor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  thunk_FUN_02bb0e9c(&stack0x00000048);
  if (unaff_x19 != 0) {
    lVar3 = FUN_02b3c908(*(undefined8 *)System_Func<FocusEvent>_TypeInfo,
                         *(undefined4 *)(unaff_x19 + 0x18));
    puVar1 = System_Dynamic_IDynamicMetaObjectProvider_var;
    if (unaff_x19 != 0) {
      uVar5 = 0;
      puVar6 = (undefined8 *)(lVar3 + 0x24);
      do {
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)uVar5) {
          lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
          FUN_04f81d44();
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
            thunk_FUN_02bb0e9c((long *)(lVar4 + 0x10),lVar3);
            return lVar4;
          }
          break;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) {
LAB_04f81c30:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + uVar5 * 8 + 0x20),1,0);
        uStack0000000000000028 = in_stack_00000000._12_4_;
        uStack0000000000000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        uStack0000000000000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = FUN_04f81c34(uVar5 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04f81c30;
        *(undefined4 *)((long)puVar6 + -4) = uVar2;
        uVar5 = uVar5 + 1;
        puVar6[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *puVar6 = uStack0000000000000020;
        *(ulong *)((long)puVar6 + 0x14) = CONCAT44(uStack0000000000000038,uStack0000000000000034);
        *(ulong *)((long)puVar6 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        puVar6 = puVar6 + 4;
      } while (unaff_x19 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


