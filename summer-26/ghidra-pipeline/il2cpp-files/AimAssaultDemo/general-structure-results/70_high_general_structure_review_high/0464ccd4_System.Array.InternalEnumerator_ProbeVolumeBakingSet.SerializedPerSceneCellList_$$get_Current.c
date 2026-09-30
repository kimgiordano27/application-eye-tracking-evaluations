/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 0464ccd4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  while( true ) {
    *(long *)(unaff_x29 + -0x20) = param_1;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(param_3 + 0x10))(param_2);
    memcpy(unaff_x27,unaff_x24,unaff_x22);
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 0464cd08 to 0474cd1b has its CatchHandler @ 0464ce70 */
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
                    /* try { // try from 0464cd24 to 0474cd2f has its CatchHandler @ 0464ce6c */
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x19 + 0x20);
    }
                    /* try { // try from 0464cd30 to 0474ce4f has its CatchHandler @ 0464ca68 */
    uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xf0);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf0);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    puVar5 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
    (**(code **)(lVar3 + 0x10))
              (uVar6,lVar3,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      memcpy(unaff_x24,unaff_x27,unaff_x22);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        lVar3 = *(long *)(unaff_x19 + 0x20);
      }
      uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xb0);
      lVar4 = lVar3;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03775678(lVar3);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x19 + 0x20);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
      }
      puVar5 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      (**(code **)(lVar3 + 0x10))
                (uVar6,lVar3,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x20,unaff_x29 + -0xc);
    }
    unaff_w28 = unaff_w28 + 1;
    memcpy(unaff_x26,unaff_x20,*(size_t *)(unaff_x29 + -0x30));
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    piVar2 = (int *)thunk_FUN_03799158();
    if (*piVar2 <= unaff_w28) break;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x19 + 0x20);
    }
    param_2 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x78);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    param_3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
    param_1 = unaff_x29 + -0xc;
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


