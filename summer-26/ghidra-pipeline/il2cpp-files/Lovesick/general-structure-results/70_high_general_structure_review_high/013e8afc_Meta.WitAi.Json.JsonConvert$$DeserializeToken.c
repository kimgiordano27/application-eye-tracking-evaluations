/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 013e8afc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar5;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000050;
  
  do {
    if (param_1 == 0) {
      uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,0);
    }
    uVar5 = (int)unaff_x25 - 4;
    if (*(uint *)(unaff_x23 + 3) <= uVar5) {
LAB_013e8c9c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x23[unaff_x25] = unaff_x24;
    lVar1 = thunk_FUN_00d62348(*unaff_x26);
    if (lVar1 == 0) {
LAB_013e8ca0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar1,*unaff_x27);
    FUN_0132138c();
    if (in_stack_00000050 == 0) goto LAB_013e8ca0;
    FUN_00ac9cc0(lVar1,*(undefined8 *)(in_stack_00000050 + 0x10),*unaff_x29);
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if (lVar3 == 0) goto LAB_013e8ca0;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_013e8c9c;
    lVar4 = *(long *)(lVar3 + unaff_x25 * 8);
    if (lVar4 == 0) goto LAB_013e8ca0;
    *(long *)(lVar4 + 0x20) = lVar1;
    lVar1 = *(long *)(lVar3 + unaff_x25 * 8);
    FUN_0132138c();
    if ((in_stack_00000050 == 0) || (lVar1 == 0)) goto LAB_013e8ca0;
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(in_stack_00000050 + 0x10);
    unaff_x23 = *(long **)(unaff_x20 + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_013e8ca0;
    if (*(uint *)(unaff_x23 + 3) <= uVar5) goto LAB_013e8c9c;
    if (unaff_x23[unaff_x25] == 0) goto LAB_013e8ca0;
    *(undefined1 *)(unaff_x23[unaff_x25] + 0x18) = 0;
    unaff_x25 = unaff_x25 + 1;
    if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_x25 + -4) {
      *(bool *)(unaff_x20 + 0x38) = *(int *)(unaff_x19 + 0x18) != 1;
      uVar2 = FUN_01325140();
      *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
      return;
    }
    unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5607);
    if ((unaff_x24 == 0) || (FUN_013e7004(), unaff_x23 == (long *)0x0)) goto LAB_013e8ca0;
    param_1 = thunk_FUN_00d6225c(unaff_x24,*(undefined8 *)(*unaff_x23 + 0x40));
  } while( true );
}


