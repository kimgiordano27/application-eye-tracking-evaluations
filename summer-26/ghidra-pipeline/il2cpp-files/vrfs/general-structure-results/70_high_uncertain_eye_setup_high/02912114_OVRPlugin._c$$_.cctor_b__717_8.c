/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_8
ENTRY_POINT: 02912114
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__717_8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *plVar7;
  long unaff_x25;
  
  do {
    if (in_w8 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = unaff_x25;
    thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,unaff_x25);
    unaff_w24 = unaff_w24 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w24 == unaff_w23) {
      return;
    }
    plVar7 = *(long **)(unaff_x21 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02912098;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02912098:
    (*(code *)*puVar1)(plVar7,unaff_w24,puVar1[1]);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1) ==
        0) {
      FUN_015c2790();
    }
    unaff_x25 = thunk_FUN_015d01b0();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((unaff_x25 != 0) &&
       (lVar3 = thunk_FUN_015d0480(unaff_x25,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar2 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar2,0);
    }
    in_w8 = *(uint *)(unaff_x22 + 3);
  } while( true );
}


