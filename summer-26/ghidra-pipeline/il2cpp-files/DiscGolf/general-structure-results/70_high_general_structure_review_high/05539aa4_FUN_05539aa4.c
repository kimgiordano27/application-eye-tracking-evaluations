/*
FUNCTION_NAME: FUN_05539aa4
ENTRY_POINT: 05539aa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05539c20) */

void FUN_05539aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_06dbb1ff & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc2e8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    DAT_06dbb1ff = 1;
  }
  plVar2 = (long *)FUN_054a7ab8(param_3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
  if (0x1000 < lVar3) {
    thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(UnityEngine_AssetBundleRequest_var);
    Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
              (uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(UnityEditor_Analytics_AssetExportAnalytic_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
  lVar3 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc2e8);
  plVar9 = (long *)(param_1 + 0x20);
  *plVar9 = lVar3;
  LeanTween__value(plVar9);
  lVar3 = *plVar9;
  if ((lVar3 == 0) || (plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = (**(code **)(*plVar2 + 0x358))
                    (plVar2,lVar3,0,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(*plVar2 + 0x360));
  lVar3 = *plVar9;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (iVar1 != *(int *)(lVar3 + 0x18)) {
    thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(UnityEditor_Analytics_AssetImportStatusAnalytic_var);
    Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
              (uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(UnityEditor_Analytics_AssetExportAnalytic_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
  FUN_0553f8e8(param_1,lVar3,param_1 + 0x28);
  FUN_0553f9a8(param_1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05539bfc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_05539bfc:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


