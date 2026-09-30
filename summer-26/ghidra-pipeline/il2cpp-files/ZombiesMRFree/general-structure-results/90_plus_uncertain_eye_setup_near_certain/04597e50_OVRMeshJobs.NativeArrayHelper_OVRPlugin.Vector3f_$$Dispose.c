/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04597e50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
code_r0x04597e50:
  if ((long)unaff_x22 < (long)param_1) goto LAB_04597e10;
  do {
    iVar4 = (int)param_1;
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar4) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_04597ef4;
      if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21))
      goto LAB_04597ef8;
      puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
      uVar7 = *puVar2;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
      puVar1[1] = puVar2[1];
      *puVar1 = uVar7;
      unaff_w21 = unaff_w21 + 1;
      thunk_FUN_03048534(puVar1 + 1,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = (ulong)(uVar6 + 1);
    }
    if (iVar4 <= (int)unaff_x22) {
      FUN_05b11f04(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar4 - unaff_w21;
    }
    unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
    unaff_x22 = (ulong)(int)unaff_x22;
LAB_04597e10:
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_04597ef4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_04597ef8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (unaff_x20 == 0) goto LAB_04597ef4;
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + unaff_x23 + 0x20),
                       *(undefined8 *)(lVar5 + unaff_x23 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
  unaff_x22 = unaff_x22 + 1;
  unaff_x23 = unaff_x23 + 0x10;
  goto code_r0x04597e50;
}


