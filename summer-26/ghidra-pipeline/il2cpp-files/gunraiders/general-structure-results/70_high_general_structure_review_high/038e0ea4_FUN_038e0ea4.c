/*
FUNCTION_NAME: FUN_038e0ea4
ENTRY_POINT: 038e0ea4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_038e0ea4(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  if ((DAT_04539731 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__);
    DAT_04539731 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  thunk_FUN_01c21c38();
  lVar3 = *(long *)puVar2;
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar4 = (long *)FUN_038e0bf8(0x20);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__ +
                         0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__)) {
          lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x268);
          plVar4[0xd] = lVar3;
          uVar5 = thunk_FUN_01c496e0(*(undefined8 *)Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__)
          ;
          FUN_037cbf18(uVar5,lVar3,0);
          FUN_038043bc(plVar4,uVar5,0);
          lVar3 = FUN_038043a4(plVar4,0);
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x28) = plVar4;
            thunk_FUN_01c21c38();
            lVar3 = *(long *)puVar2;
            *(long **)(*(long *)(lVar3 + 0xb8) + 0x40) = plVar4;
            goto LAB_038e0fe0;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_038e0fe0:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar2;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x40);
  thunk_FUN_01c21c38();
  return uVar5;
}


