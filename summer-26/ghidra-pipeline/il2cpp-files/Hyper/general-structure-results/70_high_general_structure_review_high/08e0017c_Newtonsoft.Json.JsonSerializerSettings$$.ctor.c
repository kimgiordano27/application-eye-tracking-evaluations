/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 08e0017c
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

void Newtonsoft_Json_JsonSerializerSettings___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
code_r0x08e0017c:
  if (!(bool)in_ZR) goto LAB_08e00168;
LAB_08e00180:
  puVar1 = (undefined8 *)FUN_04980e68(unaff_x22,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_08e002cc;
      lVar4 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_08e00278;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08e00200;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x24,0);
LAB_08e00200:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    uVar3 = FUN_08c7ed5c(uVar3,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar3,uVar3);
    }
    FUN_06e60ca4();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *in_stack_00000018;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x22 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_08e00180;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_08e00168:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x08e0017c;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
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


