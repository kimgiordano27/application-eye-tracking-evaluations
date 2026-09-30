/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 03380b50
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetNodePresent(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint unaff_w19;
  undefined8 uVar12;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  
  FUN_01c5d288();
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredPrefsData>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeReferenceVolumeProfile>_Dispose__
              );
  FUN_01c5d288(OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo);
  FUN_01c5d288(System_Linq_Expressions_InvocationExpression5_TypeInfo);
  FUN_01c5d288(ExitGames_Client_Photon_Protocol18_GpType_TypeInfo);
  FUN_01c5d288(OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredPrefsData>_MoveNext__
              );
  *(undefined1 *)(unaff_x23 + 0x60c) = 1;
  puVar4 = OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo;
  FUN_0336c7fc();
  lVar5 = *unaff_x24;
  if (unaff_x21 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar9 = *unaff_x21;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4();
      if ((uVar7 & 1) == 0) {
        uVar12 = (**(code **)(*unaff_x21 + 0x208))();
      }
      else {
        uVar12 = (**(code **)(*unaff_x21 + 0x218))();
      }
      uVar12 = FUN_02338288(uVar12,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredPrefsData>_get_Current__
                           );
      lVar5 = FUN_02355b80(uVar12,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeReferenceVolumeProfile>_Dispose__
                          );
      return lVar5;
    }
    bVar2 = *(byte *)(*(long *)System_Collections_Stack_StackEnumerator_TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Collections_Stack_StackEnumerator_TypeInfo)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4();
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_032fd6f8();
        return lVar5;
      }
      lVar5 = FUN_032fd92c();
      return lVar5;
    }
    bVar2 = *(byte *)(*(long *)System_Linq_Expressions_InvocationExpression5_TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Linq_Expressions_InvocationExpression5_TypeInfo)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4();
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_032fc628();
        return lVar5;
      }
      lVar5 = FUN_032fc924();
      return lVar5;
    }
    bVar2 = *(byte *)(*(long *)ExitGames_Client_Photon_Protocol18_GpType_TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)ExitGames_Client_Photon_Protocol18_GpType_TypeInfo)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4();
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_032fd4a8();
        return lVar5;
      }
      lVar5 = FUN_032fd34c();
      return lVar5;
    }
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4();
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_032fced4();
        return lVar5;
      }
      lVar5 = FUN_032fd188();
      return lVar5;
    }
    plVar6 = (long *)thunk_FUN_01c495e4();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    lVar5 = *unaff_x24;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032ea0d4();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar9 = *plVar6;
  lVar5 = *(long *)puVar4;
  uVar3 = *(ushort *)(lVar9 + 0x12e);
  uVar10 = (ulong)uVar3;
  if ((uVar7 & 1) == 0) {
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03380e20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c72498(plVar6,lVar5,0);
LAB_03380e20:
    lVar5 = (*(code *)*puVar8)(plVar6,unaff_w19 & 1,puVar8[1]);
  }
  else {
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03380dfc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c72498(plVar6,lVar5,1);
LAB_03380dfc:
    lVar5 = (*(code *)*puVar8)(plVar6);
  }
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  else {
    uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>_get_Keys__;
    lVar9 = thunk_FUN_01c495e4(lVar5,uVar12);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar5,uVar12);
    }
  }
  return lVar9;
}


