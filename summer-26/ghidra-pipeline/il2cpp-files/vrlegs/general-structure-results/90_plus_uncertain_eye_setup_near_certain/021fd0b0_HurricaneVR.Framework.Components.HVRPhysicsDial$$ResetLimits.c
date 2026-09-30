/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$ResetLimits
ENTRY_POINT: 021fd0b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */
/* WARNING: Removing unreachable block (ram,0x021fd1a0) */
/* WARNING: Removing unreachable block (ram,0x021fd1a4) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__ResetLimits(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  ulong uVar6;
  long *plVar7;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar8;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    plVar8 = *(long **)(unaff_x29 + -0x50);
    do {
      *(long *)(unaff_x29 + -0x10) = unaff_x19;
      FUN_02207c1c();
      uVar6 = (ulong)*(uint *)(plVar8 + 3);
      if (uVar6 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar8 + unaff_x28 * *(uint *)(*plVar8 + 0x104) + 0x20),unaff_x27,
             unaff_x24);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
        uVar6 = (ulong)*(uint *)(plVar8 + 3);
      }
      if (uVar6 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar2,(long)plVar8 + unaff_x28 * *(uint *)(*plVar8 + 0x104) + 0x20);
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)plVar8[3] <= (long)unaff_x28) {
LAB_021fd168:
        thunk_FUN_01a4b338();
        *(undefined4 *)(unaff_x21 + 0x2c) = 0;
        if (*(char *)(unaff_x29 + -0x14) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return 0 < **(int **)(unaff_x29 + -0x20);
      }
      plVar7 = *(long **)(unaff_x21 + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_021fcf80;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_01a472ec(plVar7,*unaff_x23,0);
LAB_021fcf80:
      uVar6 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if ((uVar6 & 1) == 0) {
        lVar2 = *(long *)(unaff_x21 + 0x40);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        thunk_FUN_01a4b338();
        *(undefined1 *)(lVar2 + 0x10) = 1;
        thunk_FUN_01a4b338();
        *(int *)(unaff_x21 + 0x28) = (int)unaff_x28;
        goto LAB_021fd168;
      }
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(lVar2 + 0x10);
      if ((lVar4 == 0x7fffffffffffffff) || ((lVar4 < 0 && (1 < -0x8000000000000000 - lVar4)))) {
        uVar3 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar3,unaff_x22);
      }
      unaff_x19 = lVar4 + 1;
      *(long *)(lVar2 + 0x10) = unaff_x19;
      plVar7 = *(long **)(unaff_x21 + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8(lVar2);
      }
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            lVar2 = lVar4 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_021fd034;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      lVar2 = FUN_01a472ec(plVar7,lVar2,0);
LAB_021fd034:
      *(void **)(unaff_x29 + -0x10) = unaff_x25;
      lVar2 = *(long *)(lVar2 + 8);
      (**(code **)(lVar2 + 0x10))
                (*(undefined8 *)(lVar2 + 8),lVar2,plVar7,unaff_x29 + -0x10,unaff_x25);
      memset(unaff_x27,0,unaff_x24);
    } while (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x68) + 0x28));
    memcpy(*(void **)(unaff_x29 + -0x30),unaff_x25,*(size_t *)(unaff_x29 + -0x28));
  } while( true );
}


