/*
FUNCTION_NAME: FUN_0358c15c
ENTRY_POINT: 0358c15c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_0358c15c(long param_1,undefined4 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [88];
  
  if ((DAT_0412e072 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e072 = 1;
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xd2);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(param_2 + 0xd4);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0xd6);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x120) = param_2[0xd8];
  *(int *)(param_1 + 0x494) = param_2[1] + 1;
  *(undefined4 *)(param_1 + 0x4ac) = param_2[2];
  if (*(long *)(param_1 + 0x368) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x368) + 0x28) = param_2[4];
    *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x4a4) = param_2[8];
    *(undefined4 *)(param_1 + 0x25c) = param_2[0x19];
    *(undefined4 *)(param_1 + 0x5f0) = param_2[0x1a];
    *(undefined4 *)(param_1 + 0x404) = param_2[0x1b];
    *(undefined4 *)(param_1 + 0x1e8) = param_2[0x1c];
    *(undefined4 *)(param_1 + 0x640) = param_2[0x14];
    uVar8 = NEON_rev64(*(undefined8 *)(param_2 + 10),4);
    *(undefined8 *)(param_1 + 0x4b8) = uVar8;
    pauVar1 = (undefined1 (*) [12])(param_2 + 0xc);
    uVar10 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
    auVar6 = *pauVar1;
    auVar11._12_4_ = uVar10;
    auVar11._0_12_ = *pauVar1;
    auVar5._12_4_ = uVar10;
    auVar5._0_12_ = *pauVar1;
    auVar11 = NEON_ext(auVar11,auVar5,0xc,1);
    *(ulong *)(param_1 + 0x4cc) = CONCAT44(auVar11._8_4_,auVar11._0_4_);
    *(ulong *)(param_1 + 0x4c4) = CONCAT44(auVar6._8_4_,auVar6._0_4_);
    *(undefined4 *)(param_1 + 0x4b4) = param_2[0x10];
    *(undefined4 *)(param_1 + 0x3e0) = param_2[0x15];
    *(undefined4 *)(param_1 + 0x3ec) = param_2[0x16];
    uVar8 = *(undefined8 *)(param_2 + 0xd9);
    *(undefined8 *)(param_1 + 0x4e4) = *(undefined8 *)(param_2 + 0xdb);
    *(undefined8 *)(param_1 + 0x4dc) = uVar8;
    *(undefined4 *)(param_1 + 0x4a8) = param_2[9];
    *(undefined4 *)(param_1 + 0x4d8) = param_2[0x1e];
    *(undefined4 *)(param_1 + 0x61c) = param_2[0x1d];
    *(undefined1 *)(param_1 + 0x2c4) = *(undefined1 *)(param_2 + 0x1f);
    *(undefined4 *)(param_1 + 0x2fc) = param_2[0x20];
    *(undefined8 *)(param_1 + 0x2ac) = *(undefined8 *)(param_2 + 0x21);
    *(undefined4 *)(param_1 + 0x278) = param_2[0x11];
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x12);
    *(undefined4 *)(param_1 + 0x4ec) = param_2[0x3d];
    *(undefined4 *)(param_1 + 0x158) = param_2[0x3e];
    *(undefined4 *)(param_1 + 0x15c) = param_2[0x3f];
    *(undefined1 *)(param_1 + 0x2da) = *(undefined1 *)((long)param_2 + 0x375);
    *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(param_2 + 0xdd);
    uVar8 = *(undefined8 *)(param_2 + 0x41);
    *(undefined2 *)(param_1 + 0x268) = *(undefined2 *)(param_2 + 0x43);
    *(undefined8 *)(param_1 + 0x260) = uVar8;
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x44);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_2 + 0x4a);
    *(undefined8 *)(param_1 + 0x5e0) = uVar8;
    *(long *)(param_1 + 0x5d8) = auVar11._8_8_;
    *(long *)(param_1 + 0x5d0) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x5d0,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x4c);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_2 + 0x52);
    *(undefined8 *)(param_1 + 0x500) = uVar8;
    *(long *)(param_1 + 0x4f8) = auVar11._8_8_;
    *(long *)(param_1 + 0x4f0) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x4f0,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x54);
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x5a);
    *(undefined8 *)(param_1 + 0x520) = uVar8;
    *(long *)(param_1 + 0x518) = auVar11._8_8_;
    *(long *)(param_1 + 0x510) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x510,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x5c);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_2 + 0x62);
    *(undefined8 *)(param_1 + 0x540) = uVar8;
    *(long *)(param_1 + 0x538) = auVar11._8_8_;
    *(long *)(param_1 + 0x530) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x530,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x70);
    uVar8 = *(undefined8 *)(param_2 + 0x74);
    uVar13 = *(undefined8 *)(param_2 + 0x6e);
    uVar12 = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_2 + 0x76);
    *(undefined8 *)(param_1 + 0x570) = uVar8;
    *(long *)(param_1 + 0x568) = auVar11._8_8_;
    *(long *)(param_1 + 0x560) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x558) = uVar13;
    *(undefined8 *)(param_1 + 0x550) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x550,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x78);
    uVar12 = *(undefined8 *)(param_2 + 0x7e);
    uVar8 = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x80);
    *(long *)(param_1 + 0x590) = auVar11._8_8_;
    *(undefined8 *)(param_1 + 0x588) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x5a0) = uVar12;
    *(undefined8 *)(param_1 + 0x598) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x588),0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x82);
    uVar12 = *(undefined8 *)(param_2 + 0x88);
    uVar8 = *(undefined8 *)(param_2 + 0x86);
    *(long *)(param_1 + 0x1f8) = auVar11._8_8_;
    *(long *)(param_1 + 0x1f0) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x208) = uVar12;
    *(undefined8 *)(param_1 + 0x200) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x1f0,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x8a);
    uVar8 = *(undefined8 *)(param_2 + 0x8e);
    *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x420) = uVar8;
    *(long *)(param_1 + 0x418) = auVar11._8_8_;
    *(long *)(param_1 + 0x410) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x410,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x92);
    uVar12 = *(undefined8 *)(param_2 + 0x98);
    uVar8 = *(undefined8 *)(param_2 + 0x96);
    *(long *)(param_1 + 0x220) = auVar11._8_8_;
    *(undefined8 *)(param_1 + 0x218) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x230) = uVar12;
    *(undefined8 *)(param_1 + 0x228) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x218),0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0xa2);
    uVar8 = *(undefined8 *)(param_2 + 0xa6);
    *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x630) = uVar8;
    *(long *)(param_1 + 0x628) = auVar11._8_8_;
    *(long *)(param_1 + 0x620) = auVar11._0_8_;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x620,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 0xaa);
    uVar12 = *(undefined8 *)(param_2 + 0xb0);
    uVar8 = *(undefined8 *)(param_2 + 0xae);
    *(long *)(param_1 + 0x600) = auVar11._8_8_;
    *(undefined8 *)(param_1 + 0x5f8) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x610) = uVar12;
    *(undefined8 *)(param_1 + 0x608) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x5f8),0);
    memcpy(auStack_88,param_2 + 0xb2,0x58);
    lVar9 = *(long *)puVar7;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar9);
      lVar9 = *(long *)puVar7;
    }
    memcpy((void *)(*(long *)(lVar9 + 0xb8) + 0x10),auStack_88,0x58);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(long *)(lVar9 + 0xb8) + 0x10,0);
    auVar11 = *(undefined1 (*) [16])(param_2 + 200);
    uVar12 = *(undefined8 *)(param_2 + 0xce);
    uVar8 = *(undefined8 *)(param_2 + 0xcc);
    *(long *)(param_1 + 0x288) = auVar11._8_8_;
    *(long *)(param_1 + 0x280) = auVar11._0_8_;
    *(undefined8 *)(param_1 + 0x298) = uVar12;
    *(undefined8 *)(param_1 + 0x290) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x280,0);
    *(undefined4 *)(param_1 + 0x6a8) = param_2[0xd0];
    if ((*(long *)(param_1 + 0x368) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x50), lVar9 != 0)) {
      uVar4 = *(uint *)(param_1 + 0x4a8);
      uVar3 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar4 < (int)uVar3) {
        memcpy(auStack_e8,param_2 + 0x26,0x5c);
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        memcpy((void *)(lVar9 + (long)(int)uVar4 * 0x5c + 0x20),auStack_e8,0x5c);
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


