/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 0339b4e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_31_0___cctor(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *unaff_x20;
  long lVar8;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  undefined *puVar4;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x23 + 0x6c1) = 1;
  if (unaff_x19 == 0) {
LAB_0339b6b4:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(unaff_x19 + 0xf2) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    FUN_019b2708();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
    puVar4 = Method_System_Collections_Generic_HashSet<IValueAnimationUpdate>__ctor__;
    goto LAB_0339b6e8;
  }
  lVar9 = *(long *)(unaff_x19 + 0x108);
  if (lVar9 != 0) {
    if (*(char *)(unaff_x19 + 0x110) != '\0') goto LAB_0339b510;
    lVar8 = *(long *)PTR_DAT_0422f958;
    lVar5 = *(long *)(lVar8 + 0x38);
    if (lVar5 == 0) {
      FUN_01c723f0(lVar8);
      lVar5 = *(long *)(lVar8 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    lVar9 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),**(undefined8 **)(lVar5 + 0xb8),
                       *(undefined8 *)(lVar9 + 0x28));
    goto LAB_0339b604;
  }
  if (*(char *)(unaff_x19 + 0x28) != '\0') {
    *unaff_x20 = 1;
    lVar9 = FUN_0338f16c();
    if (*(char *)(unaff_x19 + 0xf1) == '\0') {
      return lVar9;
    }
    lVar9 = FUN_0338eda8();
    return lVar9;
  }
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if (lVar9 != 0) {
    if (*(char *)(unaff_x19 + 0x88) != '\0') {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0339b6b4;
      if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x30) != 1) goto LAB_0339b66c;
    }
    lVar9 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
    ;
LAB_0339b604:
    if (*(char *)(unaff_x19 + 0xf1) != '\0') {
      lVar9 = FUN_0338eda8();
    }
    *unaff_x20 = 0;
    if (lVar9 == 0) {
      lVar5 = 0;
    }
    else {
      uVar6 = *(undefined8 *)PTR_DAT_04237778;
      lVar5 = thunk_FUN_01c495e4(lVar9,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar9,uVar6);
      }
    }
    return lVar5;
  }
LAB_0339b66c:
  uVar2 = FUN_0338dd68();
  if ((uVar2 & 1) != 0) {
LAB_0339b510:
    *unaff_x20 = 1;
    lVar9 = FUN_0338f16c();
    return lVar9;
  }
  cVar1 = *(char *)(unaff_x19 + 0x2a);
  lVar9 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_03295500(0);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
  puVar4 = Method_System_Collections_Generic_HashSet<IValueAnimationUpdate>_Remove__;
  if (cVar1 == '\0') {
    puVar4 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  }
LAB_0339b6e8:
  uVar3 = thunk_FUN_01c273e8(puVar4);
  FUN_0336f2b8(uVar3,uVar6,uVar7,0);
  uVar6 = FUN_0335cdc4();
  uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IValueAnimationUpdate>_Add__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar7);
}


