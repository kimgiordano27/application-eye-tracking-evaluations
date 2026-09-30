/*
FUNCTION_NAME: FUN_077b9af8
ENTRY_POINT: 077b9af8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_077b9af8(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  if ((DAT_08987073 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084be158);
    FUN_03a8a718(PTR_DAT_08498188);
    FUN_03a8a718(System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
    FUN_03a8a718(System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_03a8a718(System_Action<PayloadData,_bool,_bool>_TypeInfo);
    FUN_03a8a718(System_Action<string,_string,_LogType>_TypeInfo);
    FUN_03a8a718(System_Action<VisualElement,_int>_TypeInfo);
    DAT_08987073 = 1;
  }
  plVar10 = *(long **)(param_1 + 0xe8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar10;
  lVar12 = *(long *)System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_077b9bf4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_03ac43c4(plVar10);
LAB_077b9bf4:
  lVar5 = thunk_FUN_03aa9644(*(undefined8 *)(lVar5 + 8),lVar12);
  lVar5 = (**(code **)(lVar5 + 8))(plVar10,param_2,lVar5);
  if (lVar5 == 0) {
    uVar14 = thunk_FUN_03af1434(System_Action<XRLayout,_Camera>_TypeInfo);
    uVar14 = FUN_077c8168(0x33,uVar14,0,0);
    uVar9 = thunk_FUN_03af1434(System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar14,uVar9);
  }
  if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_077c9b8c(*(long *)(param_1 + 0x88),param_2);
  puVar1 = System_Action<VisualElement,_int>_TypeInfo;
  lVar12 = *(long *)(lVar5 + 0x20);
  if (lVar12 != 0) {
    lVar11 = *(long *)(param_1 + 0x90);
    lVar4 = *(long *)System_Action<VisualElement,_int>_TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar4 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar13 = puVar6[2];
    if (lVar13 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar14 = *puVar6;
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08498188);
      FUN_04962b78(lVar13,uVar14,*(undefined8 *)System_Action<string,_string,_LogType>_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar10 = lVar13;
      thunk_FUN_03afed3c(plVar10,lVar13);
    }
    lVar12 = FUN_044c97ac(lVar12,lVar13,*(undefined8 *)PTR_DAT_084be158);
    if (lVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_065d1d30(lVar12,6,0);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    puVar6 = (undefined8 *)(lVar11 + 0x10);
    *puVar6 = uVar14;
    thunk_FUN_03afed3c(puVar6);
  }
  if (param_5 == 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x60);
    uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo);
    FUN_077bc934(uVar14,uVar9);
  }
  else {
    uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo);
    FUN_077bc9d0(uVar14,param_5);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar14;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x58),uVar14);
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_077c9d58(*(long *)(param_1 + 0x98),*(undefined8 *)(lVar5 + 0x60));
  if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_077ca670(*(long *)(param_1 + 0xa8),param_3);
  puVar1 = System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo;
  plVar10 = *(long **)(param_1 + 0xc0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = *plVar10;
  lVar4 = *(long *)(lVar5 + 0x70);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_077b9dc4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_03ac43c4(plVar10,*(long *)
                                 System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo,0);
LAB_077b9dc4:
  iVar2 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  plVar10 = *(long **)(param_1 + 0xc0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar12 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_077b9e2c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar1,1);
LAB_077b9e2c:
  iVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  lVar4 = lVar4 - lVar5;
  lVar5 = lVar4 - iVar3;
  if ((((param_3 != 0) && ((param_4 & 1) != 0)) && (lVar4 = lVar4 - iVar2, 0 < lVar4)) &&
     (lVar4 < lVar5)) {
    FUN_077bca18((double)lVar4,param_1);
  }
  if (0 < lVar5) {
    FUN_077bcc28((double)lVar5,param_1);
  }
  *(undefined8 *)(param_1 + 0x60) = param_6;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x60),param_6);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 != 2) {
    *(undefined4 *)(param_1 + 0xb8) = 2;
    FUN_077bd1e0(param_1,iVar2,2);
  }
  return;
}


