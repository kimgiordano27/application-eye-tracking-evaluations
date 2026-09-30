/*
FUNCTION_NAME: FUN_06412618
ENTRY_POINT: 06412618
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06412618(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 0641260c with catch @ 06412618
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06412608 with catch @ 0641261c
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06412604 with catch @ 06412620
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 0641246c with catch @ 06412624
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 06412458 with catch @ 06412628
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 0641252c with catch @ 0641262c
                        */
  uStack_98 = param_4;
  uStack_90 = param_5;
  if ((bRam0000000006e9c320 & 1) == 0) {
                    /* try { // try from 06412648 to 0651264b has its CatchHandler @ 06412664 */
    FUN_02e3ca1c(
                Game_Controllers_Network_NetworkSessionCloseController_<>c__DisplayClass6_0_TypeInfo
                );
    FUN_02e3ca1c(Fusion_NetworkSpawnOp_AsyncOpData_TypeInfo);
                    /* catch() { ... } // from try @ 06412648 with catch @ 06412664 */
    FUN_02e3ca1c(Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo);
                    /* try { // try from 06412668 to 0651266f has its CatchHandler @ 06412678 */
                    /* try { // try from 06412670 to 0651267b has its CatchHandler @ 06412340 */
    FUN_02e3ca1c(System_Reactive_Concurrency_NewThreadScheduler_<>c_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06412668 with catch @ 06412678
                        */
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualBoolean_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo);
    bRam0000000006e9c320 = 1;
  }
  if ((param_3 != 0) &&
     (uVar4 = FUN_0528dbe8(param_3,*(undefined8 *)Fusion_NetworkSpawnOp_AsyncOpData_TypeInfo),
     param_2 != 0)) {
    uVar5 = FUN_0528d9f8(param_2,*(undefined8 *)
                                  Game_Controllers_Network_NetworkSessionCloseController_<>c__DisplayClass6_0_TypeInfo
                        );
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x20);
      uVar3 = FUN_0420c9b4(&uStack_98,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo
                          );
      lVar6 = *(long *)(param_1 + 0x40);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)Game_Controllers_Network_NetworkSessionCloseController_<>c_TypeInfo;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar2 * 0x58;
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + 0x38) = uVar1;
            *(undefined4 *)(lVar7 + 0x3c) = uVar3;
            *(undefined8 *)(lVar7 + 0x20) = 0;
            *(undefined8 *)(lVar7 + 0x28) = uVar4;
            *(undefined8 *)(lVar7 + 0x30) = uVar5;
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x40) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x68) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(undefined8 *)(lVar7 + 0x70) = 0;
            thunk_FUN_02ee2be8(lVar7 + 0x48,0);
          }
          else {
            uStack_88 = 0;
            uStack_60 = 0;
            uStack_68 = 0;
            uStack_50 = 0;
            uStack_58 = 0;
            uStack_40 = 0;
            uStack_48 = 0;
            uStack_38 = 0;
            uStack_80 = uVar4;
            uStack_78 = uVar5;
            uStack_70 = uVar1;
            uStack_6c = uVar3;
            FUN_03f809bc(lVar6,&uStack_88,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x50) != 0) {
            FUN_04203ec0(*(long *)(param_1 + 0x50),uStack_98,uStack_90,
                         *(undefined8 *)System_Reactive_Concurrency_NewThreadScheduler_<>c_TypeInfo)
            ;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


