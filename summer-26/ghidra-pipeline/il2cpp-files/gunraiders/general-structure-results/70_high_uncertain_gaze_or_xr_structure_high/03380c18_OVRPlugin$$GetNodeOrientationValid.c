/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 03380c18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetNodeOrientationValid(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint in_w9;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long in_x11;
  uint unaff_w19;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x11 * 8 + -8) == in_x10) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4();
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_032fd6f8();
      return lVar6;
    }
    lVar6 = FUN_032fd92c();
    return lVar6;
  }
  bVar1 = *(byte *)(*(long *)System_Linq_Expressions_InvocationExpression5_TypeInfo + 0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)System_Linq_Expressions_InvocationExpression5_TypeInfo)) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4();
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_032fc628();
      return lVar6;
    }
    lVar6 = FUN_032fc924();
    return lVar6;
  }
  bVar1 = *(byte *)(*(long *)ExitGames_Client_Photon_Protocol18_GpType_TypeInfo + 0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)ExitGames_Client_Photon_Protocol18_GpType_TypeInfo)) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4();
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_032fd4a8();
      return lVar6;
    }
    lVar6 = FUN_032fd34c();
    return lVar6;
  }
  bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo + 0x130);
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo)) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032ea0d4();
    if ((uVar4 & 1) != 0) {
      lVar6 = FUN_032fced4();
      return lVar6;
    }
    lVar6 = FUN_032fd188();
    return lVar6;
  }
  plVar3 = (long *)thunk_FUN_01c495e4();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_032ea0d4();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar7 = *plVar3;
  lVar6 = *unaff_x25;
  uVar2 = *(ushort *)(lVar7 + 0x12e);
  uVar8 = (ulong)uVar2;
  if ((uVar4 & 1) == 0) {
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03380e20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar3,lVar6,0);
LAB_03380e20:
    lVar6 = (*(code *)*puVar5)(plVar3,unaff_w19 & 1,puVar5[1]);
  }
  else {
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_03380dfc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar3,lVar6,1);
LAB_03380dfc:
    lVar6 = (*(code *)*puVar5)(plVar3);
  }
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    uVar10 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>_get_Keys__;
    lVar7 = thunk_FUN_01c495e4(lVar6,uVar10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar6,uVar10);
    }
  }
  return lVar7;
}


