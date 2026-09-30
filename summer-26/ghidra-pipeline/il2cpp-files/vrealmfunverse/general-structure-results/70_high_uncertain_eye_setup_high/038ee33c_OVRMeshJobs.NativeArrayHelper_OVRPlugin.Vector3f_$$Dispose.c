/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 038ee33c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038ee330 with catch @ 038ee33c
                        */
  lVar3 = *(long *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 038ee3d0 with catch @ 038ee340
                       catch() { ... } // from try @ 038ee410 with catch @ 038ee340
                       catch() { ... } // from try @ 038ee448 with catch @ 038ee340
                       catch() { ... } // from try @ 038ee474 with catch @ 038ee340
                       catch() { ... } // from try @ 038ee4e8 with catch @ 038ee340 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    puVar2 = (undefined8 *)thunk_FUN_02b7978c();
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    uVar9 = puVar2[5];
    uVar8 = puVar2[4];
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x30;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + 0x28) = uVar5;
        *(undefined8 *)(lVar3 + 0x20) = uVar4;
        *(undefined8 *)(lVar3 + 0x38) = uVar7;
        *(undefined8 *)(lVar3 + 0x30) = uVar6;
        *(undefined8 *)(lVar3 + 0x48) = uVar9;
        *(undefined8 *)(lVar3 + 0x40) = uVar8;
      }
      else {
        FUN_038ee284();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


