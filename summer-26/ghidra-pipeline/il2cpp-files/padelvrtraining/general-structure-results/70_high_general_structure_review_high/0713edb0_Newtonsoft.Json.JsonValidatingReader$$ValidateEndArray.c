/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 0713edb0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(void)

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
  int iVar8;
  long unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar7;
  
  lVar3 = FUN_03d2d2b0();
  *(undefined1 *)(unaff_x22 + 0xd31) = 1;
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar8 = 0;
      do {
        uVar1 = FUN_06fcd2c8();
        if ((uVar1 < 0x20) || (sVar2 = FUN_06fcd2c8(), sVar2 == 0x7f)) {
          iStack000000000000000c = unaff_w19 + iVar8;
          uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a0d08);
          uVar5 = thunk_FUN_03d2eb70(uVar5,(long)&stack0x00000008 + 4);
          puVar7 = PTR_DAT_09211ac0;
          goto LAB_0713ef38;
        }
        lVar3 = FUN_06fcd2c8();
        if (0x7f < ((uint)lVar3 & 0xffff)) {
          lVar3 = FUN_0713f180();
          unaff_x20 = lVar3;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x20 + 0x10));
    }
    if (*(char *)(unaff_x21 + 0x11) != '\0') {
      lVar3 = FUN_0713f2c4(lVar3,unaff_x20,unaff_w19);
    }
    if (unaff_x20 != 0) {
      if (0 < *(int *)(unaff_x20 + 0x10)) {
        iVar8 = 0;
        do {
          lVar3 = FUN_06fcd2c8(unaff_x20,iVar8,0);
          puVar7 = PTR_DAT_09211ab8;
          if (0x7f < ((uint)lVar3 & 0xffff)) {
            uVar4 = System_Char__CheckPunctuation(unaff_x20,*(undefined8 *)PTR_DAT_09211ab8,5,0);
            if ((uVar4 & 1) != 0) {
              iStack0000000000000008 = unaff_w19 + iVar8;
              uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a0d08);
              uVar5 = thunk_FUN_03d2eb70(uVar5,&stack0x00000008);
              puVar7 = PTR_DAT_09211ad0;
LAB_0713ef38:
              uVar6 = thunk_FUN_03d1e194(puVar7);
              uVar5 = FUN_06fc1fb4(uVar6,uVar5,0);
              thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
              uVar6 = thunk_FUN_03d2ef40();
              FUN_070cb7ec(uVar6,uVar5,0);
              uVar5 = thunk_FUN_03d1e194(PTR_DAT_09211ac8);
                    /* WARNING: Subroutine does not return */
              FUN_03d2d414(uVar6,uVar5);
            }
            if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_0713ef84;
            uVar5 = FUN_0713f48c(*(long *)(unaff_x21 + 0x18),unaff_x20);
            lVar3 = FUN_06fc5244(*(undefined8 *)puVar7,uVar5,0);
            unaff_x20 = lVar3;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x20 + 0x10));
      }
      FUN_0713f7d4(lVar3,unaff_x20,unaff_w19);
      return unaff_x20;
    }
  }
LAB_0713ef84:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


