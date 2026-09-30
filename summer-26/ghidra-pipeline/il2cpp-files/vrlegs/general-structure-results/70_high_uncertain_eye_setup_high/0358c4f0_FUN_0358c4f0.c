/*
FUNCTION_NAME: FUN_0358c4f0
ENTRY_POINT: 0358c4f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0358c4f0(long param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  
  if ((DAT_0412e071 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e071 = 1;
  }
  *(undefined8 *)(param_2 + 0xd2) = *(undefined8 *)(param_1 + 0x100);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xd2);
  *(undefined8 *)(param_2 + 0xd4) = *(undefined8 *)(param_1 + 0x698);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xd4);
  *(undefined8 *)(param_2 + 0xd6) = *(undefined8 *)(param_1 + 0x118);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xd6);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[0xd8] = uVar1;
  param_2[2] = *(undefined4 *)(param_1 + 0x4ac);
  if (*(long *)(param_1 + 0x368) != 0) {
    param_2[4] = *(undefined4 *)(*(long *)(param_1 + 0x368) + 0x28);
    *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 0x498);
    param_2[8] = *(undefined4 *)(param_1 + 0x4a4);
    param_2[0x19] = *(undefined4 *)(param_1 + 0x25c);
    param_2[0x1a] = *(undefined4 *)(param_1 + 0x5f0);
    param_2[0x1b] = *(undefined4 *)(param_1 + 0x404);
    param_2[0x1c] = *(undefined4 *)(param_1 + 0x1e8);
    param_2[0x14] = *(undefined4 *)(param_1 + 0x640);
    uVar5 = NEON_rev64(*(undefined8 *)(param_1 + 0x4b8),4);
    *(undefined8 *)(param_2 + 10) = uVar5;
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x4c4);
    auVar7 = NEON_ext(auVar6,auVar6,4,1);
    auVar6 = NEON_ext(auVar6,auVar7,0xc,1);
    auVar6 = NEON_ext(auVar7,auVar6,0xc,1);
    *(long *)(param_2 + 0xe) = auVar6._8_8_;
    *(long *)(param_2 + 0xc) = auVar6._0_8_;
    param_2[0x10] = *(undefined4 *)(param_1 + 0x4b4);
    param_2[0x15] = *(undefined4 *)(param_1 + 0x3e0);
    param_2[0x16] = *(undefined4 *)(param_1 + 0x3ec);
    uVar5 = *(undefined8 *)(param_1 + 0x4dc);
    *(undefined8 *)(param_2 + 0xdb) = *(undefined8 *)(param_1 + 0x4e4);
    *(undefined8 *)(param_2 + 0xd9) = uVar5;
    param_2[9] = *(undefined4 *)(param_1 + 0x4a8);
    param_2[0x1e] = *(undefined4 *)(param_1 + 0x4d8);
    param_2[0x1d] = *(undefined4 *)(param_1 + 0x61c);
    *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_1 + 0x2c4);
    param_2[0x20] = *(undefined4 *)(param_1 + 0x2fc);
    *(undefined8 *)(param_2 + 0x21) = *(undefined8 *)(param_1 + 0x2ac);
    param_2[0x11] = *(undefined4 *)(param_1 + 0x278);
    *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x350);
    param_2[0x3d] = *(undefined4 *)(param_1 + 0x4ec);
    param_2[0x3e] = *(undefined4 *)(param_1 + 0x158);
    param_2[0x3f] = *(undefined4 *)(param_1 + 0x15c);
    *(undefined1 *)((long)param_2 + 0x375) = *(undefined1 *)(param_1 + 0x2da);
    *(undefined1 *)(param_2 + 0xdd) = *(undefined1 *)(param_1 + 0x430);
    uVar5 = *(undefined8 *)(param_1 + 0x260);
    *(undefined2 *)(param_2 + 0x43) = *(undefined2 *)(param_1 + 0x268);
    *(undefined8 *)(param_2 + 0x41) = uVar5;
    puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x5e0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x5d0);
    *(long *)(param_2 + 0x46) = auVar7._8_8_;
    *(long *)(param_2 + 0x44) = auVar7._0_8_;
    *(long *)(param_2 + 0x4a) = auVar6._8_8_;
    *(long *)(param_2 + 0x48) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x44,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x500);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x4f0);
    *(long *)(param_2 + 0x4e) = auVar7._8_8_;
    *(long *)(param_2 + 0x4c) = auVar7._0_8_;
    *(long *)(param_2 + 0x52) = auVar6._8_8_;
    *(long *)(param_2 + 0x50) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x4c,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x520);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x510);
    *(long *)(param_2 + 0x56) = auVar7._8_8_;
    *(long *)(param_2 + 0x54) = auVar7._0_8_;
    *(long *)(param_2 + 0x5a) = auVar6._8_8_;
    *(long *)(param_2 + 0x58) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x54,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x540);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x530);
    *(long *)(param_2 + 0x5e) = auVar7._8_8_;
    *(long *)(param_2 + 0x5c) = auVar7._0_8_;
    *(long *)(param_2 + 0x62) = auVar6._8_8_;
    *(long *)(param_2 + 0x60) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x5c,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x570);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x560);
    uVar8 = *(undefined8 *)(param_1 + 0x558);
    uVar5 = *(undefined8 *)(param_1 + 0x550);
    *(long *)(param_2 + 0x72) = auVar7._8_8_;
    *(long *)(param_2 + 0x70) = auVar7._0_8_;
    *(long *)(param_2 + 0x76) = auVar6._8_8_;
    *(long *)(param_2 + 0x74) = auVar6._0_8_;
    *(undefined8 *)(param_2 + 0x6e) = uVar8;
    *(undefined8 *)(param_2 + 0x6c) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x6c,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x588);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x598);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x5a8);
    *(long *)(param_2 + 0x7a) = auVar7._8_8_;
    *(long *)(param_2 + 0x78) = auVar7._0_8_;
    *(long *)(param_2 + 0x7e) = auVar6._8_8_;
    *(long *)(param_2 + 0x7c) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x78,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x1f0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x200);
    *(long *)(param_2 + 0x84) = auVar7._8_8_;
    *(long *)(param_2 + 0x82) = auVar7._0_8_;
    *(long *)(param_2 + 0x88) = auVar6._8_8_;
    *(long *)(param_2 + 0x86) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x82,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x420);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x410);
    *(long *)(param_2 + 0x8c) = auVar7._8_8_;
    *(long *)(param_2 + 0x8a) = auVar7._0_8_;
    *(long *)(param_2 + 0x90) = auVar6._8_8_;
    *(long *)(param_2 + 0x8e) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x8a,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x218);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x228);
    *(long *)(param_2 + 0x94) = auVar7._8_8_;
    *(long *)(param_2 + 0x92) = auVar7._0_8_;
    *(long *)(param_2 + 0x98) = auVar6._8_8_;
    *(long *)(param_2 + 0x96) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x92,0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x630);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x620);
    *(long *)(param_2 + 0xa4) = auVar7._8_8_;
    *(long *)(param_2 + 0xa2) = auVar7._0_8_;
    *(long *)(param_2 + 0xa8) = auVar6._8_8_;
    *(long *)(param_2 + 0xa6) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xa2,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x5f8);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x608);
    *(long *)(param_2 + 0xac) = auVar7._8_8_;
    *(long *)(param_2 + 0xaa) = auVar7._0_8_;
    *(long *)(param_2 + 0xb0) = auVar6._8_8_;
    *(long *)(param_2 + 0xae) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xaa,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar3;
    }
    memmove(param_2 + 0xb2,(void *)(*(long *)(lVar4 + 0xb8) + 0x10),0x58);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0xb2,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x280);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x290);
    *(long *)(param_2 + 0xca) = auVar7._8_8_;
    *(long *)(param_2 + 200) = auVar7._0_8_;
    *(long *)(param_2 + 0xce) = auVar6._8_8_;
    *(long *)(param_2 + 0xcc) = auVar6._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 200,0);
    param_2[0xd0] = *(undefined4 *)(param_1 + 0x6a8);
    if ((*(long *)(param_1 + 0x368) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x368) + 0x50), lVar4 != 0)) {
      uVar2 = *(uint *)(param_1 + 0x4a8);
      if ((int)uVar2 < (int)*(uint *)(lVar4 + 0x18)) {
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        memmove(param_2 + 0x26,(void *)(lVar4 + (long)(int)uVar2 * 0x5c + 0x20),0x5c);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


