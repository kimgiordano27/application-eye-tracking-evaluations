/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<LoadAssembliesMainThread>d__18$$MoveNext
ENTRY_POINT: 052c5304
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<LoadAssembliesMainThread>d__18__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  while (lVar1 = FUN_03fd09cc(param_4,unaff_w21,param_6), unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x80);
    if ((lVar2 == 0) || (uVar7 = param_2, uVar10 = param_3, *(long *)(lVar2 + 0x18) == 0)) {
      FUN_052c35a0();
      lVar2 = *(long *)(unaff_x19 + 0x80);
      uVar7 = param_2;
      uVar10 = param_3;
      if (lVar2 == 0) break;
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w24) {
LAB_052c5484:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    if ((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
        (lVar2 = FUN_03fd09cc(lVar2,unaff_w21,*unaff_x25), lVar1 == 0)) ||
       (*(long *)(lVar1 + 0x10) == 0)) break;
    FUN_066d320c(*(long *)(lVar1 + 0x10),0);
    uVar3 = FUN_052c3c94();
    if (*(long *)(lVar1 + 0x10) == 0) break;
    uVar8 = uVar7;
    uVar11 = uVar10;
    FUN_066d320c(*(long *)(lVar1 + 0x10),0);
    uVar4 = FUN_052c3c94();
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) break;
    uVar9 = uVar8;
    uVar12 = uVar11;
    FUN_066d320c(*(long *)(lVar2 + 0x10),0);
    uVar5 = FUN_052c3c94();
    if (*(long *)(lVar2 + 0x10) == 0) break;
    param_2 = uVar9;
    param_3 = uVar12;
    FUN_066d320c(*(long *)(lVar2 + 0x10),0);
    uVar6 = FUN_052c3c94();
    *(undefined4 *)(lVar1 + 0x18) = uVar3;
    *(undefined4 *)(lVar1 + 0x1c) = uVar7;
    *(undefined4 *)(lVar1 + 0x30) = uVar5;
    *(undefined4 *)(lVar1 + 0x34) = uVar9;
    *(undefined4 *)(lVar1 + 0x20) = uVar10;
    *(undefined4 *)(lVar1 + 0x24) = uVar4;
    *(undefined4 *)(lVar1 + 0x38) = uVar12;
    *(undefined4 *)(lVar1 + 0x3c) = uVar6;
    *(undefined4 *)(lVar1 + 0x40) = param_2;
    *(undefined4 *)(lVar1 + 0x44) = param_3;
    *(undefined4 *)(lVar1 + 0x28) = uVar8;
    *(undefined4 *)(lVar1 + 0x2c) = uVar11;
    param_4 = *(long *)(unaff_x27 + 0x20);
    unaff_w21 = unaff_w21 + 1;
    if (param_4 == 0) break;
    while (*(int *)(param_4 + 0x18) <= unaff_w21) {
      unaff_w24 = unaff_w24 + 1;
      lVar1 = *(long *)(unaff_x20 + 0x80);
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
        FUN_052c35a0();
        lVar1 = *(long *)(unaff_x20 + 0x80);
        if (lVar1 == 0) goto LAB_052c5480;
      }
      if ((int)*(long *)(lVar1 + 0x18) <= (int)unaff_w24) {
        return;
      }
      if (*(long *)(lVar1 + 0x18) == 0) {
        FUN_052c35a0();
        lVar1 = *(long *)(unaff_x20 + 0x80);
        if (lVar1 == 0) goto LAB_052c5480;
      }
      if (*(uint *)(lVar1 + 0x18) <= unaff_w24) goto LAB_052c5484;
      unaff_x26 = (long)(int)unaff_w24;
      unaff_x27 = *(long *)(lVar1 + unaff_x26 * 8 + 0x20);
      if ((unaff_x27 == 0) || (param_4 = *(long *)(unaff_x27 + 0x20), param_4 == 0))
      goto LAB_052c5480;
      unaff_w21 = 0;
    }
    param_6 = *unaff_x25;
  }
LAB_052c5480:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


