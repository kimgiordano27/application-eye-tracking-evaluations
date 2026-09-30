/*
FUNCTION_NAME: FUN_0790291c
ENTRY_POINT: 0790291c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0790291c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_48;
  
  if ((DAT_08987bd6 & 1) == 0) {
    FUN_03a8a718(UnityEngine_Events_UnityAction<HVRDestroyListener>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0849d120);
    FUN_03a8a718(PTR_DAT_0849d0a8);
    FUN_03a8a718(UnityEngine_Events_UnityAction<HVRGrabbable>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_long>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496420);
    FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
    FUN_03a8a718(UnityEngine_Events_UnityAction<HVRPhysicsButton>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_uint>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    FUN_03a8a718(UnityEngine_Events_UnityAction<int>_TypeInfo);
    FUN_03a8a718(UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo);
    DAT_08987bd6 = 1;
  }
  puVar2 = PTR_DAT_0849d0a8;
  lVar10 = *(long *)(param_1 + 10);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = FUN_065cd284(*(undefined8 *)(param_1 + 8),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar12 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar12,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03af1434(
                                UnityEngine_Events_UnityAction<PerformanceChangeNotification>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar12,uVar6);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar10 + 0x38);
    uVar12 = *(undefined8 *)(param_1 + 8);
    if (plVar11 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      lVar8 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07902aa8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar11,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_07902aa8:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    }
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Events_UnityAction<HVRPhysicsButton>_TypeInfo);
    FUN_07917880(uVar7,uVar12,uVar6,0,0,0);
    plVar11 = *(long **)(lVar10 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08496420) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07902b44;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08496420,0);
LAB_07902b44:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Events_UnityAction<HVRGrabbable>_TypeInfo
                               );
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo)
        {
          lVar8 = lVar8 + (long)(*piVar9 + 0xc) * 0x10 + 0x138;
          goto LAB_07902bc4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    lVar8 = FUN_03ac43c4(plVar11,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,0xc);
LAB_07902bc4:
    FUN_0496d698(uVar12,plVar11,*(undefined8 *)(lVar8 + 8),0);
    lVar8 = FUN_0481a690(lVar10,*(undefined8 *)
                                 UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo,uVar12,
                         uVar7,*(undefined8 *)UnityEngine_Events_UnityAction<int>_TypeInfo);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar8,*(undefined8 *)
                                   Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    uVar4 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)
                          Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_48;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff63e0(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)UnityEngine_Events_UnityAction<HVRDestroyListener>_TypeInfo);
      return;
    }
  }
  lVar8 = FUN_0587c704(&local_48,
                       *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar10 != 0) {
    FUN_078fd284(lVar10,*(undefined8 *)(lVar8 + 0x20));
    puVar3 = PTR_DAT_0849d120;
    uVar12 = *(undefined8 *)(lVar8 + 0x20);
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar12,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


