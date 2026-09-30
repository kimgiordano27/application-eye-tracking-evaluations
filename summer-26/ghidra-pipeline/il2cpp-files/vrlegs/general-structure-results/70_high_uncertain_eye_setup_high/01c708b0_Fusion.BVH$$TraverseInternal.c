/*
FUNCTION_NAME: Fusion.BVH$$TraverseInternal
ENTRY_POINT: 01c708b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c70a98) */
/* WARNING: Removing unreachable block (ram,0x01c70a8c) */

long Fusion_BVH__TraverseInternal(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long in_stack_00000008;
  char cStack0000000000000014;
  long in_stack_00000018;
  
  if ((DAT_0411f8a0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4eb0);
    FUN_01ab69ac(PTR_DAT_03cc4eb8);
    FUN_01ab69ac(PTR_DAT_03cc4ec0);
    DAT_0411f8a0 = 1;
  }
  puVar2 = PTR_DAT_03cc4ec0;
  puVar1 = PTR_DAT_03cc4eb8;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if ((param_2 != 0) && (plVar3 = *(long **)(param_2 + 0x10), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x3c8))(plVar3,*(undefined8 *)(*plVar3 + 0x3d0));
    uVar4 = FUN_01ff872c(uVar4,param_3,*(undefined8 *)puVar2);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    cStack0000000000000014 = '\0';
    FUN_027e0bd8(uVar9,&stack0x00000014,0);
    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_0219f8b8(*(long *)(param_1 + 0x78),uVar4,&stack0x00000018,*(undefined8 *)puVar1);
    uVar6 = 3;
    lVar7 = in_stack_00000018;
    if ((uVar5 & 1) == 0) {
      uVar6 = 4;
      lVar7 = 0;
    }
    if (cStack0000000000000014 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
    if ((uVar6 | 4) == 4) {
      in_stack_00000018 = FUN_01c710b0(param_1,param_2,param_3);
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      cStack0000000000000014 = '\0';
      FUN_027e0bd8(uVar9,&stack0x00000014,0);
      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_0219f8b8(*(long *)(param_1 + 0x78),uVar4,&stack0x00000008,*(undefined8 *)puVar1);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219b9a4(*(long *)(param_1 + 0x78),uVar4,in_stack_00000018,
                     *(undefined8 *)PTR_DAT_03cc4eb0);
        iVar8 = 6;
      }
      else {
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01c714f4();
        iVar8 = 3;
        lVar7 = in_stack_00000008;
      }
      if (cStack0000000000000014 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      if ((iVar8 == 6) || (iVar8 == 0)) {
        lVar7 = in_stack_00000018;
      }
    }
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


