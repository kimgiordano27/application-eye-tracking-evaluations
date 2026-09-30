/*
FUNCTION_NAME: FUN_053d6f00
ENTRY_POINT: 053d6f00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_053d6f00(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_066d09e5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(OVRPlugin_OVRP_1_56_0_TypeInfo);
    DAT_066d09e5 = 1;
  }
  plVar5 = (long *)(param_1 + 0x80);
  if (*plVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_04d94540(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) != 0) {
        iVar1 = FUN_04c07ea0(*(long *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),0);
        if (iVar1 == 0) {
                    /* try { // try from 053d7068 to 054d7093 has its CatchHandler @ 053d71dc */
          plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar3 = FUN_053d6158(*(undefined8 *)(param_1 + 0x10));
          if (plVar5 != (long *)0x0) {
                    /* try { // try from 053d7094 to 054d709f has its CatchHandler @ 053d71d4 */
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
LAB_053d70d8:
              uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053d70e0 to 054d7193 has its CatchHandler @ 053d6bf8 */
              FUN_02b3c988(uVar6,0);
            }
            if ((int)plVar5[3] != 0) {
              plVar5[4] = lVar3;
                    /* try { // try from 053d70b8 to 054d70df has its CatchHandler @ 053d71e4 */
              thunk_FUN_02bb0e9c(plVar5 + 4,lVar3);
              lVar3 = *(long *)(param_1 + 0xb8);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
              goto LAB_053d70d8;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                plVar5[5] = lVar3;
                thunk_FUN_02bb0e9c(plVar5 + 5,lVar3);
                uVar6 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo,plVar5,0);
                    /* WARNING: Subroutine does not return */
                FUN_053d7134(uVar6,*(undefined8 *)(param_1 + 0x10));
              }
            }
LAB_053d70f0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          lVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,2);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
              thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0xc0);
                thunk_FUN_02bb0e9c();
                    /* try { // try from 053d7004 to 054d702b has its CatchHandler @ 053d71e0 */
                uVar6 = FUN_053cd328(uVar6,uVar7,lVar3,0);
                *(undefined8 *)(param_1 + 0x80) = uVar6;
                thunk_FUN_02bb0e9c(plVar5,uVar6);
                FUN_053d718c(*(undefined8 *)(param_1 + 0x48));
                goto LAB_053d7044;
              }
            }
            goto LAB_053d70f0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar6 = FUN_053d718c(*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x80) = uVar6;
      thunk_FUN_02bb0e9c(plVar5,uVar6);
    }
  }
LAB_053d7044:
  return *plVar5;
}


