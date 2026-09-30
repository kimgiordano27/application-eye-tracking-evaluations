/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 06010568
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings(void)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  long *unaff_x19;
  void *pvVar8;
  undefined1 *__dest;
  ulong uVar9;
  void *pvVar10;
  size_t sVar11;
  ulong uVar12;
  undefined1 *__dest_00;
  undefined1 *__dest_01;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  uVar7 = in_x9 & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar7;
  __dest_01 = __dest + -uVar7;
  uVar9 = unaff_x27 + 0xf & 0x1fffffff0;
  __dest_00 = __dest_01 + -uVar9;
  *(ulong *)(unaff_x29 + -0x60) = (long)__dest_00 - uVar9;
  sVar11 = *(size_t *)(unaff_x29 + -0x20);
  uVar12 = sVar11 + 0xf & 0x1fffffff0;
  lVar6 = ((long)__dest_00 - uVar9) - uVar12;
  *(long *)(unaff_x29 + -0x28) = lVar6;
  lVar6 = lVar6 - uVar12;
  *(long *)(unaff_x29 + -0x38) = lVar6;
  pvVar8 = (void *)(lVar6 - uVar7);
  memset(pvVar8,0,unaff_x28);
  pvVar10 = (void *)((long)pvVar8 - uVar9);
  memset(pvVar10,0,unaff_x27);
  *(void **)(unaff_x29 + -0x30) = (void *)((long)pvVar10 - uVar12);
  memset((void *)((long)pvVar10 - uVar12),0,sVar11);
  lVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,6);
  memset(pvVar8,0,unaff_x28);
  memcpy(__dest,pvVar8,unaff_x28);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar7 = FUN_03c8fae4(**(undefined8 **)(lVar2 + 0xc0),__dest);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  pvVar3 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80)
                                     );
  if ((uVar7 & 1) == 0) {
    memcpy(__dest,pvVar3,unaff_x28);
    memcpy(pvVar8,__dest,unaff_x28);
    memcpy(__dest_01,pvVar8,unaff_x28);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar7 = FUN_03c8fae4(**(undefined8 **)(lVar2 + 0xc0),__dest_01);
    pvVar3 = pvVar8;
    if ((uVar7 & 1) != 0) goto LAB_06010710;
    uVar5 = 0;
  }
  else {
LAB_06010710:
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48),pvVar3,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06010b04;
  *(undefined8 *)(lVar6 + 0x20) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20));
  puVar1 = PTR_DAT_08e6fb20;
  if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06010b04;
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_08e6fb20;
  thunk_FUN_03d233cc();
  memset(pvVar10,0,unaff_x27);
  memcpy(__dest_00,pvVar10,unaff_x27);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar7 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),__dest_00);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  pvVar8 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) +
                                      0x20);
  if ((uVar7 & 1) == 0) {
    memcpy(__dest_00,pvVar8,unaff_x27);
    memcpy(pvVar10,__dest_00,unaff_x27);
    pvVar8 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar8,pvVar10,unaff_x27);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    pvVar3 = *(void **)(unaff_x29 + -0x28);
    uVar7 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),pvVar8);
    if ((uVar7 & 1) != 0) goto LAB_06010890;
    uVar5 = 0;
  }
  else {
    pvVar3 = *(void **)(unaff_x29 + -0x28);
    pvVar10 = pvVar8;
LAB_06010890:
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),pvVar10,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(lVar6 + 0x30) = uVar5;
  thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x30));
  if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_03d233cc();
  pvVar10 = *(void **)(unaff_x29 + -0x30);
  sVar11 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar10,0,sVar11);
  memcpy(pvVar3,pvVar10,sVar11);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar7 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),pvVar3);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  pvVar8 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) +
                                      0x40);
  if ((uVar7 & 1) == 0) {
    sVar11 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(pvVar3,pvVar8,sVar11);
    memcpy(pvVar10,pvVar3,sVar11);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar10,sVar11);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar7 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    pvVar8 = pvVar10;
    if ((uVar7 & 1) != 0) goto LAB_06010a1c;
    uVar5 = 0;
  }
  else {
LAB_06010a1c:
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),pvVar8,0,unaff_x29 + -0x10);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(lVar6 + 0x18)) {
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x40));
    if (5 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38(lVar6,0);
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


