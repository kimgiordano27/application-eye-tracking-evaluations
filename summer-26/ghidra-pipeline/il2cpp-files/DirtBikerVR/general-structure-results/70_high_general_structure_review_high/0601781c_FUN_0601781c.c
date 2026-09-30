/*
FUNCTION_NAME: FUN_0601781c
ENTRY_POINT: 0601781c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0601781c(long param_1,undefined8 ****param_2,undefined8 ****param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  int *piVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *__s;
  ulong __n;
  code *pcVar9;
  void *__src;
  long *plVar10;
  undefined8 ***local_80;
  undefined8 ***pppuStack_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 0601781c to 0611781f has its CatchHandler @ 06017828 */
                    /* catch() { ... } // from try @ 0601781c with catch @ 06017828 */
                    /* try { // try from 0601782c to 06117833 has its CatchHandler @ 0601783c */
                    /* try { // try from 06017834 to 0611783f has its CatchHandler @ 06017378 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0601782c with catch @ 0601783c
                        */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 06017854 to 06117a53 has its CatchHandler @ 06017854
                       catch() { ... } // from try @ 06017854 with catch @ 06017854
                       catch() { ... } // from try @ 06017b34 with catch @ 06017854
                       catch() { ... } // from try @ 06017bc4 with catch @ 06017854
                       catch() { ... } // from try @ 06017c20 with catch @ 06017854 */
  local_80 = param_3;
  pppuStack_78 = param_2;
  if ((DAT_08979b7c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084971c8);
    DAT_08979b7c = 1;
  }
  plVar10 = *(long **)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar10[4] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_80 - uVar8);
  __s = (void *)((long)__src - uVar8);
  memset(__s,0,__n);
  pcVar2 = (char *)thunk_FUN_03ae913c(param_1,*(long *)(*plVar10 + 0x80) + 0xc0);
  if (*pcVar2 == '\0') {
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar3 = FUN_07290d50(*(long *)(param_1 + 0x20),0), lVar3 != 0)) &&
       (*(long *)(lVar3 + 0x110) != 0)) {
      FUN_03523280(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x60,
                   *(undefined8 *)(*(long *)(lVar3 + 0x110) + 0x10));
      piVar4 = (int *)thunk_FUN_03ae913c(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                      0xc0) + 0x80) + 0x180);
      if (*piVar4 == 0) {
        puVar5 = (ulong *)thunk_FUN_03ae913c(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x80) + 0x80);
        uVar8 = *puVar5;
        puVar5 = (ulong *)thunk_FUN_03ae913c(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x80) + 0x60);
        if (uVar8 <= *puVar5) goto LAB_06017980;
        goto LAB_06017b28;
      }
LAB_06017980:
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90))(param_1,1);
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar3 = FUN_07290d50(*(long *)(param_1 + 0x20),0), lVar3 != 0)) &&
         (*(long *)(lVar3 + 0x110) != 0)) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x110) + 0x38);
        puVar6 = (undefined8 *)
                 thunk_FUN_03ae913c(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0)
                                                     + 0x80) + 0x1c0);
        if (lVar3 != 0) {
          FUN_049da1a4(lVar3,*puVar6,*(undefined8 *)PTR_DAT_084971c8);
          goto System_Array_EmptyInternalEnumerator<ShadowRequestIntermediateUpdateData>__Dispose;
        }
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
System_Array_EmptyInternalEnumerator<ShadowRequestIntermediateUpdateData>__Dispose:
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    local_70 = __src;
    (*(code *)puVar6[2])(*puVar6,puVar6,param_1,&local_70,__src);
    memcpy(__s,__src,__n);
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar10 = *(long **)(*(long *)(param_4 + 0x20) + 0xc0);
    pcVar9 = *(code **)plVar10[5];
    uVar7 = thunk_FUN_03ae913c(param_1,*(long *)(*plVar10 + 0x80) + 0x20);
    (*pcVar9)(__s,uVar7,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    FUN_035ed8a4(0,param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x120);
    FUN_035ed8a4(0,param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x140);
    plVar10 = (long *)thunk_FUN_03ae913c(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                      0xc0) + 0x80) + 0x1a0);
    if (*plVar10 != 0) {
      lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
        param_3 = &local_80;
        param_2 = &pppuStack_78;
      }
      (*(code *)**(undefined8 **)(lVar3 + 0xa8))(*plVar10,param_1,param_2,param_3);
    }
LAB_06017b28:
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


