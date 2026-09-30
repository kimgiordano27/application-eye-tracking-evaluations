/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_LaunchReportFlow2
ENTRY_POINT: 055b762c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Platform_CAPI__ovr_User_LaunchReportFlow2(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *plVar13;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
FUN_055b7640:
  (*(code *)*param_1)(unaff_x27,4,unaff_x28,0,param_1[1]);
LAB_055b7658:
  if ((*(ulong *)(unaff_x21 + 0xc0) & 0xff) == 0) {
    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_055b7720;
    iVar2 = *(int *)(*(long *)(unaff_x23 + 0x20) + 0x20);
  }
  else {
    iVar2 = (int)(*(ulong *)(unaff_x21 + 0xc0) >> 0x20);
  }
  if (iVar2 == 1) {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar9 = FUN_0547e2f8(0);
    FUN_02979e58(unaff_x29);
    uVar11 = (**(code **)(*unaff_x29 + 0x208))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x210));
    uVar8 = thunk_FUN_02dfd288(System_Action<DragGesture,_Touch>_TypeInfo);
    FUN_05588558(uVar8,uVar9,unaff_x25,uVar11,0);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_055745fc();
        goto LAB_055b76bc;
      }
      uVar9 = FUN_055b7cf8();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar9;
        LeanTween__value((undefined8 *)(unaff_x26 + 0x30),uVar9);
LAB_055b76bc:
        while( true ) {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) {
            FUN_055b578c();
            return;
          }
          iVar2 = (**(code **)(*unaff_x19 + 0x188))();
          if (iVar2 == 4) break;
          if (iVar2 != 5) {
            if (iVar2 == 0xd) {
              return;
            }
            FUN_02979e58();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000018 = thunk_FUN_02dfd288(System_Drawing_Point_var);
            in_stack_00000020 = 0xffffffffffffffff;
            in_stack_00000028 = uVar3;
            uVar9 = FUN_0551e574(&stack0x00000018,0);
            uVar11 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
            FUN_05362cb4(uVar11,uVar9,0);
            goto LAB_055b77bc;
          }
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar4 == (long *)0x0) goto LAB_055b7720;
        unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        unaff_x26 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                      );
        FUN_0552aca4(unaff_x26,0);
        *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
        LeanTween__value((undefined8 *)(unaff_x26 + 0x10),unaff_x25);
        if ((unaff_x21 == 0) || (lVar5 = FUN_055aacb0(), lVar5 == 0)) goto LAB_055b7720;
        lVar5 = FUN_055abe7c(lVar5,unaff_x25);
        plVar4 = (long *)(unaff_x26 + 0x20);
        *plVar4 = lVar5;
        LeanTween__value(plVar4,lVar5);
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_055b7720;
        lVar5 = FUN_055abe7c(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        plVar13 = (long *)(unaff_x26 + 0x18);
        *plVar13 = lVar5;
        LeanTween__value(plVar13,lVar5);
        if (unaff_x24 == 0) goto LAB_055b7720;
        lVar5 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_055b7720;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = unaff_x26;
          LeanTween__value(plVar6,unaff_x26);
        }
        else {
          FUN_040101ec();
        }
        lVar5 = *plVar4;
        if ((lVar5 == 0) && (lVar5 = *plVar13, lVar5 == 0)) {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) goto LAB_055b7784;
          plVar4 = *(long **)(unaff_x23 + 0x28);
          if (plVar4 == (long *)0x0) goto LAB_055b7658;
          lVar5 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 == 0) goto LAB_055b7504;
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_055b74ec;
        }
        if (*(char *)(lVar5 + 0x80) != '\0') break;
        if (*(long *)(lVar5 + 0x48) == 0) {
          uVar9 = FUN_055ae608();
          *(undefined8 *)(lVar5 + 0x48) = uVar9;
          LeanTween__value((long *)(lVar5 + 0x48),uVar9);
        }
        plVar4 = (long *)FUN_055aea4c();
        uVar10 = FUN_05574ae8();
        if ((uVar10 & 1) == 0) goto LAB_055b7784;
        if ((plVar4 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
           (uVar10 & 1) == 0)) {
          uVar9 = FUN_055aeed0();
        }
        else {
          uVar9 = FUN_055aeab8();
        }
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar10 & 1) != 0);
LAB_055b7784:
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar9 = FUN_0547e2f8(0);
    uVar11 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
    FUN_055873e0(uVar11,uVar9,unaff_x25,0);
  }
LAB_055b77bc:
  uVar9 = FUN_05574a94();
  uVar11 = thunk_FUN_02dfd288(
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar9,uVar11);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_055b74ec:
    if (*(long *)(piVar12 + -2) == *(long *)System_Net_ServicePoint_var) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_055b7520;
    }
  }
LAB_055b7504:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)System_Net_ServicePoint_var,0);
LAB_055b7520:
  iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  if (3 < iVar2) goto Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow;
  goto LAB_055b7658;
Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow:
  unaff_x27 = *(long **)(unaff_x23 + 0x28);
  uVar9 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
  }
  uVar11 = FUN_0547e2f8(0);
  uVar11 = FUN_05588558(*(undefined8 *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                        ,uVar11,unaff_x25,*(undefined8 *)(unaff_x21 + 0x60),0);
  if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
  }
  uVar8 = thunk_FUN_02dd3048();
  unaff_x28 = FUN_05570ab4(uVar8,uVar9,uVar11,0);
  if (unaff_x27 == (long *)0x0) {
LAB_055b7720:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *unaff_x27;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)System_Net_ServicePoint_var) {
        param_1 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto FUN_055b7640;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  param_1 = (undefined8 *)FUN_02dd004c(unaff_x27,*(long *)System_Net_ServicePoint_var,1);
  goto FUN_055b7640;
}


