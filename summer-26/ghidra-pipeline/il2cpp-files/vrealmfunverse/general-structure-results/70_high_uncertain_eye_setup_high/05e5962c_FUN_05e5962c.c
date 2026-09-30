/*
FUNCTION_NAME: FUN_05e5962c
ENTRY_POINT: 05e5962c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_05e5962c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_107__;
  if ((DAT_066dc60d & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_108__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_109__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_11__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_107__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_110__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_111__);
    DAT_066dc60d = 1;
  }
  FUN_04dbdb8c(param_1,0);
  uVar5 = FUN_05c35a24(0);
  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,uVar5);
  puVar11 = (undefined8 *)(param_1 + 0x10);
  *puVar11 = uVar7;
  thunk_FUN_02bb0e9c(puVar11,uVar7);
  uVar6 = FUN_05c35a24(0);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_111__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_110__;
  if (0 < (int)uVar6) {
    uVar12 = 0;
    lVar13 = 0x20;
    do {
      plVar14 = (long *)*puVar11;
      lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_03f094b4(lVar8,0x80,*(undefined8 *)puVar2);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
        uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar7,0);
      }
      if (*(uint *)(plVar14 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(long *)((long)plVar14 + lVar13) = lVar8;
      thunk_FUN_02bb0e9c((long)plVar14 + lVar13,lVar8);
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar6 != uVar12);
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_11__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_109__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_108__;
  lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_108__;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar13 = *(long *)puVar2;
  }
  uVar7 = **(undefined8 **)(lVar13 + 0xb8);
  uVar1 = (*(undefined8 **)(lVar13 + 0xb8))[1];
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04a98090(uVar10,uVar7,uVar1,0x80,param_2,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar10);
  return;
}


