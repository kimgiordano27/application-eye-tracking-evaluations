/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 06010450
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate
               (long param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  void *__src;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ushort *in_x9;
  ulong uVar7;
  long *unaff_x19;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  size_t sVar12;
  ulong uVar13;
  void *__dest;
  void *__dest_00;
  ulong uVar14;
  size_t unaff_x28;
  long unaff_x29;
  
  uVar1 = *in_x9;
  uVar14 = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0xfc);
  lVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_03cf1244(param_1);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  *(ulong *)(unaff_x29 + -0x20) =
       (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x18) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar6 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar3 = *unaff_x19;
  *(long *)(unaff_x29 + -0x48) = lVar6;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar6 = lVar6 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x50) = lVar6;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar6 = lVar6 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x58) = lVar6;
  uVar7 = unaff_x28 + 0xf & 0x1fffffff0;
  pvVar9 = (void *)(lVar6 - uVar7);
  __dest_00 = (void *)((long)pvVar9 - uVar7);
  uVar10 = uVar14 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)__dest_00 - uVar10);
  *(ulong *)(unaff_x29 + -0x60) = (long)__dest - uVar10;
  sVar12 = *(size_t *)(unaff_x29 + -0x20);
  uVar13 = sVar12 + 0xf & 0x1fffffff0;
  lVar3 = ((long)__dest - uVar10) - uVar13;
  *(long *)(unaff_x29 + -0x28) = lVar3;
  lVar3 = lVar3 - uVar13;
  *(long *)(unaff_x29 + -0x38) = lVar3;
  pvVar8 = (void *)(lVar3 - uVar7);
  memset(pvVar8,0,unaff_x28);
  pvVar11 = (void *)((long)pvVar8 - uVar10);
  memset(pvVar11,0,uVar14);
  *(void **)(unaff_x29 + -0x30) = (void *)((long)pvVar11 - uVar13);
  memset((void *)((long)pvVar11 - uVar13),0,sVar12);
  lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,6);
  memset(pvVar8,0,unaff_x28);
  memcpy(pvVar9,pvVar8,unaff_x28);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244();
  }
  uVar7 = FUN_03c8fae4(**(undefined8 **)(lVar6 + 0xc0),pvVar9);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244(lVar6);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80))
  ;
  if ((uVar7 & 1) == 0) {
    memcpy(pvVar9,__src,unaff_x28);
    memcpy(pvVar8,pvVar9,unaff_x28);
    memcpy(__dest_00,pvVar8,unaff_x28);
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    uVar7 = FUN_03c8fae4(**(undefined8 **)(lVar6 + 0xc0),__dest_00);
    __src = pvVar8;
    if ((uVar7 & 1) != 0) goto LAB_06010710;
    uVar5 = 0;
  }
  else {
LAB_06010710:
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    lVar6 = **(long **)(lVar6 + 0xc0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48),__src,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06010b04;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20));
  puVar2 = PTR_DAT_08e6fb20;
  if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06010b04;
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_08e6fb20;
  thunk_FUN_03d233cc();
  memset(pvVar11,0,uVar14);
  memcpy(__dest,pvVar11,uVar14);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244();
  }
  uVar7 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),__dest);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244(lVar6);
  }
  pvVar8 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) +
                                      0x20);
  if ((uVar7 & 1) == 0) {
    memcpy(__dest,pvVar8,uVar14);
    memcpy(pvVar11,__dest,uVar14);
    pvVar8 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar8,pvVar11,uVar14);
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    pvVar9 = *(void **)(unaff_x29 + -0x28);
    uVar14 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),pvVar8);
    if ((uVar14 & 1) != 0) goto LAB_06010890;
    uVar5 = 0;
  }
  else {
    pvVar9 = *(void **)(unaff_x29 + -0x28);
    pvVar11 = pvVar8;
LAB_06010890:
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),pvVar11,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x30));
  if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)puVar2;
  thunk_FUN_03d233cc();
  pvVar11 = *(void **)(unaff_x29 + -0x30);
  sVar12 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar11,0,sVar12);
  memcpy(pvVar9,pvVar11,sVar12);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244();
  }
  uVar14 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),pvVar9);
  lVar6 = *unaff_x19;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244(lVar6);
  }
  pvVar8 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) +
                                      0x40);
  if ((uVar14 & 1) == 0) {
    sVar12 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(pvVar9,pvVar8,sVar12);
    memcpy(pvVar11,pvVar9,sVar12);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar11,sVar12);
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    uVar14 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),
                          *(undefined8 *)(unaff_x29 + -0x38));
    pvVar8 = pvVar11;
    if ((uVar14 & 1) != 0) goto LAB_06010a1c;
    uVar5 = 0;
  }
  else {
LAB_06010a1c:
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),pvVar8,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(lVar3 + 0x18)) {
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x40));
    if (5 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38(lVar3,0);
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


