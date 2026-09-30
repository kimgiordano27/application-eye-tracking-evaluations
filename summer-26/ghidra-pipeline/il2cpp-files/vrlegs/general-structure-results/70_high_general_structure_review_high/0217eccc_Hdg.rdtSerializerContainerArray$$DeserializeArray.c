/*
FUNCTION_NAME: Hdg.rdtSerializerContainerArray$$DeserializeArray
ENTRY_POINT: 0217eccc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0217ee00) */

undefined8 Hdg_rdtSerializerContainerArray__DeserializeArray(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  uint uVar5;
  
  thunk_FUN_01a4b338();
  if (unaff_x21 != 0) {
    FUN_0217f0a8();
    iVar1 = FUN_0217eff0();
    if (iVar1 < 1) {
      uVar3 = 0;
      uVar5 = 2;
    }
    else {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      uVar3 = FUN_01ab6a94(lVar2,iVar1);
      FUN_0217eb48();
      uVar5 = 4;
    }
    FUN_0217f188();
    if ((uVar5 | 2) != 2) {
      return uVar3;
    }
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0);
  lVar2 = *(long *)(lVar4 + 0x38);
  if (lVar2 == 0) {
    FUN_01a47054(lVar4);
    lVar2 = *(long *)(lVar4 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


