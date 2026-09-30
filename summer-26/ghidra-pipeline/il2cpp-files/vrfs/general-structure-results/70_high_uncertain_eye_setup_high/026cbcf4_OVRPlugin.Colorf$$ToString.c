/*
FUNCTION_NAME: OVRPlugin.Colorf$$ToString
ENTRY_POINT: 026cbcf4
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Colorf__ToString(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_031db448();
  uVar2 = FUN_031d2bdc();
  if (uVar2 < unaff_w20) {
    FUN_031dbd14(0);
  }
  iVar3 = FUN_031d2bdc();
  iVar4 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8) + 8))();
  if ((int)(iVar3 - unaff_w20) < iVar4) {
    FUN_031db448(5,0);
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x170);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    FUN_015c2790(lVar10);
  }
  lVar10 = thunk_FUN_015d0480();
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x026cbdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120) + 8))();
    return;
  }
  lVar10 = thunk_FUN_015d0480();
  if (lVar10 == 0) {
    plVar7 = (long *)thunk_FUN_015d0480();
    if (plVar7 == (long *)0x0) {
      FUN_031dbd4c();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar12 = 0;
      puVar6 = (undefined8 *)(lVar10 + 0x30);
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(puVar6 + -2)) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_05178914(&stack0x00000010,puVar6[-1],*puVar6,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0) + 0x132) &
              1) == 0) {
            FUN_015c2790();
          }
          lVar11 = thunk_FUN_015d01b0();
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar11 != 0) &&
             (lVar8 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
            uVar9 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar9,0);
          }
          if (*(uint *)(plVar7 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar7[(long)(int)unaff_w20 + 4] = lVar11;
          thunk_FUN_01656ef8(plVar7 + (long)(int)unaff_w20 + 4,lVar11);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar12 = uVar12 + 1;
        puVar6 = puVar6 + 3;
      } while (uVar2 != uVar12);
    }
  }
  else {
    iVar3 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar3) {
      lVar11 = *(long *)(unaff_x21 + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar12 = 0;
      lVar8 = lVar11 + 0x30;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar12) {
LAB_026cbf88:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(lVar8 + -0x10)) {
          uVar9 = *(undefined8 *)(lVar8 + -8);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0) + 0x132) &
              1) == 0) {
            FUN_015c2790();
          }
          uVar5 = thunk_FUN_015d01b0();
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_03f035c4(&stack0x00000010,uVar9,uVar5,0);
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_026cbf88;
          lVar1 = lVar10 + (long)(int)unaff_w20 * 0x10;
          puVar6 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *puVar6 = in_stack_00000010;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01656ef8(puVar6,0);
          iVar3 = *(int *)(unaff_x21 + 0x20);
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x18;
      } while ((long)uVar12 < (long)iVar3);
    }
  }
  return;
}


