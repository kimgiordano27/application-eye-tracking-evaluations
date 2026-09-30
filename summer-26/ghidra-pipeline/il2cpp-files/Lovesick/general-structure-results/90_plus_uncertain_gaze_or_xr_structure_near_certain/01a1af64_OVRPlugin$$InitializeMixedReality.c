/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 01a1af64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__InitializeMixedReality(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  puVar1 = Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__;
  if (unaff_x20 == (long *)0x0) {
LAB_01a1b18c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_01a1afc0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1afc0:
  lVar4 = (*(code *)*puVar2)();
  if (lVar4 == 0) {
    FUN_01a1b190();
    FUN_01a1b1cc();
  }
  else {
    lVar3 = FUN_01a0227c(lVar4,0);
    if (lVar3 == 0) {
      FUN_01a1b190();
    }
    else {
      FUN_01a0227c(lVar4,0);
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_01a1b060;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1b060:
      (*(code *)*puVar2)();
      FUN_01a1b20c();
      *(undefined1 *)(unaff_x19 + 0x58) = 0;
    }
    FUN_01a0238c(&stack0x00000020);
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    uStack0000000000000074 = uStack0000000000000034;
    uStack0000000000000070 = uStack0000000000000030;
    plVar7 = *(long **)(unaff_x19 + 0x68);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto OVRPlugin__IsMixedRealityInitialized;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    Method_System_Nullable<InputControlScheme>_get_HasValue__,2);
OVRPlugin__IsMixedRealityInitialized:
      (*(code *)*puVar2)(&stack0x00000020,plVar7,&stack0x00000060,puVar2[1]);
    }
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000050 = uStack0000000000000030;
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01a1b18c;
    FUN_01a33548(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x59) = 0;
  }
  return;
}


