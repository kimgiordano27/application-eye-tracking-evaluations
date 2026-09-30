/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Player>
ENTRY_POINT: 0192e2f4
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__IndexOf<Player>(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar8;
  
  if (*param_2 == **(long **)(param_1 + 0x698)) {
    lVar3 = System_Array__InternalArray__set_Item<OVRPlugin_Vector4f>(param_2,0);
    *unaff_x21 = lVar3;
    thunk_FUN_0188fd20();
    plVar4 = (long *)*unaff_x21;
    if (plVar4 != (long *)0x0) {
      if (*(char *)(unaff_x19 + 0xa9) == '\0') {
        FUN_01bd42ac(plVar4,*(char *)(unaff_x19 + 0xa8) != '\0',*(undefined8 *)PTR_DAT_037f4730);
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f4750 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4750
           )) goto LAB_0192eb68;
        FUN_01bd33b4(plVar4,*(char *)(unaff_x19 + 0xa8) != '\0',*(undefined8 *)PTR_DAT_037f46d8);
      }
      if ((*(char *)(unaff_x19 + 0x70) == '\0') && (*(char *)(unaff_x19 + 0x80) != '\0')) {
        uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
      }
      else {
        uVar5 = FUN_033e6c58();
      }
      uVar5 = FUN_01bd4328(*(undefined8 *)(unaff_x19 + 0x68),uVar5,*(undefined8 *)PTR_DAT_037f4740);
      uVar5 = FUN_01bd3b64(*(undefined4 *)(unaff_x19 + 0x84),uVar5,*(undefined8 *)PTR_DAT_037f3d60);
      uVar5 = FUN_01bd41f0(uVar5,*(undefined4 *)(unaff_x19 + 0x9c),*(undefined4 *)(unaff_x19 + 0x98)
                           ,*(undefined8 *)PTR_DAT_037f4728);
      uVar5 = FUN_01bd3b40(uVar5,*(undefined1 *)(unaff_x19 + 0xab),*(undefined8 *)PTR_DAT_037f4710);
      puVar2 = PTR_DAT_037f3d10;
      uVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3d10);
      FUN_0199b2f4();
      FUN_01bd35c0(uVar5,uVar6,*(undefined8 *)PTR_DAT_037f46e8);
      if (*(char *)(unaff_x19 + 0x24) != '\0') {
        FUN_01bd42e0(*unaff_x21,*(undefined8 *)PTR_DAT_037f4738);
      }
      if (*(int *)(unaff_x19 + 0x8c) == 0x25) {
        FUN_01bd3cac(*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x90),
                     *(undefined8 *)PTR_DAT_037f4718);
      }
      else {
        FUN_01bd3d74(*(undefined8 *)(unaff_x19 + 0x68),*(int *)(unaff_x19 + 0x8c),
                     *(undefined8 *)PTR_DAT_037f3d68);
      }
      uVar7 = System_Convert__ToSingle(*(undefined8 *)(unaff_x19 + 0xa0),0);
      if ((uVar7 & 1) == 0) {
        FUN_01bd3f50(*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0xa0),
                     *(undefined8 *)PTR_DAT_037f4720);
      }
      FUN_01bd4468(*(undefined8 *)(unaff_x19 + 0x68),*(undefined1 *)(unaff_x19 + 0xaa),
                   *(undefined8 *)PTR_DAT_037f4748);
      plVar4 = (long *)(unaff_x19 + 0x30);
      if (*(char *)(unaff_x19 + 0x25) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd3670(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f4700);
        }
      }
      plVar4 = (long *)(unaff_x19 + 0x38);
      if (*(char *)(unaff_x19 + 0x26) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd3618(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f46f0);
        }
      }
      plVar4 = (long *)(unaff_x19 + 0x40);
      if (*(char *)(unaff_x19 + 0x27) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd36c8(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f3fa0);
        }
      }
      plVar4 = (long *)(unaff_x19 + 0x48);
      if (*(char *)(unaff_x19 + 0x28) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd369c(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f4708);
        }
      }
      plVar4 = (long *)(unaff_x19 + 0x50);
      if (*(char *)(unaff_x19 + 0x29) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd3594(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f46e0);
        }
      }
      plVar4 = (long *)(unaff_x19 + 0x60);
      if (*(char *)(unaff_x19 + 0x2b) == '\0') {
        *plVar4 = 0;
        thunk_FUN_0188fd20(plVar4,0);
      }
      else {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          lVar8 = *unaff_x21;
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
          FUN_0199b2f4(uVar5,lVar3,*(undefined8 *)PTR_DAT_037f4758,0);
          FUN_01bd3644(lVar8,uVar5,*(undefined8 *)PTR_DAT_037f46f8);
        }
      }
      if ((unaff_x20 & 1) == 0) {
        FUN_01bcbc70(*unaff_x21,*(undefined8 *)PTR_DAT_037f46c8);
      }
      else {
        FUN_01bcbdc8(*unaff_x21,*(undefined8 *)PTR_DAT_037f46d0);
      }
      if ((*(char *)(unaff_x19 + 0x2a) != '\0') && (*(long *)(unaff_x19 + 0x58) != 0)) {
        FUN_033f90c4(*(long *)(unaff_x19 + 0x58),0);
        return;
      }
    }
    return;
  }
LAB_0192eb68:
                    /* WARNING: Subroutine does not return */
  FUN_017fc944();
}


