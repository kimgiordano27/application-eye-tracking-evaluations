/*
FUNCTION_NAME: FUN_06b02f24
ENTRY_POINT: 06b02f24
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_06b02f24(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined *puVar3;
  
  if ((DAT_073ab3c1 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_Result_TypeInfo);
    FUN_02fe925c(OVRPlugin_Size3f_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_Sizef_TypeInfo);
                    /* try { // try from 06b02f74 to 06c02f7b has its CatchHandler @ 06b03070 */
    DAT_073ab3c1 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* try { // try from 06b03004 to 06c0302f has its CatchHandler @ 06b03070 */
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 06b02f90 to 06c02fc3 has its CatchHandler @ 06b03074 */
      uVar1 = FUN_03fca368(*(long *)(param_1 + 0x28),param_2,
                           *(undefined8 *)OVRPlugin_Size3f_TypeInfo);
      puVar3 = OVRPlugin_Sizei_TypeInfo;
      if ((uVar1 & 1) != 0) goto LAB_06b03050;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar1 = FUN_04431714(*(long *)(param_1 + 0x20),param_2,
                             *(undefined8 *)OVRPlugin_Sizef_TypeInfo);
        if ((uVar1 & 1) != 0) {
LAB_06b03020:
                    /* try { // try from 06b03030 to 06c0306b has its CatchHandler @ 06b02ef0 */
                    /* WARNING: Could not recover jumptable at 0x06b03034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          return;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar1 = FUN_04430678(*(long *)(param_1 + 0x10),param_2,
                               *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
          puVar3 = OVRPlugin_SkeletonType_TypeInfo;
          if ((uVar1 & 1) == 0) goto LAB_06b03050;
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_03fcae58(*(long *)(param_1 + 0x28),param_2,*(undefined8 *)OVRPlugin_Result_TypeInfo)
            ;
            goto LAB_06b03020;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar1 = FUN_06b030b4(param_1,param_2);
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  if ((uVar1 & 1) != 0) goto LAB_06b03020;
LAB_06b03050:
  uVar2 = thunk_FUN_03037804(puVar3);
  uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
                    /* try { // try from 06b0306c to 06c0306f has its CatchHandler @ 06b03074 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b02f74 with catch @ 06b03070
                       catch(type#1 @ 06b7e988) { ... } // from try @ 06b03004 with catch @ 06b03070
                       try { // try from 06b03070 to 06c0308b has its CatchHandler @ 06b02ef0 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b02f90 with catch @ 06b03074
                       catch(type#1 @ 06b7e988) { ... } // from try @ 06b0306c with catch @ 06b03074
                        */
  uVar2 = FUN_059687dc(uVar2,uVar4,0);
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar4 = thunk_FUN_0301080c();
                    /* try { // try from 06b0308c to 06c0308f has its CatchHandler @ 06b0309c */
  FUN_05a64d00(uVar4,uVar2,0);
                    /* catch() { ... } // from try @ 06b0308c with catch @ 06b0309c */
                    /* try { // try from 06b030a0 to 06c030bf has its CatchHandler @ 06b030d4 */
  uVar2 = thunk_FUN_03037804(OVRPlugin_SpaceQueryResult_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar4,uVar2);
}


