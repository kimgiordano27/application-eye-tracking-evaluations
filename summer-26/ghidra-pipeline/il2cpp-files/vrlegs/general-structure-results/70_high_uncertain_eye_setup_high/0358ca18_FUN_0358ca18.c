/*
FUNCTION_NAME: FUN_0358ca18
ENTRY_POINT: 0358ca18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0358ca18(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_100 [96];
  undefined1 auStack_a0 [96];
  
                    /* try { // try from 0358ca20 to 0368ca27 has its CatchHandler @ 0358ca68 */
                    /* try { // try from 0358ca2c to 0368ca33 has its CatchHandler @ 0358ca64 */
  if ((DAT_0412e06f & 1) == 0) {
    FUN_01ab69ac(Photon_Voice_RawCodec_ShortToFloat_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e06f = 1;
  }
  puVar3 = Photon_Voice_RawCodec_ShortToFloat_TypeInfo;
  if (param_2 < 0x401) {
    uVar4 = FUN_036c1d60(param_2 + 1,0);
  }
  else {
    uVar4 = param_2 + 0x100;
  }
  lVar5 = FUN_01ab6a94(*(undefined8 *)puVar3,uVar4);
  puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar6 = *(long *)(param_1 + 0x368);
  if (lVar6 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      plVar1 = (long *)(lVar6 + 0x50);
      if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar9) {
        *plVar1 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar5);
        return;
      }
      lVar6 = *plVar1;
      if (lVar6 == 0) break;
      if ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_0358cbc4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        memcpy(auStack_a0,(void *)(lVar6 + lVar8 + 0x20),0x5c);
        if (lVar5 == 0) break;
        memcpy(auStack_100,auStack_a0,0x5c);
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_0358cbc4;
        memcpy((void *)(lVar5 + lVar8 + 0x20),auStack_100,0x5c);
      }
      else {
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar7 <= uVar9) goto LAB_0358cbc4;
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar3;
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        }
        lVar2 = lVar5 + lVar8;
        *(undefined8 *)(lVar2 + 0x6c) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1598);
        if (uVar7 <= uVar9) goto LAB_0358cbc4;
        *(undefined8 *)(lVar2 + 0x74) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x15a0);
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar6 + 0x15ac);
        *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar6 + 0x15a8);
      }
      lVar6 = *(long *)(param_1 + 0x368);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x5c;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


