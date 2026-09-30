/*
FUNCTION_NAME: FUN_063e5d5c
ENTRY_POINT: 063e5d5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void FUN_063e5d5c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 *puStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 *puStack_38;
  long local_30;
  
  puVar2 = PTR_DAT_06a0ed18;
  if ((DAT_06dcc54d & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectContentHandleExceptions__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectHandleExceptions__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteStartObjectHandleExceptions__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_CheckIfTypeSerializable__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_GetDataContractsForKnownTypes__
                );
    FUN_02d965b8(Method_System_Runtime_Serialization_XmlObjectSerializerContext_IncrementItemCount__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_CheckEndOfArray__
                );
    FUN_02d965b8(PTR_DAT_06a0ed18);
    DAT_06dcc54d = 1;
  }
  lVar5 = *(long *)puVar2;
  local_40 = 0;
  puStack_38 = (undefined8 *)0x0;
  local_30 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectHandleExceptions__;
  puVar3 = 
  Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectContentHandleExceptions__;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    FUN_04010c90(&local_58,lVar5,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_CheckEndOfArray__
                );
    local_30 = local_48;
    puStack_38 = puStack_50;
    local_40 = local_58;
    local_58 = 0;
    puStack_50 = &local_40;
    while (uVar6 = FUN_05156804(&local_40,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined8 *)(local_30 + 0x10) = 0;
    }
    FUN_05156800(&local_40,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        lVar5 = *(long *)(lVar5 + 0x20);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0550afb4(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


