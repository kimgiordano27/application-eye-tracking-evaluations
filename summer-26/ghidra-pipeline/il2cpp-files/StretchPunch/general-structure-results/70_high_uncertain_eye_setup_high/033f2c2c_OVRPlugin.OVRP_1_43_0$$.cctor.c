/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 033f2c2c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_43_0___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  thunk_FUN_01e10808(*(undefined8 *)(*unaff_x20 + 0xb8));
  uVar2 = FUN_01d7d9bc(*unaff_x25,0x13);
  FUN_032ff394(uVar2,*unaff_x24,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = FUN_01d7d9bc(*unaff_x23,0x51);
  FUN_032ff394(uVar2,*unaff_x22,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  lVar4 = FUN_01d7d9bc(*unaff_x21,8);
  uVar2 = _DAT_00bb0cd0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar4 + 0x28) = _UNK_00bb0cd8;
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    uVar2 = _DAT_00bb1d40;
    if (uVar1 != 1) {
      *(undefined8 *)(lVar4 + 0x38) = _UNK_00bb1d48;
      *(undefined8 *)(lVar4 + 0x30) = uVar2;
      uVar2 = _DAT_00bb1ee0;
      if (2 < uVar1) {
        *(undefined8 *)(lVar4 + 0x48) = _UNK_00bb1ee8;
        *(undefined8 *)(lVar4 + 0x40) = uVar2;
        uVar2 = _DAT_00bb0450;
        if (uVar1 != 3) {
          *(undefined8 *)(lVar4 + 0x58) = _UNK_00bb0458;
          *(undefined8 *)(lVar4 + 0x50) = uVar2;
          uVar2 = _DAT_00bb1f90;
          if (4 < uVar1) {
            *(undefined8 *)(lVar4 + 0x68) = _UNK_00bb1f98;
            *(undefined8 *)(lVar4 + 0x60) = uVar2;
            uVar2 = _DAT_00bb1430;
            if (uVar1 != 5) {
              *(undefined8 *)(lVar4 + 0x78) = _UNK_00bb1438;
              *(undefined8 *)(lVar4 + 0x70) = uVar2;
              uVar2 = _DAT_00bb02e0;
              if (6 < uVar1) {
                *(undefined8 *)(lVar4 + 0x88) = _UNK_00bb02e8;
                *(undefined8 *)(lVar4 + 0x80) = uVar2;
                uVar2 = _DAT_00bb0170;
                if (uVar1 != 7) {
                  *(undefined8 *)(lVar4 + 0x98) = _UNK_00bb0178;
                  *(undefined8 *)(lVar4 + 0x90) = uVar2;
                  *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar4;
                  thunk_FUN_01e10808();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


