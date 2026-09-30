/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 050c501c
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

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__MoveNext(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  size_t unaff_x20;
  void *__s;
  ulong uVar10;
  void *__s_00;
  size_t unaff_x24;
  long lVar11;
  void *__src;
  void *__src_00;
  long unaff_x29;
  
  lVar3 = FUN_04481fb8();
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  lVar11 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x28) = lVar11;
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar3 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_04481fb8(lVar7);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  lVar7 = lVar11 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar10 = unaff_x24 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar7 - uVar10);
  uVar9 = unaff_x20 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar9);
  __s = (void *)((long)__src_00 - uVar9);
  *(size_t *)(unaff_x29 + -0x30) = unaff_x20;
  memset(__s,0,unaff_x20);
  __s_00 = (void *)((long)__s - uVar10);
  memset(__s_00,0,unaff_x24);
  lVar3 = *(long *)(unaff_x29 + -0x18);
  if (lVar3 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar4 = thunk_FUN_0448520c();
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)(unaff_x29 + -0x18);
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))(lVar3);
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar3);
  if (0 < iVar2) {
    puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar4 = *puVar6;
    *(void **)(unaff_x29 + -0x10) = __src_00;
    (*(code *)puVar6[2])(uVar4,puVar6,lVar3,unaff_x29 + -0x10,__src_00);
    memcpy(__s,__src_00,*(size_t *)(unaff_x29 + -0x30));
    do {
      do {
        uVar9 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))(__s);
        if ((uVar9 & 1) == 0) goto LAB_050c52dc;
        puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
        uVar4 = *puVar6;
        *(void **)(unaff_x29 + -0x10) = __src;
        (*(code *)puVar6[2])(uVar4,puVar6,__s,unaff_x29 + -0x10,__src);
        memcpy(__s_00,__src,unaff_x24);
        lVar8 = *(long *)(unaff_x19 + 0x38);
        lVar3 = *(long *)(lVar8 + 0x38);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
          lVar8 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar3,*(undefined8 *)(lVar8 + 0x40),lVar11,__s_00,0,unaff_x29 + -0x10);
        iVar2 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
      } while (iVar2 != 0);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar3 = *(long *)(lVar8 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
        lVar8 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar3,*(undefined8 *)(lVar8 + 0x48),lVar7,__s_00,0,unaff_x29 + -0x10);
      lVar3 = *(long *)(unaff_x29 + -0x10);
    } while (lVar3 == 0);
    lVar7 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_07a4ce38(uVar4,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar4,uVar4);
    }
    FUN_07442978(lVar7,uVar4,lVar3,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar3 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
      lVar7 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar3,*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(unaff_x29 + -0x28),__s,0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


