/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 061dab44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


long Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar8;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar7;
  
  do {
    uVar1 = FUN_060bb390();
    if ((uVar1 < 0x20) || (sVar2 = FUN_060bb390(), sVar2 == 0x7f)) {
      iStack000000000000000c = unaff_w19 + unaff_w22;
      uVar5 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),(long)&stack0x00000008 + 4
                                );
      puVar7 = PTR_DAT_07dacbf8;
      goto LAB_061dacac;
    }
    lVar3 = FUN_060bb390();
    if (0x7f < ((uint)lVar3 & 0xffff)) {
      lVar3 = FUN_061daef4();
      unaff_x20 = lVar3;
      break;
    }
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 < *(int *)(unaff_x20 + 0x10));
  if (*(char *)(unaff_x21 + 0x11) != '\0') {
    lVar3 = FUN_061db010(lVar3,unaff_x20,unaff_w19);
  }
  if (unaff_x20 == 0) {
LAB_061dacf8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    iVar8 = 0;
    do {
      lVar3 = FUN_060bb390(unaff_x20,iVar8,0);
      puVar7 = PTR_DAT_07dacbf0;
      if (0x7f < ((uint)lVar3 & 0xffff)) {
        uVar4 = FUN_060bfa18(unaff_x20,*(undefined8 *)PTR_DAT_07dacbf0,5,0);
        if ((uVar4 & 1) != 0) {
          iStack0000000000000008 = unaff_w19 + iVar8;
          uVar5 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x00000008);
          puVar7 = PTR_DAT_07dacc08;
LAB_061dacac:
          uVar6 = thunk_FUN_037a15ac(puVar7);
          uVar5 = FUN_060b76a8(uVar6,uVar5,0);
          thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
          uVar6 = thunk_FUN_037788cc();
          FUN_061a843c(uVar6,uVar5,0);
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07dacc00);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar6,uVar5);
        }
        if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_061dacf8;
        uVar5 = FUN_061db1d8(*(long *)(unaff_x21 + 0x18),unaff_x20);
        lVar3 = System_Convert__ToInt32(*(undefined8 *)puVar7,uVar5,0);
        unaff_x20 = lVar3;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(unaff_x20 + 0x10));
  }
  FUN_061db520(lVar3,unaff_x20,unaff_w19);
  return unaff_x20;
}


