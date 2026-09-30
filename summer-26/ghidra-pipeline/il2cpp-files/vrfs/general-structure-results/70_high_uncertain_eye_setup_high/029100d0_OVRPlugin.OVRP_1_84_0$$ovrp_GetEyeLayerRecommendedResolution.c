/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetEyeLayerRecommendedResolution
ENTRY_POINT: 029100d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_GetEyeLayerRecommendedResolution(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int iVar8;
  long *plVar9;
  
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02910174;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 02910118 to 02a10233 has its CatchHandler @ 02910118
                       catch() { ... } // from try @ 02910118 with catch @ 02910118
                       catch() { ... } // from try @ 02910360 with catch @ 02910118
                       catch() { ... } // from try @ 029103e8 with catch @ 02910118
                       catch() { ... } // from try @ 029103f0 with catch @ 02910118
                       catch() { ... } // from try @ 02910494 with catch @ 02910118 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02910174:
  iVar1 = (*(code *)*puVar2)();
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_015c2790(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02910200;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar9,lVar4,0);
LAB_02910200:
      (*(code *)*puVar2)(plVar9,iVar8,puVar2[1]);
      memcpy(&stack0x00000058,&stack0x00000000,0x58);
      memcpy(&stack0x00000000,&stack0x00000058,0x58);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1)
          == 0) {
        FUN_015c2790();
      }
      lVar4 = thunk_FUN_015d01b0();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
      thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
      iVar8 = iVar8 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}


