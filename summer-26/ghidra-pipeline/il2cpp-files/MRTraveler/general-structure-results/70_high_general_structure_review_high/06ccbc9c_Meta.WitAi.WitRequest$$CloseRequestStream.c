/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 06ccbc9c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest__CloseRequestStream(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int unaff_w20;
  uint uVar5;
  int unaff_w25;
  long unaff_x26;
  float fVar6;
  int iVar7;
  float unaff_s10;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  
  while( true ) {
    iVar7 = *(int *)(param_1 + 0x14);
    FUN_05168a34();
    FUN_06cc5688((float)unaff_w25,(float)iVar7,in_stack_00000090);
    puVar1 = PTR_DAT_08e8b2a8;
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(in_stack_00000080 + 0x18) <= unaff_w20) {
      if (*(int *)(in_stack_00000080 + 0x18) < 1) goto LAB_06ccbd88;
      iVar7 = 0;
      goto LAB_06ccbd24;
    }
    lVar4 = FUN_05212a24(in_stack_00000080,unaff_w20,*(undefined8 *)PTR_DAT_08e8b2a8);
    if (lVar4 == 0) break;
    uVar5 = *(uint *)(lVar4 + 0x14);
    lVar4 = FUN_05212a24(in_stack_00000080,unaff_w20,*(undefined8 *)puVar1);
    if (lVar4 == 0) break;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar6 = logf((float)(int)uVar5);
      fVar6 = exp2f((float)(int)(fVar6 / unaff_s10));
      uVar5 = 0x80000000;
      if (fVar6 != INFINITY) {
        uVar5 = (int)fVar6;
      }
      if (uVar5 < 3) {
        uVar5 = 2;
      }
    }
    puVar1 = PTR_DAT_08e8b2a8;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar5) {
      uVar5 = in_stack_00000088._4_4_;
    }
    lVar4 = FUN_05212a24(in_stack_00000080,unaff_w20,*(undefined8 *)PTR_DAT_08e8b2a8);
    if (lVar4 == 0) break;
    *(uint *)(lVar4 + 0x14) = uVar5;
    lVar4 = FUN_05212a24(in_stack_00000080,unaff_w20,*(undefined8 *)puVar1);
    if (lVar4 == 0) break;
    unaff_w25 = *(int *)(lVar4 + 0x10);
    param_1 = FUN_05212a24(in_stack_00000080,unaff_w20,*(undefined8 *)puVar1);
    if ((param_1 == 0) || (unaff_x26 == 0)) break;
  }
LAB_06ccbdc4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06ccbd24:
  uVar2 = FUN_05212a24(in_stack_00000080,iVar7,*(undefined8 *)puVar1);
  if (unaff_x26 == 0) goto LAB_06ccbdc4;
  uVar3 = FUN_05168a34();
  FUN_06cc5b8c(uVar3,uVar2,uVar3);
  lVar4 = FUN_05212a24(in_stack_00000080,iVar7,*(undefined8 *)puVar1);
  if (lVar4 == 0) goto LAB_06ccbdc4;
  FUN_06cc5114();
  iVar7 = iVar7 + 1;
  if (*(int *)(in_stack_00000080 + 0x18) <= iVar7) {
LAB_06ccbd88:
    FUN_05214770(in_stack_00000080,*(undefined8 *)PTR_DAT_08e8b140);
    return;
  }
  goto LAB_06ccbd24;
}


