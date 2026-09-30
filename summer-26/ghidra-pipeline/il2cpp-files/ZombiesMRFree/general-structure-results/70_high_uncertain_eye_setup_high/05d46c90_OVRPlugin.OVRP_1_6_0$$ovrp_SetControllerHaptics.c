/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 05d46c90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int iVar6;
  long *plVar7;
  long unaff_x23;
  long *plVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  long lStack0000000000000028;
  
  plVar8 = *(long **)(unaff_x23 + 0xb60);
  iVar6 = 0;
  lStack0000000000000028 = 0;
  _uStack0000000000000008 = 0;
  _uStack0000000000000010 = 0;
  uStack0000000000000020 = 0;
  _uStack0000000000000018 = 0;
  do {
    uVar1 = FUN_05d46608();
    if ((uVar1 & 1) != 0) {
      if (lStack0000000000000028 == 0) goto LAB_05d46e04;
      lVar2 = FUN_068f5db8(lStack0000000000000028,0);
      if (*(char *)(unaff_x19 + 0x80) != '\0') {
        plVar7 = *(long **)(unaff_x19 + 0x38);
        if (plVar7 == (long *)0x0) goto LAB_05d46e04;
        lVar4 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *plVar8) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
              goto LAB_05d46d30;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*plVar8,9);
LAB_05d46d30:
        uVar1 = (*(code *)*puVar3)(plVar7,iVar6,&stack0x00000008,puVar3[1]);
        if ((uVar1 & 1) != 0) {
          if (lStack0000000000000028 == 0) goto LAB_05d46e04;
          FUN_06975428(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                       lStack0000000000000028,0);
          if ((lStack0000000000000028 == 0) ||
             (FUN_069754c0(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                           uStack0000000000000020,lStack0000000000000028,0), lVar2 == 0))
          goto LAB_05d46e04;
          uVar1 = FUN_068f8b88(lVar2,0);
          if ((uVar1 & 1) == 0) {
            FUN_068f8b44(lVar2,1,0);
            if (lStack0000000000000028 == 0) goto LAB_05d46e04;
            FUN_069755d0(lStack0000000000000028,0);
          }
          goto LAB_05d46de4;
        }
      }
      if (lVar2 == 0) {
LAB_05d46e04:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar1 = FUN_068f8b88(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (lStack0000000000000028 == 0) goto LAB_05d46e04;
        FUN_06975558(lStack0000000000000028,0);
        FUN_068f8b44(lVar2,0,0);
      }
    }
LAB_05d46de4:
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x1a) {
      return;
    }
  } while( true );
}


