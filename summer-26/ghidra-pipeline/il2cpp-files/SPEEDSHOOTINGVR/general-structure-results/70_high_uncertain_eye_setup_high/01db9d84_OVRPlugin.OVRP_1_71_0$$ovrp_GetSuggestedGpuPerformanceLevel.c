/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_GetSuggestedGpuPerformanceLevel
ENTRY_POINT: 01db9d84
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0__ovrp_GetSuggestedGpuPerformanceLevel(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  long lVar7;
  int unaff_w28;
  long *unaff_x29;
  
  do {
    lVar7 = *unaff_x26;
    plVar2 = (long *)thunk_FUN_0103ffe0(unaff_x24,lVar7);
    if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 01db9fec with catch @ 01dba01c */
                    /* try { // try from 01dba020 to 01eba02b has its CatchHandler @ 01dba040 */
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(unaff_x24,lVar7);
    }
    if (unaff_w28 == 0) {
      lVar7 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_01db9e30;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x26,1);
LAB_01db9e30:
      uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar5 & 1) == 0) goto LAB_01db9e70;
      uVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
      FUN_01dbb700(uVar4,plVar2);
      FUN_01dab44c(uVar4,0);
    }
    else {
LAB_01db9e70:
      lVar7 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01db9ebc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x26,0);
LAB_01db9ebc:
      (*(code *)*puVar3)(plVar2);
    }
    while( true ) {
      while( true ) {
        do {
          unaff_w22 = unaff_w22 + 1;
          if (unaff_w22 == unaff_w23) {
            if (DAT_0247da80 == '\0') {
              FUN_00fdc2e4(PTR_DAT_0234bc90);
              DAT_0247da80 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            return;
          }
          unaff_x24 = (long *)FUN_018985f8();
        } while (unaff_x24 == (long *)0x0);
        FUN_01898668();
        lVar7 = *unaff_x24;
        plVar2 = unaff_x24;
        if (lVar7 != *unaff_x29) {
          plVar2 = (long *)0x0;
        }
        if (plVar2 == (long *)0x0) break;
        lVar7 = *unaff_x21;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar7 = *unaff_x21;
        }
        uVar4 = FUN_00fdc2fc(lVar7);
        OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar2,unaff_w28,uVar4);
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0235a790))
      break;
      (**(code **)(lVar7 + 0x178))(unaff_x24);
    }
  } while( true );
}


