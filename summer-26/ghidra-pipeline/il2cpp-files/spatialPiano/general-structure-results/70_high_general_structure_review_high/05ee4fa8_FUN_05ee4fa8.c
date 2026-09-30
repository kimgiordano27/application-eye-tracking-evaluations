/*
FUNCTION_NAME: FUN_05ee4fa8
ENTRY_POINT: 05ee4fa8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_7
*/


uint FUN_05ee4fa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_067cc488;
  if ((DAT_06bc4666 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc488);
    FUN_02f08768(Method_System_Xml_XmlLoader_ReadCurrentNode__);
    FUN_02f08768(Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_Read__);
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadAndResolveUnknownXmlData__
                );
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadExtensionDataValue__
                );
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadIXmlSerializable__
                );
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bc4666 = 1;
  }
  lVar5 = *(long *)puVar1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_34 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *(long *)puVar1;
  }
  lVar8 = **(long **)(lVar5 + 0xb8);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar8 == 0) goto LAB_05ee51c8;
    }
    if ((*(long *)(lVar8 + 0x10) == 0) ||
       (lVar5 = FUN_0494c934(*(long *)(lVar8 + 0x10),
                             *(undefined8 *)Method_System_Xml_XmlLoader_ReadCurrentNode__),
       puVar3 = 
       Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadAndResolveUnknownXmlData__
       , puVar2 = Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_Read__,
       puVar1 = PTR_DAT_067c8f20, lVar5 == 0)) {
LAB_05ee51c8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_038f3f9c(&local_78,lVar5,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_ReadIXmlSerializable__
                );
    local_50 = local_68;
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
    do {
      do {
        do {
          uVar4 = FUN_04bc4e80(&local_60,*(undefined8 *)puVar3);
          lVar5 = local_50;
          if ((uVar4 & 1) == 0) goto LAB_05ee518c;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar6 = FUN_060f245c(lVar5,0,0);
        } while ((uVar6 & 1) != 0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar7 = FUN_060ed87c(lVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_060f245c(uVar7,0,0);
      } while ((uVar6 & 1) != 0);
      lVar8 = FUN_060ed87c(lVar5,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_060f1af0(lVar8,0);
      lVar5 = FUN_060ed87c(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      local_34 = FUN_060f1af0(lVar5,0);
      uVar6 = FUN_06106760(&local_34,0);
    } while ((uVar6 & 1) == 0);
LAB_05ee518c:
    FUN_04bc4e7c(&local_60,*(undefined8 *)puVar2);
  }
  return uVar4 & 1;
}


