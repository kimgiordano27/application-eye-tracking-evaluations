/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMesh
ENTRY_POINT: 063985b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceTriangleMesh(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long in_stack_00000018;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x68));
  FUN_0373b518(PTR_DAT_07d89700);
  FUN_0373b518(PTR_DAT_07db5908);
  FUN_0373b518(PTR_DAT_07db5468);
  *(undefined1 *)(unaff_x20 + 0x625) = 1;
  if (3 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  lVar11 = *(long *)(unaff_x19 + 0x38);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    break;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    goto LAB_0639875c;
  default:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    plVar10 = (long *)PTR_DAT_07db5908;
    plVar2 = (long *)PTR_DAT_07db5468;
    goto LAB_0639877c;
  }
  plVar10 = *(long **)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *plVar10;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52e8) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06398694;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db52e8,0);
LAB_06398694:
  uVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar3;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    plVar10 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06398910;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d89700,0);
LAB_06398910:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      FUN_06398a18();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x40),0);
      return 0;
    }
    plVar10 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d9b068) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06398730;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d9b068,0);
LAB_06398730:
    uVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar3;
    thunk_FUN_037aeb94();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    unaff_x19 = in_stack_00000018;
    if (*(long *)(lVar11 + 0x10) == 0) {
      *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18));
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
LAB_0639875c:
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x48);
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x50));
    plVar10 = (long *)PTR_DAT_07db5908;
    plVar2 = (long *)PTR_DAT_07db5468;
LAB_0639877c:
    plVar6 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar6 == (long *)0x0) {
LAB_063987a0:
      plVar6 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*plVar10 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_063987a0;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10) {
        plVar6 = (long *)0x0;
      }
    }
    uVar3 = FUN_06395b04(*(undefined8 *)(in_stack_00000018 + 0x48),plVar6);
    *(undefined8 *)(in_stack_00000018 + 0x50) = uVar3;
    thunk_FUN_037aeb94();
    plVar6 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar2 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *plVar2)) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          *(undefined8 *)(in_stack_00000018 + 0x18) = plVar6;
          thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),plVar6);
          uVar8 = 3;
LAB_063988e8:
          *(undefined4 *)(in_stack_00000018 + 0x10) = uVar8;
          return 1;
        }
      }
      else {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (plVar6[0xc],*(undefined8 *)(lVar11 + 0x10),0);
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_06373478(plVar6,0);
          *(undefined8 *)(in_stack_00000018 + 0x18) = uVar3;
          thunk_FUN_037aeb94();
          uVar8 = 2;
          goto LAB_063988e8;
        }
      }
      goto LAB_0639877c;
    }
    *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
    *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x48),0);
  } while( true );
}


