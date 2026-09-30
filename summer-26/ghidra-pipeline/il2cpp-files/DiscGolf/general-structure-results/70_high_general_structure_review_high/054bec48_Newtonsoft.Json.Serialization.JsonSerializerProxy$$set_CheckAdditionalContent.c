/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 054bec48
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
FUN_054bec50:
  do {
    unaff_w25 = unaff_w25 + -1;
    FUN_053798ac();
    bVar1 = false;
    if ((0 < unaff_w25) && (0 < *(int *)(unaff_x21 + 0x10))) {
      sVar2 = FUN_053674f8(unaff_x21,*(int *)(unaff_x21 + 0x10) + -1,0);
      lVar8 = *unaff_x23;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar8);
        lVar8 = *unaff_x23;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      if (*(short *)(lVar9 + 10) != sVar2) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar8);
          lVar8 = *unaff_x23;
          lVar9 = *(long *)(lVar8 + 0xb8);
        }
        if (*(short *)(lVar9 + 8) != sVar2) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar8);
            lVar9 = *(long *)(*unaff_x23 + 0xb8);
          }
          bVar1 = *(short *)(lVar9 + 0x18) != sVar2;
          goto LAB_054bed04;
        }
      }
      bVar1 = false;
    }
LAB_054bed04:
    do {
      unaff_x22 = unaff_x22 + 1;
      if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x22) {
        if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x054bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        goto LAB_054bed88;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      unaff_x21 = *(long *)(unaff_x24 + unaff_x22 * 8);
      if (unaff_x21 == 0) {
        thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
        uVar6 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
        uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
        FUN_05453ed4(uVar6,uVar7,uVar5,0);
        goto LAB_054bedbc;
      }
    } while (*(int *)(unaff_x21 + 0x10) == 0);
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *unaff_x23;
    }
    iVar3 = FUN_05372478(unaff_x21,**(undefined8 **)(lVar8 + 0xb8),0);
    if (iVar3 != -1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar6 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
      FUN_05452924(uVar6,uVar7,0);
LAB_054bedbc:
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    if (bVar1) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
      FUN_053798ac();
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_054bd684(unaff_x21);
    if ((uVar4 & 1) != 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
      FUN_05378f70();
      goto FUN_054bec50;
    }
    if (unaff_x20 == (long *)0x0) {
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while( true );
}


