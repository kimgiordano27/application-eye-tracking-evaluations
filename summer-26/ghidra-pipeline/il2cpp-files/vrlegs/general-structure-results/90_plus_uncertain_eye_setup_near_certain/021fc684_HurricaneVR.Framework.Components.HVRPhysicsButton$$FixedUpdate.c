/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsButton$$FixedUpdate
ENTRY_POINT: 021fc684
PROGRAM: vrlegs-libil2cpp.so
SCORE: 134
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fc8ec) */

undefined4 HurricaneVR_Framework_Components_HVRPhysicsButton__FixedUpdate(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  int iVar8;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03cbed20) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_021fc6e0;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed20,0);
LAB_021fc6e0:
  uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a4b338();
    *(undefined1 *)(lVar2 + 0x10) = 1;
    lVar2 = *(long *)(unaff_x20 + 0x38);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a4b338();
    uVar6 = 0;
    *(undefined1 *)(lVar2 + 0x10) = 1;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(lVar2 + 0x10);
    if ((lVar4 == 0x7fffffffffffffff) || ((lVar4 < 0 && (1 < -0x8000000000000000 - lVar4)))) {
      FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14();
    }
    *(long *)(lVar2 + 0x10) = lVar4 + 1;
    plVar7 = *(long **)(unaff_x20 + 0x10);
    *(long *)(unaff_x29 + -0x30) = lVar4 + 1;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = **(long **)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8(lVar2);
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar4 + (long)*piVar5 * 0x10 + 0x138;
          goto HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_01a472ec(plVar7,lVar2,0);
HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown:
    *(void **)(unaff_x29 + -0x10) = unaff_x28;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar7,unaff_x29 + -0x10);
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
    iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x18);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)(unaff_x22 + 0x20),unaff_x24,unaff_x25);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
      iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x18);
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar2,(void *)(unaff_x22 + 0x20));
    uVar6 = 1;
    **(undefined4 **)(unaff_x29 + -0x28) = 1;
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x20),0);
  }
  if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


