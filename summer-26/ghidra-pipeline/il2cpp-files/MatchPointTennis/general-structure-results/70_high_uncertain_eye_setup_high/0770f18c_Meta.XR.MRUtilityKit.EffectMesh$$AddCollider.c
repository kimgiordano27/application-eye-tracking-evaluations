/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddCollider
ENTRY_POINT: 0770f18c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0770f368) */

void Meta_XR_MRUtilityKit_EffectMesh__AddCollider(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  puVar3 = PTR_DAT_09f30718;
  puVar2 = PTR_DAT_09f25110;
  if ((*(byte *)(unaff_x22 + 0xfc) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f25110);
    FUN_04447ba8(PTR_DAT_09f30720);
    FUN_04447ba8(PTR_DAT_09f25120);
    FUN_04447ba8(PTR_DAT_09f22e40);
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f30718);
    FUN_04447ba8(PTR_DAT_09f30728);
    FUN_04447ba8(PTR_DAT_09f30730);
    *(undefined1 *)(unaff_x22 + 0xfc) = 1;
  }
  puVar1 = PTR_DAT_09f1f008;
  FUN_07a80df4(param_1,0);
  plVar4 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_0948fe6c(plVar4,*(undefined8 *)puVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0469b41c(plVar4,*(undefined8 *)PTR_DAT_09f30730,*(undefined8 *)PTR_DAT_09f30720);
  lVar10 = *(long *)PTR_DAT_09f22e40;
  lVar7 = *(long *)(lVar10 + 0x38);
  if (lVar7 == 0) {
    FUN_04482014(lVar10);
    lVar7 = *(long *)(lVar10 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  uVar11 = **(undefined8 **)(lVar7 + 0xb8);
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f25120);
  FUN_09492c54(uVar5,*(undefined8 *)PTR_DAT_09f30728,uVar11,0);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),uVar5);
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0770f344;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_0770f344:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
  return;
}


