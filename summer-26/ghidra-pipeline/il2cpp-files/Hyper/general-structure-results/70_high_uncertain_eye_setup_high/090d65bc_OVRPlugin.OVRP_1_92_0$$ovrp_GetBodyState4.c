/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetBodyState4
ENTRY_POINT: 090d65bc
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_GetBodyState4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined4 *puVar6;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  long in_stack_00000048;
  
  if ((*(byte *)(unaff_x20 + 0x588) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac79930);
    FUN_04947ee4(PTR_DAT_0ac75890);
    *(undefined1 *)(unaff_x20 + 0x588) = 1;
  }
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000048 = param_1;
  thunk_FUN_049ee3d8(&stack0x00000048,param_1);
  if (in_stack_00000048 != 0) {
    lVar3 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac79930,*(undefined4 *)(in_stack_00000048 + 0x18));
    puVar1 = PTR_DAT_0ac75890;
    if (in_stack_00000048 != 0) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(lVar3 + 0x20);
      do {
        if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)uVar5) {
          lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_090d6824();
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
            thunk_FUN_049ee3d8((long *)(lVar4 + 0x10),lVar3);
            return lVar4;
          }
          break;
        }
        if (*(uint *)(in_stack_00000048 + 0x18) <= uVar5) {
LAB_090d6710:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(in_stack_00000048 + uVar5 * 8 + 0x20),1,0)
        ;
        in_stack_00000028 = in_stack_00000000._12_4_;
        in_stack_00000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        in_stack_00000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar2 = FUN_090d6714(uVar5 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_090d6710;
        *puVar6 = uVar2;
        puVar6[8] = 0;
        uVar5 = uVar5 + 1;
        *(ulong *)(puVar6 + 3) = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *(undefined8 *)(puVar6 + 1) = in_stack_00000020;
        *(ulong *)(puVar6 + 6) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(puVar6 + 4) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        puVar6 = puVar6 + 9;
      } while (in_stack_00000048 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


