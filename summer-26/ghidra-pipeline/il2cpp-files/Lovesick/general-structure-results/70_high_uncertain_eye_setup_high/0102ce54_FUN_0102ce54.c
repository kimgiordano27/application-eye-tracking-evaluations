/*
FUNCTION_NAME: FUN_0102ce54
ENTRY_POINT: 0102ce54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0102ce54(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  byte local_48;
  undefined7 uStack_47;
  
  puVar2 = StringLiteral_3033;
  if ((DAT_03775f02 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__)
    ;
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_84_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_543);
    thunk_FUN_00d48444(
                      UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                      );
    DAT_03775f02 = 1;
  }
  plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,5);
  lVar6 = FUN_0268b6ac(param_1,0);
  if (plVar5 == (long *)0x0) goto LAB_0102d2d4;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0102d2c8:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  puVar2 = StringLiteral_9958;
  if ((int)plVar5[3] == 0) {
LAB_0102d2c4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar5[4] = lVar6;
  local_4c[0] = (undefined1)param_1[0x11];
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_4c);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 2) goto LAB_0102d2c4;
  plVar5[5] = lVar6;
  local_50[0] = (undefined1)param_1[5];
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_50);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 3) goto LAB_0102d2c4;
  plVar5[6] = lVar6;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_2 == 0) goto LAB_0102d2d4;
  uVar8 = FUN_026f2aa0(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  local_54[0] = FUN_0268b4e0(uVar8,0,0);
  local_54[0] = local_54[0] & 1;
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_54);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 4) goto LAB_0102d2c4;
  plVar5[7] = lVar6;
  lVar6 = FUN_026f2bb4(param_2,0);
  puVar3 = 
  Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
  ;
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010e58e8(lVar6,&local_48,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
              );
  local_48 = FUN_0268b4e0(CONCAT71(uStack_47,local_48),0,0);
  local_48 = local_48 & 1;
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  puVar2 = UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo;
  if (*(uint *)(plVar5 + 3) < 5) goto LAB_0102d2c4;
  plVar5[8] = lVar6;
  puVar4 = StringLiteral_302;
  uVar8 = FUN_01600be4(*(undefined8 *)puVar2,plVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  FUN_02660dac(uVar8,0);
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[5] != '\0') {
    return;
  }
  uVar8 = FUN_026f2aa0(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar9 = FUN_0268b4e0(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar6 = FUN_026f2bb4(param_2,0);
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010e58e8(lVar6,&local_48,*(undefined8 *)puVar3);
  uVar8 = CONCAT71(uStack_47,local_48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b4e0(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar6 = FUN_026f2aa0(param_2,0);
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010c2e94(lVar6,&local_48,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__);
  lVar6 = CONCAT71(uStack_47,local_48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b5e4(lVar6,0);
  if ((uVar9 & 1) == 0) {
LAB_0102d1e8:
    uVar8 = FUN_026f2aa0(param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar7 = FUN_026f2aa0(param_2,0);
    if (lVar7 == 0) goto LAB_0102d2d4;
    FUN_010c2c5c(lVar7,&local_48,*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
    uVar8 = CONCAT71(uStack_47,local_48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  else {
    if (lVar6 == 0) goto LAB_0102d2d4;
    if (*(char *)(lVar6 + 0xfd) == '\0') goto LAB_0102d1e8;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (param_1[7] != 0) {
    *(undefined1 *)(param_1[7] + 0x30) = 0;
    if (param_1[3] != 0) {
      FUN_013e0100(param_1[3],param_1,lVar6,*(undefined8 *)StringLiteral_543);
    }
    (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
    return;
  }
LAB_0102d2d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


