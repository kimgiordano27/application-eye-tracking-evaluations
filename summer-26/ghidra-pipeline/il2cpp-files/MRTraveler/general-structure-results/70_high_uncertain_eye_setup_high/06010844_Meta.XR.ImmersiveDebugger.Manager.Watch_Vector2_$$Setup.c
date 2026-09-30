/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 06010844
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *__src;
  undefined8 uVar4;
  long *unaff_x19;
  void *pvVar5;
  size_t sVar6;
  undefined8 *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  void *__dest;
  void *unaff_x25;
  size_t unaff_x27;
  long unaff_x29;
  
  memcpy(unaff_x22,unaff_x25,unaff_x27);
  pvVar5 = *(void **)(unaff_x29 + -0x60);
  memcpy(pvVar5,unaff_x22,unaff_x27);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  __dest = *(void **)(unaff_x29 + -0x28);
  uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),pvVar5);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244(lVar1);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    FUN_03c90414(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x120),
                 *(undefined8 *)(unaff_x29 + -0x50));
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 3) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x30) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x30));
  if (*(uint *)(unaff_x23 + 0x18) < 4) goto LAB_06010b04;
  *(undefined8 *)(unaff_x23 + 0x38) = *unaff_x21;
  thunk_FUN_03d233cc();
  pvVar5 = *(void **)(unaff_x29 + -0x30);
  sVar6 = *(size_t *)(unaff_x29 + -0x20);
  memset(pvVar5,0,sVar6);
  memcpy(__dest,pvVar5,sVar6);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18),__dest);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244(lVar1);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x80) + 0x40
                                    );
  if ((uVar2 & 1) == 0) {
    sVar6 = *(size_t *)(unaff_x29 + -0x20);
    memcpy(__dest,__src,sVar6);
    memcpy(pvVar5,__dest,sVar6);
    memcpy(*(void **)(unaff_x29 + -0x38),pvVar5,sVar6);
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    __src = pvVar5;
    if ((uVar2 & 1) != 0) goto LAB_06010a1c;
    uVar4 = 0;
  }
  else {
LAB_06010a1c:
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244(lVar1);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    FUN_03c90414(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x128),
                 *(undefined8 *)(unaff_x29 + -0x58),__src,0,unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (4 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x40) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x40));
    if (5 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38();
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_06010b04:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


