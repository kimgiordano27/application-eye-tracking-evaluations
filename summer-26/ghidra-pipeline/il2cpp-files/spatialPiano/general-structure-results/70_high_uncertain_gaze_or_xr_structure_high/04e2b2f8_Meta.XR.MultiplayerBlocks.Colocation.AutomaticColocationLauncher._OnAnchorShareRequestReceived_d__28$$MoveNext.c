/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 04e2b2f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
                (long param_1)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  do {
    plVar3 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    do {
      if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x25) {
LAB_04e2b400:
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
LAB_04e2b430:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      puVar4 = unaff_x23;
      if (-1 < *(int *)(*plVar3 + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x23;
      }
      lVar2 = plVar3[2];
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      FUN_02f0939c(param_1,lVar2);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_04e2b3c8:
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return unaff_x25 & 0xffffffff;
        }
        goto LAB_04e2b430;
      }
      do {
        unaff_x25 = unaff_x25 + 1;
        if (unaff_x26 == unaff_x25) {
          unaff_x25 = 0xffffffff;
          goto LAB_04e2b3c8;
        }
        if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x25) goto LAB_04e2b400;
        memcpy(unaff_x23,(void *)(unaff_x27 + unaff_x25 * *(uint *)(*unaff_x20 + 0x104)),unaff_x21);
        uVar1 = FUN_02f08978(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
      } while ((uVar1 & 1) == 0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      __src = unaff_x22;
      if (-1 < *(int *)(**(long **)(lVar2 + 0xc0) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x23,__src,unaff_x21);
      plVar3 = *(long **)(lVar2 + 0xc0);
      param_1 = *plVar3;
    } while ((*(ushort *)(param_1 + 0x135) & 1) != 0);
    param_1 = FUN_02f41e9c();
  } while( true );
}


