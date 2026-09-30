/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 04d0a0f8
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling(void)

{
  byte in_ZR;
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
LAB_04d0a0fc:
  do {
    iVar4 = unaff_w22;
    if (unaff_w22 < *(int *)(unaff_x20 + 0x10)) {
      do {
        while (uVar3 = FUN_04cce264(unaff_x20,iVar4,(long)&stack0x00000000 + 4,0), 4 < uVar3) {
          sVar1 = FUN_04c045f0(unaff_x20,iVar4,0);
          if (sVar1 == 0x27) {
            if (((in_ZR & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
              unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
              unaff_x21 = unaff_x20;
            }
            if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
            FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w22,(iVar4 + 1) - unaff_w22,0);
            in_ZR = 1;
            unaff_x20 = in_stack_00000018;
            unaff_w22 = iVar4 + 1;
            if (in_stack_00000018 != 0) goto LAB_04d0a0fc;
            goto LAB_04d0a2dc;
          }
          if (((unaff_w26 << (ulong)(uVar3 & 0x1f) & unaff_w27) != 0) ||
             (iVar4 = in_stack_00000000._4_4_ + iVar4, *(int *)(unaff_x20 + 0x10) <= iVar4))
          goto LAB_04d0a20c;
        }
        iVar4 = in_stack_00000000._4_4_ + iVar4;
        in_ZR = uVar3 == 1 | in_ZR;
      } while (iVar4 < *(int *)(unaff_x20 + 0x10));
    }
LAB_04d0a20c:
    if (0 < iVar4 - unaff_w22) {
      if (((in_ZR & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) {
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w22,iVar4 - unaff_w22,0);
    }
    unaff_x20 = in_stack_00000018;
    if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
    if (*(int *)(in_stack_00000018 + 0x10) <= iVar4) goto LAB_04d0a290;
    do {
      iVar4 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,iVar4,in_stack_00000000._4_4_);
LAB_04d0a290:
      iVar4 = iVar4 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= iVar4) {
        if (in_stack_00000008 != (long *)0x0) {
          uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
          return uVar6;
        }
        goto LAB_04d0a2dc;
      }
      iVar2 = FUN_04cce264(unaff_x20,iVar4,(long)&stack0x00000000 + 4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
      }
      uVar5 = FUN_04cfa424(iVar2,0);
    } while ((uVar5 & 1) == 0);
    iVar4 = FUN_04d0a328();
    in_ZR = iVar2 == 1;
    unaff_w22 = iVar4 + 1;
  } while( true );
}


