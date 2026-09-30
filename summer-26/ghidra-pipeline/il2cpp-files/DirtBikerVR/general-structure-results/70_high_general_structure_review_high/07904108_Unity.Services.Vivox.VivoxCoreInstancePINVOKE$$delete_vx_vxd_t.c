/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_vxd_t
ENTRY_POINT: 07904108
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_vxd_t(ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) != 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar14 = thunk_FUN_03ac74bc();
    uVar8 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
    uVar9 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
    FUN_066b7574(uVar14,uVar8,uVar9,0);
    uVar8 = thunk_FUN_03af1434(UnityEngine_Events_UnityEvent<string>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar14,uVar8);
  }
  lVar10 = *(long *)(unaff_x19 + 10);
  if (lVar10 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar14 = thunk_FUN_03ac74bc();
    uVar8 = thunk_FUN_03af1434(PTR_DAT_084a5088);
    uVar9 = thunk_FUN_03af1434(UnityEngine_Events_UnityEvent<Vehicle,_Vehicle>_TypeInfo);
    FUN_066b7574(uVar14,uVar8,uVar9,0);
    uVar8 = thunk_FUN_03af1434(UnityEngine_Events_UnityEvent<string>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar14,uVar8);
  }
  uVar14 = *(undefined8 *)(lVar10 + 0x10);
  uVar9 = *(undefined8 *)(lVar10 + 0x18);
  uVar8 = *(undefined8 *)(lVar10 + 0x30);
  uVar1 = *(undefined8 *)(lVar10 + 0x38);
  uVar3 = *(undefined2 *)(lVar10 + 0x20);
  uVar4 = *(undefined2 *)(lVar10 + 0x22);
  uVar15 = *(undefined8 *)(lVar10 + 0x28);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Events_UnityEvent<SignInCodeInfo>_TypeInfo);
  FUN_07904614(uVar6,uVar14,uVar9,uVar3,uVar4,uVar8,uVar1,uVar15);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar13 = *(long **)(unaff_x20 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x19 + 8);
  if (plVar13 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_079041e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,0)
    ;
LAB_079041e8:
    uVar8 = (*(code *)*puVar7)(plVar13,puVar7[1]);
  }
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Events_UnityEvent<OVRPassthroughLayer>_TypeInfo);
  FUN_079191f8(uVar9,uVar14,uVar8,0,uVar6,0);
  plVar13 = *(long **)(unaff_x20 + 0x10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08496420) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_tts_utterance_t_speech_buffer_get;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_08496420,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_tts_utterance_t_speech_buffer_get:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Events_UnityEvent<LogEntry>_TypeInfo);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo)
      {
        lVar10 = lVar10 + (long)(*piVar12 + 0xf) * 0x10 + 0x138;
        goto LAB_07904304;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar10 = FUN_03ac43c4(plVar13,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,0xf);
LAB_07904304:
  FUN_0496d698(uVar14,plVar13,*(undefined8 *)(lVar10 + 8),0);
  lVar10 = FUN_0481a690();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar10,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
  uVar11 = FUN_0587c6c4(&stack0x00000018,
                        *(undefined8 *)
                         Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
  if ((uVar11 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6878(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar10 = FUN_0587c704(&stack0x00000018,
                          *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078fd284();
    puVar5 = PTR_DAT_0849d120;
    uVar14 = *(undefined8 *)(lVar10 + 0x20);
    iVar2 = *(int *)(*unaff_x29 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar14,*(undefined8 *)puVar5);
  }
  return;
}


