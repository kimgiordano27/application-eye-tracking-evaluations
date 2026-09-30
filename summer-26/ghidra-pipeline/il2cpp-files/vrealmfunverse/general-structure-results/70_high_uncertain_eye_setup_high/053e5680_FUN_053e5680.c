/*
FUNCTION_NAME: FUN_053e5680
ENTRY_POINT: 053e5680
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_053e5680(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  
  if ((DAT_066d0a46 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    DAT_066d0a46 = 1;
  }
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    if (param_2 != (long *)0x0) {
      bVar6 = *(byte *)(*(long *)OVRPlugin_OVRP_1_103_0_TypeInfo + 0x130);
      if ((bVar6 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar6 * 8 + -8) ==
          *(long *)OVRPlugin_OVRP_1_103_0_TypeInfo)) {
        if (param_1[2] == 0) {
LAB_053e5850:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar1 = FUN_053e5554();
        if (lVar1 == 0) {
          bVar6 = 0;
        }
        else {
          if (((param_1[2] == 0) || (lVar1 = FUN_053e5554(), lVar1 == 0)) ||
             (*(long *)(lVar1 + 0x20) == 0)) goto LAB_053e5850;
          bVar6 = *(byte *)(*(long *)(lVar1 + 0x20) + 0x21) ^ 1;
        }
                    /* try { // try from 053e573c to 054e595f has its CatchHandler @ 053e573c
                       catch() { ... } // from try @ 053e573c with catch @ 053e573c
                       catch() { ... } // from try @ 053e5a04 with catch @ 053e573c
                       catch() { ... } // from try @ 053e6f18 with catch @ 053e573c
                       catch() { ... } // from try @ 053e9dd8 with catch @ 053e573c
                       catch() { ... } // from try @ 053e9ee8 with catch @ 053e573c
                       catch() { ... } // from try @ 053e9fec with catch @ 053e573c
                       catch() { ... } // from try @ 053ea1ec with catch @ 053e573c
                       catch() { ... } // from try @ 053eae1c with catch @ 053e573c
                       catch() { ... } // from try @ 053eaec8 with catch @ 053e573c */
        if (param_2[2] == 0) goto LAB_053e5850;
        lVar1 = FUN_053e5554();
        if (lVar1 == 0) {
          bVar7 = 0;
        }
        else {
          if (((param_2[2] == 0) || (lVar1 = FUN_053e5554(), lVar1 == 0)) ||
             (*(long *)(lVar1 + 0x20) == 0)) goto LAB_053e5850;
          bVar7 = *(byte *)(*(long *)(lVar1 + 0x20) + 0x21) ^ 1;
        }
        if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_053e5850;
        uVar2 = thunk_FUN_04c08854(*(undefined8 *)(param_1[2] + 0x18),
                                   *(undefined8 *)(param_2[2] + 0x18),0);
        if ((uVar2 & 1) != 0) {
          lVar1 = param_1[2];
          if ((lVar1 == 0) || (lVar5 = param_2[2], lVar5 == 0)) goto LAB_053e5850;
          if (((bVar6 | *(byte *)(lVar1 + 0x26)) == (bVar7 | *(byte *)(lVar5 + 0x26))) &&
             (((*(char *)(lVar1 + 0x24) != '\0') != (*(char *)(lVar5 + 0x24) == '\0') &&
              ((*(char *)(lVar1 + 0x25) != '\0') != (*(char *)(lVar5 + 0x25) == '\0'))))) {
            plVar3 = (long *)FUN_053e5540(param_1);
            uVar4 = FUN_053e5540(param_2);
            if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x053e5838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (**(code **)(*plVar3 + 0x268))
                                (plVar3,uVar4,param_3,*(undefined8 *)(*plVar3 + 0x270));
              return uVar4;
            }
            goto LAB_053e5850;
          }
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


