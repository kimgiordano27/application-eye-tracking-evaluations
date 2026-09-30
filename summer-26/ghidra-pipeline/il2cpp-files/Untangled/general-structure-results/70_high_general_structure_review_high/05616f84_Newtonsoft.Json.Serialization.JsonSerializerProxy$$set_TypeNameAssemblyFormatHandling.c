/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 05616f84
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint * Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling
                 (ulong param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint unaff_w19;
  long unaff_x23;
  undefined1 auVar8 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d480b8);
    FUN_02f07e70(PTR_DAT_06d18920);
    FUN_02f07e70(PTR_DAT_06d18930);
    *(undefined1 *)(unaff_x23 + 0xd4d) = 1;
  }
  if ((int)param_3 < (int)unaff_w19) {
    return (uint *)0x0;
  }
  if (unaff_w19 <= param_3) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_06d18920 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    if (*(int *)(*(long *)PTR_DAT_06d480b8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar2 = FUN_055963f0(param_2 + ((long)((ulong)(param_3 - unaff_w19) << 0x20) >> 0x1f),unaff_w19)
    ;
    return (uint *)(ulong)(iVar2 == 0);
  }
  auVar8 = FUN_0562295c();
  uVar4 = auVar8._8_8_;
  puVar3 = auVar8._0_8_;
  if (uVar4 == 0) {
    return puVar3;
  }
  if (uVar4 - 1 < 0x16) {
    switch(uVar4 - 1 & 0xffffffff) {
    case 0:
      *(undefined1 *)puVar3 = 0;
      return puVar3;
    case 1:
      *(undefined2 *)puVar3 = 0;
      return puVar3;
    case 2:
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((long)puVar3 + 2) = 0;
      return puVar3;
    case 3:
      *puVar3 = 0;
      return puVar3;
    case 4:
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      return puVar3;
    case 5:
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      return puVar3;
    case 6:
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined1 *)((long)puVar3 + 6) = 0;
      return puVar3;
    case 7:
      break;
    case 8:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      return puVar3;
    case 9:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined2 *)(puVar3 + 2) = 0;
      return puVar3;
    case 10:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined2 *)(puVar3 + 2) = 0;
      *(undefined1 *)((long)puVar3 + 10) = 0;
      return puVar3;
    case 0xb:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      return puVar3;
    case 0xc:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
      return puVar3;
    case 0xd:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      return puVar3;
    case 0xe:
      *(undefined8 *)((long)puVar3 + 7) = 0;
      break;
    case 0xf:
      puVar3[2] = 0;
      puVar3[3] = 0;
      break;
    case 0x10:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      return puVar3;
    case 0x11:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined2 *)(puVar3 + 4) = 0;
      return puVar3;
    case 0x12:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)((long)puVar3 + 0xf) = 0;
      return puVar3;
    case 0x13:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      return puVar3;
    case 0x14:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((long)puVar3 + 0xd) = 0;
      return puVar3;
    case 0x15:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((long)puVar3 + 0xe) = 0;
      return puVar3;
    default:
      goto switchD_0561709c_default;
    }
    puVar3[0] = 0;
    puVar3[1] = 0;
    return puVar3;
  }
  if (0x1ff < uVar4) {
    puVar3 = (uint *)thunk_FUN_02f2b66c(puVar3,uVar4,0);
    return puVar3;
  }
switchD_0561709c_default:
  uVar6 = *puVar3;
  if ((uVar6 & 3) == 0) {
    uVar7 = 0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      *(undefined1 *)puVar3 = 0;
      uVar6 = *puVar3;
      uVar7 = 1;
      if ((uVar6 >> 1 & 1) != 0) goto LAB_056170d0;
    }
    *(undefined2 *)((long)puVar3 + uVar7) = 0;
    uVar7 = uVar7 | 2;
  }
LAB_056170d0:
  if ((uVar6 - 1 >> 2 & 1) == 0) {
    *(undefined4 *)((long)puVar3 + uVar7) = 0;
    uVar7 = uVar7 | 4;
  }
  uVar1 = uVar7;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 + 0x10;
    *(undefined8 *)((long)puVar3 + uVar5) = 0;
    ((undefined8 *)((long)puVar3 + uVar5))[1] = 0;
  } while (uVar1 <= uVar4 - 0x10);
  uVar6 = (uint)(uVar4 - uVar7);
  if ((uVar6 >> 3 & 1) != 0) {
    *(undefined8 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar5 + 0x18;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    *(undefined4 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    *(undefined2 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((uVar4 - uVar7 & 1) == 0) {
    return puVar3;
  }
  *(undefined1 *)((long)puVar3 + uVar1) = 0;
  return puVar3;
}


