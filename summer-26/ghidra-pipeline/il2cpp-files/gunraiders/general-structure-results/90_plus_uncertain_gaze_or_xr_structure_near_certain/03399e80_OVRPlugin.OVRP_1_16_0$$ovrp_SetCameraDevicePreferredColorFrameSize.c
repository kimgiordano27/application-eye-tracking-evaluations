/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_SetCameraDevicePreferredColorFrameSize
ENTRY_POINT: 03399e80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_16_0__ovrp_SetCameraDevicePreferredColorFrameSize(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined *puVar4;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x23 + 0x6c2) = 1;
  if (unaff_x20 == 0) {
LAB_03399fdc:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(long *)(unaff_x20 + 0x110) != 0) {
    if (*(char *)(unaff_x20 + 0x120) != '\0') goto LAB_03399fb8;
    *unaff_x21 = 0;
    lVar7 = *(long *)(unaff_x20 + 0x110);
    lVar6 = *(long *)PTR_DAT_0422f958;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_01c723f0(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (lVar7 == 0) goto LAB_03399fdc;
    lVar5 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),**(undefined8 **)(lVar5 + 0xb8),
                       *(undefined8 *)(lVar7 + 0x28));
    if (lVar5 == 0) {
      return 0;
    }
    goto OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice;
  }
  if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_03399fb8;
  lVar5 = *(long *)(unaff_x20 + 0x80);
  if (lVar5 != 0) {
    if (*(char *)(unaff_x20 + 0x88) != '\0') {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_03399fdc;
      if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x30) != 1) goto LAB_03399fac;
    }
    lVar5 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    if (*(char *)(unaff_x20 + 0x100) != '\0') {
      lVar5 = OVRPlugin_Sizei___cctor();
    }
    *unaff_x21 = 0;
    if (lVar5 == 0) {
      return 0;
    }
OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice:
    uVar8 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
    lVar6 = thunk_FUN_01c495e4(lVar5,uVar8);
    if (lVar6 != 0) {
      return lVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(lVar5,uVar8);
  }
LAB_03399fac:
  uVar2 = FUN_03390838();
  if ((uVar2 & 1) == 0) {
    cVar1 = *(char *)(unaff_x20 + 0x2a);
    lVar5 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_03295500(0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
    puVar4 = Method_System_Collections_Generic_HashSet<IClippable>__ctor__;
    if (cVar1 == '\0') {
      puVar4 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
    }
    uVar3 = thunk_FUN_01c273e8(puVar4);
    FUN_0336f2b8(uVar3,uVar8,uVar9,0);
    uVar8 = FUN_0335cdc4();
    uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar8,uVar9);
  }
LAB_03399fb8:
  *unaff_x21 = 1;
  lVar5 = FUN_033914f0();
  return lVar5;
}


