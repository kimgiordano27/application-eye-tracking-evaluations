/*
FUNCTION_NAME: FUN_06b01e7c
ENTRY_POINT: 06b01e7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_06b01e7c(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  int local_54;
  undefined1 local_50 [16];
  undefined8 *puVar7;
  
  puVar3 = PTR_DAT_06f98e98;
  if ((DAT_073ab3ac & 1) == 0) {
                    /* try { // try from 06b01eb8 to 06c01ee3 has its CatchHandler @ 06b01fc0 */
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_32_0_TypeInfo);
                    /* try { // try from 06b01ee4 to 06c01eeb has its CatchHandler @ 06b01fbc */
    FUN_02fe925c(OVRPlugin_OVRP_1_34_0_TypeInfo);
                    /* try { // try from 06b01eec to 06c01fa7 has its CatchHandler @ 06b01c14 */
    FUN_02fe925c(PTR_DAT_06f98e98);
    FUN_02fe925c(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_073ab3ac = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f6df30;
  puVar1 = PTR_DAT_06f6d668;
  param_2 = param_2 + -1;
  local_54 = param_2;
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_06b020cc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (param_2 < *(int *)(lVar8 + 0x18)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      local_50 = FUN_046299b8(lVar8,param_2,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
      if ((local_50._8_8_ & 1) == 0) {
                    /* try { // try from 06b01fa8 to 06c01fab has its CatchHandler @ 06b01fb8 */
                    /* try { // try from 06b01fac to 06c01fdb has its CatchHandler @ 06b01c14 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b01fa8 with catch @ 06b01fb8
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b01ee4 with catch @ 06b01fbc
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b01eb8 with catch @ 06b01fc0
                        */
        uVar5 = thunk_FUN_0301043c(*(undefined8 *)puVar2,&local_54);
        puVar7 = (undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b01e5c with catch @ 06b01fc4
                        */
      }
      else {
        if (0 < local_50._12_4_) {
          local_50._0_8_ = param_3;
          thunk_FUN_03048534(local_50,param_3);
          lVar8 = *(long *)(param_1 + 0x10);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          if (lVar8 != 0) {
                    /* try { // try from 06b02034 to 06c0205b has its CatchHandler @ 06b02070 */
            FUN_04629a10(lVar8,param_2,local_50._0_8_,local_50._8_8_,
                         *(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
            return;
          }
          goto LAB_06b020cc;
        }
                    /* try { // try from 06b0205c to 06c02067 has its CatchHandler @ 06b01c14 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
                    /* try { // try from 06b02068 to 06c0206f has its CatchHandler @ 06b02070 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06b02034 with catch @ 06b02070
                       catch(type#2 @ 00000000) { ... } // from try @ 06b02068 with catch @ 06b02070
                        */
        uVar5 = thunk_FUN_0301043c(*(undefined8 *)puVar2,&local_54);
        puVar7 = (undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo;
      }
      uVar6 = *puVar7;
      goto LAB_06b02080;
    }
  }
  puVar4 = OVRPlugin_OVRP_1_84_0_TypeInfo;
                    /* try { // try from 06b01fdc to 06c01fdf has its CatchHandler @ 06b01ff4 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
                    /* catch() { ... } // from try @ 06b01fdc with catch @ 06b01ff4 */
  uVar5 = thunk_FUN_0301043c(*(undefined8 *)puVar2,&local_54);
  uVar6 = *(undefined8 *)puVar4;
LAB_06b02080:
  uVar5 = FUN_059693f4(uVar6,uVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar1);
  }
  FUN_068bd958(uVar5,0);
  return;
}


