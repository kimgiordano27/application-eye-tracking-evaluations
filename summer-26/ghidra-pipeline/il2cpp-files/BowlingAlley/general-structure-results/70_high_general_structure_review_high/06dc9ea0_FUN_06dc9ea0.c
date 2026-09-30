/*
FUNCTION_NAME: FUN_06dc9ea0
ENTRY_POINT: 06dc9ea0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_21
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_06dc9ea0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90 [6];
  
  if ((DAT_076ea0f6 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__);
    thunk_FUN_032e1da0(PTR_DAT_0727ff48);
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_JsonSerializer_set_TypeNameHandling__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateDynamic__
                      );
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<Pose>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<JsonProperty>__);
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<JsonSchemaModel>__);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateJObject__
                      );
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<MethodInfo>__);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateJToken__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateValueInternal__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputSystem_FindControl__);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__
                      );
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<Type>__);
    DAT_076ea0f6 = 1;
  }
  puVar5 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateDynamic__;
  puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar12 = thunk_FUN_032a56a0();
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_07282688);
    FUN_05897d14(uVar12,uVar11,0);
    uVar11 = thunk_FUN_032e1da0(
                               Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar12,uVar11);
  }
  if (((*(long *)(param_1 + 0x30) != 0) && (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x18))) ||
     ((*(long *)(param_1 + 0x38) != 0 && (0 < *(int *)(*(long *)(param_1 + 0x38) + 0x18))))) {
    bVar2 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputSystem_FindControl__ + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_UnityEngine_InputSystem_InputSystem_FindControl__)) {
      param_2[0x7d] = param_1;
      thunk_FUN_0333a630(param_2 + 0x7d,param_1);
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
    FUN_0503baa4(lVar7,*(undefined8 *)puVar4);
    puVar6 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__;
    puVar5 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
    ;
    puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__;
    if (*(long *)(param_1 + 0x30) == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    }
    iVar13 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      iVar13 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
    }
    if (iVar13 + iVar17 < 1) {
      if (lVar7 == 0) goto LAB_06dca460;
    }
    else {
      iVar16 = 0;
      do {
        if (iVar16 < iVar17) {
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 == 0) goto LAB_06dca460;
          uVar12 = *(undefined8 *)
                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
          ;
          iVar1 = iVar16;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 == 0) goto LAB_06dca460;
          uVar12 = *(undefined8 *)puVar6;
          iVar1 = -iVar17 + iVar16;
        }
        lVar8 = FUN_041e29a8(lVar8,iVar1,uVar12);
        if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_06dca460;
        uVar9 = FUN_0503df28(lVar7,*(undefined4 *)(lVar8 + 0x20),local_90 + 4,*(undefined8 *)puVar4)
        ;
        if ((uVar9 & 1) == 0) {
          lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateValueInternal__
                                     );
          System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                    (lVar10,*(undefined8 *)
                             Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                    );
          local_90[4] = lVar10;
          FUN_0503c478(lVar7,*(undefined4 *)(lVar8 + 0x20),lVar10,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                      );
        }
        if (local_90[4] == 0) goto LAB_06dca460;
        lVar10 = *(long *)(local_90[4] + 0x10);
        lVar15 = *(long *)puVar5;
        *(int *)(local_90[4] + 0x1c) = *(int *)(local_90[4] + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_06dca460;
        uVar3 = *(uint *)(local_90[4] + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(local_90[4] + 0x18) = uVar3 + 1;
          plVar14 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
          *plVar14 = lVar8;
          thunk_FUN_0333a630(plVar14,lVar8);
        }
        else {
          FUN_041e2c78(local_90[4],lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        iVar16 = iVar16 + 1;
      } while ((-iVar17 - iVar13) + iVar16 != 0);
    }
    FUN_0503df28(lVar7,0,local_90 + 5,*(undefined8 *)puVar4);
    if ((local_90[5] != 0) && (iVar17 = *(int *)(local_90[5] + 0x18), iVar17 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb33bc(iVar17 == 1,0);
      if (local_90[5] != 0) {
        lVar8 = FUN_041e29a8(local_90[5],0,
                             *(undefined8 *)
                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                            );
        if (*(int *)(*(long *)Method_System_Linq_Enumerable_ToList<Type>__ + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)Method_System_Linq_Enumerable_ToList<Type>__);
        }
        FUN_06de2f00(lVar8,param_2);
        FUN_06de2f6c(lVar8,param_2);
        if (local_90[5] != 0) {
          iVar17 = *(int *)(local_90[5] + 0x18);
          *(undefined4 *)(local_90[5] + 0x18) = 0;
          *(int *)(local_90[5] + 0x1c) = *(int *)(local_90[5] + 0x1c) + 1;
          if (0 < iVar17) {
            FUN_05946274(*(undefined8 *)(local_90[5] + 0x10),0,iVar17,0);
          }
          if (lVar8 != 0) {
            FUN_0503df28(lVar7,*(undefined4 *)(lVar8 + 0x18),local_90 + 5,*(undefined8 *)puVar4);
            lVar8 = local_90[5];
            if (local_90[5] == 0) {
              return;
            }
            if (*(int *)(local_90[5] + 0x18) == 0) {
              return;
            }
            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_Newtonsoft_Json_JsonSerializer_set_TypeNameHandling__
                                       );
            FUN_04eb489c(uVar12,0,*(undefined8 *)
                                   Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__
                         ,0);
            System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
                      (lVar8,uVar12,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateJToken__
                      );
            if (local_90[5] != 0) {
              FUN_041e3694(local_90 + 1,local_90[5],
                           *(undefined8 *)Method_System_Linq_Enumerable_ToList<MethodInfo>__);
              puVar6 = Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__;
              puVar5 = Method_System_Linq_Enumerable_ToList<JsonProperty>__;
              puVar4 = PTR_DAT_0727ff48;
              while (uVar9 = FUN_052d44b4(local_90 + 1,*(undefined8 *)puVar5), lVar8 = local_90[3],
                    (uVar9 & 1) != 0) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                FUN_038f55d0(lVar8,*(undefined8 *)puVar6);
                uStack_a8 = 0;
                local_b0 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                FUN_06ccf9a8(&local_b0,param_3,param_4,param_1,param_2,0);
                uStack_c8 = uStack_a8;
                local_d0 = local_b0;
                uStack_b8 = uStack_98;
                uStack_c0 = uStack_a0;
                lVar8 = FUN_06de3124(param_1,lVar8,lVar7,&local_d0);
                if (lVar8 != 0) {
                  *(long *)(lVar8 + 0x3a8) = param_1;
                  thunk_FUN_0333a630(lVar8 + 0x3a8,param_1);
                  local_90[0] = param_2[0x6f];
                  FUN_06db7bd4(local_90,lVar8,0);
                }
              }
              FUN_052d44b0(local_90 + 1,*(undefined8 *)Method_System_Linq_Enumerable_ToList<Pose>__)
              ;
              return;
            }
          }
        }
      }
LAB_06dca460:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  return;
}


