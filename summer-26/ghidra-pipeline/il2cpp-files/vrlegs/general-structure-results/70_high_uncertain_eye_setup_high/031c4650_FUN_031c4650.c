/*
FUNCTION_NAME: FUN_031c4650
ENTRY_POINT: 031c4650
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031c4650(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_70;
  long local_68;
  
  puVar1 = PTR_DAT_03cd7da8;
                    /* try { // try from 031c465c to 032c46b3 has its CatchHandler @ 031c465c
                       catch() { ... } // from try @ 031c465c with catch @ 031c465c
                       catch() { ... } // from try @ 031c46c0 with catch @ 031c465c
                       catch() { ... } // from try @ 031c4770 with catch @ 031c465c */
  if ((DAT_0412c315 & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_List<MemberSpec>_TypeInfo);
    FUN_01ab69ac(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_01ab69ac(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    FUN_01ab69ac(System_Func<FieldInfo,_string>_TypeInfo);
    FUN_01ab69ac(System_Func<GUIContent,_string>_TypeInfo);
    FUN_01ab69ac(System_Func<GameObject,_bool>_TypeInfo);
    FUN_01ab69ac(System_Func<GameObject,_string>_TypeInfo);
    FUN_01ab69ac(System_Func<Exception,_bool>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_01ab69ac(System_Nullable<NetworkId>_TypeInfo);
    FUN_01ab69ac(System_Nullable<sbyte>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd7da8);
    DAT_0412c315 = 1;
  }
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((DAT_0412c33a & 1) == 0) {
    FUN_01ab69ac(System_Nullable<byte>_TypeInfo);
    DAT_0412c33a = 1;
  }
  puVar2 = System_Nullable<NetworkId>_TypeInfo;
  if (0 < *(int *)(lVar12 + 0x48)) {
    iVar10 = 0;
    do {
      FUN_01f5258c(lVar12 + 0x40,iVar10,&local_a8,*(undefined8 *)puVar2);
      uVar7 = uStack_a0;
      if (param_2 == 0) goto LAB_031c4a60;
      FUN_03126088(param_2,0);
      if (((ulong)(uint)((int)uVar7 << 0x10) | uVar7 & 0xffffffff00000000 | uVar7 >> 0x10 & 0xffff)
          == ((ulong)(uint)((int)extraout_x1 << 0x10) | extraout_x1 & 0xffffffff00000000 |
             extraout_x1 >> 0x10 & 0xffff)) {
        FUN_020d9d38(lVar12 + 0x40,iVar10,
                     *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar12 + 0x48));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar7 = FUN_02218bd8(*(long *)(param_1 + 0x18),param_2,
                         *(undefined8 *)System_Func<Exception,_bool>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar11 = thunk_FUN_01a89e68();
      uVar9 = thunk_FUN_01a6ca08(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
      FUN_026b274c(uVar11,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,uVar9);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_031c4ae8(param_1 + 0x28);
    puVar6 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
    puVar5 = System_Collections_Generic_List<MemberSpec>_TypeInfo;
    puVar4 = System_Func<GameObject,_string>_TypeInfo;
    puVar3 = System_Func<GameObject,_bool>_TypeInfo;
    puVar2 = System_Func<GUIContent,_string>_TypeInfo;
    puVar1 = PTR_DAT_03cbe5e8;
    if (param_2 != 0) {
      plVar8 = (long *)thunk_FUN_01a5dd74(param_2,0);
      do {
        uVar11 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_0277b678(uVar11,0);
        uVar7 = FUN_02787b20(plVar8,uVar11,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x10) == 0) break;
        uVar7 = FUN_0219f8b8(*(long *)(param_1 + 0x10),plVar8,&local_70,*(undefined8 *)puVar6);
        if (((uVar7 & 1) != 0) && (local_70 == param_2)) {
          if (*(long *)(param_1 + 0x10) == 0) break;
          FUN_0219eaf8(*(long *)(param_1 + 0x10),plVar8,
                       *(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
          if (*(long *)(param_1 + 0x18) == 0) break;
          Animancer_FadeGroup__get_TargetWeight
                    (*(long *)(param_1 + 0x18),&local_a8,*(undefined8 *)puVar4);
          uStack_88 = uStack_a0;
          local_90 = local_a8;
          local_80 = local_98;
          do {
            do {
              uVar7 = FUN_021b51c8(&local_90,*(undefined8 *)puVar2);
              if ((uVar7 & 1) == 0) goto LAB_031c49ac;
              FUN_01b7a454(&local_90,&local_68,*(undefined8 *)puVar3);
              lVar12 = local_68;
              if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar11 = thunk_FUN_01a5dd74(local_68,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_02787b20(plVar8,uVar11,0);
            } while ((uVar7 & 1) == 0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar7 = (**(code **)(*plVar8 + 0x388))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0x390));
          } while ((uVar7 & 1) == 0);
          FUN_031c4464(param_1,uVar11,lVar12);
LAB_031c49ac:
          FUN_021b51c4(&local_90,*(undefined8 *)System_Func<FieldInfo,_string>_TypeInfo);
        }
        if (plVar8 == (long *)0x0) break;
        plVar8 = (long *)(**(code **)(*plVar8 + 0xb18))(plVar8,*(undefined8 *)(*plVar8 + 0xb20));
      } while( true );
    }
  }
LAB_031c4a60:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


