/*
FUNCTION_NAME: AYellowpaper.SerializedCollections.SerializedKeyValuePair<Int32Enum,-float>$$.ctor
ENTRY_POINT: 03d6bf10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void AYellowpaper_SerializedCollections_SerializedKeyValuePair<Int32Enum,_float>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar8;
  long *plVar9;
  undefined8 in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)FUN_02b7654c();
LAB_03d6bf70:
      iVar1 = (*(code *)*puVar2)();
      if (0 < iVar1) {
        iVar8 = 0;
        do {
          plVar9 = *(long **)(unaff_x21 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02b76218(lVar4);
          }
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03d6c004;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_02b7654c(plVar9,lVar4,0);
LAB_03d6c004:
          in_stack_00000018 = (*(code *)*puVar2)(plVar9,iVar8,puVar2[1]);
          lVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                             &stack0x00000018);
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar3,0);
          }
          if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
          thunk_FUN_02bb0e9c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
          iVar8 = iVar8 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar8 != iVar1);
      }
      return;
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_03d6bf70;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


