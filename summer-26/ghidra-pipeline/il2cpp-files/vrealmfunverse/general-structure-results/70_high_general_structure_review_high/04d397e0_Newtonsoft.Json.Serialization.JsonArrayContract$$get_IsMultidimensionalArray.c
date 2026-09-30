/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsMultidimensionalArray
ENTRY_POINT: 04d397e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_IsMultidimensionalArray(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x570));
  FUN_02b3c81c(PTR_DAT_0632a450);
  *(undefined1 *)(unaff_x20 + 0x62e) = 1;
  uVar1 = *(uint *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 2) {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x54) = 0;
  if (lVar7 == 0) goto LAB_04d39a98;
  uVar2 = *(uint *)(lVar7 + 0x18);
  if (uVar2 == 0) goto LAB_04d39a94;
  cVar3 = *(char *)(lVar7 + 0x20);
  if (cVar3 == -1) {
    if (uVar2 == 1) goto LAB_04d39a94;
    if (*(char *)(lVar7 + 0x21) != -2) goto LAB_04d39960;
    if (uVar1 < 4) {
LAB_04d3988c:
      uVar5 = FUN_04c25f40(0);
      goto LAB_04d39894;
    }
    if (uVar2 < 3) goto LAB_04d39a94;
    if (*(char *)(lVar7 + 0x22) != '\0') goto LAB_04d3988c;
    if (uVar2 == 3) goto LAB_04d39a94;
    if (*(char *)(lVar7 + 0x23) != '\0') goto LAB_04d3988c;
    uVar5 = FUN_04c26188(0);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
LAB_04d39a80:
    thunk_FUN_02bb0e9c(unaff_x19 + 0x20,uVar5);
    FUN_04d39780();
  }
  else {
    if (cVar3 == -2) {
      if (uVar2 == 1) goto LAB_04d39a94;
      if (*(char *)(lVar7 + 0x21) != -1) goto LAB_04d39960;
      uVar5 = FUN_04c26010(0);
LAB_04d39894:
      *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar5);
      FUN_04da8618(*(undefined8 *)(unaff_x19 + 0x30),2,*(undefined8 *)(unaff_x19 + 0x30),0,
                   *(int *)(unaff_x19 + 0x48) + -2,0);
      iVar4 = *(int *)(unaff_x19 + 0x48) + -2;
    }
    else {
LAB_04d39960:
      if (uVar1 == 2) {
        *(undefined1 *)(unaff_x19 + 0x54) = 1;
        return;
      }
      if (cVar3 != -0x11) {
        if (uVar1 < 4) {
          return;
        }
        if (cVar3 != '\0') {
          return;
        }
        if (uVar2 == 1) goto LAB_04d39a94;
        if (*(char *)(lVar7 + 0x21) != '\0') {
          return;
        }
        if (uVar2 < 3) goto LAB_04d39a94;
        if (*(char *)(lVar7 + 0x22) != -2) {
          return;
        }
        if (uVar2 == 3) goto LAB_04d39a94;
        if (*(char *)(lVar7 + 0x23) != -1) {
          return;
        }
        uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0632a450);
        FUN_04c18ccc(uVar5,1,1,0);
        *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
        goto LAB_04d39a80;
      }
      if (uVar2 == 1) {
LAB_04d39a94:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (*(char *)(lVar7 + 0x21) != -0x45) {
        return;
      }
      if (uVar2 < 3) goto LAB_04d39a94;
      if (*(char *)(lVar7 + 0x22) != -0x41) {
        return;
      }
      uVar5 = FUN_04c24d1c(0);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar5);
      FUN_04da8618(*(undefined8 *)(unaff_x19 + 0x30),3,*(undefined8 *)(unaff_x19 + 0x30),0,
                   *(int *)(unaff_x19 + 0x48) + -3,0);
      iVar4 = *(int *)(unaff_x19 + 0x48) + -3;
    }
    *(int *)(unaff_x19 + 0x48) = iVar4;
  }
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x318))(plVar6,*(undefined8 *)(*plVar6 + 800));
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar5);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (plVar6 = *(long **)(unaff_x19 + 0x20), plVar6 != (long *)0x0)) {
      iVar4 = (**(code **)(*plVar6 + 0x348))
                        (plVar6,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18),
                         *(undefined8 *)(*plVar6 + 0x350));
      if (*(int *)(unaff_x19 + 0x50) < iVar4) {
        uVar5 = FUN_02b3c908(*(undefined8 *)PTR_DAT_0631c570,iVar4);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
        thunk_FUN_02bb0e9c();
      }
      *(int *)(unaff_x19 + 0x50) = iVar4;
      return;
    }
  }
LAB_04d39a98:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


