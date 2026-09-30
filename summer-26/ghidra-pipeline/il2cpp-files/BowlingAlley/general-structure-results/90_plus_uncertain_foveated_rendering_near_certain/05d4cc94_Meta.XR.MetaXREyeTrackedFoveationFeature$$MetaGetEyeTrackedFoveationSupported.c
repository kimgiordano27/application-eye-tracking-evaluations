/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 05d4cc94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x26;
  
  puVar1 = (undefined8 *)FUN_032937ac();
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
                    /* try { // try from 05d4cd04 to 05e4cdd7 has its CatchHandler @ 05d4cd04
                       catch() { ... } // from try @ 05d4cd04 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4cee8 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4cf90 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4cfb0 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4d038 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4d080 with catch @ 05d4cd04
                       catch() { ... } // from try @ 05d4d11c with catch @ 05d4cd04 */
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d4cd08;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac(plVar2,*unaff_x26,0);
LAB_05d4cd08:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_05d4cd68;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
    (*(code *)*puVar1)();
    if (*unaff_x19 != 0) {
      return *(undefined4 *)(*unaff_x19 + 0x3c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


