/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 050c509c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c524c) */
/* WARNING: Removing unreachable block (ram,0x050c5384) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  size_t unaff_x20;
  void *__s;
  long lVar8;
  ulong uVar9;
  void *__s_00;
  size_t unaff_x24;
  void *__src;
  void *__src_00;
  long unaff_x29;
  
  lVar2 = FUN_04481fb8(param_1);
  lVar8 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = unaff_x24 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar8 - uVar9);
  uVar7 = unaff_x20 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar7);
  __s = (void *)((long)__src_00 - uVar7);
  *(size_t *)(unaff_x29 + -0x30) = unaff_x20;
  memset(__s,0,unaff_x20);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,unaff_x24);
  lVar2 = *(long *)(unaff_x29 + -0x18);
  if (lVar2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *(long *)(unaff_x29 + -0x18);
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))(lVar2);
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar2);
  if (0 < iVar1) {
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar3 = *puVar5;
    *(void **)(unaff_x29 + -0x10) = __src_00;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar2,unaff_x29 + -0x10,__src_00);
    memcpy(__s,__src_00,*(size_t *)(unaff_x29 + -0x30));
    do {
      do {
        uVar7 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))(__s);
        if ((uVar7 & 1) == 0) goto LAB_050c52dc;
        puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
        uVar3 = *puVar5;
        *(void **)(unaff_x29 + -0x10) = __src;
        (*(code *)puVar5[2])(uVar3,puVar5,__s,unaff_x29 + -0x10,__src);
        memcpy(__s_00,__src,unaff_x24);
        lVar6 = *(long *)(unaff_x19 + 0x38);
        lVar2 = *(long *)(lVar6 + 0x38);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
          lVar6 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar2,*(undefined8 *)(lVar6 + 0x40));
        iVar1 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
      } while (iVar1 != 0);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar2 = *(long *)(lVar6 + 0x38);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
        lVar6 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar2,*(undefined8 *)(lVar6 + 0x48),lVar8,__s_00,0,unaff_x29 + -0x10);
      lVar2 = *(long *)(unaff_x29 + -0x10);
    } while (lVar2 == 0);
    lVar8 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_07a4ce38(uVar3,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar3,uVar3);
    }
    FUN_07442978(lVar8,uVar3,lVar2,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar2 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
      lVar8 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar2,*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(unaff_x29 + -0x28),__s,0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


