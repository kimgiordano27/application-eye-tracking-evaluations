/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_get
ENTRY_POINT: 078b11c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  FUN_03a8a718(System_Collections_Generic_List<QDQDOOQQDQODD>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08488b88);
  FUN_03a8a718(PTR_DAT_08494c40);
  FUN_03a8a718(PTR_DAT_08494c48);
  FUN_03a8a718(PTR_DAT_08494c50);
  FUN_03a8a718(PTR_DAT_08494c58);
  FUN_03a8a718(PTR_DAT_08494c60);
  FUN_03a8a718(PTR_DAT_08494c68);
  FUN_03a8a718(PTR_DAT_08494c70);
  FUN_03a8a718(System_Collections_Generic_List<QosAnnotatedResult>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<QosResult>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x913) = 1;
  puVar1 = PTR_DAT_08488b88;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 8);
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<QosResult>_TypeInfo);
    FUN_0679343c(lVar2,0);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08494c68);
    FUN_0587dc28(lVar3,*(undefined8 *)PTR_DAT_08494c58);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = lVar3;
    thunk_FUN_03afed3c(plVar8,lVar3);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = *(long **)(lVar10 + 0x78);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
    FUN_066b5934(uVar4,lVar2,
                 *(undefined8 *)System_Collections_Generic_List<QosAnnotatedResult>_TypeInfo,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *plVar9;
    uVar11 = *(undefined8 *)(unaff_x19 + 10);
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08494c40) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_078b136c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08494c40,0);
LAB_078b136c:
    (*(code *)*puVar5)(uVar11,plVar9,uVar4,puVar5[1]);
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *(long *)(*plVar8 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_058b71ec(lVar2,*(undefined8 *)PTR_DAT_08494c70);
    uVar6 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_08494c50);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e32d0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_08494c48);
  lVar2 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


