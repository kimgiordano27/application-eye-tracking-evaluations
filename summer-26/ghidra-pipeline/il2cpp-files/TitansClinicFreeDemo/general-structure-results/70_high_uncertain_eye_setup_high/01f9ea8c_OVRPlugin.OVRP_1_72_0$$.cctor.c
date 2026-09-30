/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$.cctor
ENTRY_POINT: 01f9ea8c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_72_0___cctor(void)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int unaff_w19;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *plVar7;
  ulong uVar8;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000030;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 01f9ea8c to 0209eb1f has its CatchHandler @ 01f9e4b4 */
  lVar4 = FUN_01f9ec24();
  if (lVar4 != 0) {
    FUN_018de658(&stack0x00000010,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_027c1ee8);
    cVar1 = cStack0000000000000030;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar7 = *(long **)(lVar4 + 0x20 + uVar8 * 8);
        if (unaff_w19 == -1) {
LAB_01f9eb54:
          if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f9e620(plVar7,unaff_w23,unaff_w22);
          uVar2 = in_stack_00000038;
          if ((uVar6 & 1) != 0) {
            if (cStack0000000000000034 != '\0') {
              if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar6 = FUN_01f9e2bc(plVar7,uVar2,cVar1 != '\0');
              if ((uVar6 & 1) == 0) goto LAB_01f9ebd8;
            }
            FUN_018de888(&stack0x00000010,plVar7,*(undefined8 *)PTR_DAT_027c1ee0);
          }
        }
        else {
          if (plVar7 == (long *)0x0) goto OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard;
          bVar3 = (**(code **)(*plVar7 + 0x2b8))(plVar7,*(undefined8 *)(*plVar7 + 0x2c0));
          if ((unaff_w19 == 0 & bVar3) != (unaff_w19 < 1 | bVar3 & 1)) {
            lVar5 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
            if (lVar5 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard;
            if (*(int *)(lVar5 + 0x18) == unaff_w19) goto LAB_01f9eb54;
          }
        }
LAB_01f9ebd8:
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    in_stack_00000000[2] = in_stack_00000020;
    in_stack_00000000[1] = in_stack_00000018;
    *in_stack_00000000 = in_stack_00000010;
    return;
  }
OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


