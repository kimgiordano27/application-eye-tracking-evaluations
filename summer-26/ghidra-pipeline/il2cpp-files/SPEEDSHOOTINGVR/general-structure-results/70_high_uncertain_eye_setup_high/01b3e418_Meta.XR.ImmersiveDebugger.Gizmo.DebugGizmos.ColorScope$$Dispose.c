/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 01b3e418
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  long *unaff_x19;
  size_t unaff_x21;
  void *__s;
  long unaff_x23;
  undefined8 *unaff_x24;
  void *pvVar5;
  long unaff_x29;
  
  if (in_w8 < 5) goto LAB_01b3e614;
  *(undefined8 *)(unaff_x23 + 0x40) = param_2;
  thunk_FUN_0106e12c((undefined8 *)(unaff_x23 + 0x40));
  if (*(uint *)(unaff_x23 + 0x18) < 6) goto LAB_01b3e614;
  *(undefined8 *)(unaff_x23 + 0x48) = *unaff_x24;
  thunk_FUN_0106e12c();
  __s = *(void **)(unaff_x29 + -0x50);
  memset(__s,0,unaff_x21);
  pvVar5 = *(void **)(unaff_x29 + -0x58);
  memcpy(pvVar5,__s,unaff_x21);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  uVar2 = FUN_00fdc4e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xa8),pvVar5);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_0103c244(*unaff_x19);
  }
  __src = (void *)thunk_FUN_01023220();
  if ((uVar2 & 1) == 0) {
    memcpy(pvVar5,__src,unaff_x21);
    memcpy(__s,pvVar5,unaff_x21);
    pvVar5 = *(void **)(unaff_x29 + -0xa0);
    memcpy(pvVar5,__s,unaff_x21);
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    uVar2 = FUN_00fdc4e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xa8),pvVar5);
    __src = __s;
    if ((uVar2 & 1) != 0) goto LAB_01b3e52c;
    uVar4 = 0;
  }
  else {
LAB_01b3e52c:
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0xa8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244(lVar1);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    FUN_00fdce18(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x180),
                 *(undefined8 *)(unaff_x29 + -0x80),__src,0,unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
  if (6 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x50) = uVar4;
    thunk_FUN_0106e12c((undefined8 *)(unaff_x23 + 0x50));
    if (7 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x58) = *(undefined8 *)PTR_DAT_0234d4e0;
      thunk_FUN_0106e12c();
      FUN_01c515a0();
      if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_01b3e614:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


