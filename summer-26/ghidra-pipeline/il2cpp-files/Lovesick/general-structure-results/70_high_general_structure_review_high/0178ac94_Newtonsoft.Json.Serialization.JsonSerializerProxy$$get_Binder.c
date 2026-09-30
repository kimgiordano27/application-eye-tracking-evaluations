/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Binder
ENTRY_POINT: 0178ac94
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


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Binder(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x21;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x8a8))();
  if (plVar2 == (long *)0x0) {
LAB_0178adf8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar8 = 0;
  uVar6 = plVar2[3] & 0xffffffff;
  if (0 < (int)plVar2[3]) {
    uVar9 = 0;
    do {
      if (uVar6 <= uVar9) goto LAB_0178adf4;
      uVar6 = (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40),plVar2[uVar9 + 4]);
      if ((uVar6 & 1) == 0) {
        if (*(uint *)(plVar2 + 3) <= uVar9) goto LAB_0178adf4;
        plVar2[uVar9 + 4] = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      uVar6 = (ulong)*(uint *)(plVar2 + 3);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(plVar2 + 3));
  }
  plVar3 = plVar2;
  if (iVar8 != (int)uVar6) {
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                  iVar8);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (0 < (int)plVar2[3]) {
      uVar6 = 0;
      uVar10 = 0;
      uVar9 = plVar2[3] & 0xffffffff;
      do {
        if (uVar9 <= uVar6) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar7 = plVar2[uVar6 + 4];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar7 != 0) {
          if (*(uint *)(plVar2 + 3) <= uVar6) goto LAB_0178adf4;
          if (plVar3 == (long *)0x0) goto LAB_0178adf8;
          lVar7 = plVar2[uVar6 + 4];
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar10) goto LAB_0178adf4;
          lVar4 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          plVar3[lVar4 + 4] = lVar7;
        }
        uVar9 = (ulong)*(uint *)(plVar2 + 3);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(plVar2 + 3));
    }
  }
  return plVar3;
}


