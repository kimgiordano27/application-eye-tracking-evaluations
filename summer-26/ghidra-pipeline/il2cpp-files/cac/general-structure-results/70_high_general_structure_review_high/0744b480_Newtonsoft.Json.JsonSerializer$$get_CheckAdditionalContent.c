/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 0744b480
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(void)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  ulong uVar6;
  ulong unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  uint uVar7;
  undefined8 *unaff_x24;
  long *plVar8;
  
  for (; unaff_w22 < in_w8; unaff_w22 = unaff_w22 + 1) {
    uVar2 = FUN_073213d0();
    if (0x7f < uVar2) {
      if (*(int *)(*(long *)PTR_DAT_0910ce18 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      FUN_07445cc8();
      unaff_x21 = FUN_0732b9d4();
      break;
    }
    in_w8 = *(int *)(unaff_x21 + 0x10);
  }
  uVar3 = FUN_03f13470(*unaff_x24,4);
  FUN_073d2898(uVar3,*unaff_x23,0);
  if ((unaff_x21 != 0) && (lVar4 = FUN_0732a14c(unaff_x21,uVar3,0), lVar4 != 0)) {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      uVar7 = 0;
      do {
        if ((uint)uVar6 <= uVar7) {
LAB_0744b5bc:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        plVar8 = (long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (*plVar8 == 0) goto LAB_0744b5c0;
        uVar1 = uVar7 + 1;
        if (*(int *)(*plVar8 + 0x10) != 0 || uVar1 != (uint)uVar6) {
          if ((unaff_x19 & 1) == 0) {
            lVar5 = FUN_0744b7f8();
          }
          else {
            lVar5 = FUN_0744b5c4();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0744b5bc;
          *plVar8 = lVar5;
          thunk_FUN_03f86000(lVar4 + 0x20 + (long)(int)uVar7 * 8);
        }
        uVar6 = *(ulong *)(lVar4 + 0x18);
        if ((uint)uVar6 <= uVar7) goto LAB_0744b5bc;
        if (*plVar8 == 0) goto LAB_0744b5c0;
        uVar7 = uVar1;
      } while ((int)uVar1 < (int)(uint)uVar6);
    }
    FUN_07328410(*(undefined8 *)PTR_DAT_0910fe70,lVar4,0);
    return;
  }
LAB_0744b5c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


