/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Values$$.ctor
ENTRY_POINT: 052d6d64
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Values___ctor
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_02f07e70(*(undefined8 *)(param_5 + 0x748));
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d3d750);
  FUN_02f07e70(PTR_DAT_06d3d758);
  *(undefined1 *)(unaff_x21 + 0xe3) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (unaff_x20 != 0) {
    uVar5 = FUN_066d320c();
    uVar3 = param_2;
    uVar7 = param_3;
    uVar6 = FUN_066d48c0();
    lVar2 = FUN_037f15fc();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x23);
    }
    uVar1 = FUN_066cd30c(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_052d6fdc;
      uVar4 = *(undefined8 *)(lVar2 + 0x60);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar4,0);
      if ((uVar1 & 1) != 0) {
        unaff_x20 = *(long *)(lVar2 + 0x60);
        if (unaff_x20 == 0) goto LAB_052d6fdc;
        FUN_066d4ae0(uVar5,param_2,param_3,param_4,unaff_x20,0);
        FUN_066d4960(uVar6,uVar3,uVar7,unaff_x20,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x180) != 0) {
      FUN_066d5054(*(long *)(unaff_x19 + 0x180),unaff_x20,0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x280);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066cd30c(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if ((((*(long *)(unaff_x19 + 0x280) == 0) ||
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x280) + 0x68), lVar2 == 0)) ||
            (lVar2 = *(long *)(lVar2 + 0x48), lVar2 == 0)) ||
           (((lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0 ||
             (lVar2 = FUN_052beaa4(lVar2,*(undefined4 *)(unaff_x19 + 0xdc),0), lVar2 == 0)) ||
            (*(long *)(unaff_x19 + 0x180) == 0)))) goto LAB_052d6fdc;
        FUN_066d4bec(*(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),
                     *(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                     *(long *)(unaff_x19 + 0x180),0);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d6fdc;
        FUN_066d3f5c(*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x14),
                     *(undefined4 *)(lVar2 + 0x18),*(long *)(unaff_x19 + 0x180),0);
      }
      *(undefined1 *)(unaff_x19 + 0x308) = 1;
      uVar3 = FUN_066c67ec(unaff_x20,0);
      lVar2 = FUN_03a8a358(uVar3,*(undefined8 *)PTR_DAT_06d3d748);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x20);
        uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3d750);
        FUN_04753b10();
        if (lVar2 != 0) {
          FUN_04759cb0(lVar2,uVar3,*(undefined8 *)PTR_DAT_06d3d758);
          return;
        }
      }
    }
  }
LAB_052d6fdc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


