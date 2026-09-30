/*
FUNCTION_NAME: FullSerializer.Internal.DirectConverters.Rect_DirectConverter$$.ctor
ENTRY_POINT: 00e479d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


long FullSerializer_Internal_DirectConverters_Rect_DirectConverter___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long lVar4;
  long unaff_x24;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *unaff_x27;
  long *unaff_x29;
  long in_stack_00000010;
  long in_stack_00000020;
  undefined2 uStack0000000000000030;
  int iStack0000000000000034;
  long in_stack_00000038;
  
  do {
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
    FUN_01324d60(in_stack_00000038,
                 *(undefined8 *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
    iVar5 = 0;
    while (iVar5 < *(int *)(in_stack_00000038 + 0x18)) {
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
      iVar6 = 0;
      while( true ) {
        FUN_0132138c(in_stack_00000038,iVar5,&stack0x00000038,*unaff_x27);
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        if (*(int *)(in_stack_00000038 + 0x18) <= iVar6) break;
        FUN_0132138c();
        if ((in_stack_00000038 == 0) ||
           (FUN_0132138c(in_stack_00000038,iVar5,&stack0x00000038,*unaff_x27),
           in_stack_00000038 == 0)) goto LAB_00e47e24;
        FUN_0132138c(in_stack_00000038,iVar6,&stack0x00000038,*(undefined8 *)StringLiteral_4992);
        FUN_00ac1918();
        iVar6 = iVar6 + 1;
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
      }
      iVar5 = iVar5 + 1;
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
    }
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w23 < *(int *)(unaff_x24 + 0x18));
  if (*(long *)(in_stack_00000010 + 0x48) != 0) {
    iVar5 = *(int *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
    if (iVar5 == *(int *)(unaff_x22 + 0x18)) {
      *(long *)(in_stack_00000010 + 0x48) = unaff_x22;
    }
    else {
      iStack0000000000000034 = iVar5;
      uVar2 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      iStack0000000000000034 = *(undefined4 *)(unaff_x22 + 0x18);
      uVar3 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      uVar2 = FUN_0160073c(*(undefined8 *)
                            Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                           ,uVar2,*(undefined8 *)PTR_DAT_033f7228,uVar3,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar2,0);
    }
    puVar1 = StringLiteral_1115;
    lVar4 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar5 = 0;
      do {
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        FUN_01324d60(in_stack_00000038,*(undefined8 *)puVar1);
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        iVar6 = 0;
        while (iVar6 < *(int *)(in_stack_00000038 + 0x18)) {
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          iVar7 = 0;
          while( true ) {
            FUN_0132138c(in_stack_00000038,iVar6,&stack0x00000038,*unaff_x20);
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            if (*(int *)(in_stack_00000038 + 0x10) <= iVar7) break;
            FUN_0132138c();
            if ((in_stack_00000038 == 0) ||
               (FUN_0132138c(in_stack_00000038,iVar6,&stack0x00000038,*unaff_x20),
               in_stack_00000038 == 0)) goto LAB_00e47e24;
            uStack0000000000000030 = FUN_015fa29c(in_stack_00000038,iVar7,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x29);
            }
            uVar2 = FUN_016e8b00(&stack0x00000030,0);
            lVar4 = FUN_015f5b28(lVar4,uVar2,0);
            iVar7 = iVar7 + 1;
            FUN_0132138c();
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
          }
          iVar6 = iVar6 + 1;
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_x21 + 0x18));
    }
    if (lVar4 != 0) {
      if (*(int *)(in_stack_00000020 + 0x10) != *(int *)(lVar4 + 0x10)) {
        if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
        iStack0000000000000034 = *(undefined4 *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
        uVar2 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        iStack0000000000000034 = *(undefined4 *)(unaff_x22 + 0x18);
        uVar3 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        uVar2 = FUN_0160073c(*(undefined8 *)
                              Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                             ,uVar2,*(undefined8 *)PTR_DAT_033f7228,uVar3,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar2,0);
        lVar4 = in_stack_00000020;
      }
      return lVar4;
    }
  }
LAB_00e47e24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


