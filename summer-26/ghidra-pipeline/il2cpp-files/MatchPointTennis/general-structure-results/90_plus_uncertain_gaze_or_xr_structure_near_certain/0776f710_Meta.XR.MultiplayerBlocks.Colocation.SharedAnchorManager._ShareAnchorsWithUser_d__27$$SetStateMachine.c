/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<ShareAnchorsWithUser>d__27$$SetStateMachine
ENTRY_POINT: 0776f710
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<ShareAnchorsWithUser>d__27__SetStateMachine
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 unaff_d10;
  undefined8 unaff_d14;
  double dStack0000000000000000;
  double dStack0000000000000008;
  double dStack0000000000000010;
  double dStack0000000000000018;
  double dStack0000000000000020;
  double dStack0000000000000028;
  double dStack0000000000000030;
  double dStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  double dStack0000000000000050;
  double dStack0000000000000058;
  double dStack0000000000000060;
  double dStack0000000000000068;
  
  puVar2 = PTR_DAT_09f32a88;
  dStack0000000000000008 = param_1._8_8_;
  dStack0000000000000000 = param_1._0_8_;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  lVar3 = *(long *)(unaff_x19 + 0x10);
  dStack0000000000000010 = dStack0000000000000000;
  dStack0000000000000018 = dStack0000000000000008;
  dStack0000000000000020 = dStack0000000000000000;
  dStack0000000000000028 = dStack0000000000000008;
  dStack0000000000000030 = dStack0000000000000000;
  dStack0000000000000038 = dStack0000000000000008;
  dStack0000000000000050 = dStack0000000000000000;
  dStack0000000000000058 = dStack0000000000000008;
  dStack0000000000000060 = dStack0000000000000000;
  dStack0000000000000068 = dStack0000000000000008;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      dStack0000000000000058 = *(double *)(lVar3 + 0x28);
      dStack0000000000000050 = *(double *)(lVar3 + 0x20);
      dStack0000000000000068 = *(double *)(lVar3 + 0x38);
      dStack0000000000000060 = *(double *)(lVar3 + 0x30);
      Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__0
                (DAT_01c7621c,&stack0x00000050,0);
      FUN_094ce224(0);
      uStack0000000000000040 = FUN_0775c5f4(&stack0x00000050,0);
      uStack0000000000000048 = unaff_d14;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = FUN_0775c1b4(&stack0x00000040,0);
      uVar10 = unaff_d14;
      dVar7 = (double)FUN_0775c5e4(&stack0x00000050,0);
      dVar12 = 0.0;
      FUN_094cdf18(uVar6,unaff_d14,0,dVar7,uVar10,0,0);
      puVar1 = PTR_DAT_09f30818;
      lVar3 = *(long *)(unaff_x19 + 0x18);
      if (lVar3 != 0) {
        iVar4 = 0;
        do {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) break;
          if (*(int *)(lVar3 + 0x18) <= iVar4) {
            return;
          }
          lVar3 = FUN_05badb74(lVar3,iVar4,*(undefined8 *)puVar1);
          if (lVar3 == 0) break;
          dStack0000000000000028 = *(double *)(lVar3 + 0x40);
          dStack0000000000000020 = *(double *)(lVar3 + 0x38);
          dStack0000000000000038 = *(double *)(lVar3 + 0x50);
          dVar11 = *(double *)(lVar3 + 0x48);
          dStack0000000000000030 = dVar11;
          dStack0000000000000000 = (double)FUN_0775cd84(&stack0x00000050,&stack0x00000020,0);
          dStack0000000000000008 = dVar11;
          dStack0000000000000010 = dVar12;
          dStack0000000000000018 = dVar7;
          FUN_0775c5c0(&stack0x00000020,0);
          fVar9 = SUB84(dVar11,0);
          fVar5 = (float)FUN_0775cd34();
          dStack0000000000000020 = (double)fVar5;
          dStack0000000000000028 = (double)fVar9;
          uVar10 = unaff_d10;
          FUN_094ce224(0);
          uStack0000000000000040 = FUN_0775c5f4(&stack0x00000020,0);
          uStack0000000000000048 = uVar10;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar8 = FUN_0775c1b4(&stack0x00000040,0);
          uVar6 = uVar10;
          dVar7 = (double)FUN_0775c5e4(&stack0x00000020,0);
          dVar12 = 0.0;
          FUN_094cdf18(uVar8,uVar10,0,dVar7,uVar6,0,0);
          lVar3 = *(long *)(unaff_x19 + 0x18);
          iVar4 = iVar4 + 1;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


