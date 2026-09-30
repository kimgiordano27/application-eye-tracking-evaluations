/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 08a33c78
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


void Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*unaff_x20);
  if ((uVar3 & 1) == 0) {
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
    uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*unaff_x20);
    if ((uVar3 & 1) == 0) {
      puVar1 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar1 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar1,&PTR_PTR_0a568bf8,0);
    }
    uVar2 = *unaff_x20;
    __cxa_end_catch();
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    plVar5 = (long *)FUN_08795a9c(0);
    if (plVar5 != (long *)0x0) {
      lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
      uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac52a00);
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_0433aa2c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(plVar5);
LAB_0433aa2c:
                    /* WARNING: Could not recover jumptable at 0x0433aa44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar5,uVar6,uVar2,puVar1[1]);
      return;
    }
  }
  else {
    __cxa_end_catch();
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    plVar5 = (long *)FUN_08795a9c(0);
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac529f0);
    thunk_FUN_049ae08c(PTR_DAT_0ac529f8);
    uVar2 = FUN_08bd9aa0(uVar2);
    if (plVar5 != (long *)0x0) {
      lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0433ce10;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(plVar5);
LAB_0433ce10:
                    /* WARNING: Could not recover jumptable at 0x0433ce24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar5,uVar2,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


