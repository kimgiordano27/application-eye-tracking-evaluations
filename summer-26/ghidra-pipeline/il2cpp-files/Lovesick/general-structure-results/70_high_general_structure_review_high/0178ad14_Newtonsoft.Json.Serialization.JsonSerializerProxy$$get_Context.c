/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 0178ad14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x21;
  long lVar6;
  uint unaff_w22;
  ulong uVar7;
  ulong unaff_x23;
  uint uVar8;
  long unaff_x24;
  
  while (in_NG != in_OV) {
    if (in_w8 <= unaff_x23) goto LAB_0178adf4;
    uVar7 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),*(undefined8 *)(unaff_x24 + unaff_x23 * 8))
    ;
    if ((uVar7 & 1) == 0) {
      if (*(uint *)(unaff_x19 + 3) <= unaff_x23) goto LAB_0178adf4;
      *(undefined8 *)(unaff_x24 + unaff_x23 * 8) = 0;
    }
    else {
      unaff_w22 = unaff_w22 + 1;
    }
    in_w8 = *(uint *)(unaff_x19 + 3);
    unaff_x23 = unaff_x23 + 1;
    in_OV = SBORROW8(unaff_x23,(long)(int)in_w8);
    in_NG = (long)(unaff_x23 - (long)(int)in_w8) < 0;
  }
  plVar2 = unaff_x19;
  if (unaff_w22 != in_w8) {
    plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                  unaff_w22);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (0 < (int)unaff_x19[3]) {
      uVar7 = 0;
      uVar8 = 0;
      uVar5 = unaff_x19[3] & 0xffffffff;
      do {
        if (uVar5 <= uVar7) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar6 = unaff_x19[uVar7 + 4];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar6 != 0) {
          if (*(uint *)(unaff_x19 + 3) <= uVar7) goto LAB_0178adf4;
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = unaff_x19[uVar7 + 4];
          if ((lVar6 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
            uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar4,0);
          }
          if (*(uint *)(plVar2 + 3) <= uVar8) goto LAB_0178adf4;
          lVar3 = (long)(int)uVar8;
          uVar8 = uVar8 + 1;
          plVar2[lVar3 + 4] = lVar6;
        }
        uVar5 = (ulong)*(uint *)(unaff_x19 + 3);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x19 + 3));
    }
  }
  return plVar2;
}


