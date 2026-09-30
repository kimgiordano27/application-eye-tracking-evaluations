/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.Pool<object>$$.ctor
ENTRY_POINT: 0126a820
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01269fc8) */
/* WARNING: Removing unreachable block (ram,0x01269fdc) */
/* WARNING: Removing unreachable block (ram,0x01269fe0) */
/* WARNING: Removing unreachable block (ram,0x01269fe8) */
/* WARNING: Removing unreachable block (ram,0x01269fec) */
/* WARNING: Removing unreachable block (ram,0x0126a000) */
/* WARNING: Removing unreachable block (ram,0x0126a004) */
/* WARNING: Removing unreachable block (ram,0x0126a060) */
/* WARNING: Removing unreachable block (ram,0x0126a074) */
/* WARNING: Removing unreachable block (ram,0x0126bd78) */
/* WARNING: Removing unreachable block (ram,0x0126a0e8) */
/* WARNING: Removing unreachable block (ram,0x0126a114) */
/* WARNING: Removing unreachable block (ram,0x0126a11c) */
/* WARNING: Removing unreachable block (ram,0x0126a144) */
/* WARNING: Removing unreachable block (ram,0x0126a128) */
/* WARNING: Removing unreachable block (ram,0x0126a134) */
/* WARNING: Removing unreachable block (ram,0x0126a154) */
/* WARNING: Removing unreachable block (ram,0x0126a010) */
/* WARNING: Removing unreachable block (ram,0x0126a030) */
/* WARNING: Removing unreachable block (ram,0x0126a038) */
/* WARNING: Removing unreachable block (ram,0x0126a184) */
/* WARNING: Removing unreachable block (ram,0x0126a044) */
/* WARNING: Removing unreachable block (ram,0x0126a050) */
/* WARNING: Removing unreachable block (ram,0x0126a194) */
/* WARNING: Removing unreachable block (ram,0x0126a1d4) */
/* WARNING: Removing unreachable block (ram,0x0126a1e0) */
/* WARNING: Removing unreachable block (ram,0x01269fc4) */
/* WARNING: Removing unreachable block (ram,0x0126b100) */

void Meta_XR_MRUtilityKit_SceneDecorator_Pool<object>___ctor(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  void *unaff_x28;
  long unaff_x29;
  
  plVar1 = (long *)FUN_01c1223c();
  if (plVar1 == (long *)0x0) {
    *(long *)(unaff_x29 + -0x160) = unaff_x23;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_3085) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0126a970;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar1,*(long *)StringLiteral_3085,2);
LAB_0126a970:
  uVar3 = (*(code *)*puVar2)(plVar1);
  if ((*(uint *)(unaff_x29 + -0x178) & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x29 + -0xb8);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_01c62024(uVar7,*(undefined8 *)(unaff_x29 + -0x170),0,0);
    if (lVar4 == 0) {
      lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c(lVar4);
      }
      __src = (void *)FUN_00da5060(uVar3,lVar4);
    }
    else {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),uVar3,unaff_x29 + -0x68,*(undefined8 *)(lVar4 + 0x28)
                );
      uVar3 = *(undefined8 *)(unaff_x29 + -0x68);
      lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c(lVar4);
      }
      __src = (void *)FUN_00da5060(uVar3,lVar4);
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c(lVar4);
    }
    __src = (void *)FUN_00da5060(uVar3,lVar4);
  }
  memcpy(unaff_x28,__src,unaff_x20);
  if (-1 < *(int *)(unaff_x29 + -0x168)) {
    memcpy(unaff_x21,unaff_x28,unaff_x20);
    if ((*(byte *)(*(long *)(*(long *)(*unaff_x24 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    thunk_FUN_00d61fa0();
    FUN_01c2e7bc();
  }
  memcpy(unaff_x21,unaff_x28,unaff_x20);
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  if (*(int *)(unaff_x29 + -0x158) != 0) {
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_9688) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto Oculus_Interaction_PointerInteractor<object,_object>__HandlePointerEventRaised;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
Oculus_Interaction_PointerInteractor<object,_object>__HandlePointerEventRaised:
    (*(code *)*puVar2)();
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x140),unaff_x21,unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


