/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddCollider
ENTRY_POINT: 08a33afc
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__AddCollider(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x22;
  long *plVar7;
  long unaff_x24;
  undefined8 uVar8;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xed8));
  *(undefined1 *)(unaff_x24 + 0x374) = 1;
  lVar2 = thunk_FUN_04983f60(*unaff_x22);
  FUN_08a2bd58();
  puVar1 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar1;
  }
  plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar8 = *(undefined8 *)PTR_DAT_0ac529e8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_08a33bfc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a33bfc:
  (*(code *)*puVar4)(plVar7,uVar8,puVar4[1]);
  if (lVar2 != 0) {
    FUN_08a2ce98(lVar2,1,0);
    FUN_08a3166c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


