/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_terminate_create
ENTRY_POINT: 0786a838
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_terminate_create(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  FUN_04962b78();
  lVar1 = FUN_044c97ac();
  if (lVar1 == 0) {
    uVar4 = *unaff_x21;
    thunk_FUN_03af1434(System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo);
    uVar3 = thunk_FUN_03ac74bc();
    FUN_0786aa64(uVar3,uVar4);
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_IEnumerable<Collider>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar4);
  }
  lVar1 = FUN_07867650();
  if (lVar1 != 0) {
    in_stack_00000018 = FUN_067c4bec(lVar1,0);
    uVar2 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e91c0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_0666e9a8(&stack0x00000018,0);
      lVar1 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


