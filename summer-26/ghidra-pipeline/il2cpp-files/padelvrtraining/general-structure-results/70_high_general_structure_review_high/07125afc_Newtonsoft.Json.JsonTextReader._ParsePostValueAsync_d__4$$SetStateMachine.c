/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 07125afc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine
                (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int unaff_w19;
  ulong unaff_x20;
  int iVar6;
  ulong uVar7;
  long *unaff_x24;
  
  iVar1 = (**(code **)(param_1 + 0x218))
                    (param_2,unaff_x20 & 0xffffffff,0,*(undefined8 *)(param_1 + 0x220));
  if ((unaff_w19 != 0) && (unaff_x20 = (long)iVar1, unaff_w19 != 1)) {
    lVar2 = *unaff_x24;
    uVar7 = 0;
    do {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar2 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_07125c08;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_07125c04;
      if ((long)iVar1 <= (long)*(int *)(lVar5 + uVar7 * 4 + 0x20)) {
        iVar6 = (int)uVar7 + 1;
        goto LAB_07125b98;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xc);
    iVar6 = 0xd;
LAB_07125b98:
    if (unaff_w19 == 2) {
      unaff_x20 = (ulong)(iVar6 - 1);
    }
    else {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar5 == 0) {
LAB_07125c08:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)((long)iVar6 + -2)) {
LAB_07125c04:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      if (unaff_w19 != 3) {
        uVar3 = thunk_FUN_03d1e194(PTR_DAT_09210488);
        uVar3 = Newtonsoft_Json_Linq_JTokenEqualityComparer__GetHashCode(uVar3,0);
        thunk_FUN_03d1e194(PTR_DAT_091aa550);
        uVar4 = thunk_FUN_03d2ef40();
        Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar4,uVar3,0);
        uVar3 = thunk_FUN_03d1e194(PTR_DAT_09210490);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar4,uVar3);
      }
      unaff_x20 = (ulong)(uint)(iVar1 - *(int *)(lVar5 + ((long)iVar6 + -2) * 4 + 0x20));
    }
  }
  return unaff_x20 & 0xffffffff;
}


