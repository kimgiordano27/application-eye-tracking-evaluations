/*
FUNCTION_NAME: OVRPlugin$$DestroyMarkerTracker
ENTRY_POINT: 05331b3c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__DestroyMarkerTracker(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar7;
  float fVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xbf0));
  FUN_02f08768(System_Predicate<DebugUI_Panel>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x322) = 1;
  plVar7 = *(long **)(unaff_x19 + 0x10);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_05331bc4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar7,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,6);
LAB_05331bc4:
    (*(code *)*puVar3)((long)&stack0x00000000 + 4,plVar7,puVar3[1]);
    *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
    *(byte *)(unaff_x19 + 0x20) = in_stack_00000000._4_1_ >> 5 & 1;
    *(byte *)(unaff_x19 + 0x21) = in_stack_00000000._4_1_ >> 4 & 1;
    puVar2 = System_Predicate<DebugUI_Panel>_TypeInfo;
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Predicate<DebugUI_Panel>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_05331c54;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05331c54:
      (*(code *)*puVar3)();
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_05331cb8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05331cb8:
      (*(code *)*puVar3)();
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_05331d1c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05331d1c:
      (*(code *)*puVar3)();
      FUN_052c252c(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
      FUN_052c252c(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
      fVar8 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
      fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar8;
      if (fVar8 <= 0.0) {
        fVar1 = 0.5;
      }
      FUN_052c2534(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


