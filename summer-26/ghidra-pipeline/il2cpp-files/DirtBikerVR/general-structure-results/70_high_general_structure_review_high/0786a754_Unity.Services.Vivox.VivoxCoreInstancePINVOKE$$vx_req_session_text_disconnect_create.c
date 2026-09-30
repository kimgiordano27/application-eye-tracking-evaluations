/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_text_disconnect_create
ENTRY_POINT: 0786a754
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_text_disconnect_create(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08488b88);
  FUN_03a8a718(System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_IEnumerable<byte>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_IEnumerable<char>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_IEnumerable<Claim>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x675) = 1;
  puVar1 = PTR_DAT_08488b88;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 10);
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_IEnumerable<char>_TypeInfo)
    ;
    FUN_0679343c(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    *puVar7 = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03afed3c(puVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078669a8(lVar6,*(undefined8 *)System_Collections_Generic_IEnumerable<Claim>_TypeInfo);
    uVar3 = FUN_07866938(lVar6);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo
                              );
    FUN_04962b78(uVar4,lVar2,*(undefined8 *)System_Collections_Generic_IEnumerable<byte>_TypeInfo,0)
    ;
    lVar2 = FUN_044c97ac(uVar3,uVar4,
                         *(undefined8 *)
                          System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo
                        );
    if (lVar2 == 0) {
      uVar4 = *puVar7;
      thunk_FUN_03af1434(System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo);
      uVar3 = thunk_FUN_03ac74bc();
      FUN_0786aa64(uVar3,uVar4);
      uVar4 = thunk_FUN_03af1434(System_Collections_Generic_IEnumerable<Collider>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar3,uVar4);
    }
    lVar2 = FUN_07867650(lVar6,*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar2,0);
    uVar5 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e91c0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  lVar2 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


