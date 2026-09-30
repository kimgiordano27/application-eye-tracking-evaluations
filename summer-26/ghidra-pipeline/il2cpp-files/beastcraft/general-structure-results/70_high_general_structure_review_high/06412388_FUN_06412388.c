/*
FUNCTION_NAME: FUN_06412388
ENTRY_POINT: 06412388
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


void FUN_06412388(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,uint param_10,undefined8 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [88];
  
  if ((bRam0000000006e9c31e & 1) == 0) {
    FUN_02e3ca1c(Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo);
    bRam0000000006e9c31e = 1;
  }
  uStack_140 = 0;
  uStack_188 = 0;
  uStack_190 = 1;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_170 = (ulong)param_10;
  uStack_168 = param_11;
  thunk_FUN_02ee2be8(&uStack_168,param_11);
  puVar2 = Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo;
  lVar5 = *(long *)(param_9 + 0x40);
  uStack_160 = CONCAT44(param_1,param_12);
  uStack_158 = CONCAT44(param_3,param_2);
  uStack_150 = CONCAT44(param_5,param_4);
  uStack_148 = CONCAT44(param_7,param_6);
  uStack_140 = CONCAT44(uStack_140._4_4_,param_8);
  if (lVar5 != 0) {
                    /* try { // try from 06412458 to 06512463 has its CatchHandler @ 06412628 */
    memcpy(auStack_130,&uStack_190,0x58);
    lVar3 = *(long *)(lVar5 + 0x10);
                    /* try { // try from 0641246c to 06512477 has its CatchHandler @ 06412624 */
    lVar4 = *(long *)puVar2;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x58;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar3 + 0x20),auStack_130,0x58);
        thunk_FUN_02ee2be8(lVar3 + 0x48,0);
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
        memcpy(auStack_d8,auStack_130,0x58);
        FUN_03f809bc(lVar5,auStack_d8,uVar6);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


