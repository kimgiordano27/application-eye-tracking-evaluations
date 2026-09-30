/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$SceneLoaded
ENTRY_POINT: 06dfe924
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__SceneLoaded(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(PTR_DAT_08e812e8);
  FUN_03c8f898(PTR_DAT_08e92498);
  FUN_03c8f898(PTR_DAT_08e924a0);
  FUN_03c8f898(PTR_DAT_08e69590);
  *(undefined1 *)(unaff_x20 + 0xec7) = 1;
  puVar1 = PTR_DAT_08e69590;
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e812e8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06dfe9bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06dfe9bc:
    uVar5 = (*(code *)*puVar2)();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar1);
    }
    if ((uVar5 & 1) != 0) {
      FUN_04812574(1,*(undefined8 *)PTR_DAT_08e924a0);
      return;
    }
    if (DAT_09411ba6 == '\0') {
      FUN_03c8f898(PTR_DAT_08e69590);
      DAT_09411ba6 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92490);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar3,0,*(undefined8 *)PTR_DAT_08e92498,0);
    if (lVar4 != 0) {
      FUN_07184cb8(lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


