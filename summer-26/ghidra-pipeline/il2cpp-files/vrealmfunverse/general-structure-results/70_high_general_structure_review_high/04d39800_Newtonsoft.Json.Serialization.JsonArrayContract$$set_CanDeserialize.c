/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 04d39800
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint in_w10;
  long unaff_x19;
  
  if ((int)in_w10 < 2) {
    return;
  }
  lVar6 = *(long *)(unaff_x19 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x54) = 0;
  if (lVar6 == 0) goto LAB_04d39a98;
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 == 0) goto LAB_04d39a94;
  cVar2 = *(char *)(lVar6 + 0x20);
  if (cVar2 == -1) {
    if (uVar1 == 1) goto LAB_04d39a94;
    if (*(char *)(lVar6 + 0x21) != -2) goto LAB_04d39960;
    if (in_w10 < 4) {
LAB_04d3988c:
      uVar4 = FUN_04c25f40(0);
      goto LAB_04d39894;
    }
    if (uVar1 < 3) goto LAB_04d39a94;
    if (*(char *)(lVar6 + 0x22) != '\0') goto LAB_04d3988c;
    if (uVar1 == 3) goto LAB_04d39a94;
    if (*(char *)(lVar6 + 0x23) != '\0') goto LAB_04d3988c;
    uVar4 = FUN_04c26188(0);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
LAB_04d39a80:
    thunk_FUN_02bb0e9c(unaff_x19 + 0x20,uVar4);
    FUN_04d39780();
  }
  else {
    if (cVar2 == -2) {
      if (uVar1 == 1) goto LAB_04d39a94;
      if (*(char *)(lVar6 + 0x21) != -1) goto LAB_04d39960;
      uVar4 = FUN_04c26010(0);
LAB_04d39894:
      *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar4);
      FUN_04da8618(*(undefined8 *)(unaff_x19 + 0x30),2,*(undefined8 *)(unaff_x19 + 0x30),0,
                   *(int *)(unaff_x19 + 0x48) + -2,0);
      iVar3 = *(int *)(unaff_x19 + 0x48) + -2;
    }
    else {
LAB_04d39960:
      if (in_w10 == 2) {
        *(undefined1 *)(unaff_x19 + 0x54) = 1;
        return;
      }
      if (cVar2 != -0x11) {
        if (in_w10 < 4) {
          return;
        }
        if (cVar2 != '\0') {
          return;
        }
        if (uVar1 == 1) goto LAB_04d39a94;
        if (*(char *)(lVar6 + 0x21) != '\0') {
          return;
        }
        if (uVar1 < 3) goto LAB_04d39a94;
        if (*(char *)(lVar6 + 0x22) != -2) {
          return;
        }
        if (uVar1 == 3) goto LAB_04d39a94;
        if (*(char *)(lVar6 + 0x23) != -1) {
          return;
        }
        uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0632a450);
        FUN_04c18ccc(uVar4,1,1,0);
        *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
        goto LAB_04d39a80;
      }
      if (uVar1 == 1) {
LAB_04d39a94:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (*(char *)(lVar6 + 0x21) != -0x45) {
        return;
      }
      if (uVar1 < 3) goto LAB_04d39a94;
      if (*(char *)(lVar6 + 0x22) != -0x41) {
        return;
      }
      uVar4 = FUN_04c24d1c(0);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar4);
      FUN_04da8618(*(undefined8 *)(unaff_x19 + 0x30),3,*(undefined8 *)(unaff_x19 + 0x30),0,
                   *(int *)(unaff_x19 + 0x48) + -3,0);
      iVar3 = *(int *)(unaff_x19 + 0x48) + -3;
    }
    *(int *)(unaff_x19 + 0x48) = iVar3;
  }
  plVar5 = *(long **)(unaff_x19 + 0x20);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar4);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (plVar5 = *(long **)(unaff_x19 + 0x20), plVar5 != (long *)0x0)) {
      iVar3 = (**(code **)(*plVar5 + 0x348))
                        (plVar5,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18),
                         *(undefined8 *)(*plVar5 + 0x350));
      if (*(int *)(unaff_x19 + 0x50) < iVar3) {
        uVar4 = FUN_02b3c908(*(undefined8 *)PTR_DAT_0631c570,iVar3);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
        thunk_FUN_02bb0e9c();
      }
      *(int *)(unaff_x19 + 0x50) = iVar3;
      return;
    }
  }
LAB_04d39a98:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


