/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$UnregisterInspector
ENTRY_POINT: 06ddbbc4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__UnregisterInspector(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  code *pcVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((*(byte *)(*(long *)(param_1 + 0xb0) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar4 = thunk_FUN_03d2ef40();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_03d8f26c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb8);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  (*pcVar8)(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xb8));
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar2 = PTR_DAT_09200560;
  uVar6 = thunk_FUN_03d2ef40();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_03d8f26c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  uVar9 = *(undefined8 *)puVar2;
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xc0);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  (*pcVar8)(uVar6,100,uVar9,0x3039,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xc0));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x18),uVar6);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0xd0) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar6 = thunk_FUN_03d2ef40();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xd8);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    puVar3 = PTR_DAT_091af3f8;
    puVar2 = PTR_DAT_091af3f0;
    (*pcVar8)(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xd8));
    *(undefined8 *)(lVar4 + 0x10) = uVar6;
    thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x10),uVar6);
    iVar10 = 5;
    while( true ) {
      lVar5 = *(long *)(lVar4 + 0x20);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03d8f26c(lVar7);
        }
        FUN_071ddf10(lVar5,lVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe0),0);
        *(long *)(lVar4 + 0x20) = lVar5;
        thunk_FUN_03d1023c((long *)(lVar4 + 0x20),lVar5);
      }
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
      FUN_071e8eb0(lVar7,lVar5,0);
      if (lVar7 == 0) break;
      FUN_071e91bc(lVar7,0);
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03d8f26c(lVar7);
        }
        FUN_071ddf10(lVar5,lVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe8),0);
        *(long *)(lVar4 + 0x28) = lVar5;
        thunk_FUN_03d1023c((long *)(lVar4 + 0x28),lVar5);
      }
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
      FUN_071e8eb0(lVar7,lVar5,0);
      if (lVar7 == 0) break;
      FUN_071e91bc(lVar7,0);
      iVar10 = iVar10 + -1;
      if (iVar10 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


