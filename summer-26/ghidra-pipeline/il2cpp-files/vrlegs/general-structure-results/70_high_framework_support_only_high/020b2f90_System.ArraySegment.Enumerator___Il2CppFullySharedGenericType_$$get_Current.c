/*
FUNCTION_NAME: System.ArraySegment.Enumerator<__Il2CppFullySharedGenericType>$$get_Current
ENTRY_POINT: 020b2f90
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020b30f8) */
/* WARNING: Removing unreachable block (ram,0x020b2fd8) */
/* WARNING: Removing unreachable block (ram,0x020b2eb4) */
/* WARNING: Removing unreachable block (ram,0x020b3100) */
/* WARNING: Removing unreachable block (ram,0x020b2f1c) */

void System_ArraySegment_Enumerator<__Il2CppFullySharedGenericType>__get_Current(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  long lVar5;
  undefined8 unaff_x25;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x29;
  
  while( true ) {
    *(undefined1 *)(unaff_x29 + -0x24) = 0;
    FUN_027e0bd8(unaff_x25,unaff_x29 + -0x24,0);
    *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
    if (*(char *)(unaff_x29 + -0x24) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x25,0);
    }
    uVar8 = *(undefined8 *)(unaff_x29 + -0x30);
    FUN_027e13f4(*(undefined8 *)(unaff_x20 + 0x30),uVar8,0);
    puVar3 = PTR_DAT_03cbdee0;
    iVar2 = *(int *)(unaff_x29 + -0x44);
    iVar4 = *(int *)(unaff_x29 + -0x34);
    while( true ) {
                    /* try { // try from 020b3000 to 021b3003 has its CatchHandler @ 020b307c */
      iVar1 = iVar4 + 1;
                    /* try { // try from 020b3004 to 021b3007 has its CatchHandler @ 020b3078 */
                    /* try { // try from 020b3008 to 021b300b has its CatchHandler @ 020b2a84 */
      if (unaff_w21 <= iVar1) {
        FUN_020af954();
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar4 = FUN_0276c214(*(int *)(unaff_x29 + -0x38) + iVar1,iVar2,0);
      if (iVar4 != iVar2) break;
      if (iVar1 < unaff_w21) {
        *(undefined8 *)(unaff_x29 + -0x30) = uVar8;
        do {
          FUN_01f66c74();
          if (unaff_x23 == 0) goto LAB_020b30f4;
          *(int *)(unaff_x29 + -0x20) = unaff_w21;
          *(int *)(unaff_x29 + -0x1c) = iVar1;
          (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
          iVar1 = iVar1 + 1;
        } while (iVar1 < unaff_w21);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x30);
      }
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    *(int *)(unaff_x29 + -0x34) = iVar4;
    *(undefined1 *)(unaff_x29 + -0x24) = 0;
    FUN_027e0bd8(uVar6,unaff_x29 + -0x24,0);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      *(undefined8 *)(unaff_x29 + -0x30) = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0207ee14(*(long *)(unaff_x20 + 0x10),unaff_x29 + -0x18,*(undefined8 *)PTR_DAT_03cda250);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    if (*(char *)(unaff_x29 + -0x24) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined1 *)(unaff_x29 + -0x24) = 0;
    FUN_027e0bd8(uVar8,unaff_x29 + -0x24,0);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0207ee14(*(long *)(unaff_x20 + 0x18),unaff_x29 + -0x10,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
    if (*(char *)(unaff_x29 + -0x24) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
    lVar7 = *(long *)(unaff_x29 + -0x40);
    if (lVar7 == 0) break;
    FUN_0221e108(lVar7,iVar1,*(undefined4 *)(unaff_x29 + -0x34));
    lVar5 = *(long *)(unaff_x29 + -0x30);
    if (lVar5 == 0) break;
    *(long *)(lVar5 + 0x18) = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar5 + 0x18),lVar7);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(unaff_x20 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    FUN_020afa8c();
    unaff_x25 = *(undefined8 *)(unaff_x20 + 0x28);
  }
LAB_020b30f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


