/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToCollider
ENTRY_POINT: 0185413c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


undefined8
Oculus_Interaction_Collisions__ClosestPointToCollider(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x22;
  long *unaff_x24;
  
  sVar2 = FUN_015fa29c(param_1,param_2,0);
  puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  if (sVar2 == 0x2f) {
    if (((*(int *)(unaff_x22 + 0x10) < 9) || (uVar4 = FUN_015fe8b0(), (uVar4 & 1) == 0)) ||
       (uVar4 = FUN_015fdeb8(), (uVar4 & 1) == 0)) goto LAB_01854300;
    FUN_015ff7b4();
    FUN_01864fb0();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01853e78(0,0);
    if ((uVar4 & 1) == 0) goto LAB_01854300;
LAB_01854338:
    uVar5 = 1;
  }
  else {
    if (*(int *)(unaff_x22 + 0x10) - 0x13U < 0x16) {
      uVar3 = FUN_015fa29c();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar4 = FUN_016f25d8(uVar3,0);
      if (((uVar4 & 1) != 0) && (sVar2 = FUN_015fa29c(), puVar1 = StringLiteral_8955, sVar2 == 0x54)
         ) {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        FUN_01731954(0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar4 = FUN_0175544c();
        if ((uVar4 & 1) != 0) {
          FUN_015ff7b4();
          FUN_01864fb0();
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar4 = FUN_018532bc(0,0);
          if ((uVar4 & 1) != 0) goto LAB_01854338;
        }
      }
    }
LAB_01854300:
    uVar4 = FUN_018651cc();
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_01853fe0();
      if ((uVar4 & 1) != 0) goto LAB_01854338;
    }
    uVar5 = 0;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return uVar5;
}


