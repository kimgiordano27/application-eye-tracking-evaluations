/*
FUNCTION_NAME: FUN_05dd6244
ENTRY_POINT: 05dd6244
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


void FUN_05dd6244(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  
  if ((DAT_066dbe0f & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteStartObjectHandleExceptions__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_CheckIfTypeSerializable__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_GetDataContractsForKnownTypes__
                );
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlObjectSerializerContext_IncrementItemCount__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_CheckEndOfArray__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetExistingObject__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetExistingObjectOrExtensionData__
                );
    DAT_066dbe0f = 1;
  }
  plVar9 = (long *)(param_1 + 0x18);
  lVar5 = *plVar9;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetExistingObjectOrExtensionData__
                              );
    FUN_0383bd38(lVar5,*(undefined8 *)
                        Method_System_Runtime_Serialization_XmlObjectSerializerContext_GetDataContractsForKnownTypes__
                );
    *plVar9 = lVar5;
    thunk_FUN_02bb0e9c(plVar9,lVar5);
    lVar5 = *plVar9;
    if (lVar5 == 0) goto LAB_05dd634c;
  }
  puVar3 = Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_CheckEndOfArray__;
  puVar2 = 
  Method_System_Runtime_Serialization_XmlObjectSerializer_WriteStartObjectHandleExceptions__;
  iVar10 = 0;
  do {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 <= iVar10) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x28);
          *puVar6 = param_3;
          *(ulong *)(lVar7 + 0x20) = param_2;
          thunk_FUN_02bb0e9c(puVar6,0);
          return;
        }
        FUN_0383c5f0(lVar5,param_2,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        return;
      }
      break;
    }
    iVar4 = FUN_0383c2d0(lVar5,iVar10,*(undefined8 *)puVar3);
    if (iVar4 == (int)param_2) {
      lVar5 = *plVar9;
      if (param_2 >> 0x20 == 1) {
        if (lVar5 != 0) {
          FUN_0383ddb4(lVar5,iVar10,
                       *(undefined8 *)
                        Method_System_Runtime_Serialization_XmlObjectSerializerContext_CheckIfTypeSerializable__
                      );
          return;
        }
      }
      else if (lVar5 != 0) {
        FUN_0383c324(lVar5,iVar10,param_2,param_3,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializerReadContext_GetExistingObject__
                    );
        return;
      }
      break;
    }
    lVar5 = *plVar9;
    iVar10 = iVar10 + 1;
  } while (lVar5 != 0);
LAB_05dd634c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


