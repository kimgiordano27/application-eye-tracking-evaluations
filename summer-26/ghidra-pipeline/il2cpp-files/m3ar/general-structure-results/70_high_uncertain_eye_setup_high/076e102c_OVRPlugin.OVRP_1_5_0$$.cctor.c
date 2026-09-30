/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 076e102c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0___cctor(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  undefined8 *unaff_x22;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fae2a8);
  *(undefined1 *)(unaff_x20 + 0x29b) = 1;
  plVar4 = (long *)FUN_040316d0(*unaff_x21,3);
  lVar5 = thunk_FUN_0406deb8(*unaff_x22);
  uVar8 = DAT_01a33010;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  *(undefined8 *)(lVar5 + 0x10) = uVar8;
  FUN_075273c0(lVar5,0);
  *(undefined4 *)(lVar5 + 0x1c) = 1;
  *(undefined4 *)(lVar5 + 0x14) = 0x42be0000;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar4 + 0x40));
  if (lVar6 != 0) {
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      lVar5 = thunk_FUN_0406deb8(*unaff_x22);
      *(undefined8 *)(lVar5 + 0x10) = uVar8;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      FUN_075273c0(lVar5,0);
      uVar1 = DAT_01a33018;
      *(undefined4 *)(lVar5 + 0x1c) = 2;
      *(undefined8 *)(lVar5 + 0x10) = uVar1;
      lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) goto LAB_076e123c;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
        plVar4[5] = lVar5;
        lVar5 = thunk_FUN_0406deb8(*unaff_x22);
        *(undefined8 *)(lVar5 + 0x10) = uVar8;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        FUN_075273c0(lVar5,0);
        *(undefined4 *)(lVar5 + 0x1c) = 1;
        *(undefined4 *)(lVar5 + 0x10) = 0x42f00000;
        *(undefined1 *)(lVar5 + 0x18) = 0;
        lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar4 + 0x40));
        puVar2 = PTR_DAT_08f70528;
        if (lVar6 == 0) goto LAB_076e123c;
        if (2 < *(uint *)(plVar4 + 3)) {
          plVar4[6] = lVar5;
          puVar3 = PTR_DAT_08fae2a8;
          lVar5 = *(long *)puVar2;
          *(long **)(unaff_x19 + 0x38) = plVar4;
          *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_08596c00(&stack0x00000000 + 4,0);
          lVar5 = *(long *)puVar3;
          *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000018;
          *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
          *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000000._4_8_;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar5 = *(long *)puVar3;
          }
          puVar7 = *(undefined8 **)(lVar5 + 0xb8);
          lVar6 = puVar7[1];
          if (lVar6 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fae278);
            FUN_05335310(lVar6,uVar8,*(undefined8 *)PTR_DAT_08fae2a0,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar6;
          }
          *(long *)(unaff_x19 + 0xa8) = lVar6;
          thunk_FUN_085843b0();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_076e123c:
  uVar8 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar8,0);
}


