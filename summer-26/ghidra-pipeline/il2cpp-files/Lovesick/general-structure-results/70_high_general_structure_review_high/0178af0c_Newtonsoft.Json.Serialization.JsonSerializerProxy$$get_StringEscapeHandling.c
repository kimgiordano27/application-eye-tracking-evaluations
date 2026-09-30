/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_StringEscapeHandling
ENTRY_POINT: 0178af0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_StringEscapeHandling
          (long *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778e5b & 1) == 0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778e5b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (param_2 == (long *)0x0) {
Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor:
    uVar7 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (param_1 != param_2) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
      if (plVar3 == (long *)0x0) goto LAB_0178b0a8;
      uVar4 = FUN_0178a838();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0178afc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x2d0));
        return uVar7;
      }
      uVar4 = (**(code **)(*param_2 + 0x2b8))(param_2,param_1,*(undefined8 *)(*param_2 + 0x2c0));
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0178b0b0(param_1);
        if ((uVar4 & 1) != 0) {
          uVar7 = FUN_0178b174(param_2,param_1);
          return uVar7;
        }
        uVar4 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
        if ((uVar4 & 1) == 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor;
        lVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
        if (lVar5 == 0) {
LAB_0178b0a8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar8 = 0;
          lVar6 = lVar5;
          while( true ) {
            if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194(lVar6);
            }
            plVar3 = *(long **)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar3 == (long *)0x0) break;
            uVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x2d0));
            if ((uVar4 & 1) == 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor;
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar8 = uVar8 + 1;
            lVar6 = 1;
            if ((int)uVar1 <= (int)uVar8) {
              return 1;
            }
          }
          goto LAB_0178b0a8;
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


