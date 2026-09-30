/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$<LoadAssembliesAsync>b__19_1
ENTRY_POINT: 052c52b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c__<LoadAssembliesAsync>b__19_1
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  int iVar3;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  do {
    if ((int)in_x9 <= (int)unaff_w24) {
      return;
    }
    if (in_x9 == 0) {
      FUN_052c35a0();
      param_1 = *(long *)(unaff_x20 + 0x80);
      if (param_1 == 0) goto LAB_052c5480;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w24) {
LAB_052c5484:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar4 = *(long *)(param_1 + (long)(int)unaff_w24 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar1 = *(long *)(lVar4 + 0x20), lVar1 == 0)) {
LAB_052c5480:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar3 = 0;
    while (iVar3 < *(int *)(lVar1 + 0x18)) {
      lVar1 = FUN_03fd09cc(lVar1,iVar3,*unaff_x25);
      if (unaff_x19 == 0) goto LAB_052c5480;
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if ((lVar2 == 0) || (uVar9 = param_3, uVar12 = param_4, *(long *)(lVar2 + 0x18) == 0)) {
        FUN_052c35a0();
        lVar2 = *(long *)(unaff_x19 + 0x80);
        uVar9 = param_3;
        uVar12 = param_4;
        if (lVar2 == 0) goto LAB_052c5480;
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w24) goto LAB_052c5484;
      lVar2 = *(long *)(lVar2 + (long)(int)unaff_w24 * 8 + 0x20);
      if ((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
          (lVar2 = FUN_03fd09cc(lVar2,iVar3,*unaff_x25), lVar1 == 0)) ||
         (*(long *)(lVar1 + 0x10) == 0)) goto LAB_052c5480;
      FUN_066d320c(*(long *)(lVar1 + 0x10),0);
      uVar5 = FUN_052c3c94();
      if (*(long *)(lVar1 + 0x10) == 0) goto LAB_052c5480;
      uVar10 = uVar9;
      uVar13 = uVar12;
      FUN_066d320c(*(long *)(lVar1 + 0x10),0);
      uVar6 = FUN_052c3c94();
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) goto LAB_052c5480;
      uVar11 = uVar10;
      uVar14 = uVar13;
      FUN_066d320c(*(long *)(lVar2 + 0x10),0);
      uVar7 = FUN_052c3c94();
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_052c5480;
      param_3 = uVar11;
      param_4 = uVar14;
      FUN_066d320c(*(long *)(lVar2 + 0x10),0);
      uVar8 = FUN_052c3c94();
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar9;
      *(undefined4 *)(lVar1 + 0x30) = uVar7;
      *(undefined4 *)(lVar1 + 0x34) = uVar11;
      *(undefined4 *)(lVar1 + 0x20) = uVar12;
      *(undefined4 *)(lVar1 + 0x24) = uVar6;
      *(undefined4 *)(lVar1 + 0x38) = uVar14;
      *(undefined4 *)(lVar1 + 0x3c) = uVar8;
      *(undefined4 *)(lVar1 + 0x40) = param_3;
      *(undefined4 *)(lVar1 + 0x44) = param_4;
      *(undefined4 *)(lVar1 + 0x28) = uVar10;
      *(undefined4 *)(lVar1 + 0x2c) = uVar13;
      lVar1 = *(long *)(lVar4 + 0x20);
      iVar3 = iVar3 + 1;
      if (lVar1 == 0) goto LAB_052c5480;
    }
    unaff_w24 = unaff_w24 + 1;
    param_1 = *(long *)(unaff_x20 + 0x80);
    if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
      FUN_052c35a0();
      param_1 = *(long *)(unaff_x20 + 0x80);
      if (param_1 == 0) goto LAB_052c5480;
    }
    in_x9 = *(long *)(param_1 + 0x18);
  } while( true );
}


