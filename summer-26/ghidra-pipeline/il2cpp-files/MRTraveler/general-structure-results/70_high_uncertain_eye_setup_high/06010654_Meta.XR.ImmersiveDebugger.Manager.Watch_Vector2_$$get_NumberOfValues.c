/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 06010654
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(void *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  void *__src;
  undefined8 uVar6;
  long *unaff_x19;
  void *unaff_x20;
  size_t sVar7;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  void *__dest;
  void *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,unaff_x20,unaff_x28);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar3 = FUN_03c8fae4(**(undefined8 **)(lVar2 + 0xc0));
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  pvVar4 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80)
                                     );
  if ((uVar3 & 1) == 0) {
    memcpy(unaff_x21,pvVar4,unaff_x28);
    memcpy(unaff_x20,unaff_x21,unaff_x28);
    memcpy(unaff_x26,unaff_x20,unaff_x28);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar3 = FUN_03c8fae4(**(undefined8 **)(lVar2 + 0xc0));
    pvVar4 = unaff_x20;
    if ((uVar3 & 1) != 0) goto LAB_06010710;
    uVar6 = 0;
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
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x118),
                 *(undefined8 *)(unaff_x29 + -0x48),pvVar4,0,unaff_x29 + -0x10);
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
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar3 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  pvVar4 = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) +
                                      0x20);
  if ((uVar3 & 1) == 0) {
    memcpy(unaff_x25,pvVar4,unaff_x27);
    memcpy(unaff_x22,unaff_x25,unaff_x27);
    pvVar4 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar4,unaff_x22,unaff_x27);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    __dest = *(void **)(unaff_x29 + -0x28);
    uVar3 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),pvVar4);
    if ((uVar3 & 1) != 0) goto LAB_06010890;
    uVar6 = 0;
  }
  else {
    __dest = *(void **)(unaff_x29 + -0x28);
    unaff_x22 = pvVar4;
LAB_06010890:
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50),unaff_x22,0,unaff_x29 + -0x10);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x30) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x30));
  if (*(uint *)(unaff_x23 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_03d233cc();
  pvVar4 = *(void **)(unaff_x29 + -0x30);
  sVar7 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar4,0,sVar7);
  memcpy(__dest,pvVar4,sVar7);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar3 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),__dest);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) + 0x40
                                    );
  if ((uVar3 & 1) == 0) {
    sVar7 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(__dest,__src,sVar7);
    memcpy(pvVar4,__dest,sVar7);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar4,sVar7);
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar3 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    __src = pvVar4;
    if ((uVar3 & 1) != 0) goto LAB_06010a1c;
    uVar6 = 0;
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
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_03c90414(lVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x128),
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


