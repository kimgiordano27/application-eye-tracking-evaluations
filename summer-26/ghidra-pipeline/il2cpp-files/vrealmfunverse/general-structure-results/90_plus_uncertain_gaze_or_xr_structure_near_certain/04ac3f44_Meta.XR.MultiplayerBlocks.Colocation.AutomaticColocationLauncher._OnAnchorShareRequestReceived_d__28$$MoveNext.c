/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 04ac3f44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  void *__src;
  undefined8 *puVar4;
  ushort in_w9;
  long in_x10;
  ulong in_x11;
  long unaff_x20;
  undefined8 uVar5;
  void *unaff_x21;
  undefined8 uVar6;
  size_t unaff_x22;
  void *__dest;
  size_t unaff_x24;
  void *unaff_x25;
  code *pcVar7;
  long unaff_x27;
  long unaff_x29;
  
  __dest = (void *)(in_x10 - (in_x11 & 0x1fffffff0));
  lVar2 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xa8);
  if ((in_w9 & 1) == 0) {
    FUN_02b76218(lVar2);
  }
  iVar1 = (*pcVar7)();
  memcpy(__dest,unaff_x21,unaff_x22);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  piVar3 = (int *)thunk_FUN_02b9b29c(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
  if (iVar1 < *piVar3) {
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    piVar3 = (int *)thunk_FUN_02b9b29c(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
    if (1 < *piVar3) {
      memcpy(__dest,unaff_x21,unaff_x22);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218();
      }
      piVar3 = (int *)thunk_FUN_02b9b29c(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
      lVar2 = *(long *)(unaff_x20 + 0x20);
      iVar1 = *piVar3;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02b76218();
      }
      FUN_02b3c908(lVar2,iVar1 + -1);
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218(*(long *)(unaff_x20 + 0x20));
      }
      FUN_02761d30();
    }
  }
  memcpy(__dest,unaff_x21,unaff_x22);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  thunk_FUN_02b9b29c(__dest,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  FUN_02766590();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  piVar3 = (int *)thunk_FUN_02b9b29c();
  if (0 < *piVar3) {
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    __src = (void *)thunk_FUN_02b9b29c(__dest,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
    memcpy(unaff_x25,__src,unaff_x24);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_02b3c844();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  piVar3 = (int *)thunk_FUN_02b9b29c();
  if (1 < *piVar3) {
    memcpy(__dest,unaff_x21,unaff_x22);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    puVar4 = (undefined8 *)
             thunk_FUN_02b9b29c(__dest,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40);
    uVar6 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    puVar4 = (undefined8 *)thunk_FUN_02b9b29c();
    uVar5 = *puVar4;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    piVar3 = (int *)thunk_FUN_02b9b29c();
    FUN_04d9f2a8(uVar6,uVar5,*piVar3 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


