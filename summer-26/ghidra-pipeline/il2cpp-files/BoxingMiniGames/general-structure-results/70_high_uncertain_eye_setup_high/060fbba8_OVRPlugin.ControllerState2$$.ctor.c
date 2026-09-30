/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 060fbba8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_ControllerState2___ctor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  ulong uVar5;
  undefined4 *puVar6;
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
  thunk_FUN_036b7ad0();
  if (unaff_x19 != 0) {
    lVar3 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a24df0,*(undefined4 *)(unaff_x19 + 0x18));
    puVar1 = PTR_DAT_07a207c0;
    if (unaff_x19 != 0) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(lVar3 + 0x20);
      do {
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)uVar5) {
          lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
          FUN_060fbddc();
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
            thunk_FUN_036b7ad0((long *)(lVar4 + 0x10),lVar3);
            return lVar4;
          }
          break;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) {
LAB_060fbcc8:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        FUN_0606b2f8(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + uVar5 * 8 + 0x20),1,0);
        uStack0000000000000028 = in_stack_00000000._12_4_;
        uStack0000000000000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        uStack0000000000000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar2 = FUN_060fbccc(uVar5 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_060fbcc8;
        *puVar6 = uVar2;
        puVar6[8] = 0;
        uVar5 = uVar5 + 1;
        *(ulong *)(puVar6 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(puVar6 + 1) = uStack0000000000000020;
        *(ulong *)(puVar6 + 6) = CONCAT44(uStack0000000000000038,uStack0000000000000034);
        *(ulong *)(puVar6 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        puVar6 = puVar6 + 9;
      } while (unaff_x19 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


