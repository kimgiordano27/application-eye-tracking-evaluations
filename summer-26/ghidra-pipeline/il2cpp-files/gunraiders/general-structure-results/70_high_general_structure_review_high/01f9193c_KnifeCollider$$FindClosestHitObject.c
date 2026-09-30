/*
FUNCTION_NAME: KnifeCollider$$FindClosestHitObject
ENTRY_POINT: 01f9193c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void KnifeCollider__FindClosestHitObject(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int unaff_w21;
  long in_stack_00000018;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_01f4688c(*(long *)(param_1 + 0x20),0);
    puVar2 = PTR_DAT_042397d8;
    puVar1 = PTR_DAT_042397d0;
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_042392c0 + 0xb8) + 0x58);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
      FUN_02d50a3c(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_042397e8);
      while( true ) {
        uVar3 = FUN_029fd614(&stack0x00000008,*(undefined8 *)puVar2);
        lVar4 = in_stack_00000018;
        if ((uVar3 & 1) == 0) {
          FUN_029fd610(&stack0x00000008,*(undefined8 *)puVar1);
          return;
        }
        if (in_stack_00000018 == 0) break;
        if (*(char *)(in_stack_00000018 + 0x390) == '\0') {
          thunk_FUN_01f44efc(in_stack_00000018,0);
        }
        else if (unaff_w21 == 0) {
          thunk_FUN_01f44efc(in_stack_00000018,0);
        }
        else {
          FUN_01f44ef0(in_stack_00000018,*(undefined8 *)(in_stack_00000018 + 0x1c0),0,0);
          FUN_01f44ef0(lVar4,*(undefined8 *)(lVar4 + 0x1c8),0,0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


