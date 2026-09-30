/*
FUNCTION_NAME: FUN_0550c00c
ENTRY_POINT: 0550c00c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0550c00c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 0550bf38 with catch @ 0550c01c
                       catch() { ... } // from try @ 0550c008 with catch @ 0550c01c */
                    /* try { // try from 0550c020 to 0560c023 has its CatchHandler @ 0550c9b0 */
                    /* try { // try from 0550c024 to 0560c043 has its CatchHandler @ 0550aaa8 */
  if ((DAT_06bbf58a & 1) == 0) {
                    /* catch() { ... } // from try @ 0550b178 with catch @ 0550c028 */
    FUN_02f08768(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbc88);
                    /* try { // try from 0550c044 to 0560c05b has its CatchHandler @ 0550c128 */
    FUN_02f08768(PTR_DAT_067ca3c0);
    DAT_06bbf58a = 1;
  }
  if (param_2 != (long *)0x0) {
                    /* try { // try from 0550c05c to 0560c113 has its CatchHandler @ 0550aaa8 */
    if (*param_2 != *(long *)PTR_DAT_067ca3c0) {
                    /* catch() { ... } // from try @ 0550c044 with catch @ 0550c128
                       catch() { ... } // from try @ 0550c114 with catch @ 0550c128 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0550c12c to 0560c12f has its CatchHandler @ 0550c9b0 */
      FUN_02f08d48(param_2);
    }
    FUN_05500c08(param_1,param_2[4]);
    lVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (lVar2 != 0) {
      uVar3 = FUN_050ef21c(lVar2,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
        }
        uVar3 = FUN_0552b3f4(uVar4,0);
        puVar1 = OVRPlugin_OVRP_1_110_0_TypeInfo;
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)(param_1 + 0x10);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_110_0_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar2 != 0) {
            FUN_054f6d80(lVar2,**(undefined8 **)(*(long *)puVar1 + 0xb8));
            return;
          }
          goto LAB_0550c124;
        }
      }
      return;
    }
  }
LAB_0550c124:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


