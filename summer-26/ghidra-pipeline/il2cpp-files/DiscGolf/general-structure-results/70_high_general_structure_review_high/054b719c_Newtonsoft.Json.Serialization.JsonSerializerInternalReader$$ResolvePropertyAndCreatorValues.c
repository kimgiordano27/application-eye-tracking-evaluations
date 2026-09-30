/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 054b719c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  ulong unaff_x26;
  
  do {
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 == (long *)0x0) break;
    lVar2 = 0;
    if (*(int *)(in_x9 + 0x18) != 0) {
      lVar2 = in_x9 + 0x20;
    }
    uVar4 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,unaff_x20 + (unaff_x26 & 0xffffffff) * 2 + (long)param_1,
                       unaff_x22 & 0xffffffff,lVar2,*(int *)(in_x9 + 0x18),
                       (int)unaff_w23 <= (int)unaff_w25,*(undefined8 *)(*plVar5 + 0x1c0));
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 == (long *)0x0) break;
                    /* try { // try from 054b71ec to 055b7217 has its CatchHandler @ 054b73c4 */
    (**(code **)(*plVar5 + 0x388))(plVar5,*unaff_x21,0,uVar4,*(undefined8 *)(*plVar5 + 0x390));
    uVar3 = unaff_w23 - (int)unaff_x22;
    unaff_x26 = (ulong)unaff_w24;
    if (uVar3 == 0 || (int)unaff_w23 < (int)unaff_x22) {
      return;
    }
    unaff_w25 = *(uint *)(unaff_x19 + 0x40);
    uVar1 = uVar3;
    if ((int)unaff_w25 <= (int)uVar3) {
      uVar1 = unaff_w25;
    }
    unaff_x22 = (ulong)uVar1;
    if (((int)unaff_w24 < 0) || ((int)unaff_w25 < 0)) {
LAB_054b7290:
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar6 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a18eb0);
      FUN_05453f78(uVar6,uVar7,0);
                    /* try { // try from 054b72c4 to 055b72c7 has its CatchHandler @ 054b73a8 */
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a217f8);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    if (unaff_x22 + unaff_w24 >> 0x1f != 0) {
                    /* try { // try from 054b72d8 to 055b72df has its CatchHandler @ 054b73c0 */
      uVar6 = FUN_02d96870();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,*(undefined8 *)PTR_DAT_06a217f8);
    }
    unaff_w24 = uVar1 + unaff_w24;
    if (*(int *)(unaff_x20 + 0x10) < (int)unaff_w24) goto LAB_054b7290;
    param_1 = thunk_FUN_02da2370(0);
    in_x9 = *unaff_x21;
    unaff_w23 = uVar3;
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


