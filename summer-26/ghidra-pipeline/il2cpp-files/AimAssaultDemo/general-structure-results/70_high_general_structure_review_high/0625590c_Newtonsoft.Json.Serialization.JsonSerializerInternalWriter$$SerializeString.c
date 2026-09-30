/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 0625590c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  int iVar6;
  long unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  undefined1 auVar7 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07daae20);
    *(undefined1 *)(unaff_x25 + 0xa4b) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_06250348(param_2,param_3,unaff_w23);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  auVar7 = FUN_0623b990(param_2,param_3,0);
  uVar4 = auVar7._8_8_;
  uVar2 = auVar7._0_8_;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  if (DAT_08255bd1 == '\0') {
    FUN_0373b518(PTR_DAT_07d98650);
    DAT_08255bd1 = '\x01';
    if (uVar1 == 0) goto LAB_062559bc;
LAB_0625598c:
    uVar3 = FUN_060be1d4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_0625598c;
LAB_062559bc:
    uVar3 = 0;
  }
  if (DAT_0825b59d == '\0') {
    FUN_0373b518(PTR_DAT_07da5468);
    FUN_0373b518(PTR_DAT_07da5230);
    DAT_0825b59d = '\x01';
  }
  iVar6 = auVar7._8_4_;
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_060c73cc(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07da5468),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0x7f800000;
    goto LAB_06255b68;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x78);
  if (DAT_08255bd1 == '\0') {
    FUN_0373b518(PTR_DAT_07d98650);
    DAT_08255bd1 = '\x01';
    if (uVar1 == 0) goto LAB_06255a64;
LAB_06255a34:
    uVar3 = FUN_060be1d4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_06255a34;
LAB_06255a64:
    uVar3 = 0;
  }
  if (DAT_0825b59d == '\0') {
    FUN_0373b518(PTR_DAT_07da5468);
    FUN_0373b518(PTR_DAT_07da5230);
    DAT_0825b59d = '\x01';
  }
  if ((iVar6 == (int)uVar1) &&
     ((iVar6 == 0 ||
      (uVar1 = FUN_060c73cc(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07da5468),
      (uVar1 & 1) != 0)))) {
    uVar5 = 0xff800000;
    goto LAB_06255b68;
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  if (DAT_08255bd1 == '\0') {
    FUN_0373b518(PTR_DAT_07d98650);
    DAT_08255bd1 = '\x01';
    if (uVar1 == 0) goto LAB_06255b08;
LAB_06255ad8:
    uVar3 = FUN_060be1d4(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_06255ad8;
LAB_06255b08:
    uVar3 = 0;
  }
  if (DAT_0825b59d == '\0') {
    FUN_0373b518(PTR_DAT_07da5468);
    FUN_0373b518(PTR_DAT_07da5230);
    DAT_0825b59d = '\x01';
  }
  if ((iVar6 != (int)uVar1) ||
     ((iVar6 != 0 &&
      (uVar1 = FUN_060c73cc(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_07da5468),
      (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar5 = 0x7fc00000;
LAB_06255b68:
  *unaff_x19 = uVar5;
  return 1;
}


