/*
FUNCTION_NAME: FUN_038879e0
ENTRY_POINT: 038879e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_038879e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long local_68;
  
                    /* try { // try from 038879f0 to 039879ff has its CatchHandler @ 03887c00 */
  if ((DAT_04539482 & 1) == 0) {
                    /* try { // try from 03887a0c to 03987a17 has its CatchHandler @ 03887bfc */
    FUN_01c5d288(
                Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
                );
    FUN_01c5d288(Method_Newtonsoft_Json_JsonReader_ReaderReadAndAssert__);
    FUN_01c5d288(Method_UnityEngine_Object_Instantiate<Anchor>__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JContainer_System_ComponentModel_IBindingList_Find__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__
                );
    FUN_01c5d288(PTR_DAT_042324e8);
    FUN_01c5d288(Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01c5d288(
                Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
                );
    FUN_01c5d288(InventoryManager_InventoryType_TypeInfo);
    FUN_01c5d288(Method_System_Collections_Generic_List<PuppetMaster>__ctor__);
    DAT_04539482 = 1;
  }
  local_68 = 0;
  iVar6 = System_ComponentModel_InitializationEventAttribute__get_EventName(param_1,1);
  if (iVar6 == 0x17) {
    lVar8 = FUN_03886e98(param_1,1);
    puVar1 = Method_Newtonsoft_Json_JsonReader_ReaderReadAndAssert__;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar9 == 0)) goto LAB_03887f98;
    uVar10 = FUN_0290dfa8(lVar9,lVar8,&local_68,
                          *(undefined8 *)Method_Newtonsoft_Json_JsonReader_ReaderReadAndAssert__);
    if ((uVar10 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar9 == 0)) goto LAB_03887f98;
      uVar10 = FUN_0290dfa8(lVar9,lVar8,&local_68,*(undefined8 *)puVar1);
      if ((uVar10 & 1) == 0) {
        if (lVar8 == 0) goto LAB_03887f98;
        uVar14 = *(undefined8 *)(lVar8 + 0x18);
        lVar9 = thunk_FUN_01c496e0(*(undefined8 *)Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__);
        FUN_037cc020(lVar9,lVar8,uVar14,0);
        local_68 = lVar9;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar11 == 0)) goto LAB_03887f98;
        FUN_0290c838(lVar11,lVar8,lVar9,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
                    );
      }
    }
    puVar5 = Method_Newtonsoft_Json_Linq_JContainer_System_ComponentModel_IBindingList_Find__;
    puVar4 = 
    Method_System_Dynamic_ExpandoObject_System_Collections_Generic_IDictionary<System_String,System_Object>_get_Item__
    ;
    puVar3 = Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__;
    puVar2 = Method_System_Collections_Generic_List<PuppetMaster>__ctor__;
    puVar1 = InventoryManager_InventoryType_TypeInfo;
    lVar8 = 0;
    while (iVar6 = System_ComponentModel_InitializationEventAttribute__get_EventName(param_1,0),
          iVar6 == 0x17) {
      lVar9 = FUN_03886e98(param_1,1);
      if (lVar9 == 0) goto LAB_03887f98;
      uVar14 = *(undefined8 *)(lVar9 + 0x18);
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
      FUN_037b1f08(lVar8,lVar9,uVar14,0);
      if (lVar8 == 0) goto LAB_03887f98;
      *(bool *)(lVar8 + 0x20) = *(int *)(param_1 + 0x80) != 0;
      uVar7 = FUN_03889100(param_1);
      *(undefined4 *)(lVar8 + 0x68) = uVar7;
      iVar6 = FUN_038891a4(param_1);
      *(int *)(lVar8 + 0x6c) = (iVar6 - *(int *)(param_1 + 0x5c)) + *(int *)(param_1 + 0x70);
      if (local_68 == 0) goto LAB_03887f98;
      lVar9 = FUN_037cc500(local_68,*(undefined8 *)(lVar8 + 0x10),0);
      FUN_03889420(param_1,lVar8,local_68,lVar9 != 0);
      FUN_0388998c(param_1,lVar8,lVar9 != 0);
      lVar11 = FUN_037cbb28(lVar8,0);
      if (lVar11 == 0) goto LAB_03887f98;
      if (0 < *(int *)(lVar11 + 0x10)) {
        lVar11 = FUN_037cbb28(lVar8,0);
        if (lVar11 == 0) goto LAB_03887f98;
        uVar10 = FUN_0315243c(lVar11,*(undefined8 *)puVar1,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_03887f98;
          uVar10 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                      *(undefined8 *)puVar2,0);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_03887f98;
            uVar10 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar3,0);
            if ((uVar10 & 1) != 0) {
              *(undefined4 *)(lVar8 + 0x78) = 2;
            }
          }
          else if (*(char *)(param_1 + 0x4b) == '\0') {
            *(undefined4 *)(lVar8 + 0x78) = 1;
            iVar6 = FUN_037b1f84(lVar8,0);
            if (iVar6 != 9) {
              FUN_03889254(param_1,*(undefined8 *)
                                    Method_UnityEngine_Object_Instantiate<GameObject>__,
                           **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),
                           *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
            }
            if (*(char *)(param_1 + 0x49) != '\0') {
              plVar15 = *(long **)(param_1 + 0x18);
              if (plVar15 == (long *)0x0) goto LAB_03887f98;
              lVar11 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)Method_UnityEngine_Object_Instantiate<Anchor>__) {
                    puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03887df4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar10 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01c72498(plVar15,*(long *)
                                              Method_UnityEngine_Object_Instantiate<Anchor>__,1);
LAB_03887df4:
              uVar14 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              FUN_037b210c(lVar8,uVar14,0);
            }
          }
          else {
            lVar11 = FUN_037b2010(lVar8,0);
            if ((lVar11 == 0) || (lVar11 = FUN_03156e1c(lVar11,0), lVar11 == 0)) goto LAB_03887f98;
            uVar10 = FUN_0315243c(lVar11,*(undefined8 *)puVar4,0);
            if (((uVar10 & 1) != 0) ||
               (uVar10 = FUN_0315243c(lVar11,*(undefined8 *)PTR_DAT_042324e8,0), (uVar10 & 1) != 0))
            {
              *(undefined4 *)(lVar8 + 0x78) = 1;
            }
          }
        }
      }
      if (lVar9 == 0) {
        if (local_68 == 0) goto LAB_03887f98;
        FUN_037cc3b0(local_68,lVar8,0);
      }
    }
    if (iVar6 == 0x1d) {
      if (lVar8 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x4b) == '\0') {
        return;
      }
      lVar9 = FUN_037cbb28(lVar8,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) < 1) {
          return;
        }
        lVar9 = FUN_037cbb28(lVar8,0);
        if (lVar9 != 0) {
          uVar10 = FUN_0315243c(lVar9,*(undefined8 *)puVar1,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            uVar10 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar2,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            plVar15 = *(long **)(lVar8 + 0x30);
            *(undefined4 *)(lVar8 + 0x78) = 1;
            if (plVar15 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (iVar6 != 9) {
                FUN_03889254(param_1,*(undefined8 *)
                                      Method_UnityEngine_Object_Instantiate<GameObject>__,
                             **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),
                             *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
              }
              if (*(char *)(param_1 + 0x49) == '\0') {
                return;
              }
              plVar15 = *(long **)(param_1 + 0x18);
              if (plVar15 != (long *)0x0) {
                lVar9 = *plVar15;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)Method_UnityEngine_Object_Instantiate<Anchor>__) {
                      puVar12 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_03887f78;
                    }
                    uVar10 = uVar10 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01c72498(plVar15,*(long *)
                                                Method_UnityEngine_Object_Instantiate<Anchor>__,1);
LAB_03887f78:
                uVar14 = (*(code *)*puVar12)(plVar15,puVar12[1]);
                FUN_037b210c(lVar8,uVar14,0);
                return;
              }
            }
          }
        }
      }
LAB_03887f98:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  FUN_03886e4c(param_1);
  return;
}


