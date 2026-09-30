/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 074098b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08eb1b60);
  *(undefined1 *)(unaff_x20 + 0xa31) = 1;
  in_stack_00000068 = unaff_x19;
  thunk_FUN_03d233cc(&stack0x00000068);
  if ((in_stack_00000068 != 0) &&
     (lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08eb6470,*(undefined4 *)(in_stack_00000068 + 0x18)
                          ), puVar1 = PTR_DAT_08eb1b60, in_stack_00000068 != 0)) {
                    /* try { // try from 07409900 to 07509977 has its CatchHandler @ 074099cc */
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar3 + 0x24);
    do {
      if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)uVar5) {
        lVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_07409afc();
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
          thunk_FUN_03d233cc((long *)(lVar4 + 0x10),lVar3);
          return lVar4;
        }
        break;
      }
      if (*(uint *)(in_stack_00000068 + 0x18) <= uVar5) {
LAB_074099f8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      FUN_0736ae04(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + uVar5 * 8 + 0x20),1,0);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_07409a00(uVar5 & 0xffffffff,&stack0x00000068);
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000028 = in_stack_00000048;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_074099f8;
      *(undefined4 *)((long)puVar6 + -4) = uVar2;
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)puVar6 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)puVar6 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      puVar6[1] = CONCAT44(uStack000000000000004c,in_stack_00000048);
      *puVar6 = in_stack_00000040;
      puVar6 = puVar6 + 4;
    } while (in_stack_00000068 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


