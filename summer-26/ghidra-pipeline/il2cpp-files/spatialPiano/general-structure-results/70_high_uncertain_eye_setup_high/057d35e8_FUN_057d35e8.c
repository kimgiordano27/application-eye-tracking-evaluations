/*
FUNCTION_NAME: FUN_057d35e8
ENTRY_POINT: 057d35e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_057d35e8(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((DAT_06bc0c65 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_Get__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<string,_DataColumn>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_Add__);
    DAT_06bc0c65 = 1;
  }
  puVar3 = Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__;
  if (param_1 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar7 = thunk_FUN_02f45270();
    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067de858);
    FUN_0504ee1c(uVar7,uVar10,0);
    uVar10 = thunk_FUN_02f6ef30(
                               Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar7,uVar10);
  }
  if (param_2 == 0) {
    param_2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_Get__
                                );
    FUN_05116b38(param_2,0);
    FUN_057d4544(param_2,0);
  }
  puVar2 = PTR_DAT_067c9320;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_057d38fc(param_1);
  lVar6 = FUN_02f0880c(*(undefined8 *)puVar2,uVar4);
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_Add__;
  if (lVar6 != 0) {
    iVar9 = 0;
    do {
      iVar5 = (**(code **)(*param_1 + 0x338))
                        (param_1,lVar6,iVar9,*(int *)(lVar6 + 0x18) - iVar9,
                         *(undefined8 *)(*param_1 + 0x340));
      iVar9 = iVar5 + iVar9;
    } while (0 < iVar5 && iVar9 < 2);
    if (1 < iVar9) {
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_057d3894:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(char *)(lVar6 + 0x20) == -0x21) {
        if (*(int *)(lVar6 + 0x18) == 1) goto LAB_057d3894;
        if (*(char *)(lVar6 + 0x21) == -1) {
          if (param_3 != 0) {
            uVar7 = thunk_FUN_02f6ef30(
                                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                                      );
            uVar7 = FUN_0581abc0(uVar7,0);
            thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
            uVar10 = thunk_FUN_02f45270();
            uVar8 = thunk_FUN_02f6ef30(
                                      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                      );
            FUN_0504ee88(uVar10,uVar7,uVar8,0);
            uVar7 = thunk_FUN_02f6ef30(
                                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar10,uVar7);
          }
          if (param_2 == 0) goto LAB_057d3848;
          uVar1 = *(undefined1 *)(param_2 + 0x68);
          uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_DataColumn>_get_Item__
                                    );
          FUN_056d73c4(uVar7,param_1,lVar6,iVar9,uVar10,uVar1,param_2,0);
          goto LAB_057d378c;
        }
      }
    }
    if (param_2 != 0) {
      uVar1 = *(undefined1 *)(param_2 + 0x68);
      uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_057bce90(uVar7,param_1,lVar6,iVar9,param_2,0,uVar10,param_3,uVar1,0);
LAB_057d378c:
      if (*(int *)(param_2 + 0x50) != 0) {
        uVar7 = FUN_057d3980(param_2,uVar7);
      }
      if (*(char *)(param_2 + 0x10) != '\0') {
        uVar7 = FUN_056f3b98(uVar7,0);
        return uVar7;
      }
      return uVar7;
    }
  }
LAB_057d3848:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


