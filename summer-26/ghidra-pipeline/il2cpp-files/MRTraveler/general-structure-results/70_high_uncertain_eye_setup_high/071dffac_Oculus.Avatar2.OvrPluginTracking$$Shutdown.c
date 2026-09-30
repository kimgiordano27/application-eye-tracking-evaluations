/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$Shutdown
ENTRY_POINT: 071dffac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__Shutdown(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w23;
  int iVar10;
  int iVar11;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000028;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e9a7e8);
  uVar6 = thunk_FUN_03ce0d60(uVar5,*(undefined8 *)*puVar4);
  if ((uVar6 & 1) == 0) {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_088de0a8,0);
  }
  __cxa_end_catch();
  if (unaff_x20 == 0) {
LAB_071e0224:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(unaff_x20 + 0x10) < unaff_w23) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar1 = FUN_06f79078();
      if (iVar1 == -1) {
        iVar1 = *(int *)(unaff_x20 + 0x10);
      }
      iVar11 = iVar1;
      iVar10 = unaff_w23;
      if (unaff_w23 < iVar1) {
        do {
          uVar2 = FUN_06f6fafc();
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*unaff_x19);
          }
          uVar7 = FUN_070684e4(uVar2,0);
          iVar10 = unaff_w23;
        } while (((uVar7 & 1) != 0) &&
                (unaff_w23 = unaff_w23 + 1, iVar10 = iVar1, iVar1 != unaff_w23));
      }
      do {
        if (iVar11 <= iVar10) break;
        uVar2 = FUN_06f6fafc();
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x19);
        }
        uVar7 = FUN_070684e4(uVar2,0);
        iVar11 = iVar11 + -1;
      } while ((uVar7 & 1) != 0);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      in_stack_00000028 = FUN_071e03b0();
      if ((in_stack_00000028 & 0xff) == 0) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        in_stack_00000028 = FUN_071e03b0();
        if ((in_stack_00000028 & 0xff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          in_stack_00000028 = FUN_071e02c0(in_stack_00000008);
          if ((in_stack_00000028 & 0xff) == 0) {
            thunk_FUN_03ce5214(PTR_DAT_08e693f0);
            FUN_036f8b20();
            uVar5 = FUN_070c20bc(0);
            uVar8 = thunk_FUN_03ce5214(PTR_DAT_08ea6700);
            uVar5 = FUN_071ed088(uVar8,uVar5);
            thunk_FUN_03ce5214(PTR_DAT_08e76350);
            uVar8 = thunk_FUN_03cf5234();
            FUN_07064ba8(uVar8,uVar5,0);
            uVar5 = thunk_FUN_03ce5214(PTR_DAT_08eaa1a8);
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar8,uVar5);
          }
          uVar3 = FUN_056b6b0c(&stack0x00000028,*unaff_x28);
          if (unaff_x29 == 0) goto LAB_071e0224;
          if (*(uint *)(unaff_x29 + 0x18) <= uVar3) goto LAB_071e0228;
          uVar6 = *(ulong *)(unaff_x29 + (long)(int)uVar3 * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
          }
          goto LAB_071dfd04;
        }
      }
      uVar3 = FUN_056b6b0c(&stack0x00000028,*unaff_x28);
      if (unaff_x29 == 0) goto LAB_071e0224;
      if (*(uint *)(unaff_x29 + 0x18) <= uVar3) {
LAB_071e0228:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_w23 = iVar1 + 1;
      uVar6 = *(ulong *)(unaff_x29 + (long)(int)uVar3 * 8 + 0x20) | uVar6;
    } while (unaff_w23 <= *(int *)(unaff_x20 + 0x10));
  }
  if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
LAB_071dfd04:
  FUN_07136540(in_stack_00000000,uVar6,0);
  return;
}


