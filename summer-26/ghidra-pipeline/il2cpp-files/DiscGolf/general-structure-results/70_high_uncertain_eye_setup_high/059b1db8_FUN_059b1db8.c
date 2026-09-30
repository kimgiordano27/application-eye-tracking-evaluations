/*
FUNCTION_NAME: FUN_059b1db8
ENTRY_POINT: 059b1db8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined2 FUN_059b1db8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 local_34 [2];
  
                    /* try { // try from 059b1dc8 to 05ab1dcf has its CatchHandler @ 059b20e0 */
  if ((DAT_06dc150c & 1) == 0) {
                    /* try { // try from 059b1ddc to 05ab1ddf has its CatchHandler @ 059b20ec */
                    /* try { // try from 059b1de0 to 05ab1ef7 has its CatchHandler @ 059b1bac */
    FUN_02d965b8(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e690);
    FUN_02d965b8(PTR_DAT_069fcc60);
    FUN_02d965b8(PTR_DAT_06a0e698);
    FUN_02d965b8(PTR_DAT_06a0e778);
    FUN_02d965b8(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_17_0_TypeInfo);
    DAT_06dc150c = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
  if ((*(ushort *)(param_1 + 0x1c) < 0x100) || ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0)) {
    lVar2 = FUN_059b13f0(param_1);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar4);
      lVar4 = *(long *)puVar1;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0xb8);
    lVar6 = puVar5[1];
    if (lVar6 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar4);
        puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0e778);
      FUN_04462620(lVar6,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = lVar6;
      LeanTween__value(plVar3,lVar6);
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = FUN_03c83e78(lVar2,lVar6,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
                    /* try { // try from 059b1ef8 to 05ab1f1f has its CatchHandler @ 059b20a0 */
    if (lVar2 == 0) {
      return *(undefined2 *)(param_1 + 0x1c);
    }
  }
  local_34[0] = 0;
  FUN_0432a748(local_34,1,*(undefined8 *)PTR_DAT_069fcc60);
  return local_34[0];
}


