/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnPreRoomAnchorAdded$$BeginInvoke
ENTRY_POINT: 08a38008
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnPreRoomAnchorAdded__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x24;
  
  FUN_08a4eb28();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x24;
  }
  if (unaff_x19 != 0) {
    plVar10 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    plVar4 = (long *)thunk_FUN_04956588();
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((unaff_x20 != 0) &&
         (plVar4 = (long *)thunk_FUN_04956588(), puVar2 = PTR_DAT_0ac52c10,
         puVar1 = PTR_DAT_0ac158c8, plVar4 != (long *)0x0)) {
        uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar5 = FUN_08bda228(*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,uVar6,0);
        if (plVar10 != (long *)0x0) {
          lVar3 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
                puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_08a381b0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a381b0:
          (*(code *)*puVar7)(plVar10,uVar5,puVar7[1]);
          *(long *)(unaff_x19 + 0x18) = unaff_x20;
          thunk_FUN_049ee3d8();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


