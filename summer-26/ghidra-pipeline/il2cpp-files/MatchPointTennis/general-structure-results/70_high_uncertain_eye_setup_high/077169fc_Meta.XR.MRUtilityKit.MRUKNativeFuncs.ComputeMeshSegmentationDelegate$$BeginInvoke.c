/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$BeginInvoke
ENTRY_POINT: 077169fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__BeginInvoke(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int iVar10;
  uint unaff_w25;
  long unaff_x26;
  undefined8 *puVar11;
  long unaff_x27;
  long *plVar12;
  uint uVar13;
  uint uStack000000000000000c;
  
  plVar12 = *(long **)(unaff_x27 + 0x538);
  puVar11 = *(undefined8 **)(unaff_x26 + 0xbb0);
  iVar10 = 0;
  uStack000000000000000c = unaff_w25;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar10) {
      return;
    }
    lVar2 = (**(code **)(*unaff_x20 + 0x198))();
    if (lVar2 == 0) break;
    uVar3 = FUN_05badb74(lVar2,iVar10,*unaff_x19);
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*plVar12);
    }
    uVar4 = FUN_09531730(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = FUN_0775efcc(uVar3,0);
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*plVar12);
      }
      uVar4 = FUN_09531730(lVar2,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar2 == 0) break;
      }
      else {
        if (lVar2 == 0) break;
        FUN_094da31c(lVar2,unaff_w25 & 1,0);
      }
      lVar5 = FUN_04c6c620(lVar2,*puVar11);
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*plVar12);
      }
      uVar4 = FUN_09531730(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if ((lVar5 == 0) || (lVar6 = FUN_094ef058(lVar5,0), lVar6 == 0)) break;
        uVar8 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar8) {
          uVar13 = 0;
          bVar1 = true;
          do {
            if (uVar8 <= uVar13) {
LAB_07716c04:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar4 = 0;
            while( true ) {
              lVar9 = *(long *)(lVar6 + (long)(int)uVar13 * 0x10 + 0x28);
              if (lVar9 == 0) goto LAB_07716be0;
              if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar4) goto LAB_07716b90;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_07716c04;
              uVar3 = *(undefined8 *)(lVar9 + uVar4 * 8 + 0x20);
              if (*(int *)(*plVar12 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar7 = FUN_09531730(uVar3,lVar2,0);
              if ((uVar7 & 1) != 0) break;
              uVar4 = uVar4 + 1;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_07716c04;
            }
            bVar1 = false;
LAB_07716b90:
            uVar8 = *(uint *)(lVar6 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar8);
          unaff_x19 = (undefined8 *)PTR_DAT_09f1e8c0;
          puVar11 = (undefined8 *)PTR_DAT_09f30bb0;
          unaff_w25 = uStack000000000000000c;
          if (!bVar1) goto LAB_07716bc8;
        }
        FUN_094eeee0(lVar5,unaff_w25 & 1,0);
      }
    }
LAB_07716bc8:
    iVar10 = iVar10 + 1;
    param_1 = (**(code **)(*unaff_x20 + 0x198))();
  } while (param_1 != 0);
LAB_07716be0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


