/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 06398890
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeLayerRecommendedResolution(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined **in_x10;
  long *plVar10;
  long *unaff_x19;
  long unaff_x21;
  long in_stack_00000018;
  
  do {
    uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)in_x10[0xe0]) {
          puVar5 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06398910;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x19,*(long *)in_x10[0xe0],0);
LAB_06398910:
    uVar8 = (*(code *)*puVar5)(unaff_x19,puVar5[1]);
    if ((uVar8 & 1) == 0) {
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
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d9b068) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06398730;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d9b068,0);
LAB_06398730:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar4;
    thunk_FUN_037aeb94();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
      *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18));
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    *(undefined8 *)(in_stack_00000018 + 0x50) = *(undefined8 *)(in_stack_00000018 + 0x48);
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50));
    puVar3 = PTR_DAT_07db5908;
    puVar2 = PTR_DAT_07db5468;
LAB_0639877c:
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 == (long *)0x0) {
LAB_063987a0:
      plVar10 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_063987a0;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
        plVar10 = (long *)0x0;
      }
    }
    uVar4 = FUN_06395b04(*(undefined8 *)(in_stack_00000018 + 0x48),plVar10);
    *(undefined8 *)(in_stack_00000018 + 0x50) = uVar4;
    thunk_FUN_037aeb94();
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
          *(undefined8 *)(in_stack_00000018 + 0x18) = plVar10;
          thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),plVar10);
          uVar7 = 3;
          goto LAB_063988e8;
        }
      }
      else {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (plVar10[0xc],*(undefined8 *)(unaff_x21 + 0x10),0);
        if ((uVar8 & 1) != 0) {
          uVar4 = FUN_06373478(plVar10,0);
          *(undefined8 *)(in_stack_00000018 + 0x18) = uVar4;
          thunk_FUN_037aeb94();
          uVar7 = 2;
LAB_063988e8:
          *(undefined4 *)(in_stack_00000018 + 0x10) = uVar7;
          return 1;
        }
      }
      goto LAB_0639877c;
    }
    *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
    *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x48),0);
    unaff_x19 = *(long **)(in_stack_00000018 + 0x40);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_x10 = &PTR_DAT_07d89000;
    param_1 = *unaff_x19;
  } while( true );
}


