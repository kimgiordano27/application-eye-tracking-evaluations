/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 054bec6c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer(void)

{
  char in_NG;
  char in_OV;
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  byte unaff_w26;
  
  do {
    if (in_NG == in_OV) {
      if (0 < *(int *)(unaff_x21 + 0x10)) {
                    /* try { // try from 054bec84 to 055bec87 has its CatchHandler @ 054bed78 */
        sVar1 = FUN_053674f8(unaff_x21,*(int *)(unaff_x21 + 0x10) + -1,0);
        lVar7 = *unaff_x23;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar7);
          lVar7 = *unaff_x23;
        }
        lVar8 = *(long *)(lVar7 + 0xb8);
        if (*(short *)(lVar8 + 10) != sVar1) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar7);
            lVar7 = *unaff_x23;
            lVar8 = *(long *)(lVar7 + 0xb8);
          }
          if (*(short *)(lVar8 + 8) != sVar1) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar7);
              lVar8 = *(long *)(*unaff_x23 + 0xb8);
            }
            unaff_w26 = *(short *)(lVar8 + 0x18) != sVar1;
            goto LAB_054bed04;
          }
        }
        unaff_w26 = 0;
      }
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
        uVar5 = thunk_FUN_02dd3144();
        uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
        uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
        FUN_05453ed4(uVar5,uVar6,uVar4,0);
        goto LAB_054bedbc;
      }
    } while (*(int *)(unaff_x21 + 0x10) == 0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *unaff_x23;
    }
    iVar2 = FUN_05372478(unaff_x21,**(undefined8 **)(lVar7 + 0xb8),0);
    if (iVar2 != -1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar5 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
      FUN_05452924(uVar5,uVar6,0);
LAB_054bedbc:
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar6);
    }
    if ((unaff_w26 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (unaff_x20 == (long *)0x0) {
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_053798ac();
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_054bd684(unaff_x21);
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
    }
    else {
      if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
      FUN_05378f70();
    }
    FUN_053798ac();
    in_OV = SBORROW4(unaff_w25 + -1,1);
    in_NG = unaff_w25 + -2 < 0;
    unaff_w26 = 0;
    unaff_w25 = unaff_w25 + -1;
  } while( true );
}


