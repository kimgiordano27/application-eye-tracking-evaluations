/*
FUNCTION_NAME: FUN_07173c60
ENTRY_POINT: 07173c60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_07173c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo;
  if ((DAT_0826807f & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_Dictionary<Type,_uint>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_Dictionary<Type,_fsDirectConverter>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<Type,_ComponentFactory_CreateObjectDelegate>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_0373b518(System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo
                );
    DAT_0826807f = 1;
  }
  lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
  FUN_062855bc(lVar7,0);
  puVar4 = 
  System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
  ;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x10) = param_10;
    *(undefined4 *)(lVar7 + 0x14) = param_11;
    puVar5 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
    lVar12 = *(long *)(param_9 + 0x10);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
    FUN_04fbae00(uVar8,lVar7,*(undefined8 *)puVar5,0);
    if (lVar12 != 0) {
      iVar6 = FUN_049cf74c(lVar12,uVar8,
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<Type,_ComponentFactory_CreateObjectDelegate>_TypeInfo
                          );
      if (iVar6 != -1) {
        return 0xffffffff;
      }
      lVar12 = *(long *)(param_9 + 0x10);
      uVar1 = *(undefined4 *)(lVar7 + 0x10);
      uVar2 = *(undefined4 *)(lVar7 + 0x14);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<Type,_uint>_TypeInfo);
      FUN_062855bc(lVar7,0);
      *(undefined4 *)(lVar7 + 0x10) = uVar1;
      *(undefined4 *)(lVar7 + 0x14) = param_1;
      *(undefined4 *)(lVar7 + 0x18) = param_2;
      *(undefined4 *)(lVar7 + 0x1c) = param_3;
      *(undefined4 *)(lVar7 + 0x20) = param_4;
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      *(undefined4 *)(lVar7 + 0x28) = param_5;
      *(undefined4 *)(lVar7 + 0x2c) = param_6;
      *(undefined4 *)(lVar7 + 0x30) = param_7;
      *(undefined4 *)(lVar7 + 0x34) = param_8;
      if (lVar12 != 0) {
        lVar10 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)System_Collections_Generic_Dictionary<Type,_fsDirectConverter>_TypeInfo;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            plVar9 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            *plVar9 = lVar7;
            thunk_FUN_037aeb94(plVar9,lVar7);
          }
          else {
            FUN_049ceef4(lVar12,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


