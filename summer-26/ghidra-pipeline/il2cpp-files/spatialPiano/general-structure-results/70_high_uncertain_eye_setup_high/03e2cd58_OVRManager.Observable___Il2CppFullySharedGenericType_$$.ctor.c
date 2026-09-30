/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 03e2cd58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(undefined8 param_1)

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
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  
  FUN_0636f0c8(param_1,0,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0596d7e0();
  FUN_0596d920();
  FUN_0636f1e4();
  lVar6 = thunk_FUN_02f45270(*unaff_x22);
  FUN_0623f858(lVar6,0);
  puVar1 = PTR_DAT_067cbfc8;
  if (lVar6 != 0) {
    FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfc8,0);
    FUN_0623f468(lVar6,1,0);
    uVar9 = *(undefined8 *)puVar1;
    *(long *)(unaff_x20 + 0x378) = lVar6;
    FUN_0624193c(lVar6,uVar9,0);
    lVar6 = thunk_FUN_02f45270(*unaff_x22);
    FUN_0623f858(lVar6,0);
    puVar2 = PTR_DAT_067cbfd0;
    puVar1 = PTR_DAT_067cbfb0;
    if (lVar6 != 0) {
      FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfd0,0);
      FUN_0623f468(lVar6,1,0);
      uVar9 = *(undefined8 *)puVar2;
      *(long *)(unaff_x20 + 0x390) = lVar6;
      FUN_0624193c(lVar6,uVar9,0);
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_06318ee8(lVar6,0);
      puVar3 = PTR_DAT_067cbfd8;
      puVar2 = PTR_DAT_067cbfa8;
      puVar1 = PTR_DAT_067cbf78;
      if (lVar6 != 0) {
        FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfd8,0);
        FUN_0623f468(lVar6,1,0);
        uVar9 = *(undefined8 *)puVar3;
        *(long *)(unaff_x20 + 0x380) = lVar6;
        FUN_0624193c(lVar6,uVar9,0);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x380);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_059e1a80(uVar9,0);
        FUN_06296d34(uVar10,uVar9,0);
        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_059a2ae8(lVar6,0);
        puVar1 = PTR_DAT_067cbfc0;
        if (lVar6 != 0) {
          FUN_0623f514(lVar6,*(undefined8 *)PTR_DAT_067cbfc0,0);
          FUN_0623f468(lVar6,1,0);
          uVar9 = *(undefined8 *)puVar1;
          *(long *)(unaff_x20 + 0x398) = lVar6;
          FUN_0624193c(lVar6,uVar9,0);
          if (*(long *)(unaff_x20 + 0x378) != 0) {
            in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x20 + 0x378) + 0x260);
            FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x20 + 0x380),0);
            puVar5 = PTR_DAT_067cbfa0;
            puVar4 = PTR_DAT_067cbf98;
            puVar3 = PTR_DAT_067cbf90;
            puVar2 = PTR_DAT_067cbf88;
            puVar1 = PTR_DAT_067cbf80;
            if (*(long *)(unaff_x20 + 0x390) != 0) {
              in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x20 + 0x390) + 0x260);
              FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x20 + 0x398),0);
              in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
              FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x20 + 0x378),0);
              in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
              FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x20 + 0x390),0);
              uVar11 = *(undefined8 *)(unaff_x20 + 0x380);
              uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
              FUN_04d8cf5c();
              uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
              FUN_04d8cf5c();
              uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_04d8cf5c();
              uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
              FUN_059e3888(uVar8,uVar9,uVar10,uVar7,0);
              FUN_06296d34(uVar11,uVar8,0);
              uVar10 = *(undefined8 *)(unaff_x20 + 0x380);
              uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
              FUN_04d8cf5c();
              FUN_03436904(uVar10,uVar9,*(undefined8 *)puVar4);
              FUN_03e2d6ac();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


