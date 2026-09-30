/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0746f58c
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
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x26;
  
code_r0x0746f58c:
  uVar3 = FUN_07363804();
  do {
    FUN_07371250(unaff_x22,uVar3,0);
    do {
      while( true ) {
        iVar1 = unaff_w23 + 1;
        if ((unaff_w21 < iVar1) || (*(int *)(unaff_x20 + 0x10) <= iVar1)) {
          if (unaff_x22 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0746f5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
            return;
          }
          FUN_0736b7b4();
          return;
        }
        sVar2 = FUN_07363804();
        if (sVar2 == 0x5c) break;
        unaff_w23 = iVar1;
        if (sVar2 == 0x27) {
          if (unaff_x22 == (long *)0x0) {
            unaff_x22 = (long *)thunk_FUN_0406deb8(*unaff_x26);
            FUN_07377908();
          }
        }
        else if (unaff_x22 != (long *)0x0) goto code_r0x0746f58c;
      }
      if (unaff_x22 == (long *)0x0) {
        unaff_x22 = (long *)thunk_FUN_0406deb8(*unaff_x26);
        FUN_07377908();
      }
      unaff_w23 = unaff_w23 + 2;
    } while (*(int *)(unaff_x20 + 0x10) <= unaff_w23);
    uVar3 = FUN_07363804();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
}


