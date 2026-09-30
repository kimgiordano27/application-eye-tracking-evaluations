/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>$$get_Current
ENTRY_POINT: 020b2cb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020b2fd8) */
/* WARNING: Removing unreachable block (ram,0x020b2eb4) */
/* WARNING: Removing unreachable block (ram,0x020b3100) */
/* WARNING: Removing unreachable block (ram,0x020b2f1c) */
/* WARNING: Removing unreachable block (ram,0x020b30f8) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<__Il2CppFullySharedGenericStructType>__get_Current
               (long param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x29;
  
  lVar8 = tpidr_el0;
  *(long *)(unaff_x29 + -0x50) = lVar8;
                    /* try { // try from 020b2cbc to 021b2ce3 has its CatchHandler @ 020b3084 */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar8 + 0x28);
  if (DAT_04121e41 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cda250);
                    /* try { // try from 020b2cfc to 021b2d07 has its CatchHandler @ 020b3080 */
    DAT_04121e41 = '\x01';
  }
                    /* try { // try from 020b2d10 to 021b2d23 has its CatchHandler @ 020b3044 */
  puVar4 = (undefined8 *)
           (&stack0x00000000 +
           -((ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0xfc)
             + 0xf & 0x1fffffff0));
  *(undefined1 *)(unaff_x29 + -0x24) = 0;
  iVar1 = FUN_020af8cc();
  plVar9 = (long *)PTR_DAT_03cbdee0;
  iVar2 = param_4;
                    /* try { // try from 020b2d3c to 021b2d3f has its CatchHandler @ 020b3034 */
  if (iVar1 != 1) {
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 020b2d58 to 021b2d63 has its CatchHandler @ 020b3068 */
                    /* try { // try from 020b2d64 to 021b2e07 has its CatchHandler @ 020b2a84 */
    iVar2 = -0x80000000;
    if ((float)(int)((float)param_4 / (float)iVar1) != INFINITY) {
      iVar2 = (int)((float)param_4 / (float)iVar1);
    }
  }
  iVar1 = param_4 + -1;
  if (0 < param_4) {
    iVar5 = 0;
    uVar10 = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(int *)(unaff_x29 + -0x38) = iVar2 + -1;
    *(int *)(unaff_x29 + -0x44) = iVar1;
    do {
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar2 = FUN_0276c214(*(int *)(unaff_x29 + -0x38) + iVar5,iVar1,0);
      if (iVar2 == iVar1) {
        if (iVar5 < param_4) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
          do {
            FUN_01f66c74(param_3,iVar5,puVar4,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80));
            if (param_2 == 0) goto LAB_020b30f4;
            puVar3 = puVar4;
            if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0x28))
            {
              puVar3 = (undefined8 *)*puVar4;
            }
            *(int *)(unaff_x29 + -0x20) = param_4;
            *(int *)(unaff_x29 + -0x1c) = iVar5;
            (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),puVar3,unaff_x29 + -0x1c,unaff_x29 + -0x20,
                       *(undefined8 *)(param_2 + 0x28));
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_4);
          uVar10 = *(undefined8 *)(unaff_x29 + -0x30);
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        *(int *)(unaff_x29 + -0x34) = iVar2;
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar7,unaff_x29 + -0x24,0);
        if (*(long *)(param_1 + 0x10) == 0) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x10),unaff_x29 + -0x18,*(undefined8 *)PTR_DAT_03cda250);
        *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar10,unaff_x29 + -0x24,0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x18),unaff_x29 + -0x10,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8));
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        lVar8 = *(long *)(unaff_x29 + -0x40);
        if (lVar8 == 0) {
LAB_020b30f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0221e108(lVar8,iVar5,*(undefined4 *)(unaff_x29 + -0x34),param_3,param_4,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb8));
        lVar6 = *(long *)(unaff_x29 + -0x30);
        if (lVar6 == 0) goto LAB_020b30f4;
        *(long *)(lVar6 + 0x18) = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar6 + 0x18),lVar8);
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_020afa8c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xc0));
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar10,unaff_x29 + -0x24,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0x30);
        FUN_027e13f4(*(undefined8 *)(param_1 + 0x30),uVar10,0);
        iVar1 = *(int *)(unaff_x29 + -0x44);
        iVar2 = *(int *)(unaff_x29 + -0x34);
        plVar9 = (long *)PTR_DAT_03cbdee0;
      }
      iVar5 = iVar2 + 1;
    } while (iVar5 < param_4);
  }
  FUN_020af954(param_1,0xffffffff,0,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200));
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


