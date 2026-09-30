/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 03a80bbc
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
               (undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong in_x10;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long unaff_x29;
  
  iVar1 = *(int *)(param_2 + 0xfc);
  iVar2 = *unaff_x19;
  if ((in_x10 & 1) == 0) {
    param_1 = FUN_02eea768(param_1);
    in_x9 = *(long *)(unaff_x21 + 0x38);
  }
  FUN_02f08988(param_1,*(undefined8 *)(in_x9 + 0x10));
  if (iVar2 < *(int *)(unaff_x29 + -0xc)) {
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))();
    if (iVar4 == 0x2b) {
      (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x20))();
    }
    else {
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))();
      if (iVar4 == 0x2d) {
        (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x20))();
        lVar10 = -1;
        goto LAB_03a80ca0;
      }
    }
  }
  lVar10 = 1;
LAB_03a80ca0:
  iVar4 = *unaff_x19;
  lVar8 = 0;
  iVar3 = iVar4;
  while( true ) {
    *unaff_x20 = lVar8;
    lVar9 = *(long *)(unaff_x21 + 0x38);
    lVar8 = *(long *)(lVar9 + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768();
      lVar9 = *(long *)(unaff_x21 + 0x38);
    }
    FUN_02f08988(lVar8,*(undefined8 *)(lVar9 + 0x10),
                 (long)&stack0x00000000 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0));
    if (*(int *)(unaff_x29 + -0xc) <= iVar3) break;
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))();
    uVar7 = FUN_060a4a64(uVar5,0);
    if ((uVar7 & 1) == 0) break;
    lVar8 = *unaff_x20;
    *unaff_x20 = lVar8 * 10;
    iVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x20))();
    iVar3 = *unaff_x19;
    lVar8 = lVar8 * 10 + (long)(iVar6 + -0x30);
  }
  *unaff_x20 = *unaff_x20 * lVar10;
  iVar1 = *unaff_x19;
  if (iVar1 == iVar4) {
    *unaff_x19 = iVar2;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != iVar4);
}


