/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 04d0a080
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  undefined *puVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_06312310;
  iVar5 = 0;
  lVar9 = 0;
  do {
    iVar4 = FUN_04cce264(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0);
    if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0x88));
    }
    uVar7 = FUN_04cfa424(iVar4,0);
    if ((uVar7 & 1) == 0) {
LAB_04d0a288:
      iVar5 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,iVar5,in_stack_00000000._4_4_);
    }
    else {
      iVar5 = FUN_04d0a328();
      bVar2 = iVar4 == 1;
      iVar4 = iVar5 + 1;
      while (iVar5 = iVar4, iVar4 < *(int *)(unaff_x20 + 0x10)) {
        while( true ) {
          while (uVar6 = FUN_04cce264(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0), uVar6 < 5) {
            iVar5 = in_stack_00000000._4_4_ + iVar5;
            bVar2 = (bool)(uVar6 == 1 | bVar2);
            if (*(int *)(unaff_x20 + 0x10) <= iVar5) goto LAB_04d0a20c;
          }
          sVar3 = FUN_04c045f0(unaff_x20,iVar5,0);
          if (sVar3 == 0x27) break;
          if (((1 << (ulong)(uVar6 & 0x1f) & 0x1ffcf800U) != 0) ||
             (iVar5 = in_stack_00000000._4_4_ + iVar5, *(int *)(unaff_x20 + 0x10) <= iVar5))
          goto LAB_04d0a20c;
        }
        if ((bVar2) && (unaff_x20 = lVar9, lVar9 == 0)) {
          unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
          lVar9 = unaff_x20;
        }
        if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
        FUN_04c16478(in_stack_00000008,unaff_x20,iVar4,(iVar5 + 1) - iVar4,0);
        bVar2 = true;
        unaff_x20 = in_stack_00000018;
        iVar4 = iVar5 + 1;
        if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      }
LAB_04d0a20c:
      if (0 < iVar5 - iVar4) {
        if ((bVar2) && (unaff_x20 = lVar9, lVar9 == 0)) {
          unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
          lVar9 = unaff_x20;
        }
        if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
        FUN_04c16478(in_stack_00000008,unaff_x20,iVar4,iVar5 - iVar4,0);
      }
      if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      unaff_x20 = in_stack_00000018;
      if (iVar5 < *(int *)(in_stack_00000018 + 0x10)) goto LAB_04d0a288;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(unaff_x20 + 0x10));
  if (in_stack_00000008 != (long *)0x0) {
    uVar8 = (**(code **)(*in_stack_00000008 + 0x168))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
    return uVar8;
  }
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


