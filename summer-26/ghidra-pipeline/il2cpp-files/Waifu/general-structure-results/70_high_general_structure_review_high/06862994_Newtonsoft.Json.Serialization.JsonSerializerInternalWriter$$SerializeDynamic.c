/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 06862994
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8(param_1 + 0xc20,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083bd6d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xe76) = unaff_w22;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar5 & 1) != 0) {
    return false;
  }
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar3 = FUN_0684a83c();
  uVar4 = FUN_0684a83c();
  if ((uVar3 == uVar4) && (uVar5 = (**(code **)(*unaff_x20 + 0x608))(), (uVar5 & 1) != 0)) {
    return true;
  }
  uVar1 = DAT_083bcce0;
  switch(uVar4) {
  case 4:
    if (uVar3 == 6) {
      return true;
    }
    return uVar3 == 8;
  default:
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar6 = (long *)FUN_0683eca4(uVar1,0);
    uVar1 = DAT_083bd6d8;
    if (plVar6 != unaff_x19) {
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar6 = (long *)FUN_0683eca4(uVar1,0);
      if (plVar6 != unaff_x19) {
        return false;
      }
    }
    if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
      FUN_033b9870();
    }
    return unaff_x20 == unaff_x19;
  case 7:
    bVar2 = 1 < uVar3 - 5;
    break;
  case 8:
    return (uVar3 & 0xfffffffd) == 4;
  case 9:
    bVar2 = 4 < uVar3 - 4;
    break;
  case 10:
    if (4 < uVar3 - 4) {
      return false;
    }
    goto LAB_06862b44;
  case 0xb:
    bVar2 = 6 < uVar3 - 4;
    break;
  case 0xc:
    if (6 < uVar3 - 4) {
      return false;
    }
LAB_06862b44:
    return (uVar3 & 1) == 0;
  case 0xd:
    bVar2 = 8 < uVar3 - 4;
    break;
  case 0xe:
    bVar2 = 9 < uVar3 - 4;
  }
  return !bVar2;
}


