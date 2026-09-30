/*
FUNCTION_NAME: Unity.Services.Vivox.FailedDirectedTextMessage$$set_RequestId
ENTRY_POINT: 06016ae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_FailedDirectedTextMessage__set_RequestId(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x20 + 0xa96) = 1;
  if (unaff_x19 != (long *)0x0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 == 0xb) {
      return 0;
    }
    lVar2 = FUN_055c8638();
    lVar5 = *(long *)System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_02dcfd74(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if (lVar2 != 0) {
      uVar3 = FUN_055cc340(lVar2,0,**(undefined8 **)(lVar4 + 0xb8),0);
      if (*(int *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)
                            Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__);
      }
      uVar3 = FUN_06015e28(uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


