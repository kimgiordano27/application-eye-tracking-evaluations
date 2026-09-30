/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 061e22d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  int in_w9;
  long *unaff_x21;
  
  if (in_w8 == in_w9) {
    auVar5 = SEXT816((long)in_w9 * (long)*(int *)(param_1 + 0x24)) * ZEXT816(0xa3d70a3d70a3d70b);
    iVar1 = (int)(auVar5._8_8_ >> 6) - (auVar5._12_4_ >> 0x1f);
    iVar2 = in_w8 + 4;
    if (in_w8 + 4 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_061e23c0(param_1,iVar2);
    unaff_x21 = *(long **)(param_1 + 0x10);
    if (unaff_x21 == (long *)0x0) goto LAB_061e23ac;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((param_2 != 0) &&
     (lVar6 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0)) {
    uVar7 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar7,0);
  }
  if (*(uint *)(unaff_x21 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  unaff_x21[(long)(int)uVar3 + 4] = param_2;
  thunk_FUN_037aeb94(unaff_x21 + (long)(int)uVar3 + 4,param_2);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    *(int *)(param_1 + 0x1c) = iVar1 - iVar4 * iVar2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    return;
  }
LAB_061e23ac:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


