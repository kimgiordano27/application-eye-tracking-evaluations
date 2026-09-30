/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Binder
ENTRY_POINT: 0178acb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Binder(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_w8;
  long *unaff_x19;
  long unaff_x21;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = 0;
  if (0 < (int)in_w8) {
    uVar8 = 0;
    do {
      if (in_w8 <= uVar8) goto LAB_0178adf4;
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),unaff_x19[uVar8 + 4]);
      if ((uVar2 & 1) == 0) {
        if (*(uint *)(unaff_x19 + 3) <= uVar8) goto LAB_0178adf4;
        unaff_x19[uVar8 + 4] = 0;
      }
      else {
        uVar7 = uVar7 + 1;
      }
      in_w8 = *(uint *)(unaff_x19 + 3);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)in_w8);
  }
  plVar3 = unaff_x19;
  if (uVar7 != in_w8) {
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                  uVar7);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (0 < (int)unaff_x19[3]) {
      uVar8 = 0;
      uVar7 = 0;
      uVar2 = unaff_x19[3] & 0xffffffff;
      do {
        if (uVar2 <= uVar8) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar6 = unaff_x19[uVar8 + 4];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar6 != 0) {
          if (*(uint *)(unaff_x19 + 3) <= uVar8) goto LAB_0178adf4;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = unaff_x19[uVar8 + 4];
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_0178adf4;
          lVar4 = (long)(int)uVar7;
          uVar7 = uVar7 + 1;
          plVar3[lVar4 + 4] = lVar6;
        }
        uVar2 = (ulong)*(uint *)(unaff_x19 + 3);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(unaff_x19 + 3));
    }
  }
  return plVar3;
}


