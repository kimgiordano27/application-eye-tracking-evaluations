/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 0464898c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04648f20) */

void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current
               (void *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *__src;
  undefined1 *__s;
  code *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  undefined1 auStack_20 [8];
  long lStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lStack_18 = tpidr_el0;
  lStack_8 = *(long *)(lStack_18 + 0x28);
  if ((DAT_08255fa8 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d89700);
    DAT_08255fa8 = 1;
  }
  lVar9 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar5 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03775678(lVar9);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  uVar11 = (ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  uVar1 = *(uint *)(**(long **)(lVar5 + 0xc0) + 0xfc);
  __src = auStack_20 + -uVar10;
  __s = __src + -uVar10;
  memset(__s,0,uVar11);
  memset(param_1,0,(ulong)uVar1);
  lVar9 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar5 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03775678(lVar9);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  uVar4 = (*pcVar12)(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  FUN_031b7e74(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),uVar4);
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  piVar6 = (int *)thunk_FUN_03799158(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(param_3 + 0x20);
  iVar15 = *piVar6;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  lVar5 = *(long *)(**(long **)(lVar5 + 0xc0) + 0x80);
  if (iVar15 < 2) {
    uVar13 = 0;
  }
  else {
    piVar6 = (int *)thunk_FUN_03799158(param_1);
    lVar5 = *(long *)(param_3 + 0x20);
    iVar15 = *piVar6;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    uVar13 = RootMotion_FinalIK_Finger___ctor(lVar5,iVar15 + -1);
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    lVar5 = *(long *)(**(long **)(lVar5 + 0xc0) + 0x80);
  }
  FUN_031b6614(param_1,lVar5 + 0x40,uVar13);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04648c40;
      }
      uVar10 = uVar10 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(param_2,lVar5,0);
LAB_04648c40:
  plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar3 = PTR_DAT_07d89700;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar15 = 0;
  do {
    lVar5 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04648cac;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_04648cac:
    uVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_04648ed4;
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 == 0) goto LAB_04648eac;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          lVar5 = lVar9 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_04648d30;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    lVar5 = FUN_0377596c(plVar8,lVar5,0);
LAB_04648d30:
    lVar5 = *(long *)(lVar5 + 8);
    puStack_10 = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar8,&puStack_10,__src);
    memcpy(__s,__src,uVar11);
    if (iVar15 == 0) {
      memcpy(__src,__s,uVar11);
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      FUN_0373b540(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x20,__src,uVar11);
    }
    else {
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      puVar7 = (undefined8 *)
               thunk_FUN_03799158(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
      plVar14 = (long *)*puVar7;
      memcpy(__src,__s,uVar11);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = iVar15 - 1;
      if (*(uint *)(plVar14 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      memcpy((void *)((long)plVar14 + (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20),
             __src,uVar11);
      lVar5 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      if (*(uint *)(plVar14 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      FUN_0373b4c8(lVar5,(long)plVar14 +
                         (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20,__src);
    }
    iVar15 = iVar15 + 1;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar6 = piVar6 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04648ec8;
    }
  }
LAB_04648eac:
  puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d896f8,0);
LAB_04648ec8:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_04648ed4:
  if (*(long *)(lStack_18 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


