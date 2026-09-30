/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$get_active_media
ENTRY_POINT: 05fe931c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__get_active_media(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  char unaff_w21;
  long unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  
  FUN_02d965b8();
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ApiErrorHandler_<RunWithErrorHandling>d__5>__
              );
  FUN_02d965b8(PTR_DAT_06a0dc58);
  FUN_02d965b8(PTR_DAT_06a0b6b8);
  *(undefined1 *)(unaff_x20 + 0x8f9) = 1;
  lVar6 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_0552aca4(lVar6,0);
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AuthenticationServiceInternal_<HandleSignInRequestAsync>d__136>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AudioOutputDevices_<RefreshDevicesAsync>d__46>__
  ;
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = unaff_x22;
    LeanTween__value(plVar11);
    lVar12 = *(long *)(unaff_x19 + 0x38);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_04462620(uVar7,lVar6,*(undefined8 *)puVar3,0);
    if (lVar12 == 0) goto LAB_05fe961c;
    lVar6 = FUN_04010848(lVar12,uVar7,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                        );
    if (lVar6 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05fe961c;
      uVar4 = *(uint *)(lVar6 + 0x50);
      FUN_040115d4(*(long *)(unaff_x19 + 0x38),lVar6,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AudioInputDevices_<RefreshDevicesAsync>d__42>__
                  );
      if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x48), lVar6 == 0)) goto LAB_05fe961c;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_05fe9620;
      FUN_05fe8f8c();
    }
    if (unaff_w21 != '\0') {
      uVar4 = FUN_0432fe3c(&stack0x00000008,*(undefined8 *)PTR_DAT_06a0ed80);
    }
    if (*plVar11 == 0) goto LAB_05fe961c;
    iVar5 = FUN_05f46908(*plVar11,0);
    plVar8 = (long *)*plVar11;
    if (iVar5 <= (int)(uVar4 + 1)) {
      if (plVar8 != (long *)0x0) {
        *(undefined4 *)(plVar8 + 10) = 0xffffffff;
        return;
      }
      goto LAB_05fe961c;
    }
    if (plVar8 == (long *)0x0) goto LAB_05fe961c;
    lVar6 = plVar8[5];
    *(uint *)(plVar8 + 10) = uVar4 + 1;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
    puVar2 = PTR_DAT_06a11668;
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06a11668 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06a11668))
      {
        plVar8 = (long *)*plVar11;
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0))
           , plVar8 == (long *)0x0)) goto LAB_05fe961c;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
        goto LAB_05fe961c;
        lVar12 = plVar8[0xd];
        if (lVar12 != 0) {
          if (*plVar11 == 0) goto LAB_05fe961c;
          uVar4 = *(uint *)(*plVar11 + 0x50);
          if ((int)uVar4 < (int)*(uint *)(lVar12 + 0x18)) {
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_05fe9620;
            FUN_0536dcdc(lVar6,*(undefined8 *)PTR_DAT_06a0b6b8,
                         *(undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20),
                         *(undefined8 *)PTR_DAT_06a0dc58,0);
          }
        }
      }
    }
    lVar6 = *plVar11;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x48) != 0)) {
      if (*(uint *)(*(long *)(lVar6 + 0x48) + 0x18) <= *(uint *)(lVar6 + 0x50)) {
LAB_05fe9620:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      FUN_05fe8f8c();
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 != 0) {
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar12 = *plVar11;
        lVar10 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
        ;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar4 = *(uint *)(lVar6 + 0x18);
          if (uVar4 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar4 + 1;
            plVar11 = (long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
            *plVar11 = lVar12;
            LeanTween__value(plVar11);
            return;
          }
          FUN_040101ec(lVar6,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_05fe961c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


