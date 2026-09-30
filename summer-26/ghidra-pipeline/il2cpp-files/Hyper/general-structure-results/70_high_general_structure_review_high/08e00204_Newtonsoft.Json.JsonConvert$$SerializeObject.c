/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 08e00204
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e002d4) */
/* WARNING: Removing unreachable block (ram,0x08e0034c) */
/* WARNING: Removing unreachable block (ram,0x08e002ec) */
/* WARNING: Removing unreachable block (ram,0x08e002f0) */
/* WARNING: Removing unreachable block (ram,0x08e003a8) */

void Newtonsoft_Json_JsonConvert__SerializeObject
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
  do {
    uVar2 = (*param_1)(unaff_x22,param_3);
    uVar2 = FUN_08c7ed5c(uVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar2,uVar2);
    }
    FUN_06e60ca4();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08e0019c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x23,0);
LAB_08e0019c:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_08e002cc;
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_08e00278;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08e00200;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x24,0);
LAB_08e00200:
    param_1 = (code *)*puVar1;
    param_3 = puVar1[1];
    unaff_x22 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_08e002c0;
    }
  }
LAB_08e00278:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e002c0:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_08e002cc:
  if (unaff_x21 != 0) {
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      FUN_08e00408();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


