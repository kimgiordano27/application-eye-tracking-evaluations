/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 05698938
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsentWithOlderVersion(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_069fcea0);
  FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo);
  FUN_02d965b8(PTR_DAT_069fd220);
  FUN_02d965b8(PTR_DAT_069fd228);
  FUN_02d965b8(System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x860) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar6 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0400f984(lVar6,*unaff_x19);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar7 = FUN_05698b68();
  puVar4 = System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo;
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<bool>_TypeInfo;
  puVar2 = PTR_DAT_069fcea0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03fb6fa8(&stack0x00000008,lVar7,
               *(undefined8 *)
                System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  do {
    do {
      uVar8 = FUN_0514478c(&stack0x00000020,*(undefined8 *)puVar4);
      uVar5 = in_stack_00000030;
      if ((uVar8 & 1) == 0) {
        FUN_05144788(&stack0x00000020,*(undefined8 *)puVar3);
        return lVar6;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    } while ((int)*(ulong *)(unaff_x20 + 0x18) < 1);
    uVar8 = 0;
    uVar10 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (*(char *)(unaff_x20 + 0x20 + uVar8) != '\0') {
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_05699078(uVar5 & 0xffffffff,uVar8 & 0xffffffff);
        if (lVar6 == 0) {
LAB_05698af4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_05698af4;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar6,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar10 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  } while( true );
}


