/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 02c19260
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_useIPDInPositionTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  
  FUN_017fc350(PTR_DAT_038031d0);
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_0380b790);
  FUN_017fc350(PTR_DAT_0380b318);
  FUN_017fc350(PTR_DAT_0380b738);
  *(undefined1 *)(unaff_x21 + 0xeb8) = 1;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x1c8))();
    puVar3 = PTR_DAT_0380b788;
    puVar2 = PTR_DAT_0380b738;
    puVar1 = PTR_DAT_0380b318;
    in_stack_00000008._4_4_ = 0;
    if (lVar4 != 0) {
      uVar7 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          if (uVar7 <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar8 = *(long **)(lVar4 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_02c19474;
          if (plVar8[4] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
            uVar5 = FUN_02a43498(*(undefined8 *)puVar1,uVar5,0);
          }
          lVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar3);
          FUN_02c19af4(lVar6,plVar8,uVar5);
          if (lVar9 == 0) {
            if (unaff_x19 == 0) goto LAB_02c19474;
            FUN_02ae137c();
            if (plVar8[4] != 0) goto LAB_02c1939c;
          }
          else {
            *(long *)(lVar9 + 0x40) = lVar6;
            thunk_FUN_0188fd20((long *)(lVar9 + 0x40),lVar6);
            if (plVar8[4] != 0) {
              if (unaff_x19 == 0) goto LAB_02c19474;
LAB_02c1939c:
              FUN_02ae137c();
            }
          }
          uVar5 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
          FUN_02a43498(*(undefined8 *)puVar2,uVar5,0);
          (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (unaff_x19 == 0) goto LAB_02c19474;
          FUN_02ae137c();
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          uVar7 = *(uint *)(lVar4 + 0x18);
          lVar9 = lVar6;
        } while ((int)in_stack_00000008._4_4_ < (int)uVar7);
      }
      uVar5 = *(undefined8 *)PTR_DAT_038031d0;
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02bddb5c(uVar5,0);
      if (unaff_x19 != 0) {
        FUN_02ae0008();
        return;
      }
    }
  }
LAB_02c19474:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


