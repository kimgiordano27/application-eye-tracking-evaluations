/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 0909c46c
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


void OVRPlugin__GetNodePoseStateAtTime
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,long *param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
               undefined4 param_17,ulong param_18,undefined4 param_19)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_0b330242 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac401c0);
    DAT_0b330242 = 1;
  }
  param_19 = 0;
  param_18 = 0;
  param_14 = 0;
  param_15 = 0;
  param_17 = 0;
  param_16 = 0;
  if (*(long *)(param_2 + 0x140) != 0) {
    uVar7 = FUN_0909acb0(param_1,*(undefined4 *)(param_2 + 0xdc),*(long *)(param_2 + 0x140),param_3,
                         param_4,param_6,param_7);
    if ((uVar7 & 1) != 0) {
      return;
    }
    FUN_0904d278((long)&param_10 + 4,param_3,param_4,0);
    uVar5 = param_13._4_4_;
    uVar4 = (undefined4)param_13;
    uVar3 = param_12._4_4_;
    uVar2 = (undefined4)param_12;
    lVar9 = *param_7;
    if (lVar9 != 0) {
                    /* try { // try from 0909c520 to 0919c547 has its CatchHandler @ 0909c760 */
      *(undefined1 *)(lVar9 + 0x10) = 0;
      uVar12 = param_11._4_4_;
      uVar11 = (undefined4)param_11;
      uVar10 = FUN_0909c5ec(param_10._4_4_,*(undefined8 *)(param_2 + 0x138),&param_18);
      uVar6 = param_19;
      uVar7 = param_18;
      puVar1 = PTR_DAT_0ac401c0;
      *(undefined4 *)(lVar9 + 0x3c) = uVar10;
      *(undefined4 *)(lVar9 + 0x40) = uVar11;
      *(undefined4 *)(lVar9 + 0x44) = uVar12;
      uVar12 = param_18._4_4_;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
                    /* try { // try from 0909c584 to 0919c5af has its CatchHandler @ 0909c75c */
      FUN_0a188128(uVar7 & 0xffffffff,uVar12,uVar6,uVar2,uVar3,uVar4,uVar5,&param_14,0);
      if (*(long *)(param_2 + 200) != 0) {
        lVar9 = *param_7;
        uVar8 = FUN_0a17834c(*(long *)(param_2 + 200),0);
        FUN_0904d4ec((long)&param_10 + 4,uVar8,&param_14,0);
        if (lVar9 != 0) {
          *(ulong *)(lVar9 + 0x28) = CONCAT44((undefined4)param_12,param_11._4_4_);
          *(ulong *)(lVar9 + 0x20) = CONCAT44((undefined4)param_11,param_10._4_4_);
          *(ulong *)(lVar9 + 0x34) = CONCAT44(param_13._4_4_,(undefined4)param_13);
          *(ulong *)(lVar9 + 0x2c) = CONCAT44(param_12._4_4_,(undefined4)param_12);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


