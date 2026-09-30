/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetColorAtPosition
ENTRY_POINT: 0580bc5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__GetColorAtPosition(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long in_x11;
  size_t unaff_x19;
  long unaff_x20;
  long *plVar7;
  size_t __n;
  long unaff_x21;
  void *pvVar8;
  void *__dest;
  void *__s;
  undefined8 *__src;
  long unaff_x26;
  void *__src_00;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x30) = (long)&stack0x00000000 - in_x9;
  *(long *)(unaff_x29 + -0x28) = in_x10;
  uVar5 = in_x11 + 0xfU & 0x1fffffff0;
  __src = (undefined8 *)(((long)&stack0x00000000 - in_x9) - uVar5);
  __dest = (void *)((long)__src - uVar5);
  uVar5 = unaff_x19 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__dest - uVar5);
  __s = (void *)((long)__src_00 - (in_x10 + 0xfU & 0x1fffffff0));
  pvVar8 = (void *)((long)__s - uVar5);
  memset(pvVar8,0,unaff_x19);
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar2 = *(long *)(*(long *)(unaff_x21 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        lVar2 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_0580bd3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar2 = FUN_02feb5b8(plVar7,lVar2,0);
LAB_0580bd3c:
  *(void **)(unaff_x29 + -0x10) = __src_00;
  lVar2 = *(long *)(lVar2 + 8);
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar7,unaff_x29 + -0x10,__src_00);
  memcpy(pvVar8,__src_00,unaff_x19);
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x20);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x28;
  (*(code *)puVar3[2])(uVar1,puVar3,pvVar8,unaff_x29 + -0x10);
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x38);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x10) = __src;
  (*(code *)puVar3[2])(uVar1,puVar3,pvVar8,unaff_x29 + -0x10,__src);
  __n = *(size_t *)(unaff_x29 + -0x28);
  memset(__s,0,__n);
  lVar4 = *(long *)(unaff_x26 + 0x20);
  lVar2 = *(long *)(lVar4 + 0xc0);
  if (*(int *)(*(long *)(lVar2 + 0x30) + 0x28) < 0) {
    pvVar8 = *(void **)(unaff_x29 + -0x30);
    memcpy(pvVar8,unaff_x28,*(size_t *)(unaff_x29 + -0x40));
    lVar2 = *(long *)(lVar4 + 0xc0);
  }
  else {
    pvVar8 = (void *)*unaff_x28;
  }
  if (*(int *)(*(long *)(lVar2 + 0x40) + 0x28) < 0) {
    memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x38));
    lVar2 = *(long *)(lVar4 + 0xc0);
  }
  else {
    __dest = (void *)*__src;
  }
  FUN_04246ba0(__s,pvVar8,__dest,*(undefined8 *)(lVar2 + 0x50));
  memcpy(*(void **)(unaff_x29 + -0x20),__s,__n);
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


