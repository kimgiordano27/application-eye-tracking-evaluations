/*
FUNCTION_NAME: SharedDeoVR.Generated.SlrContent.ScriptFileStreamingEncryptedRoute.Request$$.ctor
ENTRY_POINT: 093e1600
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x093e1708) */
/* WARNING: Removing unreachable block (ram,0x093e1780) */

void SharedDeoVR_Generated_SlrContent_ScriptFileStreamingEncryptedRoute_Request___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000018;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_093e1638;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_3,0);
LAB_093e1638:
      (*(code *)*puVar1)(unaff_x21,puVar1[1]);
      FUN_093b94e4();
      plVar2 = (long *)FUN_093eef48(0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      (**(code **)(*plVar2 + 0x2f8))();
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_093e15d4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x22,0);
LAB_093e15d4:
      uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((uVar4 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_093e16fc;
        lVar3 = *in_stack_00000018;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_093e16d4;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_093e16bc;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      param_1 = *in_stack_00000018;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x21 = in_stack_00000018;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_093e16bc:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_093e16f0;
    }
  }
LAB_093e16d4:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_093e16f0:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_093e16fc:
  FUN_093a4160();
  return;
}


