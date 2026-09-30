/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<Scene,-object,-object>$$GetChild
ENTRY_POINT: 037a1f04
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


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_object,_object>__GetChild
               (undefined8 param_1,long param_2)

{
  int iVar1;
  void *__src;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int unaff_w27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
    (**(code **)(param_2 + 0x10))(param_1);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    __src = *(void **)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x23,__src,*(size_t *)(unaff_x29 + -0x38));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xe0);
                    /* try { // try from 037a1f70 to 038a1f77 has its CatchHandler @ 037a22a0 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 037a1f8c to 038a1f8f has its CatchHandler @ 037a219c */
      lVar5 = FUN_02d9a2e0();
    }
                    /* try { // try from 037a1f90 to 038a206f has its CatchHandler @ 037a1a18 */
    puVar7 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x21;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    puVar8 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x23;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar3 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_037a201c;
        }
        uVar6 = uVar6 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_02d9a5d4();
LAB_037a201c:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    iVar1 = unaff_w28 + 1;
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_037a2044:
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(unaff_w28 < unaff_w27);
      }
      return;
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    piVar3 = (int *)thunk_FUN_02dbdd9c();
    unaff_w27 = *piVar3;
    unaff_w28 = iVar1;
    if (unaff_w27 <= iVar1) goto LAB_037a2044;
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_02d9a2e0(lVar5);
      uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    param_1 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x78);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    param_2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x78);
  } while( true );
}


