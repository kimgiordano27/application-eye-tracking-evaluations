/*
FUNCTION_NAME: FUN_05756e8c
ENTRY_POINT: 05756e8c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05757390) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_05756e8c(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  uint local_74;
  undefined8 local_68;
  
  if ((DAT_06a54f51 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066592c0);
    FUN_02d4dc40(PTR_DAT_066592c8);
    FUN_02d4dc40(PTR_DAT_066592d0);
    FUN_02d4dc40(PTR_DAT_0664a358);
    FUN_02d4dc40(System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    FUN_02d4dc40(PTR_DAT_0664a6c0);
    FUN_02d4dc40(
                Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    DAT_06a54f51 = 1;
  }
  local_68 = 0;
  FUN_05758278(param_1);
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
  ;
  if (param_2 != (long *)0x0) {
    lVar14 = *param_2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
           ) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05756fb8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02d87540(param_2,*(long *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
                          ,0);
LAB_05756fb8:
    iVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
    ;
    puVar3 = System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (iVar6 != 0) {
      lVar14 = *param_2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05757024;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar2,0);
LAB_05757024:
      iVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
      lVar14 = FUN_02d4dd2c(*(undefined8 *)puVar3,iVar6);
      lVar9 = FUN_02d4dd2c(*(undefined8 *)puVar4,iVar6);
      puVar5 = 
      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
      ;
      puVar4 = 
      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
      ;
      puVar3 = PTR_DAT_0664a6c0;
      puVar2 = PTR_DAT_0664a358;
      if (lVar9 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(int *)(lVar9 + 0x18) != 0) {
          lVar17 = lVar9 + 0x20;
        }
      }
      if (0 < iVar6) {
        uVar18 = 0;
        do {
          lVar9 = *param_2;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0575710c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar4,0);
LAB_0575710c:
          auVar19 = (*(code *)*puVar8)(param_2,uVar18,puVar8[1]);
          lVar9 = auVar19._0_8_;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (auVar19._8_4_ < 0) {
LAB_057572e8:
            thunk_FUN_02db45e8(PTR_DAT_0664a258);
            uVar10 = thunk_FUN_02d8a638();
            uVar13 = thunk_FUN_02db45e8(
                                       Method_System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>__ctor__
                                       );
            FUN_04f7038c(uVar10,uVar13,0);
            uVar13 = thunk_FUN_02db45e8(
                                       Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar10,uVar13);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if ((long)auVar19._8_8_ < 0) goto LAB_057572e8;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar9 + 0x18) - auVar19._8_4_ < auVar19._12_4_) goto LAB_057572e8;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar10 = FUN_04f2c970(lVar9,3,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          *(undefined8 *)(lVar14 + (ulong)uVar18 * 8 + 0x20) = uVar10;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          piVar16 = (int *)(lVar17 + (ulong)uVar18 * 0x10);
          if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar11 = *(long *)puVar3;
          *piVar16 = auVar19._12_4_;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar10 = FUN_03299f30(lVar9,auVar19._8_8_ & 0xffffffff,*(undefined8 *)puVar5);
          uVar18 = uVar18 + 1;
          *(undefined8 *)(piVar16 + 2) = uVar10;
        } while ((int)uVar18 < iVar6);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      cVar1 = *(char *)(param_1 + 0x50);
      if (*(int *)(*(long *)
                    Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                  + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_0575b4ac(uVar10,lVar17,iVar6,param_3,&local_68,cVar1 != '\0');
      local_74 = 0;
      if (0 < iVar6) {
        do {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(uint *)(lVar14 + 0x18) <= local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          plVar12 = (long *)(lVar14 + (long)(int)local_74 * 8 + 0x20);
          if (*plVar12 != 0) {
            FUN_04f2c984(plVar12,0);
          }
          local_74 = local_74 + 1;
        } while ((int)local_74 < iVar6);
      }
      *param_4 = (int)local_68;
      return uVar7;
    }
  }
  thunk_FUN_02db45e8(PTR_DAT_0664a210);
  uVar10 = thunk_FUN_02d8a638();
  uVar13 = thunk_FUN_02db45e8(
                             Method_System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>__ctor__
                             );
  FUN_04f681bc(uVar10,uVar13,0);
  uVar13 = thunk_FUN_02db45e8(
                             Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar10,uVar13);
}


