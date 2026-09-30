/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 04f2c980
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long in_x9;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined1 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar13 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04f2c9bc;
    }
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_04f2c9bc:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    plVar17 = *(long **)(unaff_x19 + 0x48);
    uVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)
                         System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo,
                        &stack0x00000010);
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                       &stack0x0000000c);
    uVar18 = FUN_04c0af28(*(undefined8 *)
                           System_Collections_Generic_Dictionary<int,_GraphicsFence>_TypeInfo,uVar18
                          ,uVar6,0);
    if (plVar17 == (long *)0x0) goto LAB_04f2cd80;
    (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x58);
LAB_04f2cd30:
    uVar16 = 0;
    puVar10 = (undefined4 *)(unaff_x19 + 0x28);
    puVar12 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar14 = (undefined4 *)(unaff_x19 + 0x30);
    puVar15 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar17 = *(long **)(unaff_x19 + 0x50);
    if (plVar17 == (long *)0x0) goto LAB_04f2cd80;
    lVar8 = *plVar17;
    uVar1 = *(undefined4 *)(unaff_x19 + 100);
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_04f2cac0;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar17,*unaff_x26,2);
LAB_04f2cac0:
    uVar5 = (*(code *)*puVar4)(plVar17,uVar1,unaff_w20,puVar4[1]);
    lVar8 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar5;
    if ((lVar8 == 0) || (plVar17 = *(long **)(unaff_x19 + 0x50), plVar17 == (long *)0x0))
    goto LAB_04f2cd80;
    lVar9 = *plVar17;
    uVar1 = *(undefined4 *)(unaff_x19 + 100);
    uVar2 = *(undefined4 *)(lVar8 + 0x10);
    uVar18 = *(undefined8 *)(lVar8 + 0x18);
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_04f2cb48;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar17,*unaff_x26,1);
LAB_04f2cb48:
    bVar3 = (*(code *)*puVar4)(plVar17,uVar1,unaff_w20,uVar2,uVar18,puVar4[1]);
    if ((uVar5 & 0xff) == 0) {
      uVar18 = *(undefined8 *)PTR_DAT_06322450;
    }
    else {
      uStack0000000000000014 = FUN_03adc574(&stack0x00000018,*(undefined8 *)PTR_DAT_0631c430);
      uVar18 = FUN_04d8e0f0((long)&stack0x00000010 + 4,*(undefined8 *)PTR_DAT_063142c8,0);
    }
    plVar17 = *(long **)(unaff_x19 + 0x48);
    lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo
                       ,&stack0x00000010);
    uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                       &stack0x0000000c);
    uVar6 = FUN_04c0af28(*(undefined8 *)PTR_DAT_06325af8,uVar6,uVar7,0);
    if (lVar8 == 0) goto LAB_04f2cd80;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_04f2cd84:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(lVar8 + 0x20) = uVar6;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar6);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_04f2cd84;
    *(undefined8 *)(lVar8 + 0x28) = in_stack_00000028;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x28));
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_04f2cd84;
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_06314998;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_04f2cd84;
    *(undefined8 *)(lVar8 + 0x38) = uVar18;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x38),uVar18);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_04f2cd84;
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_06314990;
    thunk_FUN_02bb0e9c();
    uVar18 = FUN_04c0ac30(lVar8,0);
    if (plVar17 == (long *)0x0) goto LAB_04f2cd80;
    (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar3 & 1)) {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x58);
    if ((bVar3 & 1) == 0) goto LAB_04f2cd30;
    puVar10 = (undefined4 *)(unaff_x19 + 0x38);
    puVar12 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar14 = (undefined4 *)(unaff_x19 + 0x40);
    puVar15 = (undefined4 *)(unaff_x19 + 0x44);
    uVar16 = 1;
  }
  if (lVar8 != 0) {
    FUN_05c59bb8(*puVar10,*puVar12,*puVar14,*puVar15,lVar8,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar16;
    return;
  }
LAB_04f2cd80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


