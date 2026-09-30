/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$Invoke
ENTRY_POINT: 077169e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__Invoke
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *unaff_x20;
  int iVar12;
  uint unaff_w25;
  undefined8 *puVar13;
  uint uVar14;
  uint uStack000000000000000c;
  
  lVar3 = (**(code **)(param_1 + 0x198))(param_2,*(undefined8 *)(param_1 + 0x1a0));
  puVar2 = PTR_DAT_09f1e538;
  if (lVar3 != 0) {
    iVar12 = 0;
    puVar11 = (undefined8 *)PTR_DAT_09f1e8c0;
    puVar13 = (undefined8 *)PTR_DAT_09f30bb0;
    uStack000000000000000c = unaff_w25;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar12) {
        return;
      }
      lVar3 = (**(code **)(*unaff_x20 + 0x198))();
      if (lVar3 == 0) break;
      uVar4 = FUN_05badb74(lVar3,iVar12,*puVar11);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar2);
      }
      uVar5 = FUN_09531730(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = FUN_0775efcc(uVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar2);
        }
        uVar5 = FUN_09531730(lVar3,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar3 == 0) break;
        }
        else {
          if (lVar3 == 0) break;
          FUN_094da31c(lVar3,unaff_w25 & 1,0);
        }
        lVar6 = FUN_04c6c620(lVar3,*puVar13);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar2);
        }
        uVar5 = FUN_09531730(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar6 == 0) || (lVar7 = FUN_094ef058(lVar6,0), lVar7 == 0)) break;
          uVar9 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar9) {
            uVar14 = 0;
            bVar1 = true;
            do {
              if (uVar9 <= uVar14) {
LAB_07716c04:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar5 = 0;
              while( true ) {
                lVar10 = *(long *)(lVar7 + (long)(int)uVar14 * 0x10 + 0x28);
                if (lVar10 == 0) goto LAB_07716be0;
                if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar5) goto LAB_07716b90;
                if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_07716c04;
                uVar4 = *(undefined8 *)(lVar10 + uVar5 * 8 + 0x20);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar8 = FUN_09531730(uVar4,lVar3,0);
                if ((uVar8 & 1) != 0) break;
                uVar5 = uVar5 + 1;
                if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_07716c04;
              }
              bVar1 = false;
LAB_07716b90:
              uVar9 = *(uint *)(lVar7 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar9);
            puVar11 = (undefined8 *)PTR_DAT_09f1e8c0;
            puVar13 = (undefined8 *)PTR_DAT_09f30bb0;
            unaff_w25 = uStack000000000000000c;
            if (!bVar1) goto LAB_07716bc8;
          }
          FUN_094eeee0(lVar6,unaff_w25 & 1,0);
        }
      }
LAB_07716bc8:
      iVar12 = iVar12 + 1;
      lVar3 = (**(code **)(*unaff_x20 + 0x198))();
    } while (lVar3 != 0);
  }
LAB_07716be0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


