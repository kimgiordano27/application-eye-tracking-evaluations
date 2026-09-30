/*
FUNCTION_NAME: FUN_05fab880
ENTRY_POINT: 05fab880
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


long FUN_05fab880(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_07283280;
  if ((DAT_076dccfe & 1) == 0) {
    thunk_FUN_032e1da0(System_IO_BinaryWriter_var);
    thunk_FUN_032e1da0(System_Collections_BitArray_var);
    thunk_FUN_032e1da0(UnityEngine_BoneWeight_var);
    thunk_FUN_032e1da0(UnityEngine_Rendering_BoolParameter_var);
    thunk_FUN_032e1da0(bool_var);
    thunk_FUN_032e1da0(System_ComponentModel_BooleanConverter_var);
    thunk_FUN_032e1da0(UnityEngine_BoxCollider_var);
    thunk_FUN_032e1da0(System_ComponentModel_BrowsableAttribute_var);
    thunk_FUN_032e1da0(Newtonsoft_Json_Bson_BsonObjectId_var);
    thunk_FUN_032e1da0(PTR_DAT_07283278);
    thunk_FUN_032e1da0(PTR_DAT_07283280);
    DAT_076dccfe = 1;
  }
  puVar1 = PTR_DAT_07283278;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05fe3e74(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar3 = FUN_05fe3d80(uVar4,0);
  puVar2 = System_Collections_BitArray_var;
  switch(uVar3) {
  case 7:
    if (**(long **)(*(long *)System_Collections_BitArray_var + 0xb8) != 0) {
      return **(long **)(*(long *)System_Collections_BitArray_var + 0xb8);
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_BoneWeight_var);
    FUN_059660a0(lVar7,0);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
    plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    break;
  case 8:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x18);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_BoxCollider_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
    break;
  case 9:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 8);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_Rendering_BoolParameter_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    break;
  case 10:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x20);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_ComponentModel_BrowsableAttribute_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar7;
    break;
  case 0xb:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x10);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)bool_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    break;
  case 0xc:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x28);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar5 = lVar7;
    break;
  case 0xd:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x30);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_ComponentModel_BooleanConverter_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar7;
    break;
  case 0xe:
    lVar7 = *(long *)(*(long *)(*(long *)System_Collections_BitArray_var + 0xb8) + 0x38);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_IO_BinaryWriter_var);
    FUN_059660a0(lVar7,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar5 = lVar7;
    break;
  default:
    uVar4 = FUN_05fe24fc(0);
    uVar6 = thunk_FUN_032e1da0(Unity_Burst_BurstCompiler_var);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar6);
  }
  thunk_FUN_0333a630(plVar5,lVar7);
  return lVar7;
}


