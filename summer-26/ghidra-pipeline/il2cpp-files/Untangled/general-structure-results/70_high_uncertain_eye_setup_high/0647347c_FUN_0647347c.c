/*
FUNCTION_NAME: FUN_0647347c
ENTRY_POINT: 0647347c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0647347c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar4 = param_1;
  if ((DAT_071cdb43 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IDictionary<string,_ReflectionMember>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Exception>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<int4>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d0e080);
    FUN_02f07e70(System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<IDataNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IDictionary<string,_VariableDeclaration>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
                );
    uVar4 = FUN_02f07e70(System_Collections_Generic_ICollection<int>_TypeInfo);
    DAT_071cdb43 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_06473664:
    FUN_0646a618(param_1,param_2,param_3);
    return;
  }
  lVar8 = *param_2;
  bVar1 = *(byte *)(lVar8 + 0x130);
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<int4>_TypeInfo + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<int4>_TypeInfo)) {
    uVar4 = FUN_064739a0(uVar4,(int)param_2[0x16]);
    uVar5 = FUN_064739a0(uVar4,(int)param_2[0x18]);
    FUN_05465734(*(undefined8 *)
                  System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
                 ,uVar4,*(undefined8 *)System_Collections_Generic_ICollection<int>_TypeInfo,uVar5,0)
    ;
    return;
  }
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo)) {
    uVar4 = FUN_064739a0(uVar4,(int)param_2[0x16]);
    puVar9 = (undefined8 *)
             System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo;
LAB_064736f0:
    FUN_05458458(*puVar9,uVar4,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo)) {
    uVar4 = FUN_064739a0(uVar4,(int)param_2[0x16]);
    puVar9 = (undefined8 *)
             System_Collections_Generic_IDictionary<string,_VariableDeclaration>_TypeInfo;
    goto LAB_064736f0;
  }
  bVar2 = *(byte *)(*(long *)
                     System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo +
                   0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Collections_Generic_IDictionary<string,_ReflectionMember>_TypeInfo +
                       0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_IDictionary<string,_ReflectionMember>_TypeInfo))
      goto LAB_06473664;
      lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,6);
      if (lVar8 == 0) goto LAB_06473994;
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) =
             *(undefined8 *)
              System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
        ;
        uVar4 = thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
        uVar4 = FUN_064739a0(uVar4,(int)param_2[0x16]);
        if (1 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x28) = uVar4;
          thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x28),uVar4);
          if (2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)System_Collections_Generic_ICollection<IDataNode>_TypeInfo;
            uVar4 = thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x30));
            uVar4 = FUN_064739a0(uVar4,(int)param_2[0x18]);
            if (3 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x38) = uVar4;
              thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x38),uVar4);
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_06d0e080;
                uVar4 = thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x40));
                uVar4 = FUN_064739a0(uVar4,*(undefined4 *)((long)param_2 + 0xc4));
                if (5 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x48) = uVar4;
                  thunk_FUN_02f411dc();
                  FUN_0546583c(lVar8,0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_06473984;
    }
  }
  else {
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_2);
    }
  }
  plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,4);
  puVar3 = 
  System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
  ;
  if (plVar6 == (long *)0x0) {
LAB_06473994:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)
       System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
      == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_02ef170c(*(long *)
                                System_Collections_Generic_IDictionary<Type,_IDictionary<MemberInfo,_ReflectionUtils_GetDelegate>>_TypeInfo
                               ,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar8 == 0) goto LAB_06473988;
    lVar8 = *(long *)puVar3;
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar8;
    uVar4 = thunk_FUN_02f411dc();
    lVar8 = FUN_064739a0(uVar4,(int)param_2[0x16]);
    if ((lVar8 != 0) &&
       (lVar7 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_06473988:
      uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,0);
    }
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar8;
      thunk_FUN_02f411dc(plVar6 + 5,lVar8);
      puVar3 = System_Collections_Generic_ICollection<IDataNode>_TypeInfo;
      if (*(long *)System_Collections_Generic_ICollection<IDataNode>_TypeInfo == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = thunk_FUN_02ef170c(*(long *)
                                    System_Collections_Generic_ICollection<IDataNode>_TypeInfo,
                                   *(undefined8 *)(*plVar6 + 0x40));
        if (lVar8 == 0) goto LAB_06473988;
        lVar8 = *(long *)puVar3;
      }
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar8;
        thunk_FUN_02f411dc();
        lVar8 = param_2[0x18];
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_06473988;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar8;
          thunk_FUN_02f411dc(plVar6 + 7,lVar8);
          FUN_054654d4(plVar6,0);
          return;
        }
      }
    }
  }
LAB_06473984:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


