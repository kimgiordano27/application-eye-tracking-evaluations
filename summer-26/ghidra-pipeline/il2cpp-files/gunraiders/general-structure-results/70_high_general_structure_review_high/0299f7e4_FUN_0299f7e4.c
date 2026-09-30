/*
FUNCTION_NAME: FUN_0299f7e4
ENTRY_POINT: 0299f7e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_0299f7e4(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_045310dd & 1) == 0) {
    FUN_01c5d288(UnityEngine_Physics2D_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo);
    DAT_045310dd = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = (long *)FUN_02d4fd88(*(long *)(param_1 + 0x28),param_2,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128)),
     plVar2 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    puVar1 = System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
    if (lVar3 != 0) {
      plVar4 = (long *)FUN_03f0d9bc(lVar3,0);
      uVar5 = FUN_030d67d4(1,*(undefined8 *)puVar1);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo)
            {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
              goto LAB_0299f8e8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar4,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x12);
LAB_0299f8e8:
        (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
        if (*(long *)(param_1 + 0x78) != 0) {
          FUN_02b941a8(*(long *)(param_1 + 0x78),(int)plVar2[4],
                       *(undefined8 *)UnityEngine_Physics2D_TypeInfo);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


