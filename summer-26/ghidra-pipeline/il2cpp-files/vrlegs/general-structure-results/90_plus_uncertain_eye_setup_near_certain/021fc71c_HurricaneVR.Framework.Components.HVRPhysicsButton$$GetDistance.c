/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsButton$$GetDistance
ENTRY_POINT: 021fc71c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;weak_vector_component_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fc8ec) */

undefined8 HurricaneVR_Framework_Components_HVRPhysicsButton__GetDistance(long param_1)

{
  long lVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  int iVar6;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(long *)(param_1 + 0x10) = in_x9 + 1;
  plVar5 = *(long **)(unaff_x20 + 0x10);
  *(long *)(unaff_x29 + -0x30) = in_x9 + 1;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = **(long **)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8(lVar1);
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        lVar1 = lVar2 + (long)*piVar4 * 0x10 + 0x138;
        goto HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_01a472ec(plVar5,lVar1,0);
HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown:
  *(void **)(unaff_x29 + -0x10) = unaff_x28;
  lVar1 = *(long *)(lVar1 + 8);
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar5,unaff_x29 + -0x10);
  memset(unaff_x24,0,unaff_x25);
  if (*(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x68) + 0x28) < 0) {
    memcpy(unaff_x26,unaff_x28,unaff_x27);
  }
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x30);
  FUN_02207c1c();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = (int)*(undefined8 *)(unaff_x22 + 0x18);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)(unaff_x22 + 0x20),unaff_x24,unaff_x25);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
    iVar6 = (int)*(undefined8 *)(unaff_x22 + 0x18);
  }
  if (iVar6 != 0) {
    FUN_01ab6954(lVar1,(void *)(unaff_x22 + 0x20));
    **(undefined4 **)(unaff_x29 + -0x28) = 1;
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x20),0);
    }
    if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


