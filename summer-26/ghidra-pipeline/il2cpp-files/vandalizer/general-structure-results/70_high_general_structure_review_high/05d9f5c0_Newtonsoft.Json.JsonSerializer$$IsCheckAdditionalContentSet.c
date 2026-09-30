/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 05d9f5c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x19;
  undefined8 *unaff_x23;
  long *plVar6;
  uint uVar7;
  undefined8 *unaff_x24;
  
  lVar2 = FUN_05c8cea8(param_1,param_2,0);
  uVar3 = FUN_031f21dc(*unaff_x24,4);
  FUN_05d2c79c(uVar3,*unaff_x23,0);
  if ((lVar2 != 0) && (lVar2 = FUN_05c8b7d8(lVar2,uVar3,0), lVar2 != 0)) {
    uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
    if (0 < (int)*(uint *)(lVar2 + 0x18)) {
      uVar7 = 0;
      do {
        if ((uint)uVar5 <= uVar7) {
LAB_05d9f6c4:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar6 = (long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
        if (*plVar6 == 0) goto LAB_05d9f6c8;
        uVar1 = uVar7 + 1;
        if ((uVar1 != (uint)uVar5) || (*(int *)(*plVar6 + 0x10) != 0)) {
          if ((unaff_x19 & 1) == 0) {
            lVar4 = FUN_05d9f900();
          }
          else {
            lVar4 = FUN_05d9f6cc();
          }
          if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_05d9f6c4;
          *plVar6 = lVar4;
          thunk_FUN_0329bf60(plVar6,lVar4);
        }
        uVar5 = *(ulong *)(lVar2 + 0x18);
        if ((uint)uVar5 <= uVar7) goto LAB_05d9f6c4;
        if (*plVar6 == 0) goto LAB_05d9f6c8;
        uVar7 = uVar1;
      } while ((int)uVar1 < (int)(uint)uVar5);
    }
    FUN_05c89a38(*(undefined8 *)PTR_DAT_0759ca20,lVar2,0);
    return;
  }
LAB_05d9f6c8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


