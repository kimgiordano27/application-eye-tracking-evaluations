/*
FUNCTION_NAME: FUN_05d0bd34
ENTRY_POINT: 05d0bd34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05d0bd34(long param_1,long param_2,long param_3,undefined4 param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x1;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_48;
  
  if ((DAT_06dc2e7d & 1) == 0) {
    FUN_02d965b8(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TryGetValue__
                );
    FUN_02d965b8(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_set_Item__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2Id,_OvrAvatarAssetBase>_ContainsKey__
                );
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_Remove__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    DAT_06dc2e7d = 1;
  }
  local_48 = 0;
  FUN_0552aca4(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  LeanTween__value((long *)(param_1 + 0x10),param_2);
  if ((param_5 & 1) != 0) {
    *(byte *)(param_1 + 0x48) = param_5 & 1;
    if (param_2 == 0) goto LAB_05d0bfc8;
    uVar7 = FUN_05d0bfcc(param_2,extraout_x1,param_4);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    LeanTween__value();
  }
  uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                            );
  FUN_05cd8830(uVar7,param_3,param_4,0);
  puVar10 = (undefined8 *)(param_1 + 0x18);
  *puVar10 = uVar7;
  LeanTween__value(puVar10,uVar7);
  puVar1 = Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
  ;
  if (param_3 != 0) {
    uVar6 = FUN_05cd75d4(param_3,0);
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05c3dca8(lVar8,uVar6,1,6,0);
    plVar9 = (long *)(param_1 + 0x20);
    *plVar9 = lVar8;
    LeanTween__value(plVar9,lVar8);
    if (*plVar9 != 0) {
      FUN_05c41ab4(*plVar9,*puVar10,0);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_Remove__
      ;
      if (*plVar9 != 0) {
        FUN_05c41e1c(*plVar9,500,0);
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
        FUN_05c4ca04(lVar8,0);
        puVar5 = 
        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_set_Item__
        ;
        puVar4 = 
        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TryGetValue__
        ;
        puVar3 = 
        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
        ;
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2Id,_OvrAvatarAssetBase>_ContainsKey__
        ;
        puVar1 = PTR_DAT_069fc740;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x78) = param_1;
          LeanTween__value((long *)(lVar8 + 0x78),param_1);
          uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
          FUN_03b33300(uVar7,0,*(undefined8 *)puVar5,0);
          FUN_05c4c8a4(lVar8,uVar7,0);
          local_48 = 0;
          FUN_05d0c3dc(*(undefined8 *)(param_1 + 0x20),lVar8,&local_48);
          uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
          FUN_054948a0(uVar7,0);
          *(undefined8 *)(param_1 + 0x28) = uVar7;
          LeanTween__value((undefined8 *)(param_1 + 0x28),uVar7);
          uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
          FUN_04e92874(uVar7,*(undefined8 *)puVar3);
          *(undefined8 *)(param_1 + 0x50) = uVar7;
          LeanTween__value((undefined8 *)(param_1 + 0x50),uVar7);
          return;
        }
      }
    }
  }
LAB_05d0bfc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


