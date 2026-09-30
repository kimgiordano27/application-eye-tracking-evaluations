/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 063987b4
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


undefined8
OVRPlugin__GetLayerRecommendedResolution
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  long in_x9;
  int *piVar7;
  long in_x10;
  long *plVar8;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000018;
  
code_r0x063987b4:
  if (in_x10 != in_x9) {
    param_4 = (long *)0x0;
  }
  do {
    uVar2 = FUN_06395b04(*(undefined8 *)(param_1 + 0x48),param_4);
    *(undefined8 *)(in_stack_00000018 + 0x50) = uVar2;
    thunk_FUN_037aeb94();
    plVar8 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
      *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x48),0);
      plVar8 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d89700) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06398910;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d89700,0);
LAB_06398910:
      uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar3 & 1) == 0) {
        FUN_06398a18();
        *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
        thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x40),0);
        return 0;
      }
      plVar8 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d9b068) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06398730;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d9b068,0);
LAB_06398730:
      uVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      *(undefined8 *)(in_stack_00000018 + 0x48) = uVar2;
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
      unaff_x20 = (long *)PTR_DAT_07db5908;
      unaff_x22 = (long *)PTR_DAT_07db5468;
    }
    else {
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
          *(undefined8 *)(in_stack_00000018 + 0x18) = plVar8;
          thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),plVar8);
          uVar6 = 3;
          goto LAB_063988e8;
        }
      }
      else {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (plVar8[0xc],*(undefined8 *)(unaff_x21 + 0x10),0);
        if ((uVar3 & 1) != 0) {
          uVar2 = FUN_06373478(plVar8,0);
          *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
          thunk_FUN_037aeb94();
          uVar6 = 2;
LAB_063988e8:
          *(undefined4 *)(in_stack_00000018 + 0x10) = uVar6;
          return 1;
        }
      }
    }
    param_4 = *(long **)(in_stack_00000018 + 0x50);
    param_1 = in_stack_00000018;
    if (param_4 != (long *)0x0) {
      in_x9 = *unaff_x20;
      if (*(byte *)(in_x9 + 0x130) <= *(byte *)(*param_4 + 0x130)) break;
    }
    param_4 = (long *)0x0;
  } while( true );
  in_x10 = *(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(in_x9 + 0x130) * 8 + -8);
  goto code_r0x063987b4;
}


