/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardPlayerRange400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 05f17ba8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Leaderboards_Internal_Models_GetLeaderboardPlayerRange400OneOf__DeserializeIntoActualObject
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  int iVar11;
  long *unaff_x22;
  long lVar12;
  long unaff_x29;
  undefined1 auVar13 [12];
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  thunk_FUN_02e786f0();
  lVar8 = *unaff_x22;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(lVar8);
    lVar8 = *unaff_x22;
  }
  uStack000000000000005c = **(undefined4 **)(lVar8 + 0xb8);
  thunk_FUN_02e786f0(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000005c);
  if (unaff_x19 != 0) {
    FUN_0549c420();
    FUN_0549af98();
    puVar1 = PTR_DAT_06a2f1e8;
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_04d6053c(&stack0x00000010,*(long *)(unaff_x20 + 0x10),
                   *(undefined8 *)Fusion_LagCompensation_QueryParams_var);
      in_stack_00000068 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000060 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000080 = in_stack_00000030;
      in_stack_00000050 = &stack0x00000060;
      in_stack_00000078 = in_stack_00000028;
      in_stack_00000070 = in_stack_00000020;
      in_stack_00000048 = 0;
      do {
        do {
          uVar2 = FUN_0504057c(&stack0x00000060,
                               *(undefined8 *)System_Collections_Generic_Queue<T>_var);
          lVar8 = in_stack_00000078;
          if ((uVar2 & 1) == 0) {
            FUN_050406a0(&stack0x00000060,*(undefined8 *)MemoryPack_Formatters_QueueFormatter<T>_var
                        );
            if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_062244a4();
            return;
          }
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_045c90b0(in_stack_00000078,
                       *(undefined8 *)Fusion_LagCompensation_RaycastQueryParams_var);
          plVar3 = (long *)FUN_045c90f0(lVar8,*(undefined8 *)Fusion_Photon_Realtime_PingHttp_var);
        } while (*(int *)(lVar8 + 0x20) < 1);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        iVar11 = 0;
        do {
          lVar9 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar2 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)ExitGames_Client_Photon_PhotonClientWebSocket_var) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05f17d08;
              }
              uVar2 = uVar2 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02e759c0(plVar3,*(long *)ExitGames_Client_Photon_PhotonClientWebSocket_var,0)
          ;
LAB_05f17d08:
          auVar13 = (*(code *)*puVar4)(plVar3,iVar11,puVar4[1]);
          lVar9 = auVar13._0_8_;
          plVar5 = (long *)FUN_02e3cb08(*(undefined8 *)puVar1,5);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar12 = *(long *)(lVar9 + 0x58);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02e789bc(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
            FUN_02e3cb88(uVar7,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          plVar5[4] = lVar12;
          thunk_FUN_02ee2be8(plVar5 + 4,lVar12);
          uStack000000000000005c = auVar13._8_4_;
          lVar12 = thunk_FUN_02e786f0(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000005c);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02e789bc(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
            FUN_02e3cb88(uVar7,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          plVar5[5] = lVar12;
          thunk_FUN_02ee2be8(plVar5 + 5,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_0624c090(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack000000000000000c = uStack0000000000000010;
          lVar12 = thunk_FUN_02e786f0(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000008 + 4);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02e789bc(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
            FUN_02e3cb88(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          plVar5[6] = lVar12;
          thunk_FUN_02ee2be8(plVar5 + 6,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_0624c090(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack0000000000000008 = uStack0000000000000014;
          lVar12 = thunk_FUN_02e786f0(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000008);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_02e789bc(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
            FUN_02e3cb88(uVar7,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          plVar5[7] = lVar12;
          thunk_FUN_02ee2be8(plVar5 + 7,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_0624c090(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack0000000000000010 = uStack000000000000001c;
          lVar9 = thunk_FUN_02e786f0(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000010);
          if ((lVar9 != 0) &&
             (lVar12 = thunk_FUN_02e789bc(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
            uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
            FUN_02e3cb88(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          plVar5[8] = lVar9;
          thunk_FUN_02ee2be8(plVar5 + 8,lVar9);
          FUN_0549c4dc();
          FUN_0549af98();
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar8 + 0x20));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


