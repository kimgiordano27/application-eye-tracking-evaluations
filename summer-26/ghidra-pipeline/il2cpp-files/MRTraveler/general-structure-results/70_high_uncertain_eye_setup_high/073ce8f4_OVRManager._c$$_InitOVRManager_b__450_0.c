/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__450_0
ENTRY_POINT: 073ce8f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
OVRManager_<>c__<InitOVRManager>b__450_0
          (undefined8 param_1,ulong param_2,ulong param_3,long param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  uint in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000007c;
  
  puVar2 = PTR_DAT_08eb3460;
  if ((DAT_0941e71c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb3460);
    DAT_0941e71c = 1;
  }
  lVar4 = *(long *)puVar2;
  in_stack_00000028 = 0;
  _uStack0000000000000020 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined4 **)(lVar4 + 0xb8);
  uStack000000000000007c = *puVar6;
  uVar11 = puVar6[1];
  uVar12 = puVar6[2];
  *param_5 = (int)param_1;
  param_5[1] = (int)param_2;
  param_5[2] = (int)param_3;
  if (param_4 == 0) {
LAB_073ceac4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = *(uint *)(param_4 + 0x18);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar4 = *(long *)(param_4 + (long)(int)uVar7 * 8 + 0x20);
      uVar3 = FUN_072f4648(param_1,param_2,param_3,lVar4,0);
      if (lVar4 == 0) goto LAB_073ceac4;
      if ((uVar3 & 1) == 0) {
        uVar9 = param_2;
        uVar10 = param_3;
        uVar8 = FUN_0863eb6c(param_1,lVar4,0);
      }
      else {
        FUN_0863ec28(&stack0x00000008,lVar4,0);
        uVar8 = (ulong)uStack0000000000000008;
        uVar9 = (ulong)uStack000000000000000c;
        uVar10 = (ulong)in_stack_00000010;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_073d893c(param_1,param_2,param_3,uVar8,uVar9,uVar10,&stack0x00000020,uVar3 & 1);
      uVar5 = FUN_073d2688(uStack000000000000007c,uVar11,uVar12,&stack0x00000020);
      if ((uVar5 & 1) != 0) {
        uVar1 = (int)param_1;
        uVar12 = (int)param_2;
        uVar11 = (int)param_3;
        if ((uVar3 & 1) == 0) {
          uVar11 = (undefined4)uVar10;
          uVar12 = (undefined4)uVar9;
          uVar1 = (undefined4)uVar8;
        }
        *param_5 = uVar1;
        param_5[1] = uVar12;
        param_5[2] = uVar11;
        uStack000000000000007c = uStack0000000000000020;
        uVar11 = uStack0000000000000024;
        uVar12 = in_stack_00000028;
      }
      uVar3 = *(uint *)(param_4 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar3);
  }
  return uStack000000000000007c;
}


