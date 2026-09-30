/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Supported
ENTRY_POINT: 01d8ff04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_faceTracking2Supported(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0234c1b0 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0234c1b0)
       ) {
      if (unaff_x20 == (long *)0x0) {
LAB_01d90074:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (unaff_x20[4] == unaff_x19[4]) {
        uVar2 = (**(code **)(*unaff_x20 + 0x1a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
        uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        uVar4 = FUN_01cc86b0(uVar2,uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = unaff_x19[0xd];
          if (unaff_x20[0xd] == 0) {
            if (lVar5 == 0) {
              return 1;
            }
            uVar2 = *(undefined8 *)(lVar5 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
          }
          else {
            uVar2 = *(undefined8 *)(unaff_x20[0xd] + 0x10);
            if (lVar5 != 0) {
              uVar3 = *(undefined8 *)(lVar5 + 0x10);
              if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              uVar4 = FUN_01d603ec(uVar2,uVar3,0);
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              if ((unaff_x20[0xd] != 0) && (unaff_x19[0xd] != 0)) {
                uVar2 = thunk_FUN_01c50bfc(*(undefined8 *)(unaff_x20[0xd] + 0x18),
                                           *(undefined8 *)(unaff_x19[0xd] + 0x18),0);
                return uVar2;
              }
              goto LAB_01d90074;
            }
            if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
          }
          uVar2 = FUN_01d603ec(uVar2,0,0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}


