/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 020b2da4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020b2fd8) */
/* WARNING: Removing unreachable block (ram,0x020b2eb4) */
/* WARNING: Removing unreachable block (ram,0x020b3100) */
/* WARNING: Removing unreachable block (ram,0x020b2f1c) */
/* WARNING: Removing unreachable block (ram,0x020b30f8) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<__Il2CppFullySharedGenericStructType>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  int unaff_w25;
  long lVar2;
  long *unaff_x26;
  undefined8 uVar3;
  long lVar4;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar1 = FUN_0276c214(*(int *)(unaff_x29 + -0x38) + unaff_w25,unaff_w27,0);
    if (iVar1 == unaff_w27) {
      if (unaff_w25 < unaff_w21) {
        *(undefined8 *)(unaff_x29 + -0x30) = unaff_x28;
        do {
          FUN_01f66c74();
          if (unaff_x23 == 0) goto LAB_020b30f4;
                    /* try { // try from 020b2e08 to 021b2e13 has its CatchHandler @ 020b304c */
          *(int *)(unaff_x29 + -0x20) = unaff_w21;
          *(int *)(unaff_x29 + -0x1c) = unaff_w25;
          (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
                    /* try { // try from 020b2e34 to 021b2e3b has its CatchHandler @ 020b3040 */
          unaff_w25 = unaff_w25 + 1;
        } while (unaff_w25 < unaff_w21);
        unaff_x28 = *(undefined8 *)(unaff_x29 + -0x30);
      }
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      *(int *)(unaff_x29 + -0x34) = iVar1;
      *(undefined1 *)(unaff_x29 + -0x24) = 0;
      FUN_027e0bd8(uVar3,unaff_x29 + -0x24,0);
      if (*(long *)(unaff_x20 + 0x10) == 0) {
        *(undefined8 *)(unaff_x29 + -0x30) = unaff_x28;
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* try { // try from 020b2e7c to 021b2ea7 has its CatchHandler @ 020b3074 */
      FUN_0207ee14(*(long *)(unaff_x20 + 0x10),unaff_x29 + -0x18,*(undefined8 *)PTR_DAT_03cda250);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
      if (*(char *)(unaff_x29 + -0x24) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined1 *)(unaff_x29 + -0x24) = 0;
      FUN_027e0bd8(uVar3,unaff_x29 + -0x24,0);
      if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0207ee14(*(long *)(unaff_x20 + 0x18),unaff_x29 + -0x10,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
      if (*(char *)(unaff_x29 + -0x24) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      lVar4 = *(long *)(unaff_x29 + -0x40);
      if (lVar4 == 0) {
LAB_020b30f4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0221e108(lVar4,unaff_w25,*(undefined4 *)(unaff_x29 + -0x34));
      lVar2 = *(long *)(unaff_x29 + -0x30);
      if (lVar2 == 0) goto LAB_020b30f4;
      *(long *)(lVar2 + 0x18) = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar2 + 0x18),lVar4);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(unaff_x20 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      FUN_020afa8c();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined1 *)(unaff_x29 + -0x24) = 0;
      FUN_027e0bd8(uVar3,unaff_x29 + -0x24,0);
      *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
      if (*(char *)(unaff_x29 + -0x24) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      unaff_x28 = *(undefined8 *)(unaff_x29 + -0x30);
      FUN_027e13f4(*(undefined8 *)(unaff_x20 + 0x30),unaff_x28,0);
      unaff_w27 = *(int *)(unaff_x29 + -0x44);
      iVar1 = *(int *)(unaff_x29 + -0x34);
      unaff_x26 = (long *)PTR_DAT_03cbdee0;
    }
    unaff_w25 = iVar1 + 1;
    if (unaff_w21 <= unaff_w25) {
      FUN_020af954();
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_1 = *unaff_x26;
  } while( true );
}


