/*
FUNCTION_NAME: FUN_06412514
ENTRY_POINT: 06412514
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_06412514(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
                    /* try { // try from 0641251c to 0651251f has its CatchHandler @ 06412610 */
                    /* try { // try from 0641252c to 0651257b has its CatchHandler @ 0641262c */
  if ((bRam0000000006e9c31f & 1) == 0) {
    FUN_02e3ca1c(Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo);
    bRam0000000006e9c31f = 1;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar4 = *(long *)Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x58;
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + 0x20) = 2;
        *(undefined8 *)(lVar3 + 0x2c) = 0;
        *(undefined8 *)(lVar3 + 0x24) = 0;
        *(undefined8 *)(lVar3 + 0x3c) = 0;
        *(undefined8 *)(lVar3 + 0x34) = 0;
        *(undefined8 *)(lVar3 + 0x4c) = 0;
        *(undefined8 *)(lVar3 + 0x44) = 0;
        *(undefined8 *)(lVar3 + 0x5c) = 0;
        *(undefined8 *)(lVar3 + 0x54) = 0;
        *(undefined8 *)(lVar3 + 0x6c) = 0;
        *(undefined8 *)(lVar3 + 100) = 0;
        *(undefined4 *)(lVar3 + 0x74) = 0;
        thunk_FUN_02ee2be8(lVar3 + 0x48,0);
        return;
      }
      uStack_78 = 2;
      uStack_6c = 0;
      uStack_74 = 0;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_4c = 0;
      uStack_54 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_2c = 0;
      uStack_34 = 0;
      uStack_24 = 0;
      FUN_03f809bc(lVar2,&uStack_78,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


