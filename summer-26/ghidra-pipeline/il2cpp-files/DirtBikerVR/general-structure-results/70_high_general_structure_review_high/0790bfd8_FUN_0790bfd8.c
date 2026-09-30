/*
FUNCTION_NAME: FUN_0790bfd8
ENTRY_POINT: 0790bfd8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_0790bfd8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
  if ((DAT_08987c2d & 1) == 0) {
    FUN_03a8a718(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector4,_FloatField,_float>___TypeInfo
                );
    FUN_03a8a718(System_Xml_Linq_XHashtable<WeakReference>_TypeInfo);
    FUN_03a8a718(System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo);
    FUN_03a8a718(System_Xml_Linq_XHashtable<XName>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo);
    FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo);
    DAT_08987c2d = 1;
  }
  puVar2 = System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar4 = System_Globalization_TaiwanCalendar__GetMonthsInYear(*(long *)(param_1 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar4,uVar4);
    }
    lVar6 = FUN_079099e4(lVar6,uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                         *(undefined8 *)(param_1 + 0x10),param_1[0x12],0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_28 = FUN_058b71ec(lVar6,*(undefined8 *)
                                   Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                           );
    uVar5 = FUN_0587c6c4(&local_28,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_28;
      thunk_FUN_03afed3c(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe1190(param_1 + 2,&local_28,param_1,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector4,_FloatField,_float>___TypeInfo
                  );
      return;
    }
  }
  uVar4 = FUN_0587c704(&local_28,*(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
  puVar3 = System_Xml_Linq_XHashtable<WeakReference>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


