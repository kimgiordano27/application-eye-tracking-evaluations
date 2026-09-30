/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 02e06f30
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor
              (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  do {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e06f24 with catch @ 02e06f30
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e06e50 with catch @ 02e06f34
                        */
    uVar3 = (*in_x9)(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x28));
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e06d88 with catch @ 02e06f38
                        */
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 02e06f54 to 02f06f57 has its CatchHandler @ 02e06f6c */
      iVar4 = *(int *)(unaff_x19 + 0x18);
LAB_02e06f58:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar4) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) {
LAB_02e06fd8:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
                    /* catch() { ... } // from try @ 02e06f54 with catch @ 02e06f6c */
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21))
        goto LAB_02e06fdc;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar1;
        puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
        puVar2[1] = puVar1[1];
        *puVar2 = uVar7;
        iVar4 = *(int *)(unaff_x19 + 0x18);
        unaff_w21 = unaff_w21 + 1;
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar4 <= (int)unaff_x22) {
                    /* try { // try from 02e06fac to 02f06fd3 has its CatchHandler @ 02e06fe8 */
        FUN_032f3ffc(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
        iVar4 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    else {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e06dc8 with catch @ 02e06f3c
                        */
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)iVar4 <= (long)unaff_x22) goto LAB_02e06f58;
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_02e06fd8;
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_02e06fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x20 == 0) goto LAB_02e06fd8;
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_1 = *(undefined8 *)(unaff_x20 + 0x40);
    param_2 = *(undefined8 *)(lVar5 + unaff_x23 + 0x20);
    param_3 = *(undefined8 *)(lVar5 + unaff_x23 + 0x28);
  } while( true );
}


