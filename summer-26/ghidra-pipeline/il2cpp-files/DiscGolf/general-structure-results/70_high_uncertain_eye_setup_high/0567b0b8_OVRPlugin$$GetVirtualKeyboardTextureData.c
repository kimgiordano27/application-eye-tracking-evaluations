/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 0567b0b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetVirtualKeyboardTextureData(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint uVar6;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long lVar7;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  
code_r0x0567b0b8:
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04df85dc(param_2,*(undefined4 *)(param_1 + 0x18),in_stack_00000050,*unaff_x29);
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0563c9e8(0);
    if ((uVar4 & 1) != 0) {
      uVar2 = 0x100000001;
LAB_0567b238:
      *(undefined8 *)(in_stack_00000058 + 0x10) = uVar2;
      uVar2 = 1;
LAB_0567b240:
      if (in_stack_00000040 != 0) {
        FUN_02d035e4(&stack0x00000048);
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(in_stack_00000040);
      }
      return uVar2;
    }
    if (*(long *)(in_stack_00000058 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_056780c0();
    while( true ) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0563c9e8(0);
      uVar2 = DAT_010fc988;
      if ((uVar4 & 1) != 0) goto LAB_0567b238;
      *(undefined8 *)(in_stack_00000058 + 0x48) = 0;
      LeanTween__value((undefined8 *)(in_stack_00000058 + 0x48),0);
      lVar3 = in_stack_00000058;
      iVar1 = *(int *)(in_stack_00000058 + 0x40) + 1;
      lVar5 = *unaff_x22;
      *(int *)(in_stack_00000058 + 0x40) = iVar1;
      if (*(int *)(in_stack_00000058 + 0x38) <= iVar1) {
        *(undefined4 *)(in_stack_00000058 + 0x44) = 0;
        FUN_0567b358(in_stack_00000058);
        uVar2 = 0;
        *(undefined8 *)(in_stack_00000058 + 0x38) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x40) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x30) = 0;
        goto LAB_0567b240;
      }
      lVar7 = *(long *)(in_stack_00000058 + 0x30);
      if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar7 + (long)iVar1 * 4);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = FUN_05674ebc();
      *(undefined8 *)(in_stack_00000058 + 0x48) = uVar2;
      LeanTween__value();
      if (*(long *)(in_stack_00000058 + 0x48) != 0) break;
      *(undefined1 *)(unaff_x19 + 0x252) = 0;
    }
    if (*(long *)(unaff_x19 + 0x1f8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_04dfa0cc(*(long *)(unaff_x19 + 0x1f8),
                         *(undefined4 *)(*(long *)(in_stack_00000058 + 0x48) + 0x10),
                         &stack0x00000050,*unaff_x23);
    if ((uVar4 & 1) != 0) break;
    lVar3 = FUN_02d966a4(*(undefined8 *)System_Collections_Generic_List<SelectedObject>_TypeInfo,1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(in_stack_00000058 + 0x48);
    LeanTween__value();
    if (*(long *)(in_stack_00000058 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0x1f8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04df85f0(*(long *)(unaff_x19 + 0x1f8),
                 *(undefined4 *)(*(long *)(in_stack_00000058 + 0x48) + 0x10),lVar3,
                 *(undefined8 *)System_Collections_Generic_List<ScheduledItem>_TypeInfo);
    if (*(long *)(in_stack_00000058 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04df85f0(*(long *)(unaff_x19 + 0xe8),
                 *(undefined4 *)(*(long *)(in_stack_00000058 + 0x48) + 0x18),lVar3,*unaff_x26);
  } while( true );
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar6 = (uint)*(undefined8 *)(in_stack_00000050 + 0x18);
  FUN_034e3d40(&stack0x00000050,uVar6 + 1,*unaff_x27);
  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(uint *)(in_stack_00000050 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(in_stack_00000050 + (long)(int)uVar6 * 8 + 0x20) =
       *(undefined8 *)(in_stack_00000058 + 0x48);
  LeanTween__value();
  if (*(long *)(in_stack_00000058 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x19 + 0x1f8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04df85dc(*(long *)(unaff_x19 + 0x1f8),
               *(undefined4 *)(*(long *)(in_stack_00000058 + 0x48) + 0x10),in_stack_00000050,
               *unaff_x28);
  param_1 = *(long *)(in_stack_00000058 + 0x48);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  param_2 = *(long *)(unaff_x19 + 0xe8);
  goto code_r0x0567b0b8;
}


