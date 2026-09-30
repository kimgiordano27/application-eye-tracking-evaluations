/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$get_Category
ENTRY_POINT: 06d81dbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_Category(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09419a05 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8f628);
    FUN_03c8f898(PTR_DAT_08e8f630);
    FUN_03c8f898(PTR_DAT_08e68f00);
    FUN_03c8f898(PTR_DAT_08e8f648);
    FUN_03c8f898(PTR_DAT_08e8f640);
    DAT_09419a05 = 1;
  }
  puVar3 = PTR_DAT_08e8f640;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_085f3110(*(long *)(param_1 + 0x28),0);
    lVar4 = *(long *)puVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_08e8f630;
    puVar1 = PTR_DAT_08e68f00;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar4 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8f628);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (lVar8,uVar9,*(undefined8 *)PTR_DAT_08e8f648,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar5 = lVar8;
      thunk_FUN_03d233cc(plVar5,lVar8);
    }
    FUN_0493defc(uVar7,lVar8,*(undefined8 *)puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_085decd4(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_085db068(*(long *)(param_1 + 0x18),1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


