/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_61
ENTRY_POINT: 01dc3644
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_61(undefined8 param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uStack000000000000000c;
  
  if ((DAT_0247dab4 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    FUN_00fdc2e4(PTR_DAT_0234c848);
                    /* try { // try from 01dc3674 to 01ec375b has its CatchHandler @ 01dc3674
                       catch() { ... } // from try @ 01dc3674 with catch @ 01dc3674
                       catch() { ... } // from try @ 01dc3880 with catch @ 01dc3674
                       catch() { ... } // from try @ 01dc3964 with catch @ 01dc3674
                       catch() { ... } // from try @ 01dc398c with catch @ 01dc3674
                       catch() { ... } // from try @ 01dc3a08 with catch @ 01dc3674 */
    FUN_00fdc2e4(PTR_DAT_023508b8);
    DAT_0247dab4 = 1;
  }
  if (param_2 != 0) {
    lVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234c848);
    FUN_01dc9010(lVar4,*(int *)(param_2 + 0x18) * 3,0x7fffffff);
    puVar3 = PTR_DAT_023508b8;
    puVar2 = PTR_DAT_0234c0c0;
    if (0 < *(int *)(param_2 + 0x18)) {
      if (lVar4 == 0) goto LAB_01dc36bc;
      uVar7 = 0;
      do {
        FUN_01dc37f8(lVar4,0x5b);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar5 = FUN_01d22d48(0);
        if (*(uint *)(param_2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar5 = FUN_01c6a5b4(param_2 + 0x20 + uVar7,*(undefined8 *)puVar3,uVar5,0);
        uVar5 = FUN_01dc3848(lVar4,uVar5);
        FUN_01dc37f8(uVar5,0x5d);
        uVar1 = uVar7 + 1;
      } while ((uVar7 < 0x13) && (uVar7 = uVar1, (long)uVar1 < (long)*(int *)(param_2 + 0x18)));
      if ((int)uVar1 == 0x14) {
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235aba8);
        FUN_01dc3848(lVar4,uVar5);
      }
    }
    uStack000000000000000c = param_3;
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
    uVar5 = thunk_FUN_0103fd0c(uVar5,&stack0x0000000c);
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0235abb0);
    uVar5 = FUN_01c433dc(uVar6,lVar4,uVar5,0);
    thunk_FUN_010303a8(PTR_DAT_0235abb8);
    uVar6 = thunk_FUN_010400dc();
    FUN_01dc394c(uVar6,uVar5,param_2,param_3);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0235abc0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6,uVar5);
  }
LAB_01dc36bc:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


