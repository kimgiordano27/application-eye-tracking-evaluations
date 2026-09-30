/*
FUNCTION_NAME: Photon.Voice.ByteStreamEncoder$$Dispose
ENTRY_POINT: 0514be1c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Voice_ByteStreamEncoder__Dispose(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x20;
  ushort unaff_w21;
  ushort uStack000000000000000c;
  
  do {
    if (param_1 == 0) {
      uStack000000000000000c = 0x5c;
LAB_0514bfc4:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar5 = *(int *)(unaff_x19 + 0x20) + 1;
    uStack000000000000000c = unaff_w21;
    if (*(int *)(param_1 + 0x10) <= iVar5) goto LAB_0514be70;
    *(int *)(unaff_x19 + 0x20) = iVar5;
    uStack000000000000000c = FUN_04e7a3d8(param_1,iVar5,0);
    if (uStack000000000000000c < 0x5d) {
      if (uStack000000000000000c < 0x28) {
        if (uStack000000000000000c != 0x22) {
          bVar1 = uStack000000000000000c == 0x27;
LAB_0514bec4:
          if (!bVar1) {
LAB_0514bfc8:
            FUN_0291cc84(*(undefined8 *)(PTR_DAT_066462a0 + 0x88));
            uVar3 = FUN_04f64700(&stack0x0000000c,0);
            uVar4 = thunk_FUN_02db45e8(PlayFab_ClientModels_ConsumePS5EntitlementsRequest_var);
            uVar3 = FUN_04e723e0(uVar4,uVar3,0);
            thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
            uVar4 = thunk_FUN_02d8a638();
            FUN_0508e50c(uVar4,uVar3,0);
            uVar3 = thunk_FUN_02db45e8(
                                      PlayFab_ClientModels_ConsumeMicrosoftStoreEntitlementsResponse_var
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar4,uVar3);
          }
        }
      }
      else if (uStack000000000000000c != 0x2f) {
        bVar1 = uStack000000000000000c == 0x5c;
        goto LAB_0514bec4;
      }
    }
    else if (uStack000000000000000c < 0x67) {
      if ((uStack000000000000000c != 0x62) && (uStack000000000000000c != 0x66)) goto LAB_0514bfc8;
    }
    else if (((uStack000000000000000c != 0x6e) && (uStack000000000000000c != 0x72)) &&
            (uStack000000000000000c != 0x74)) goto LAB_0514bfc8;
    if (unaff_x20 == (long *)0x0) {
LAB_0514c044:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_04e8b3e4();
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
    while( true ) {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_0514c044;
      if (*(int *)(lVar2 + 0x10) <= *(int *)(unaff_x19 + 0x20)) {
        thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
        uVar3 = thunk_FUN_02d8a638();
        uVar4 = thunk_FUN_02db45e8(PlayFab_ClientModels_ConsumeMicrosoftStoreEntitlementsRequest_var
                                  );
        FUN_0508e50c(uVar3,uVar4,0);
        uVar4 = thunk_FUN_02db45e8(
                                  PlayFab_ClientModels_ConsumeMicrosoftStoreEntitlementsResponse_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar3,uVar4);
      }
      unaff_w21 = FUN_04e7a3d8(lVar2,*(int *)(unaff_x19 + 0x20),0);
      if (unaff_w21 == 0x5c) break;
      if (unaff_w21 == 0x27) {
        uStack000000000000000c = 0x27;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0514bfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        goto LAB_0514bfc4;
      }
      iVar5 = *(int *)(unaff_x19 + 0x20) + 1;
      uStack000000000000000c = unaff_w21;
LAB_0514be70:
      *(int *)(unaff_x19 + 0x20) = iVar5;
      if (unaff_x20 == (long *)0x0) goto LAB_0514c044;
      FUN_04e8b3e4();
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while( true );
}


