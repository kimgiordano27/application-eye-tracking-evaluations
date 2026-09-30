/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnPreRoomAnchorAdded$$Invoke
ENTRY_POINT: 08a37ff4
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnPreRoomAnchorAdded__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long *unaff_x24;
  
  lVar3 = thunk_FUN_04983f60();
  FUN_08a4eb28();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x24;
  }
  if (unaff_x19 != 0) {
    plVar11 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    plVar5 = (long *)thunk_FUN_04956588();
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if ((lVar3 != 0) &&
         (plVar5 = (long *)thunk_FUN_04956588(lVar3,0), puVar2 = PTR_DAT_0ac52c10,
         puVar1 = PTR_DAT_0ac158c8, plVar5 != (long *)0x0)) {
        uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        uVar6 = FUN_08bda228(*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar2,uVar7,0);
        if (plVar11 != (long *)0x0) {
          lVar4 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac46ed8) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_08a381b0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a381b0:
          (*(code *)*puVar8)(plVar11,uVar6,puVar8[1]);
          *(long *)(unaff_x19 + 0x18) = lVar3;
          thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x18),lVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


