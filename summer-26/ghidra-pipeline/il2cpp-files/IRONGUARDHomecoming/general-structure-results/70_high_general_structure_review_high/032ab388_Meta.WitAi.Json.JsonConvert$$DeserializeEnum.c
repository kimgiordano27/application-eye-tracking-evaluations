/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeEnum
ENTRY_POINT: 032ab388
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032ab480) */

void Meta_WitAi_Json_JsonConvert__DeserializeEnum(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x22;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x032ab388:
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,param_2,0);
  do {
    (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68))
                      (&stack0x00000040);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 032ab3bc to 033ab41b has its CatchHandler @ 032ab514 */
      FUN_02cfe56c(&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
      return;
    }
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    (*(code *)puVar2[2])(*puVar2,puVar2,&stack0x00000040,0,&stack0x00000008);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000038 = in_stack_00000010;
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
    (*(code *)puVar2[2])(*puVar2,puVar2,&stack0x00000030,0,&stack0x00000008);
    unaff_x22 = in_stack_00000008;
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_032ab328;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x22,lVar3,5);
LAB_032ab328:
    (*(code *)*puVar2)(unaff_x22);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar3 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 == 0) goto code_r0x032ab388;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
      if (uVar1 == 0) goto code_r0x032ab388;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
}


