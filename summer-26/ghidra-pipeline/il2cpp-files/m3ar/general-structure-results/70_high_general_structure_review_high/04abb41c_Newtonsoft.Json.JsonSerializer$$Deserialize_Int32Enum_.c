/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 04abb41c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  lVar1 = thunk_FUN_0406ddbc(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar1 == 0) {
LAB_04abb750:
    uVar2 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar2,0);
  }
  if (*(int *)(unaff_x23 + 0x18) != 0) {
    *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
    if (unaff_x22 != (long *)0x0) {
      uVar2 = (**(code **)(*unaff_x22 + 0x988))();
      lVar1 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,1);
      if (lVar1 != 0) {
        lVar3 = thunk_FUN_0406ddbc();
        if (lVar3 == 0) goto LAB_04abb750;
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x20) = unaff_x20;
          lVar1 = FUN_0750ff7c(uVar2,lVar1,0);
          lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0406aaec(lVar3);
          }
          if (lVar1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = thunk_FUN_0406ddbc(lVar1,lVar3);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04031c0c(lVar1,lVar3);
            }
          }
          return lVar4;
        }
        goto LAB_04abb74c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
LAB_04abb74c:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


