/*
FUNCTION_NAME: FUN_03a32ab4
ENTRY_POINT: 03a32ab4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void FUN_03a32ab4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* catch() { ... } // from try @ 03a32aa8 with catch @ 03a32abc */
                    /* try { // try from 03a32ac0 to 03b32adb has its CatchHandler @ 03a32af4 */
  if ((DAT_0453a528 & 1) == 0) {
                    /* try { // try from 03a32adc to 03b32aeb has its CatchHandler @ 03a32860 */
    FUN_01c5d288(PTR_DAT_042394b8);
                    /* try { // try from 03a32aec to 03b32af3 has its CatchHandler @ 03a32af4 */
    FUN_01c5d288(PTR_DAT_0422fc88);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03a32a84 with catch @ 03a32af4
                       catch(type#2 @ 00000000) { ... } // from try @ 03a32ac0 with catch @ 03a32af4
                       catch(type#2 @ 00000000) { ... } // from try @ 03a32aec with catch @ 03a32af4
                        */
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_1__
                );
    FUN_01c5d288(PTR_DAT_0422f998);
    FUN_01c5d288(
                Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                );
    FUN_01c5d288(System_ComponentModel_IRevertibleChangeTracking_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fc80);
    FUN_01c5d288(
                Method_I2_Loc_SimpleJSON_JSONNode_<get_DeepChilds>d__19_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_TypeInfo);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                );
    FUN_01c5d288(Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__);
    FUN_01c5d288(System_Resources_IResourceReader_TypeInfo);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c__DisplayClass22_0_<GetCreator>b__0__
                );
    FUN_01c5d288(Method_KOTHGameMode_<Countdown>d__19_System_Collections_IEnumerator_Reset__);
    DAT_0453a528 = 1;
  }
  puVar2 = 
  Method_I2_Loc_SimpleJSON_JSONNode_<get_DeepChilds>d__19_System_Collections_IEnumerator_Reset__;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_03c28790(puVar1,0);
  if (param_2 == 0) {
    uVar3 = System_Convert__ToSingle
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__
                       ,uVar3,0);
    if (*(char *)(param_1 + 0x70) == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      plVar5 = (long *)FUN_03c28790(puVar1,0);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_ComponentModel_IRevertibleChangeTracking_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_03a32e08;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar5,*(long *)
                                      System_ComponentModel_IRevertibleChangeTracking_TypeInfo,2);
LAB_03a32e08:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar5 != (long *)0x0) {
          lVar10 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                 ) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03a32e70;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01c72498(plVar5,*(long *)
                                        Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                                ,0);
LAB_03a32e70:
          uVar7 = (*(code *)*puVar6)(plVar5,1,puVar6[1]);
          lVar10 = FUN_03a324b8(param_1,uVar7);
          if (lVar10 != 0) {
            uVar8 = *(undefined8 *)(param_1 + 0x58);
            uVar7 = FUN_03154b54(lVar10,*(undefined8 *)System_Resources_IResourceReader_TypeInfo,
                                 *(undefined8 *)
                                  UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_TypeInfo
                                 ,0);
            uVar4 = thunk_FUN_03152714(uVar8,uVar7,0);
            if ((uVar4 & 1) != 0) {
              FUN_03233334(lVar10,0);
            }
            uVar3 = FUN_03146988(uVar3,*(undefined8 *)
                                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c__DisplayClass22_0_<GetCreator>b__0__
                                 ,0);
            if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
            }
            FUN_03a14a18(uVar3);
            local_50 = *(undefined8 *)(param_1 + 0x38);
            uStack_58 = *(undefined8 *)(param_1 + 0x30);
            local_60 = *puVar1;
            UnityEngine_Rendering_BufferedRTHandleSystem__Dispose
                      (param_1,&local_60,*(undefined1 *)(param_1 + 0x71),
                       *(undefined1 *)(param_1 + 0x72));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = FUN_03146988(uVar3,*(undefined8 *)
                                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                         ,0);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422f998);
    FUN_03308b88(uVar7,uVar3,0);
    uVar8 = *(undefined8 *)puVar2;
    param_2 = 0;
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    uVar4 = FUN_031532a8(*(undefined8 *)(param_1 + 0x18),0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = FUN_031532a8(*(undefined8 *)(param_1 + 0x10),0), (uVar4 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_03262708(uVar3,0);
      lVar10 = *(long *)(param_1 + 0x10);
      uVar4 = FUN_031532a8(uVar3,0);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN_03230dcc(uVar3,0), (uVar4 & 1) == 0)) {
        FUN_03230680(uVar3,0);
      }
      uVar3 = FUN_03d9e218(param_2,0);
      FUN_03233b18(lVar10,uVar3,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar3 = FUN_03154b54(lVar10,*(undefined8 *)
                                   UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_TypeInfo
                           ,*(undefined8 *)System_Resources_IResourceReader_TypeInfo,0);
      FUN_03233b18(uVar3,*(undefined8 *)(param_1 + 0x18),0);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      uVar4 = FUN_031532a8(*(undefined8 *)(param_1 + 0x10),0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0422fc88 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_03cfdd28(0);
        uVar4 = FUN_031532a8(uVar3,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03a14a18(*(undefined8 *)
                        Method_KOTHGameMode_<Countdown>d__19_System_Collections_IEnumerator_Reset__)
          ;
        }
      }
    }
    uVar8 = *(undefined8 *)puVar2;
    uVar3 = 1;
    uVar7 = 0;
  }
  FUN_023bf2a8(puVar1,param_2,uVar3,uVar7,uVar8);
  return;
}


