/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 04c40b38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int iStack000000000000000c;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x23 + 0x7b8) = 1;
  iStack000000000000000c = 0;
  lVar5 = thunk_FUN_037788cc(*unaff_x22);
  FUN_049ce6c0(lVar5,*unaff_x21);
  if (lVar5 == 0) {
LAB_04c40c64:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = FUN_049cf11c(lVar5,*(undefined8 *)PTR_DAT_07d99100);
  unaff_x20[0x13] = lVar6;
  thunk_FUN_037aeb94();
  iStack000000000000000c = 0;
  iVar3 = (**(code **)(*unaff_x20 + 0x618))();
  puVar2 = PTR_DAT_07d990f8;
                    /* try { // try from 04c40ba0 to 04d40be7 has its CatchHandler @ 04c40ba0
                       catch() { ... } // from try @ 04c40ba0 with catch @ 04c40ba0
                       catch() { ... } // from try @ 04c40c4c with catch @ 04c40ba0
                       catch() { ... } // from try @ 04c40c7c with catch @ 04c40ba0
                       catch() { ... } // from try @ 04c40cf8 with catch @ 04c40ba0 */
  if (0 < iVar3) {
    do {
      FUN_06240534(&stack0x0000000c,0);
      uVar7 = FUN_0426d9b8();
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04c40c64;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar3 = iStack000000000000000c + 1;
      iStack000000000000000c = iVar3;
      iVar4 = (**(code **)(*unaff_x20 + 0x618))();
    } while (iVar3 < iVar4);
  }
  return;
}


