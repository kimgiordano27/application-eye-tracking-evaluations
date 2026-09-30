/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<Scene,-object,-object>$$ClearDirtyChildren
ENTRY_POINT: 037a1dec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_object,_object>__ClearDirtyChildren
               (undefined8 param_1,undefined8 ****param_2,long *param_3,long param_4)

{
  undefined8 ****__src;
  int iVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *__dest;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long alStack_40 [2];
  undefined8 ***pppuStack_30;
  undefined8 ***pppuStack_28;
  int *piStack_20;
  long *plStack_18;
  int iStack_c;
  long lStack_8;
  
  alStack_40[0] = tpidr_el0;
  lStack_8 = *(long *)(alStack_40[0] + 0x28);
  lVar6 = *(long *)(param_4 + 0x20);
  pppuStack_30 = param_2;
  pppuStack_28 = param_2;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
  }
  alStack_40[1] = (long)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 037a1e58 to 038a1e5f has its CatchHandler @ 037a21a0 */
  uVar8 = alStack_40[1] + 0xfU & 0x1fffffff0;
  plVar9 = (long *)((long)alStack_40 - uVar8);
  __dest = (undefined8 *)((long)plVar9 - uVar8);
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    lVar6 = *(long *)(param_4 + 0x20);
                    /* try { // try from 037a1e78 to 038a1e7b has its CatchHandler @ 037a2188 */
                    /* try { // try from 037a1e7c to 038a1f6f has its CatchHandler @ 037a1a18 */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d9a2e0();
    }
    piVar4 = (int *)thunk_FUN_02dbdd9c(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
    iVar1 = *piVar4;
    if (iVar1 <= iVar5) break;
    lVar7 = *(long *)(param_4 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
      uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar6 = *(long *)(param_4 + 0x20);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x78);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02d9a2e0(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x78);
    piStack_20 = &iStack_c;
    plStack_18 = plVar9;
    iStack_c = iVar5;
    (**(code **)(lVar6 + 0x10))(uVar12,lVar6,param_1,&piStack_20,plVar9);
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d9a2e0();
    }
    __src = (undefined8 ****)pppuStack_30;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      __src = &pppuStack_28;
    }
    memcpy(__dest,__src,alStack_40[1]);
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d9a2e0();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xe0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d9a2e0(lVar6);
    }
    lVar7 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0();
    }
    plVar10 = plVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
      plVar10 = (long *)*plVar9;
    }
    lVar7 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0();
    }
    puVar11 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
      puVar11 = (undefined8 *)*__dest;
    }
    lVar7 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_037a201c;
        }
        uVar8 = uVar8 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_02d9a5d4(param_3,lVar6,0);
LAB_037a201c:
    lVar6 = *(long *)(lVar6 + 8);
    piStack_20 = (int *)plVar10;
    plStack_18 = puVar11;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_3,&piStack_20,&iStack_c);
    iVar3 = iVar5 + 1;
  } while ((char)iStack_c == '\0');
  if (*(long *)(alStack_40[0] + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5 < iVar1);
  }
  return;
}


