/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 02c48da4
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x810));
  FUN_017fc350(PTR_DAT_0380c818);
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  puVar2 = PTR_DAT_037f9758;
  if (unaff_w19 < -1) {
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar10 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bf10);
    uVar8 = thunk_FUN_01851c08(PTR_DAT_0380c820);
    FUN_02b40444(uVar10,uVar7,uVar8,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380c828);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar10,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_037f9758 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02c303dc(&stack0x00000048,0);
  uVar10 = in_stack_00000048;
  puVar1 = PTR_DAT_037f45f0;
  if ((uVar3 & 1) == 0) {
    if (unaff_w19 == 0) {
      if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if (DAT_03a24a5c == '\0') {
        FUN_017fc350(PTR_DAT_037f45f0);
        DAT_03a24a5c = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *(long *)puVar1;
      }
      return *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
    lVar4 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c800);
    FUN_02c490e0(lVar4,uVar10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = FUN_02c30424(&stack0x00000048,0);
    puVar1 = PTR_DAT_0380c818;
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_0380c818;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar5 = *(long *)puVar1;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9b40);
        FUN_020e6bbc(lVar9,uVar10,*(undefined8 *)PTR_DAT_0380c808,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar6 = lVar9;
        thunk_FUN_0188fd20(plVar6,lVar9);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c30798(&stack0x00000008,&stack0x00000048,lVar9,lVar4,0);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (lVar4 == 0) goto LAB_02c49010;
      *(undefined8 *)(lVar4 + 0x70) = in_stack_00000018;
      *(undefined8 *)(lVar4 + 0x68) = in_stack_00000010;
      *(undefined8 *)(lVar4 + 0x60) = in_stack_00000008;
      thunk_FUN_0188fd20(lVar4 + 0x60,0);
    }
    puVar2 = PTR_DAT_0380c818;
    if (unaff_w19 != -1) {
      lVar5 = *(long *)PTR_DAT_0380c818;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar5 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802a20);
        FUN_02c4071c(lVar9,uVar10,*(undefined8 *)PTR_DAT_0380c810);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar6 = lVar9;
        thunk_FUN_0188fd20(plVar6,lVar9);
      }
      lVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802a30);
      FUN_02c12df4(lVar5,0);
      FUN_02c3f5c0(lVar5,lVar9,lVar4,unaff_w19,0xffffffffffffffff);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x78);
        *plVar6 = lVar5;
        thunk_FUN_0188fd20(plVar6,lVar5);
        if (*plVar6 != 0) {
          return lVar4;
        }
      }
LAB_02c49010:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = FUN_02c48894(uVar10);
  }
  return lVar4;
}


