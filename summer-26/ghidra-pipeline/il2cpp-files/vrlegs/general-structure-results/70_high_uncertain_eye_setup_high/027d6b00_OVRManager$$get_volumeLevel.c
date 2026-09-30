/*
FUNCTION_NAME: OVRManager$$get_volumeLevel
ENTRY_POINT: 027d6b00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_volumeLevel(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x23;
  undefined8 *puVar6;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  undefined8 *puVar8;
  long unaff_x26;
  undefined8 *unaff_x27;
  
  puVar8 = *(undefined8 **)(unaff_x25 + 0xbe8);
  puVar7 = *(undefined8 **)(unaff_x24 + 0xb30);
  puVar6 = *(undefined8 **)(unaff_x23 + 0xba8);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb38);
  puVar4 = *(undefined8 **)(unaff_x21 + 0xb40);
  if ((*(byte *)(unaff_x26 + 0x1c) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    FUN_01ab69ac(PTR_DAT_03cf2ba8);
    FUN_01ab69ac(PTR_DAT_03cfcb40);
    FUN_01ab69ac(PTR_DAT_03cfcb38);
    FUN_01ab69ac(PTR_DAT_03cfcb28);
    FUN_01ab69ac(PTR_DAT_03cfcb30);
    FUN_01ab69ac(PTR_DAT_03cc45b8);
    FUN_01ab69ac(PTR_DAT_03cc9be8);
    *(undefined1 *)(unaff_x26 + 0x1c) = 1;
  }
  uVar2 = FUN_01ab6a94(*unaff_x27,10);
  FUN_0267b194(uVar2,*unaff_x19,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*unaff_x20 + 0xb8),uVar2);
  uVar2 = FUN_01ab6a94(*puVar8,0x13);
  FUN_0267b194(uVar2,*puVar7,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar7 = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar2);
  uVar2 = FUN_01ab6a94(*puVar6,0x51);
  FUN_0267b194(uVar2,*puVar5,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar5 = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar2);
  lVar3 = FUN_01ab6a94(*puVar4,8);
  uVar2 = _DAT_00d33ce0;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar3 + 0x28) = _UNK_00d33ce8;
      *(undefined8 *)(lVar3 + 0x20) = uVar2;
      uVar2 = _DAT_00d35600;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar3 + 0x38) = _UNK_00d35608;
        *(undefined8 *)(lVar3 + 0x30) = uVar2;
        uVar2 = _DAT_00d35860;
        if (2 < uVar1) {
          *(undefined8 *)(lVar3 + 0x48) = _UNK_00d35868;
          *(undefined8 *)(lVar3 + 0x40) = uVar2;
          uVar2 = _DAT_00d33070;
          if (uVar1 != 3) {
            *(undefined8 *)(lVar3 + 0x58) = _UNK_00d33078;
            *(undefined8 *)(lVar3 + 0x50) = uVar2;
            uVar2 = _DAT_00d35a30;
            if (4 < uVar1) {
              *(undefined8 *)(lVar3 + 0x68) = _UNK_00d35a38;
              *(undefined8 *)(lVar3 + 0x60) = uVar2;
              uVar2 = _DAT_00d34790;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar3 + 0x78) = _UNK_00d34798;
                *(undefined8 *)(lVar3 + 0x70) = uVar2;
                uVar2 = _DAT_00d32e50;
                if (6 < uVar1) {
                  *(undefined8 *)(lVar3 + 0x88) = _UNK_00d32e58;
                  *(undefined8 *)(lVar3 + 0x80) = uVar2;
                  uVar2 = _DAT_00d32c30;
                  if (uVar1 != 7) {
                    *(undefined8 *)(lVar3 + 0x98) = _UNK_00d32c38;
                    *(undefined8 *)(lVar3 + 0x90) = uVar2;
                    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar3;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


