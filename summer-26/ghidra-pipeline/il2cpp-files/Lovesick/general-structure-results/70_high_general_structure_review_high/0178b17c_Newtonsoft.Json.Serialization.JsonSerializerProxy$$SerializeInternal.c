/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 0178b17c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778e5c & 1) == 0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778e5c = 1;
  }
  do {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (param_1 == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
    if ((lVar4 != 0) && (uVar2 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar2)) {
      lVar7 = 0;
      lVar1 = lVar4 + 0x20;
      do {
        uVar6 = (uint)lVar7;
        if (uVar2 <= uVar6) {
LAB_0178b2b4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar8 = *(long *)(lVar1 + lVar7 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar8 == param_2) {
          return 1;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0178b2b4;
        lVar8 = *(long *)(lVar1 + lVar7 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar8 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0178b2b4;
          lVar8 = *(long *)(lVar1 + lVar7 * 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar5 = FUN_0178b174(lVar8,param_2);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar2);
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
  } while( true );
}


