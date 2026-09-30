/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 04597dbc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  ulong uVar7;
  uint uVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  
  while (uVar4 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(unaff_x20 + 0x28)), (uVar4 & 1) == 0) {
    uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)uVar4 <= (long)unaff_x22) goto LAB_04597df0;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_04597ef4;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_04597ef8;
    if (unaff_x20 == 0) goto LAB_04597ef4;
    param_1 = param_1 + unaff_x21;
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_04597df0:
  if ((int)uVar4 <= (int)unaff_x22) {
    return 0;
  }
  uVar7 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar6 = (uint)uVar7;
      if ((int)uVar4 <= (int)unaff_x22) {
        FUN_05b11f04(*(undefined8 *)(unaff_x19 + 0x10),uVar7,(int)uVar4 - uVar6,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - uVar6;
      }
      uVar9 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_04597ef4;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_04597ef8;
        if (unaff_x20 == 0) goto LAB_04597ef4;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar9 + 0x20),
                           *(undefined8 *)(lVar5 + uVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        uVar9 = uVar9 + 0x10;
      } while ((long)unaff_x22 < (long)uVar4);
      uVar8 = (uint)unaff_x22;
    } while ((int)uVar4 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_04597ef4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_04597ef8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x10);
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    thunk_FUN_03048534(puVar1 + 1,0);
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar7 = (ulong)(uVar6 + 1);
  } while( true );
}


