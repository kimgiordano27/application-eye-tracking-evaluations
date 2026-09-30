/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vxa_render_device_stats_t_other_error_count_get
ENTRY_POINT: 079035f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vxa_render_device_stats_t_other_error_count_get
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08496438);
  FUN_03a8a718(UnityEngine_Events_UnityAction<Scene,_LoadSceneMode>_TypeInfo);
  FUN_03a8a718(PTR_DAT_0848b008);
  *(undefined1 *)(unaff_x20 + 0xbda) = 1;
  puVar1 = PTR_DAT_08488b88;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 10);
    uVar2 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar4 = thunk_FUN_03ac74bc();
      uVar11 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar12 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar4,uVar11,uVar12,0);
      uVar11 = thunk_FUN_03af1434(UnityEngine_Events_UnityAction<Scene,_Scene>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar11);
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(lVar7 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08496420) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_079036c0;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)PTR_DAT_08496420,0);
LAB_079036c0:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Events_UnityAction<HVRStabber,_HVRStabbable>_TypeInfo);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo)
        {
          lVar8 = lVar8 + (long)(*piVar9 + 7) * 0x10 + 0x138;
          goto LAB_07903740;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    lVar8 = FUN_03ac43c4(plVar10,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,7);
LAB_07903740:
    FUN_0496d698(uVar4,plVar10,*(undefined8 *)(lVar8 + 8),0);
    plVar10 = *(long **)(lVar7 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar11 = *(undefined8 *)PTR_DAT_0848b008;
    if (plVar10 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = *plVar10;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_079037c8;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_079037c8:
      uVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    }
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Events_UnityAction<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_TypeInfo
                              );
    FUN_07914e9c(uVar6,uVar12,uVar5,0,0,0);
    lVar7 = FUN_0481a2ec(lVar7,uVar11,uVar4,uVar6,
                         *(undefined8 *)
                          UnityEngine_Events_UnityAction<Scene,_LoadSceneMode>_TypeInfo);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_058b71ec(lVar7,*(undefined8 *)PTR_DAT_08496438);
    uVar2 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_08496430);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3c80(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_08496428);
  lVar7 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


