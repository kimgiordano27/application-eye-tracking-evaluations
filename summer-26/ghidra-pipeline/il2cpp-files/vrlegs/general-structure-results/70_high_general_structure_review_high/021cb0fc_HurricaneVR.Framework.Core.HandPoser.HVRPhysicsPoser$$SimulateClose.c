/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPhysicsPoser$$SimulateClose
ENTRY_POINT: 021cb0fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void HurricaneVR_Framework_Core_HandPoser_HVRPhysicsPoser__SimulateClose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined *puVar4;
  
  *(undefined1 *)(unaff_x24 + 0x1bb) = in_w8;
  FUN_027b3d9c();
  if (unaff_x23 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar2 = thunk_FUN_01a89e68();
    puVar4 = PTR_DAT_03cdb9b0;
LAB_021cb244:
    uVar3 = thunk_FUN_01a6ca08(puVar4);
    FUN_026a44fc(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2);
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x28) = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_x22 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
      uVar2 = thunk_FUN_01a89e68();
      puVar4 = PTR_DAT_03cdb9b8;
      goto LAB_021cb244;
    }
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x18) = unaff_x22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      puVar4 = PTR_DAT_03cdb9a8;
      if (unaff_x21 == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cdb9a8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (DAT_041221ce == '\0') {
          FUN_01ab69ac(PTR_DAT_03cdb9a8);
          DAT_041221ce = '\x01';
        }
        lVar1 = *(long *)puVar4;
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar1 = *(long *)puVar4;
        }
        unaff_x21 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
      }
      if (unaff_x20 != 0) {
        *(long *)(unaff_x20 + 0x20) = unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(unaff_x20 + 0x20),unaff_x21);
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10) + 0x135) & 1)
            == 0) {
          FUN_01a46ff8();
        }
        uVar2 = thunk_FUN_01a89e68();
        FUN_02193580();
        *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x20 + 0x10),uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


