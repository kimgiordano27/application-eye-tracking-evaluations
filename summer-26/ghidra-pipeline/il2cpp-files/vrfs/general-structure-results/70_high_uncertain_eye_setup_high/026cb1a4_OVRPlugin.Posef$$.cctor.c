/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 026cb1a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 8) + 8))();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_031c8668(uVar4,0);
  if (in_stack_00000008 != 0) {
    lVar1 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06df8b20,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    if (lVar1 == 0) {
      FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar2 = thunk_FUN_015d0480(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(lVar1,lVar5);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar6 = 0;
      plVar7 = (long *)(lVar2 + 0x20);
      do {
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        if (uVar3 <= uVar6) {
LAB_026cb30c:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (*plVar7 == 0) {
          FUN_031dba18(0x11,0);
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        }
        if (uVar3 <= uVar6) goto LAB_026cb30c;
        plVar7 = plVar7 + 2;
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar1 = FUN_03f038c8(0);
    if (lVar1 != 0) {
      FUN_04d772fc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


