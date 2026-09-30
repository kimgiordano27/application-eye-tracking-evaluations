/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 090a2d20
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_systemDisplayFrequency(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_0b330287 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac78ee8);
    DAT_0b330287 = 1;
  }
  if (param_1 != 0) {
    uVar2 = FUN_0a17834c(param_1,0);
    if (*(long *)(param_1 + 200) != 0) {
      uVar3 = FUN_0a17834c(*(long *)(param_1 + 200),0);
                    /* try { // try from 090a2d80 to 091a2d83 has its CatchHandler @ 090a2db0 */
                    /* try { // try from 090a2d84 to 091a2d87 has its CatchHandler @ 090a2da0 */
      uVar2 = FUN_090a1fb4(uVar2,uVar3);
                    /* try { // try from 090a2d88 to 091a2d97 has its CatchHandler @ 090a2db0 */
      uStack_48 = param_2[1];
      local_50 = *param_2;
      uStack_38 = param_2[3];
      uStack_40 = param_2[2];
      uStack_28 = param_2[5];
      local_30 = param_2[4];
                    /* try { // try from 090a2d98 to 091a2dcf has its CatchHandler @ 090a2abc */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2d84 with catch @ 090a2da0
                        */
      if (*(long *)(param_1 + 200) != 0) {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2cc8 with catch @ 090a2da4
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2c38 with catch @ 090a2da8
                        */
        uVar3 = FUN_0a17834c(*(long *)(param_1 + 200),0);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2bd4 with catch @ 090a2dac
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2d80 with catch @ 090a2db0
                       catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2d88 with catch @ 090a2db0
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2c68 with catch @ 090a2db4
                        */
        uStack_78 = uStack_48;
        local_80 = local_50;
        uStack_68 = uStack_38;
        uStack_70 = uStack_40;
        uStack_58 = uStack_28;
        local_60 = local_30;
        FUN_090a25cc(uVar2,&local_80,uVar3);
        lVar4 = *(long *)(param_1 + 0x130);
                    /* try { // try from 090a2dd0 to 091a2dd3 has its CatchHandler @ 090a2ddc */
        if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 090a2dd0 with catch @ 090a2ddc */
                    /* try { // try from 090a2de0 to 091a2de7 has its CatchHandler @ 090a2df0 */
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar7 = *(long *)PTR_DAT_0ac78ee8;
                    /* try { // try from 090a2de8 to 091a2df3 has its CatchHandler @ 090a2abc */
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090a2de0 with catch @ 090a2df0
                        */
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar2;
              thunk_FUN_049ee3d8(puVar6,uVar2);
            }
            else {
              FUN_06b7fe74(lVar4,uVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            return uVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


