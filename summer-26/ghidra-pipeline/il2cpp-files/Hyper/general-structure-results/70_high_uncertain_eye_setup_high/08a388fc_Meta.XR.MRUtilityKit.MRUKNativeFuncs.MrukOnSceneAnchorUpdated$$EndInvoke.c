/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$EndInvoke
ENTRY_POINT: 08a388fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *unaff_x22;
  long *plVar12;
  long unaff_x23;
  
  FUN_04947ee4(PTR_DAT_0ac46eb8);
  FUN_04947ee4(PTR_DAT_0ac52c68);
  FUN_04947ee4(PTR_DAT_0ac52c70);
  FUN_04947ee4(PTR_DAT_0ac52c78);
  FUN_04947ee4(PTR_DAT_0ac09c40);
  FUN_04947ee4(PTR_DAT_0ac52c80);
  FUN_04947ee4(PTR_DAT_0ac52c88);
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x23 + 0x474) = 1;
  puVar4 = PTR_DAT_0ac52c78;
  puVar3 = PTR_DAT_0ac52c70;
  puVar2 = PTR_DAT_0ac52c60;
  puVar1 = PTR_DAT_0ac52c58;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar5 = FUN_08d92cf8(0x4059000000000000,0);
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar5;
  uVar5 = thunk_FUN_04983f60(uVar8);
  FUN_07238820(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar5;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0xf0),uVar5);
  FUN_08a4e190();
  plVar12 = (long *)(unaff_x20 + 0x18);
  *plVar12 = unaff_x19;
  thunk_FUN_049ee3d8(plVar12);
  uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_08a4d0f4(uVar5,0);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar5;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x90),uVar5);
  uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_08a4ccf8(uVar5,0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar5;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x98),uVar5);
  puVar1 = PTR_DAT_0ac46eb8;
  if (*plVar12 != 0) {
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52c68);
    FUN_08a4e53c();
    *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0xa0),uVar5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar1;
    }
    plVar11 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    plVar12 = (long *)thunk_FUN_04956588();
    puVar2 = PTR_DAT_0ac52c88;
    puVar1 = PTR_DAT_0ac52c80;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      uVar5 = FUN_08bda66c(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
      if (plVar11 != (long *)0x0) {
        lVar6 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac46ed8) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_08a38b74;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a38b74:
                    /* WARNING: Could not recover jumptable at 0x08a38b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


