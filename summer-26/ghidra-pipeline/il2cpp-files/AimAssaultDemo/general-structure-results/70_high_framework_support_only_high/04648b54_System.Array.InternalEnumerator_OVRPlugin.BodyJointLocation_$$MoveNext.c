/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 04648b54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04648f20) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(void)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar9;
  int iVar10;
  long unaff_x29;
  
  piVar3 = (int *)thunk_FUN_03799158();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  iVar10 = *piVar3;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  RootMotion_FinalIK_Finger___ctor(lVar4,iVar10 + -1);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x19 + 0x20));
  }
  FUN_031b6614();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar7 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_04648c40;
      }
      uVar8 = uVar8 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_04648c40:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_07d89700;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar10 = 0;
  do {
    lVar4 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_04648cac;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,0);
LAB_04648cac:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_04648ed4;
      lVar4 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 == 0) goto LAB_04648eac;
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar4) {
          lVar4 = lVar7 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_04648d30;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    lVar4 = FUN_0377596c(plVar6,lVar4,0);
LAB_04648d30:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar6,unaff_x29 + -0x10);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (iVar10 == 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      FUN_0373b540();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      puVar5 = (undefined8 *)thunk_FUN_03799158();
      plVar9 = (long *)*puVar5;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = iVar10 - 1;
      if (*(uint *)(plVar9 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x22,unaff_x21);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678();
      }
      if (*(uint *)(plVar9 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      FUN_0373b4c8(lVar4,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar1 + 0x20)
      ;
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar3 = piVar3 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_04648ec8;
    }
  }
LAB_04648eac:
  puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d896f8,0);
LAB_04648ec8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04648ed4:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


