/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 01786fac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint * Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
                 (undefined8 param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  int iStack000000000000002c;
  
  if ((DAT_03778e28 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    DAT_03778e28 = 1;
  }
  uVar10 = (uint)param_4;
  if ((int)param_2 < (int)uVar10) {
    return (uint *)0x0;
  }
  if (uVar10 <= param_2) {
    lVar13 = *(long *)
              Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
    ;
    lVar8 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x132);
    lVar5 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
      uVar2 = *(ushort *)(*(long *)(lVar13 + 0x20) + 0x132);
      lVar5 = *(long *)(lVar13 + 0x20);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_00d5941c(lVar5);
    }
    puVar3 = System_Func<Spectrum_Point,_float>_TypeInfo;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    in_stack_00000010 = (undefined1 *)&stack0x0000002c;
    in_stack_00000008 = param_1;
    iStack000000000000002c = param_2 - uVar10;
    (**(code **)(lVar5 + 0x10))(uVar12,lVar5,0,&stack0x00000008,&stack0x00000018);
    uVar12 = in_stack_00000018;
    if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar4 = FUN_0170a540(uVar12,param_4 & 0xffffffff,param_3,param_4,0);
    return (uint *)(ulong)(iVar4 == 0);
  }
  auVar14 = FUN_01792d54();
  uVar7 = auVar14._8_8_;
  puVar6 = auVar14._0_8_;
  if (uVar7 == 0) {
    return puVar6;
  }
  if (uVar7 - 1 < 0x16) {
    switch(uVar7 - 1 & 0xffffffff) {
    case 0:
      *(undefined1 *)puVar6 = 0;
      return puVar6;
    case 1:
      *(undefined2 *)puVar6 = 0;
      return puVar6;
    case 2:
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((long)puVar6 + 2) = 0;
      return puVar6;
    case 3:
      *puVar6 = 0;
      return puVar6;
    case 4:
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      return puVar6;
    case 5:
      *puVar6 = 0;
      *(undefined2 *)(puVar6 + 1) = 0;
      return puVar6;
    case 6:
      *puVar6 = 0;
      *(undefined2 *)(puVar6 + 1) = 0;
      *(undefined1 *)((long)puVar6 + 6) = 0;
      return puVar6;
    case 8:
      puVar6[0] = 0;
      puVar6[1] = 0;
      *(undefined1 *)(puVar6 + 2) = 0;
      return puVar6;
    case 9:
      puVar6[0] = 0;
      puVar6[1] = 0;
      *(undefined2 *)(puVar6 + 2) = 0;
      return puVar6;
    case 10:
      puVar6[0] = 0;
      puVar6[1] = 0;
      *(undefined2 *)(puVar6 + 2) = 0;
      *(undefined1 *)((long)puVar6 + 10) = 0;
      return puVar6;
    case 0xb:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      return puVar6;
    case 0xc:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
      return puVar6;
    case 0xd:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined2 *)(puVar6 + 3) = 0;
      return puVar6;
    case 0xe:
      *(undefined8 *)((long)puVar6 + 7) = 0;
    case 7:
      puVar6[0] = 0;
      puVar6[1] = 0;
      return puVar6;
    case 0xf:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      return puVar6;
    case 0x10:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)(puVar6 + 4) = 0;
      return puVar6;
    case 0x11:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined2 *)(puVar6 + 4) = 0;
      return puVar6;
    case 0x12:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined4 *)((long)puVar6 + 0xf) = 0;
      return puVar6;
    case 0x13:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      return puVar6;
    case 0x14:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((long)puVar6 + 0xd) = 0;
      return puVar6;
    case 0x15:
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((long)puVar6 + 0xe) = 0;
      return puVar6;
    }
  }
  else if (0x1ff < uVar7) {
    puVar6 = (uint *)thunk_FUN_00da7774(puVar6,uVar7,0);
    return puVar6;
  }
  uVar10 = *puVar6;
  if ((uVar10 & 3) == 0) {
    uVar11 = 0;
  }
  else {
    if ((uVar10 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      *(undefined1 *)puVar6 = 0;
      uVar10 = *puVar6;
      uVar11 = 1;
      if ((uVar10 >> 1 & 1) != 0) goto LAB_01787170;
    }
    *(undefined2 *)((long)puVar6 + uVar11) = 0;
    uVar11 = uVar11 | 2;
  }
LAB_01787170:
  if ((uVar10 - 1 >> 2 & 1) == 0) {
    *(undefined4 *)((long)puVar6 + uVar11) = 0;
    uVar11 = uVar11 | 4;
  }
  uVar1 = uVar11;
  do {
    uVar9 = uVar1;
    uVar1 = uVar9 + 0x10;
    *(undefined8 *)((long)puVar6 + uVar9) = 0;
    ((undefined8 *)((long)puVar6 + uVar9))[1] = 0;
  } while (uVar1 <= uVar7 - 0x10);
  uVar10 = (uint)(uVar7 - uVar11);
  if ((uVar10 >> 3 & 1) != 0) {
    *(undefined8 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar9 + 0x18;
  }
  if ((uVar10 >> 2 & 1) != 0) {
    *(undefined4 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar10 >> 1 & 1) != 0) {
    *(undefined2 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((uVar7 - uVar11 & 1) == 0) {
    return puVar6;
  }
  *(undefined1 *)((long)puVar6 + uVar1) = 0;
  return puVar6;
}


