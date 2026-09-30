/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 06397fe4
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


undefined8
OVRPlugin__GetSpaceBoundary2D
          (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 unaff_x19;
  long *plVar9;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  do {
    uVar6 = (*param_1)(param_2,param_3,param_4,param_5,param_6);
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(in_stack_00000018 + 0x18) = unaff_x19;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),unaff_x19);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(in_stack_00000018 + 0x68);
joined_r0x06397ff8:
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06397f44;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06397f44:
    uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar6 & 1) == 0) {
      FUN_06398100();
      *(undefined8 *)(in_stack_00000018 + 0x68) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x68),0);
      puVar2 = PTR_DAT_07db5908;
      do {
        plVar9 = *(long **)(in_stack_00000018 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06397d4c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06397d4c:
        uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar6 & 1) == 0) {
          FUN_063981b0();
          *(undefined8 *)(in_stack_00000018 + 0x60) = 0;
          thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x60),0);
          return 0;
        }
        plVar9 = *(long **)(in_stack_00000018 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06397db8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0);
LAB_06397db8:
        plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2))
          goto LAB_06397e60;
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar6 = (**(code **)(*plVar3 + 0x178))
                          (plVar3,*(undefined8 *)(in_stack_00000018 + 0x40),plVar9,
                           *(undefined8 *)(in_stack_00000018 + 0x50),
                           *(undefined8 *)(*plVar3 + 0x180));
        if ((uVar6 & 1) != 0) {
          *(long *)(in_stack_00000018 + 0x18) = (long)plVar9;
          thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x18),plVar9);
          *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
          return 1;
        }
      } while( true );
    }
    plVar9 = *(long **)(in_stack_00000018 + 0x68);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 == 0) {
LAB_06397f94:
      puVar5 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0);
    }
    else {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      while (*(long *)(piVar8 + -2) != *unaff_x23) {
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
        if (uVar6 == 0) goto LAB_06397f94;
      }
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
    }
    param_4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_2 = *(long **)(unaff_x21 + 0x10);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_3 = *(undefined8 *)(in_stack_00000018 + 0x40);
    param_5 = *(undefined8 *)(in_stack_00000018 + 0x50);
    param_1 = *(code **)(*param_2 + 0x178);
    param_6 = *(undefined8 *)(*param_2 + 0x180);
    unaff_x19 = param_4;
  } while( true );
LAB_06397e60:
  plVar9 = (long *)FUN_06370e18(plVar9,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db52e8) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06397ec8;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07db52e8,0);
LAB_06397ec8:
  uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  *(undefined8 *)(in_stack_00000018 + 0x68) = uVar4;
  thunk_FUN_037aeb94();
  plVar9 = *(long **)(in_stack_00000018 + 0x68);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  goto joined_r0x06397ff8;
}


