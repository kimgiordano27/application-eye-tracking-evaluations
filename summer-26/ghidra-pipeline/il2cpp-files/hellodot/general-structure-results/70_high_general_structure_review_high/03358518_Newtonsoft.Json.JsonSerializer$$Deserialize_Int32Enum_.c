/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 03358518
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long * Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(code *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x27;
  ulong uVar9;
  long unaff_x29;
  
  (*param_1)();
  if (unaff_x23 != 0) {
    *(undefined8 *)(unaff_x23 + 0x10) = unaff_x24;
    if ((unaff_x25 != 0) && (unaff_x19 != (long *)0x0)) {
      if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      lVar2 = thunk_FUN_02cea894();
      (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
      if (lVar2 == 0) goto LAB_0335872c;
      (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30))(lVar2);
      lVar8 = *(long *)(unaff_x20 + 0x38);
      if (0 < (int)unaff_x19[3]) {
        uVar9 = 0;
        do {
          if ((*(byte *)(*(long *)(lVar8 + 0x40) + 0x135) & 1) == 0) {
            FUN_02ce0978();
          }
          lVar8 = thunk_FUN_02cea894();
          (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x48))();
          if (lVar8 == 0) goto LAB_0335872c;
          lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x80) + 0x20;
          FUN_02c6e1cc(lVar1,8);
          plVar3 = (long *)thunk_FUN_02cd0998(lVar8,lVar1);
          *plVar3 = unaff_x23;
          if (*(uint *)(unaff_x19 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          memcpy(unaff_x22,(void *)((long)unaff_x19 + uVar9 * *(uint *)(*unaff_x19 + 0x104) + 0x20),
                 unaff_x21);
          FUN_02ce7a58(lVar8,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x80));
          if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
            FUN_02ce0978();
          }
          uVar4 = thunk_FUN_02cea894();
          (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))
                    (uVar4,lVar8,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70))(lVar2,uVar4);
          if ((uVar5 & 1) == 0) {
            __src = (void *)thunk_FUN_02cd0998(lVar8,*(undefined8 *)
                                                      (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40)
                                                      + 0x80));
            memcpy(unaff_x22,__src,unaff_x21);
            puVar7 = unaff_x22;
            if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x50) + 0x28)) {
              puVar7 = (undefined8 *)*unaff_x22;
            }
            puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
            uVar4 = *puVar6;
            *(undefined8 **)(unaff_x29 + -0x10) = puVar7;
            (*(code *)puVar6[2])(uVar4,puVar6,lVar2,unaff_x29 + -0x10);
          }
          lVar8 = *(long *)(unaff_x20 + 0x38);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)unaff_x19[3]);
      }
      unaff_x19 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x80))(lVar2);
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return unaff_x19;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0335872c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


