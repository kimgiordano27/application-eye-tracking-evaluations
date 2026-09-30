/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0746f530
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  short sVar1;
  undefined4 uVar2;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  int iVar3;
  undefined8 *unaff_x26;
  
LAB_0746f5ac:
  do {
    while( true ) {
      iVar3 = unaff_w23 + 1;
      if ((unaff_w21 < iVar3) || (*(int *)(unaff_x20 + 0x10) <= iVar3)) {
        if (unaff_x22 == (long *)0x0) {
          FUN_0736b7b4();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0746f5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
        return;
      }
      sVar1 = FUN_07363804();
      if (sVar1 == 0x5c) break;
      unaff_w23 = iVar3;
      if (sVar1 != 0x27) goto LAB_0746f588;
      if (unaff_x22 == (long *)0x0) {
        unaff_x22 = (long *)thunk_FUN_0406deb8(*unaff_x26);
        FUN_07377908();
      }
    }
    if (unaff_x22 == (long *)0x0) {
      unaff_x22 = (long *)thunk_FUN_0406deb8(*unaff_x26);
      FUN_07377908();
    }
    iVar3 = unaff_w23 + 2;
    unaff_w23 = iVar3;
  } while (*(int *)(unaff_x20 + 0x10) <= iVar3);
  uVar2 = FUN_07363804();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_0746f59c;
LAB_0746f588:
  if (unaff_x22 != (long *)0x0) {
    uVar2 = FUN_07363804();
LAB_0746f59c:
    FUN_07371250(unaff_x22,uVar2,0);
    unaff_w23 = iVar3;
  }
  goto LAB_0746f5ac;
}


