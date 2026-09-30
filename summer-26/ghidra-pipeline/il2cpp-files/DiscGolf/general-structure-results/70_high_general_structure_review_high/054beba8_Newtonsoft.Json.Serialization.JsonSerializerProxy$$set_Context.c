/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Context
ENTRY_POINT: 054beba8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Context
               (undefined8 param_1,ulong param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  byte unaff_w26;
  
  do {
    lVar8 = *(long *)(unaff_x24 + unaff_x22 * 8);
    if (lVar8 == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8,param_2);
      uVar6 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
      uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
      FUN_05453ed4(uVar6,uVar7,uVar5,0);
LAB_054bedbc:
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    if (*(int *)(lVar8 + 0x10) != 0) {
      lVar3 = *unaff_x23;
                    /* try { // try from 054bebbc to 055bebf7 has its CatchHandler @ 054bec04 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *unaff_x23;
      }
      iVar2 = FUN_05372478(lVar8,**(undefined8 **)(lVar3 + 0xb8),0);
      if (iVar2 != -1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar6 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
        FUN_05452924(uVar6,uVar7,0);
        goto LAB_054bedbc;
      }
      if ((unaff_w26 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
        FUN_053798ac();
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_054bd684(lVar8);
      if ((uVar4 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
        FUN_05378f70();
      }
      unaff_w25 = unaff_w25 + -1;
      FUN_053798ac();
      unaff_w26 = 0;
      param_2 = extraout_x1;
      if (0 < unaff_w25) {
        param_2 = (ulong)(*(int *)(lVar8 + 0x10) - 1);
        if (0 < *(int *)(lVar8 + 0x10)) {
          sVar1 = FUN_053674f8(lVar8,param_2,0);
          lVar8 = *unaff_x23;
          param_2 = extraout_x1_00;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar8);
            lVar8 = *unaff_x23;
            param_2 = extraout_x1_01;
          }
          lVar3 = *(long *)(lVar8 + 0xb8);
          if (*(short *)(lVar3 + 10) != sVar1) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar8);
              lVar8 = *unaff_x23;
              lVar3 = *(long *)(lVar8 + 0xb8);
              param_2 = extraout_x1_02;
            }
            if (*(short *)(lVar3 + 8) != sVar1) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar8);
                lVar3 = *(long *)(*unaff_x23 + 0xb8);
                param_2 = extraout_x1_03;
              }
              unaff_w26 = *(short *)(lVar3 + 0x18) != sVar1;
              goto LAB_054bed04;
            }
          }
          unaff_w26 = 0;
        }
      }
    }
LAB_054bed04:
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x22) {
      if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x054bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x20 + 0x168))();
        return;
      }
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  } while( true );
}


