/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_LaunchFriendRequestFlow
ENTRY_POINT: 055b7534
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


void Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *plVar12;
  long *plVar13;
  long *unaff_x29;
  long *plStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  plStack0000000000000010 = unaff_x29;
code_r0x055b7534:
  plVar12 = *(long **)(unaff_x23 + 0x28);
  uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
  }
  uVar6 = FUN_0547e2f8(0);
  uVar6 = FUN_05588558(*(undefined8 *)
                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                       ,uVar6,unaff_x25,*(undefined8 *)(unaff_x21 + 0x60),0);
  if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
  }
  uVar7 = thunk_FUN_02dd3048();
  uVar5 = FUN_05570ab4(uVar7,uVar5,uVar6,0);
  if (plVar12 == (long *)0x0) {
LAB_055b7720:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)System_Net_ServicePoint_var) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto FUN_055b7640;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)System_Net_ServicePoint_var,1);
FUN_055b7640:
  (*(code *)*puVar8)(plVar12,4,uVar5,0,puVar8[1]);
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
    uVar5 = FUN_0547e2f8(0);
    FUN_02979e58(plStack0000000000000010);
    uVar6 = (**(code **)(*plStack0000000000000010 + 0x208))
                      (plStack0000000000000010,*(undefined8 *)(*plStack0000000000000010 + 0x210));
    uVar7 = thunk_FUN_02dfd288(System_Action<DragGesture,_Touch>_TypeInfo);
    FUN_05588558(uVar7,uVar5,unaff_x25,uVar6,0);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_055745fc();
        goto LAB_055b76bc;
      }
      uVar5 = FUN_055b7cf8();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar5;
        LeanTween__value((undefined8 *)(unaff_x26 + 0x30),uVar5);
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
            uVar5 = FUN_0551e574(&stack0x00000018,0);
            uVar6 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
            FUN_05362cb4(uVar6,uVar5,0);
            goto LAB_055b77bc;
          }
        }
        plVar12 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar12 == (long *)0x0) goto LAB_055b7720;
        unaff_x25 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        unaff_x26 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                      );
        FUN_0552aca4(unaff_x26,0);
        *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
        LeanTween__value((undefined8 *)(unaff_x26 + 0x10),unaff_x25);
        if ((unaff_x21 == 0) || (lVar9 = FUN_055aacb0(), lVar9 == 0)) goto LAB_055b7720;
        lVar9 = FUN_055abe7c(lVar9,unaff_x25);
        plVar12 = (long *)(unaff_x26 + 0x20);
        *plVar12 = lVar9;
        LeanTween__value(plVar12,lVar9);
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_055b7720;
        lVar9 = FUN_055abe7c(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        plVar13 = (long *)(unaff_x26 + 0x18);
        *plVar13 = lVar9;
        LeanTween__value(plVar13,lVar9);
        if (unaff_x24 == 0) goto LAB_055b7720;
        lVar9 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_055b7720;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = unaff_x26;
          LeanTween__value(plVar4,unaff_x26);
        }
        else {
          FUN_040101ec();
        }
        lVar9 = *plVar12;
        if ((lVar9 == 0) && (lVar9 = *plVar13, lVar9 == 0)) {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) goto LAB_055b7784;
          plVar12 = *(long **)(unaff_x23 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_055b7658;
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_055b7504;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_055b74ec;
        }
        if (*(char *)(lVar9 + 0x80) != '\0') break;
        if (*(long *)(lVar9 + 0x48) == 0) {
          uVar5 = FUN_055ae608();
          *(undefined8 *)(lVar9 + 0x48) = uVar5;
          LeanTween__value((long *)(lVar9 + 0x48),uVar5);
        }
        plVar12 = (long *)FUN_055aea4c();
        uVar10 = FUN_05574ae8();
        if ((uVar10 & 1) == 0) goto LAB_055b7784;
        if ((plVar12 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0)),
           (uVar10 & 1) == 0)) {
          uVar5 = FUN_055aeed0();
        }
        else {
          uVar5 = FUN_055aeab8();
        }
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar10 & 1) != 0);
LAB_055b7784:
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar5 = FUN_0547e2f8(0);
    uVar6 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
    FUN_055873e0(uVar6,uVar5,unaff_x25,0);
  }
LAB_055b77bc:
  uVar5 = FUN_05574a94();
  uVar6 = thunk_FUN_02dfd288(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar6);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_055b74ec:
    if (*(long *)(piVar11 + -2) == *(long *)System_Net_ServicePoint_var) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_055b7520;
    }
  }
LAB_055b7504:
  puVar8 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)System_Net_ServicePoint_var,0);
LAB_055b7520:
  iVar2 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  if (3 < iVar2) goto code_r0x055b7534;
  goto LAB_055b7658;
}


