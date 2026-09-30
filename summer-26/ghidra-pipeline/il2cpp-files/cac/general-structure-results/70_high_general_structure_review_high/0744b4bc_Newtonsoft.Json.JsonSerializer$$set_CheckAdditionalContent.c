/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 0744b4bc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  uint uVar6;
  undefined8 *unaff_x24;
  long *plVar7;
  
  uVar2 = FUN_03f13470(*unaff_x24,4);
  FUN_073d2898(uVar2,*unaff_x23,0);
  if ((unaff_x21 != 0) && (lVar3 = FUN_0732a14c(), lVar3 != 0)) {
    uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
    if (0 < (int)*(uint *)(lVar3 + 0x18)) {
      uVar6 = 0;
      do {
        if ((uint)uVar5 <= uVar6) {
LAB_0744b5bc:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        plVar7 = (long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
        if (*plVar7 == 0) goto LAB_0744b5c0;
        uVar1 = uVar6 + 1;
        if (*(int *)(*plVar7 + 0x10) != 0 || uVar1 != (uint)uVar5) {
          if ((unaff_x19 & 1) == 0) {
            lVar4 = FUN_0744b7f8();
          }
          else {
            lVar4 = FUN_0744b5c4();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0744b5bc;
          *plVar7 = lVar4;
          thunk_FUN_03f86000(lVar3 + 0x20 + (long)(int)uVar6 * 8);
        }
        uVar5 = *(ulong *)(lVar3 + 0x18);
        if ((uint)uVar5 <= uVar6) goto LAB_0744b5bc;
        if (*plVar7 == 0) goto LAB_0744b5c0;
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)(uint)uVar5);
    }
    FUN_07328410(*(undefined8 *)PTR_DAT_0910fe70,lVar3,0);
    return;
  }
LAB_0744b5c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


