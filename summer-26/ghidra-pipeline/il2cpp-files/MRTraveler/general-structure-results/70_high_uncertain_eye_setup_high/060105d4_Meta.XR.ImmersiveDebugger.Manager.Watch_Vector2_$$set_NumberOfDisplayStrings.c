/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 060105d4
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *__src;
  long lVar5;
  undefined1 *puVar6;
  void *__src_00;
  undefined8 uVar7;
  long in_x9;
  long *unaff_x19;
  size_t sVar8;
  void *unaff_x21;
  void *pvVar9;
  long unaff_x22;
  undefined1 *__s;
  size_t unaff_x23;
  long unaff_x24;
  void *__dest;
  void *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  puVar6 = &stack0x00000000 + -in_x9;
  memset(puVar6,0,unaff_x28);
  __s = puVar6 + -unaff_x22;
  memset(__s,0,unaff_x27);
  *(undefined1 **)(unaff_x29 + -0x30) = __s + -unaff_x24;
  memset(__s + -unaff_x24,0,unaff_x23);
  lVar2 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,6);
  memset(puVar6,0,unaff_x28);
  memcpy(unaff_x21,puVar6,unaff_x28);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar4 = FUN_03c8fae4(**(undefined8 **)(lVar3 + 0xc0));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  __src = (undefined1 *)
          thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  if ((uVar4 & 1) == 0) {
    memcpy(unaff_x21,__src,unaff_x28);
    memcpy(puVar6,unaff_x21,unaff_x28);
    memcpy(unaff_x26,puVar6,unaff_x28);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    uVar4 = FUN_03c8fae4(**(undefined8 **)(lVar3 + 0xc0));
    __src = puVar6;
    if ((uVar4 & 1) != 0) goto LAB_06010710;
    uVar7 = 0;
  }
  else {
LAB_06010710:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48),__src,0,unaff_x29 + -0x10);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x20) = uVar7;
  thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20));
  puVar1 = PTR_DAT_08e6fb20;
  if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_08e6fb20;
  thunk_FUN_03d233cc();
  memset(__s,0,unaff_x27);
  memcpy(unaff_x25,__s,unaff_x27);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar4 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  puVar6 = (undefined1 *)
           thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                              *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) + 0x20);
  if ((uVar4 & 1) == 0) {
    memcpy(unaff_x25,puVar6,unaff_x27);
    memcpy(__s,unaff_x25,unaff_x27);
    pvVar9 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar9,__s,unaff_x27);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    __dest = *(void **)(unaff_x29 + -0x28);
    uVar4 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),pvVar9);
    if ((uVar4 & 1) != 0) goto LAB_06010890;
    uVar7 = 0;
  }
  else {
    __dest = *(void **)(unaff_x29 + -0x28);
    __s = puVar6;
LAB_06010890:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),__s,0,unaff_x29 + -0x10);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x30));
  if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_03d233cc();
  pvVar9 = *(void **)(unaff_x29 + -0x30);
  sVar8 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar9,0,sVar8);
  memcpy(__dest,pvVar9,sVar8);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar4 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),__dest);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  __src_00 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x40);
  if ((uVar4 & 1) == 0) {
    sVar8 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(__dest,__src_00,sVar8);
    memcpy(pvVar9,__dest,sVar8);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar9,sVar8);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    uVar4 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    __src_00 = pvVar9;
    if ((uVar4 & 1) != 0) goto LAB_06010a1c;
    uVar7 = 0;
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
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),__src_00,0,unaff_x29 + -0x10);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(lVar2 + 0x18)) {
    *(undefined8 *)(lVar2 + 0x40) = uVar7;
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


