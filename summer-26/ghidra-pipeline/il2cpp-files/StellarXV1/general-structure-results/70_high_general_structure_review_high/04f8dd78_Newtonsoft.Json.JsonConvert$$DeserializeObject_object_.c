/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04f8dd78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f8df7c) */

uint Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  long *in_stack_00000018;
  
code_r0x04f8dd78:
  puVar2 = (undefined8 *)FUN_040b1e00(param_1,param_2,0);
  do {
    uVar1 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
LAB_04f8dec4:
      if (in_stack_00000018 == (long *)0x0) goto LAB_04f8df30;
      lVar3 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_04f8df08;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 04f8dda8 to 0508ddaf has its CatchHandler @ 04f8df2c */
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
                    /* try { // try from 04f8ddb4 to 0508ddc3 has its CatchHandler @ 04f8df20 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
                    /* try { // try from 04f8ddcc to 0508dddb has its CatchHandler @ 04f8df28 */
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04f8de14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar3,0);
LAB_04f8de14:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = **(long **)(unaff_x19 + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04f8de94;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_04f8de94:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) != 0) goto LAB_04f8dec4;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *in_stack_00000018;
    param_2 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    param_1 = in_stack_00000018;
    unaff_x23 = in_stack_00000018;
    if (uVar5 == 0) goto code_r0x04f8dd78;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x04f8dd78;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04f8df24;
    }
  }
LAB_04f8df08:
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_04f8df24:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
LAB_04f8df30:
  return uVar1 & 1;
}


