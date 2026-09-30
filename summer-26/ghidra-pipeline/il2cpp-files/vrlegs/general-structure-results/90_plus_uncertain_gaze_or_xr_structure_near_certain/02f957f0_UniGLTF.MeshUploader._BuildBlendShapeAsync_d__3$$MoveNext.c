/*
FUNCTION_NAME: UniGLTF.MeshUploader.<BuildBlendShapeAsync>d__3$$MoveNext
ENTRY_POINT: 02f957f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f958c4) */
/* WARNING: Removing unreachable block (ram,0x02f9588c) */

undefined8 UniGLTF_MeshUploader_<BuildBlendShapeAsync>d__3__MoveNext(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w23;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)thunk_FUN_01a89d6c();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x02f95854;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar1,*unaff_x27,0);
code_r0x02f95854:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_w23 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar3 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar3);
  }
  return 0;
}


