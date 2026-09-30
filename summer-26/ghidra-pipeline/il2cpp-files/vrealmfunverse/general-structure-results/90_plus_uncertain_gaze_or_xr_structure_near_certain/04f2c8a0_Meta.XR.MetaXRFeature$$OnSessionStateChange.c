/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 04f2c8a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_02b3c81c();
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo);
  FUN_02b3c81c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo);
  FUN_02b3c81c(PTR_DAT_0631c428);
  FUN_02b3c81c(PTR_DAT_0631c430);
  FUN_02b3c81c(PTR_DAT_06313630);
  FUN_02b3c81c(PTR_DAT_063142c8);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_GraphicsFence>_TypeInfo);
  FUN_02b3c81c(PTR_DAT_06322450);
  FUN_02b3c81c(PTR_DAT_06325af8);
  FUN_02b3c81c(PTR_DAT_06314990);
  FUN_02b3c81c(PTR_DAT_06314998);
  *(undefined1 *)(unaff_x20 + 0x938) = 1;
  puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0)) goto LAB_04f2cd80;
  lVar9 = *plVar19;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo)
      {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_04f2c9bc;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02b7654c(plVar19,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo
                        ,0);
LAB_04f2c9bc:
  uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,&stack0x00000028,puVar6[1]);
  if ((uVar12 & 1) == 0) {
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    plVar19 = *(long **)(unaff_x19 + 0x48);
    uVar20 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)
                         System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo,
                        &stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                       (long)&stack0x00000008 + 4);
    uVar20 = FUN_04c0af28(*(undefined8 *)
                           System_Collections_Generic_Dictionary<int,_GraphicsFence>_TypeInfo,uVar20
                          ,uVar7,0);
    if (plVar19 == (long *)0x0) goto LAB_04f2cd80;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
LAB_04f2cd30:
    uVar18 = 0;
    puVar11 = (undefined4 *)(unaff_x19 + 0x28);
    puVar14 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x30);
    puVar17 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar19 = *(long **)(unaff_x19 + 0x50);
    if (plVar19 == (long *)0x0) goto LAB_04f2cd80;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    lVar9 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_04f2cac0;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar19,lVar9,2);
LAB_04f2cac0:
    uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,puVar6[1]);
    lVar9 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar12;
    if ((lVar9 == 0) || (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0))
    goto LAB_04f2cd80;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    lVar9 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_04f2cb48;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar19,lVar9,1);
LAB_04f2cb48:
    bVar5 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,uVar3,uVar20,puVar6[1]);
    if ((uVar12 & 0xff) == 0) {
      uVar20 = *(undefined8 *)PTR_DAT_06322450;
    }
    else {
      uStack0000000000000014 = FUN_03adc574(&stack0x00000018,*(undefined8 *)PTR_DAT_0631c430);
      uVar20 = FUN_04d8e0f0(&stack0x00000014,*(undefined8 *)PTR_DAT_063142c8,0);
    }
    plVar19 = *(long **)(unaff_x19 + 0x48);
    lVar9 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo
                       ,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                       (long)&stack0x00000008 + 4);
    uVar7 = FUN_04c0af28(*(undefined8 *)PTR_DAT_06325af8,uVar7,uVar8,0);
    if (lVar9 == 0) goto LAB_04f2cd80;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_04f2cd84:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20),uVar7);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_04f2cd84;
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x28));
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_04f2cd84;
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_06314998;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30));
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto LAB_04f2cd84;
    *(undefined8 *)(lVar9 + 0x38) = uVar20;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x38),uVar20);
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_04f2cd84;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_06314990;
    thunk_FUN_02bb0e9c();
    uVar20 = FUN_04c0ac30(lVar9,0);
    if (plVar19 == (long *)0x0) goto LAB_04f2cd80;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar5 & 1)) {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if ((bVar5 & 1) == 0) goto LAB_04f2cd30;
    puVar11 = (undefined4 *)(unaff_x19 + 0x38);
    puVar14 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x40);
    puVar17 = (undefined4 *)(unaff_x19 + 0x44);
    uVar18 = 1;
  }
  if (lVar9 != 0) {
    FUN_05c59bb8(*puVar11,*puVar14,*puVar16,*puVar17,lVar9,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar18;
    return;
  }
LAB_04f2cd80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


