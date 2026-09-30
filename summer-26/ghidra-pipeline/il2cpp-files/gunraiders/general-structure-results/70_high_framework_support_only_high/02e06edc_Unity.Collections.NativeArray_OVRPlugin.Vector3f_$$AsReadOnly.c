/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 02e06edc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly(ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar8 = 0;
  if ((int)param_1 < 1) {
    return 0;
  }
  uVar6 = 0;
  do {
    uVar8 = (ulong)((int)uVar8 + 1);
    do {
      if ((int)param_1 <= (int)uVar8) {
        FUN_032f3ffc(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)param_1 - uVar6,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar6;
      }
      uVar9 = -(uVar8 >> 0x1f & 1) & 0xfffffff000000000 | (uVar8 & 0xffffffff) << 4;
      uVar8 = (ulong)(int)uVar8;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_02e06fd8;
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar8) goto LAB_02e06fdc;
        if (unaff_x20 == 0) goto LAB_02e06fd8;
                    /* try { // try from 02e06f24 to 02f06f27 has its CatchHandler @ 02e06f30 */
                    /* try { // try from 02e06f28 to 02f06f53 has its CatchHandler @ 02e06a84 */
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar9 + 0x20),
                           *(undefined8 *)(lVar5 + uVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 0x10;
      } while ((long)uVar8 < (long)param_1);
      uVar7 = (uint)uVar8;
    } while ((int)param_1 <= (int)uVar7);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_02e06fd8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_02e06fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar7 * 0x10);
    uVar10 = *puVar2;
    puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
    puVar3[1] = puVar2[1];
    *puVar3 = uVar10;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar6 = uVar6 + 1;
  } while( true );
}


