/*
FUNCTION_NAME: Animancer.ManualMixerState$$AddRange
ENTRY_POINT: 02225234
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02225508) */
/* WARNING: Removing unreachable block (ram,0x02225518) */

void Animancer_ManualMixerState__AddRange(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x21 + 0x28) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x27 != (long *)0x0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    *(undefined4 *)(unaff_x21 + 0x30) = 0;
    lVar4 = *(long *)(lVar4 + 0x50);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8(lVar4);
    }
    lVar5 = *unaff_x27;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022252b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_022252b0:
    plVar3 = (long *)(*(code *)*puVar2)();
    puVar1 = PTR_DAT_03cbed20;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02225318;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,0);
LAB_02225318:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar6 & 1) == 0) goto LAB_02225410;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8(lVar4);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
            goto Animancer_ManualMixerState__set_UpdatableIndex;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar4 = FUN_01a472ec(plVar3,lVar4,0);
Animancer_ManualMixerState__set_UpdatableIndex:
      *(void **)(unaff_x29 + -0x10) = unaff_x23;
      lVar4 = *(long *)(lVar4 + 8);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar3,unaff_x29 + -0x10);
      memcpy(unaff_x26,unaff_x23,unaff_x22);
      memcpy(unaff_x24,unaff_x26,unaff_x22);
      if (*(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10) + 0x28) < 0) {
        memcpy(unaff_x25,unaff_x24,unaff_x22);
      }
      FUN_02225650();
    } while( true );
  }
  goto LAB_0222547c;
LAB_02225410:
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0222546c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03cbed08,0);
LAB_0222546c:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
LAB_0222547c:
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x28),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


