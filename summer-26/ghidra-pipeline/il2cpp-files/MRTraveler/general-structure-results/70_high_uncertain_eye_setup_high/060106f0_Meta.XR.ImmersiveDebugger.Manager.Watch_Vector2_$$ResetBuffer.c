/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 060106f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__src;
  undefined8 uVar6;
  long *unaff_x19;
  size_t sVar7;
  void *unaff_x22;
  long unaff_x23;
  void *__dest;
  void *unaff_x25;
  size_t unaff_x27;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8fae4(**(undefined8 **)(param_1 + 0xc0));
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48));
    uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x20) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x20));
  puVar1 = PTR_DAT_08e6fb20;
  if (*(uint *)(unaff_x23 + 0x18) < 2) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)PTR_DAT_08e6fb20;
  thunk_FUN_03d233cc();
  memset(unaff_x22,0,unaff_x27);
  memcpy(unaff_x25,unaff_x22,unaff_x27);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  pvVar5 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                      0x20);
  if ((uVar2 & 1) == 0) {
    memcpy(unaff_x25,pvVar5,unaff_x27);
    memcpy(unaff_x22,unaff_x25,unaff_x27);
    pvVar5 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar5,unaff_x22,unaff_x27);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    __dest = *(void **)(unaff_x29 + -0x28);
    uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),pvVar5);
    if ((uVar2 & 1) != 0) goto LAB_06010890;
    uVar6 = 0;
  }
  else {
    __dest = *(void **)(unaff_x29 + -0x28);
    unaff_x22 = pvVar5;
                    /* try { // try from 06010834 to 061108f3 has its CatchHandler @ 06010834
                       catch() { ... } // from try @ 06010834 with catch @ 06010834
                       catch() { ... } // from try @ 0601094c with catch @ 06010834
                       catch() { ... } // from try @ 06010a54 with catch @ 06010834
                       catch() { ... } // from try @ 06010aa8 with catch @ 06010834
                       catch() { ... } // from try @ 06010cb0 with catch @ 06010834 */
LAB_06010890:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),unaff_x22,0,unaff_x29 + -0x10);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x30) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x30));
  if (*(uint *)(unaff_x23 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_03d233cc();
  pvVar5 = *(void **)(unaff_x29 + -0x30);
  sVar7 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar5,0,sVar7);
  memcpy(__dest,pvVar5,sVar7);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),__dest);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) + 0x40
                                    );
  if ((uVar2 & 1) == 0) {
    sVar7 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(__dest,__src,sVar7);
    memcpy(pvVar5,__dest,sVar7);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar5,sVar7);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    __src = pvVar5;
    if ((uVar2 & 1) != 0) goto LAB_06010a1c;
    uVar6 = 0;
  }
  else {
LAB_06010a1c:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),__src,0,unaff_x29 + -0x10);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x40) = uVar6;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x40));
    if (5 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38();
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_06010b04:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


