/*
FUNCTION_NAME: FUN_08927df4
ENTRY_POINT: 08927df4
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_08927df4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  if ((DAT_0b32b6b3 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4a878);
    FUN_04947ee4(PTR_DAT_0ac496c0);
    FUN_04947ee4(PTR_DAT_0ac4a538);
    DAT_0b32b6b3 = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & 1) != 0) {
    FUN_088ef30c(param_2,8,0);
    uVar2 = FUN_089276c0(param_1);
    FUN_088ee800(param_2,uVar2 & 1,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_088ef30c(param_2,0x10,0);
    uVar2 = FUN_08927760(param_1);
    FUN_088ee800(param_2,uVar2 & 1,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    FUN_088ef30c(param_2,0x18,0);
    uVar2 = Haptics_AppHapticsFacadeBase__Dispose(param_1);
    FUN_088ee800(param_2,uVar2 & 1,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_088ef30c(param_2,0x38,0);
    uVar2 = FUN_089278a0(param_1);
    FUN_088ee800(param_2,uVar2 & 1,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    FUN_088ef30c(param_2,0x58,0);
    uVar2 = FUN_08927940(param_1);
    FUN_088ee800(param_2,uVar2 & 1,0);
  }
  puVar1 = PTR_DAT_0ac496c0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_088ef30c(param_2,0x62,0);
    FUN_088eeb34(param_2,*(undefined8 *)(param_1 + 0x30),0);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (lVar3 != 0) {
    FUN_07506b20(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_0ac4a538);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_063471f8(*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_0ac4a878);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      HdyRpc_RequestHspSetup__set_StreamId(*(long *)(param_1 + 0x10),param_2,0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


