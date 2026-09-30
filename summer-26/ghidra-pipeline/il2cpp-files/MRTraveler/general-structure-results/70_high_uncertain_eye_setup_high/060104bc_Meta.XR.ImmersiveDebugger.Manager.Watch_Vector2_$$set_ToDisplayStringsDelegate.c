/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 060104bc
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_ToDisplayStringsDelegate(long param_1)

{
  undefined *puVar1;
  long lVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  size_t sVar11;
  ulong uVar12;
  void *__dest;
  void *__dest_00;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  lVar5 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar2 = *unaff_x19;
  *(long *)(unaff_x29 + -0x48) = lVar5;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar5 = lVar5 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x50) = lVar5;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar5 = lVar5 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x58) = lVar5;
  uVar6 = unaff_x28 + 0xf & 0x1fffffff0;
  pvVar8 = (void *)(lVar5 - uVar6);
  __dest_00 = (void *)((long)pvVar8 - uVar6);
  uVar9 = unaff_x27 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)__dest_00 - uVar9);
  *(ulong *)(unaff_x29 + -0x60) = (long)__dest - uVar9;
  sVar11 = *(size_t *)(unaff_x29 + -0x20);
  uVar12 = sVar11 + 0xf & 0x1fffffff0;
  lVar2 = ((long)__dest - uVar9) - uVar12;
  *(long *)(unaff_x29 + -0x28) = lVar2;
  lVar2 = lVar2 - uVar12;
  *(long *)(unaff_x29 + -0x38) = lVar2;
  pvVar7 = (void *)(lVar2 - uVar6);
  memset(pvVar7,0,unaff_x28);
  pvVar10 = (void *)((long)pvVar7 - uVar9);
  memset(pvVar10,0,unaff_x27);
  *(void **)(unaff_x29 + -0x30) = (void *)((long)pvVar10 - uVar12);
  memset((void *)((long)pvVar10 - uVar12),0,sVar11);
  lVar2 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,6);
  memset(pvVar7,0,unaff_x28);
  memcpy(pvVar8,pvVar7,unaff_x28);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_03c8fae4(**(undefined8 **)(lVar5 + 0xc0),pvVar8);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80))
  ;
  if ((uVar6 & 1) == 0) {
    memcpy(pvVar8,__src,unaff_x28);
    memcpy(pvVar7,pvVar8,unaff_x28);
    memcpy(__dest_00,pvVar7,unaff_x28);
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    uVar6 = FUN_03c8fae4(**(undefined8 **)(lVar5 + 0xc0),__dest_00);
    __src = pvVar7;
    if ((uVar6 & 1) != 0) goto LAB_06010710;
    uVar4 = 0;
  }
  else {
LAB_06010710:
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    FUN_03c90414(lVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48),__src,0,unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20));
  puVar1 = PTR_DAT_08e6fb20;
  if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_08e6fb20;
  thunk_FUN_03d233cc();
  memset(pvVar10,0,unaff_x27);
  memcpy(__dest,pvVar10,unaff_x27);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),__dest);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  pvVar7 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) +
                                      0x20);
  if ((uVar6 & 1) == 0) {
    memcpy(__dest,pvVar7,unaff_x27);
    memcpy(pvVar10,__dest,unaff_x27);
    pvVar7 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar7,pvVar10,unaff_x27);
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    pvVar8 = *(void **)(unaff_x29 + -0x28);
    uVar6 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),pvVar7);
    if ((uVar6 & 1) != 0) goto LAB_06010890;
    uVar4 = 0;
  }
  else {
    pvVar8 = *(void **)(unaff_x29 + -0x28);
    pvVar10 = pvVar7;
LAB_06010890:
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    FUN_03c90414(lVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),pvVar10,0,unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x30));
  if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_03d233cc();
  pvVar10 = *(void **)(unaff_x29 + -0x30);
  sVar11 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar10,0,sVar11);
  memcpy(pvVar8,pvVar10,sVar11);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),pvVar8);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  pvVar7 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) +
                                      0x40);
  if ((uVar6 & 1) == 0) {
    sVar11 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(pvVar8,pvVar7,sVar11);
    memcpy(pvVar10,pvVar8,sVar11);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar10,sVar11);
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    uVar6 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    pvVar7 = pvVar10;
    if ((uVar6 & 1) != 0) goto LAB_06010a1c;
    uVar4 = 0;
  }
  else {
LAB_06010a1c:
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    FUN_03c90414(lVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),pvVar7,0,unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(lVar2 + 0x18)) {
    *(undefined8 *)(lVar2 + 0x40) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x40));
    if (5 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38(lVar2,0);
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


