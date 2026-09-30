/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Context
ENTRY_POINT: 0559e414
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Context(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w26;
  long *plVar5;
  int unaff_w28;
  long lVar6;
  
  do {
    if (*(uint *)(unaff_x21 + 3) <= unaff_w24) {
LAB_0559e590:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar5 = unaff_x21 + (long)(int)unaff_w24 + 4;
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d4f470);
      FUN_0559fe34();
      if ((lVar6 != 0) &&
         (lVar3 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar4,0);
      }
      if (unaff_w24 < *(uint *)(unaff_x21 + 3)) {
        *plVar5 = lVar6;
        thunk_FUN_02f411dc(plVar5,lVar6);
        return;
      }
      goto LAB_0559e590;
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_0559e58c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((*(int *)(*(long *)(lVar6 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x10)) &&
       (uVar2 = FUN_0559fa58(), (uVar2 & 1) != 0)) {
      if (*(long *)(lVar6 + 0x10) != 0) {
        if (*(int *)(*(long *)(lVar6 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
          FUN_0559f88c();
          return;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (((unaff_w20 & 0xff) == 0) || ((uVar1 & 0xff) != 0)) {
          if ((unaff_w20 & 0xff00) == 0) {
            return;
          }
          if ((uVar1 & 0xff00) != 0) {
            return;
          }
        }
        *(uint *)(lVar6 + 0x18) = uVar1 | unaff_w20;
        if (unaff_w19 == 0) {
          return;
        }
        *(int *)(lVar6 + 0x1c) = unaff_w19;
        return;
      }
      goto LAB_0559e58c;
    }
    unaff_w24 = unaff_w24 + unaff_w28;
    unaff_w26 = unaff_w26 + 1;
    if (0xc6 < (int)unaff_w24) {
      unaff_w24 = unaff_w24 - 199;
    }
    if (unaff_w26 == 199) {
      return;
    }
  } while( true );
}


