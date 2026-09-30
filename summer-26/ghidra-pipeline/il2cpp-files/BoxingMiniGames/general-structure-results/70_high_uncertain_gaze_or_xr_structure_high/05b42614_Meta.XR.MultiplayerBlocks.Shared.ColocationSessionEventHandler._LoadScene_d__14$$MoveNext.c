/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$MoveNext
ENTRY_POINT: 05b42614
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__MoveNext
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long unaff_x25;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  uVar8 = *(undefined8 *)PTR_DAT_07a03000;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar3 = (long *)FUN_05e26f18(uVar8,0);
  lVar4 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
  if (lVar4 == 0) {
LAB_05b428f8:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_0367fd24(), lVar5 == 0)) {
    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar8,0);
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  *(long *)(lVar4 + 0x20) = unaff_x21;
  thunk_FUN_036b7ad0();
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x948))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x950))
     , plVar3 == (long *)0x0)) goto LAB_05b428f8;
  uVar6 = (**(code **)(*plVar3 + 0x298))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_07a03018;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar8 = FUN_05e26f18(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    goto LAB_05b4282c;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar6 & 1) == 0) goto LAB_05b4288c;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar8 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_05e32ff8(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_05b427dc;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05b427dc:
    if (uVar2 != 5) {
LAB_05b4288c:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar8 = thunk_FUN_0367fe20();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      FUN_04a70cb4(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar8 = FUN_05e26f18(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05b4282c:
  uVar8 = FUN_05e59d90(uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  uVar8 = FUN_03156018(uVar8,lVar4);
  return uVar8;
}


