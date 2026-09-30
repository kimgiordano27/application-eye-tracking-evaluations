/*
FUNCTION_NAME: OVRManager$$get_chromatic
ENTRY_POINT: 076ad318
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_chromatic(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 in_w8;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x20 + 0x6f) = in_w8;
  puVar1 = PTR_DAT_08f65598;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000018 = 0;
  _uStack0000000000000010 = 0;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar8 = FUN_07713e20(*(long *)(unaff_x19 + 0x30),0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_0858816c(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076ad46c;
      uVar8 = FUN_0861a534(uVar8,param_2,param_3,*(long *)(unaff_x19 + 0x38),0);
    }
    lVar3 = FUN_085849e0();
    if (lVar3 != 0) {
      FUN_0859895c(uVar8,param_2,param_3,lVar3,0);
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f6a1b8) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
              goto LAB_076ad420;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076ad420:
        uVar2 = (*(code *)*puVar4)(plVar7);
        if ((uVar2 & 1) != 0) {
          lVar3 = FUN_085849e0();
          if (lVar3 == 0) goto LAB_076ad46c;
          FUN_08598b14(uStack0000000000000008._4_4_,uStack0000000000000010,uStack0000000000000014,
                       uStack0000000000000018,lVar3,0);
        }
        return;
      }
    }
  }
LAB_076ad46c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


