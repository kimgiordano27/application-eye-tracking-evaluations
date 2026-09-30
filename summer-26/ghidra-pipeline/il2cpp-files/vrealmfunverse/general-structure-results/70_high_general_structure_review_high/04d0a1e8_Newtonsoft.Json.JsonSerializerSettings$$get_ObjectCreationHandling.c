/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 04d0a1e8
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x04d0a1e8:
  bVar1 = true;
  if (unaff_x20 != 0) {
    do {
      iVar5 = unaff_w23;
      if (unaff_w23 < *(int *)(unaff_x20 + 0x10)) {
        do {
          while (uVar4 = FUN_04cce264(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0), 4 < uVar4) {
            sVar2 = FUN_04c045f0(unaff_x20,iVar5,0);
            if (sVar2 == 0x27) {
              if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
                unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
                unaff_x21 = unaff_x20;
              }
              if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
              FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w23,(iVar5 + 1) - unaff_w23,0);
              unaff_x20 = in_stack_00000018;
              unaff_w23 = iVar5 + 1;
              goto code_r0x04d0a1e8;
            }
            if (((unaff_w26 << (ulong)(uVar4 & 0x1f) & unaff_w27) != 0) ||
               (iVar5 = in_stack_00000000._4_4_ + iVar5, *(int *)(unaff_x20 + 0x10) <= iVar5))
            goto LAB_04d0a20c;
          }
          iVar5 = in_stack_00000000._4_4_ + iVar5;
          bVar1 = (bool)(uVar4 == 1 | bVar1);
        } while (iVar5 < *(int *)(unaff_x20 + 0x10));
      }
LAB_04d0a20c:
      if (0 < iVar5 - unaff_w23) {
        if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
          unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
          unaff_x21 = unaff_x20;
        }
        if (in_stack_00000008 == (long *)0x0) break;
        FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w23,iVar5 - unaff_w23,0);
      }
      unaff_x20 = in_stack_00000018;
      if (in_stack_00000018 == 0) break;
      if (*(int *)(in_stack_00000018 + 0x10) <= iVar5) goto LAB_04d0a290;
      do {
        iVar5 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,iVar5,in_stack_00000000._4_4_);
LAB_04d0a290:
        iVar5 = iVar5 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= iVar5) {
          if (in_stack_00000008 != (long *)0x0) {
            uVar7 = (**(code **)(*in_stack_00000008 + 0x168))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
            return uVar7;
          }
          goto LAB_04d0a2dc;
        }
        iVar3 = FUN_04cce264(unaff_x20,iVar5,(long)&stack0x00000000 + 4,0);
        if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
        }
        uVar6 = FUN_04cfa424(iVar3,0);
      } while ((uVar6 & 1) == 0);
      iVar5 = FUN_04d0a328();
      bVar1 = iVar3 == 1;
      unaff_w23 = iVar5 + 1;
    } while( true );
  }
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


