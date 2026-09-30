/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection.Enumerator<Guid,-OVRTask.Callback<OVRResult<Guid,-Int32Enum>>>$$Dispose
ENTRY_POINT: 02b86204
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Guid,_OVRTask_Callback<OVRResult<Guid,_Int32Enum>>>__Dispose
               (long param_1,long param_2,long *param_3,uint param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  ulong in_x10;
  undefined8 unaff_x22;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  void *__s;
  size_t unaff_x28;
  long unaff_x29;
  
  lVar6 = (long)&stack0x00000000 - (in_x10 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x18) = lVar6;
  lVar6 = lVar6 - (in_x10 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x40) = lVar6;
  __s = (void *)(lVar6 - (unaff_x28 + 0xf & 0x1fffffff0));
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  if (*(uint *)(param_3 + 3) < param_4) {
    OVRManager_PassthroughCapabilities___ctor(0);
    param_1 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x22;
  iVar2 = (*(code *)*puVar5)(param_2);
  if ((int)((int)param_3[3] - param_4) < iVar2) {
    FUN_033b2d60(5,0);
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  if (0 < (int)uVar1) {
    plVar7 = *(long **)(param_2 + 0x18);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar8 = 0;
    *(size_t *)(unaff_x29 + -0x30) = unaff_x28;
    do {
      if (*(uint *)(plVar7 + 3) <= uVar8) goto LAB_02b864ec;
      piVar3 = (int *)thunk_FUN_01dc553c((long)plVar7 + uVar8 * *(uint *)(*plVar7 + 0x104) + 0x20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) +
                                                    0x68) + 0x80));
      if (-1 < *piVar3) {
        if (*(uint *)(plVar7 + 3) <= uVar8) {
LAB_02b864ec:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        pvVar4 = (void *)thunk_FUN_01dc553c((long)plVar7 + uVar8 * *(uint *)(*plVar7 + 0x104) + 0x20
                                            ,*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x40);
        memcpy(*(void **)(unaff_x29 + -0x10),pvVar4,*(size_t *)(unaff_x29 + -0x20));
        if (*(uint *)(plVar7 + 3) <= uVar8) goto LAB_02b864ec;
        pvVar4 = (void *)thunk_FUN_01dc553c((long)plVar7 + uVar8 * *(uint *)(*plVar7 + 0x104) + 0x20
                                            ,*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x60);
        memcpy(*(void **)(unaff_x29 + -0x18),pvVar4,*(size_t *)(unaff_x29 + -0x28));
        memset(__s,0,unaff_x28);
        lVar9 = *(long *)(param_5 + 0x20);
        lVar6 = *(long *)(lVar9 + 0xc0);
        if (*(int *)(*(long *)(lVar6 + 0x70) + 0x28) < 0) {
          pvVar4 = *(void **)(unaff_x29 + -0x38);
          memcpy(pvVar4,*(void **)(unaff_x29 + -0x10),*(size_t *)(unaff_x29 + -0x20));
          lVar6 = *(long *)(lVar9 + 0xc0);
        }
        else {
          pvVar4 = (void *)**(undefined8 **)(unaff_x29 + -0x10);
        }
        if (*(int *)(*(long *)(lVar6 + 0x78) + 0x28) < 0) {
          __dest = *(void **)(unaff_x29 + -0x40);
          memcpy(__dest,*(void **)(unaff_x29 + -0x18),*(size_t *)(unaff_x29 + -0x28));
          lVar6 = *(long *)(lVar9 + 0xc0);
        }
        else {
          __dest = (void *)**(undefined8 **)(unaff_x29 + -0x18);
        }
        FUN_030718bc(__s,pvVar4,__dest,*(undefined8 *)(lVar6 + 0x130));
        if (*(uint *)(param_3 + 3) <= param_4) goto LAB_02b864ec;
        unaff_x28 = *(size_t *)(unaff_x29 + -0x30);
        lVar9 = (long)(int)param_4;
        memcpy((void *)((long)param_3 + (ulong)*(uint *)(*param_3 + 0x104) * lVar9 + 0x20),__s,
               unaff_x28);
        lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01dde7f8();
        }
        if (*(uint *)(param_3 + 3) <= param_4) goto LAB_02b864ec;
        param_4 = param_4 + 1;
        FUN_01d7d8c8(lVar6,(long)param_3 + (ulong)*(uint *)(*param_3 + 0x104) * lVar9 + 0x20,__s);
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


