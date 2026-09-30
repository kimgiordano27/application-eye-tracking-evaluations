/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateTimeZoneHandling
ENTRY_POINT: 04f9b8c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b97c) */

undefined8 Newtonsoft_Json_JsonSerializer__get_DateTimeZoneHandling(long param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  long lVar2;
  uint unaff_w20;
  undefined8 uVar3;
  uint unaff_w21;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  
  do {
    if ((bool)in_ZR) {
      uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06777458);
      FUN_04f90fec(uVar3,unaff_w21);
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *unaff_x23;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_047cadf0(lVar2,unaff_w20,uVar3,*(undefined8 *)PTR_DAT_067781d0);
LAB_04f9b940:
      if (in_stack_00000000._4_1_ != '\0') {
        thunk_FUN_02d6ec70();
      }
      return uVar3;
    }
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x23;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar1 = (uint)*(ushort *)(lVar2 + (long)(int)unaff_w21 * 0x10 + 0x20);
    if (uVar1 == 0) {
      uVar3 = 0;
      goto LAB_04f9b940;
    }
    in_ZR = uVar1 == unaff_w20;
  } while( true );
}


