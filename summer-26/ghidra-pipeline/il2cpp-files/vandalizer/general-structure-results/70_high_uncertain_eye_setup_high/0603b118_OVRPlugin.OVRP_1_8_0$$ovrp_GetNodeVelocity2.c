/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 0603b118
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w22;
  
  do {
    iVar2 = (int)param_1 - (int)param_5;
    if (unaff_w22 <= iVar2) {
      iVar2 = unaff_w22;
    }
    FUN_05e24634(param_3,0,param_4,param_5,iVar2,0);
    param_4 = *(long *)(unaff_x19 + 0x18);
    uVar1 = iVar2 + *(int *)(unaff_x19 + 0x20);
    param_5 = (ulong)uVar1;
    *(uint *)(unaff_x19 + 0x20) = uVar1;
    if (param_4 == 0) goto LAB_0603b1f8;
    param_1 = *(undefined8 *)(param_4 + 0x18);
    unaff_w22 = unaff_w22 - iVar2;
    if ((int)(uint)param_1 < (int)uVar1) {
      thunk_FUN_03257e30(PTR_DAT_0759b3f0);
      uVar4 = thunk_FUN_0322f148();
      FUN_05e38b34(uVar4,0);
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075f7bc8);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar4,uVar5);
    }
    if (uVar1 == (uint)param_1) {
      param_5 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
  } while (0 < unaff_w22);
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(param_3 + 0x18) / DAT_014ba778;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar3 = FUN_06dcaacc(*(long *)(unaff_x19 + 0x10),0), lVar3 != 0)) {
    FUN_06dc8af8(lVar3,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_0603b1f8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


