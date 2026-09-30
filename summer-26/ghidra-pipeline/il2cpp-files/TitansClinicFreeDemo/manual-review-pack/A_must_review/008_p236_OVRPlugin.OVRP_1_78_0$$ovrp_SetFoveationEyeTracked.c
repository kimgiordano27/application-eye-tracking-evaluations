/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 01f9f45c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 159
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(void)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *plVar10;
  uint unaff_w23;
  long *unaff_x24;
  long lVar11;
  undefined8 *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  char cStack0000000000000030;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
  *(undefined1 *)(unaff_x19 + 0xf61) = 1;
  cStack0000000000000034 = '\0';
  cStack0000000000000030 = '\0';
  uStack000000000000002c = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9e0f8(unaff_w22,&stack0x00000038,unaff_w23 & 1,&stack0x00000034,&stack0x00000030,
               &stack0x0000002c);
  lVar7 = FUN_01f9f5f4();
  if (lVar7 != 0) {
    FUN_018de658(&stack0x00000010,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_027c1f18);
    cVar3 = cStack0000000000000034;
    cVar2 = cStack0000000000000030;
    puVar1 = PTR_DAT_027c1f10;
    uVar5 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar5) {
      lVar11 = 0;
      do {
        if (uVar5 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar10 = *(long **)(lVar7 + 0x20 + lVar11 * 8);
        if (plVar10 == (long *)0x0) goto LAB_01f9f5ec;
        uVar5 = FUN_01ef5150(plVar10,0);
        uVar6 = FUN_01ef5150(plVar10,0);
        uVar4 = in_stack_00000038;
        if ((uVar5 & (unaff_w22 ^ 2)) == uVar6) {
          if (cVar3 != '\0') {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f9e2bc(plVar10,uVar4,cVar2 != '\0');
            if ((uVar8 & 1) == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
          }
          if (unaff_x20 != 0) {
            lVar9 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (lVar9 == 0) goto LAB_01f9f5ec;
            if (*(int *)(lVar9 + 0x18) != *(int *)(unaff_x20 + 0x18))
            goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
          }
          FUN_018de888(&stack0x00000010,plVar10,*(undefined8 *)puVar1);
        }
OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking:
        uVar5 = *(uint *)(lVar7 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar5);
    }
    in_stack_00000008[2] = uStack0000000000000020;
    in_stack_00000008[1] = uStack0000000000000018;
    *in_stack_00000008 = uStack0000000000000010;
    return;
  }
LAB_01f9f5ec:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


