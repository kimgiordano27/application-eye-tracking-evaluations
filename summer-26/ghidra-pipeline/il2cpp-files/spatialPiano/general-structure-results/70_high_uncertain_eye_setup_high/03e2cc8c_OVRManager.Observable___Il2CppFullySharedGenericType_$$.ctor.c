/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 03e2cc8c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  FUN_02f08768(PTR_DAT_067cbfc0);
  FUN_02f08768(PTR_DAT_067cbfc8);
  FUN_02f08768(PTR_DAT_067cbfd0);
  FUN_02f08768(PTR_DAT_067cbfd8);
  FUN_02f08768(PTR_DAT_067cbfe0);
  *(undefined1 *)(unaff_x22 + 0xeeb) = 1;
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059890fc();
  puVar2 = PTR_DAT_067cbfb8;
  puVar1 = PTR_DAT_067c9cb8;
  if (unaff_x20 != (long *)0x0) {
    FUN_0624193c();
    (**(code **)(*unaff_x20 + 0x248))();
    FUN_0623f468();
    FUN_05987b50();
    FUN_0636f0c8();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0596d7e0();
    FUN_0596d920();
    FUN_0636f1e4();
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0623f858(lVar6,0);
    puVar2 = PTR_DAT_067cbfc8;
    if (lVar6 != 0) {
      FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfc8,0);
      FUN_0623f468(lVar6,1,0);
      uVar10 = *(undefined8 *)puVar2;
      unaff_x20[0x6f] = lVar6;
      FUN_0624193c(lVar6,uVar10,0);
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0623f858(lVar6,0);
      puVar2 = PTR_DAT_067cbfd0;
      puVar1 = PTR_DAT_067cbfb0;
      if (lVar6 != 0) {
        FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfd0,0);
        FUN_0623f468(lVar6,1,0);
        uVar10 = *(undefined8 *)puVar2;
        unaff_x20[0x72] = lVar6;
        FUN_0624193c(lVar6,uVar10,0);
        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_06318ee8(lVar6,0);
        puVar3 = PTR_DAT_067cbfd8;
        puVar2 = PTR_DAT_067cbfa8;
        puVar1 = PTR_DAT_067cbf78;
        if (lVar6 != 0) {
          FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfd8,0);
          FUN_0623f468(lVar6,1,0);
          uVar10 = *(undefined8 *)puVar3;
          unaff_x20[0x70] = lVar6;
          FUN_0624193c(lVar6,uVar10,0);
          lVar6 = unaff_x20[0x70];
          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          FUN_059e1a80(uVar10,0);
          FUN_06296d34(lVar6,uVar10,0);
          lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_059a2ae8(lVar6,0);
          puVar1 = PTR_DAT_067cbfc0;
          if (lVar6 != 0) {
            FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfc0,0);
            FUN_0623f468(lVar6,1,0);
            uVar10 = *(undefined8 *)puVar1;
            unaff_x20[0x73] = lVar6;
            FUN_0624193c(lVar6,uVar10,0);
            if (unaff_x20[0x6f] != 0) {
              in_stack_00000008 = *(undefined8 *)(unaff_x20[0x6f] + 0x260);
              FUN_0624b7dc(&stack0x00000008,unaff_x20[0x70],0);
              puVar5 = PTR_DAT_067cbfa0;
              puVar4 = PTR_DAT_067cbf98;
              puVar3 = PTR_DAT_067cbf90;
              puVar2 = PTR_DAT_067cbf88;
              puVar1 = PTR_DAT_067cbf80;
              if (unaff_x20[0x72] != 0) {
                in_stack_00000008 = *(undefined8 *)(unaff_x20[0x72] + 0x260);
                FUN_0624b7dc(&stack0x00000008,unaff_x20[0x73],0);
                in_stack_00000008 = unaff_x20[0x4c];
                FUN_0624b7dc(&stack0x00000008,unaff_x20[0x6f],0);
                in_stack_00000008 = unaff_x20[0x4c];
                FUN_0624b7dc(&stack0x00000008,unaff_x20[0x72],0);
                lVar6 = unaff_x20[0x70];
                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                FUN_04d8cf5c();
                uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                FUN_04d8cf5c();
                uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                FUN_04d8cf5c();
                uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                FUN_059e3888(uVar9,uVar10,uVar7,uVar8,0);
                FUN_06296d34(lVar6,uVar9,0);
                lVar6 = unaff_x20[0x70];
                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                FUN_04d8cf5c();
                FUN_03436904(lVar6,uVar10,*(undefined8 *)puVar4);
                FUN_03e2d6ac();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


