/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_6
ENTRY_POINT: 076eb794
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRPlugin_<>c__<_cctor>b__657_6
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar2 = FUN_085849e0();
                    /* try { // try from 076eb7a4 to 077eb7cb has its CatchHandler @ 076ebba4 */
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (FUN_08598884(*(long *)(unaff_x19 + 0x20),0), lVar2 == 0))
  goto OVRPlugin_<>c__<_cctor>b__657_12;
  FUN_0859895c(lVar2,0);
  puVar1 = PTR_DAT_08fae5e8;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    lVar2 = FUN_085849e0();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x50);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fae5e8) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076eb92c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fae5e8,1);
LAB_076eb92c:
    (*(code *)*puVar3)(plVar7,unaff_x19 + 0x3c,puVar3[1]);
    lVar2 = FUN_085849e0();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    plVar7 = *(long **)(unaff_x19 + 0x50);
    uVar8 = FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_08594c28(0);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076eb9d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,2);
LAB_076eb9d4:
    (*(code *)*puVar3)(uVar8,param_2,param_3,param_4,uVar9,plVar7,puVar3[1]);
  }
  if (lVar2 != 0) {
    FUN_08598b14(lVar2,0);
    return;
  }
OVRPlugin_<>c__<_cctor>b__657_12:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


