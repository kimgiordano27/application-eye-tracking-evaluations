/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.WrappedDistributedAuthorityService.<>c$$<CreateSessionForLobbyIdAsync>b__12_0
ENTRY_POINT: 07825cf0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_DistributedAuthority_WrappedDistributedAuthorityService_<>c__<CreateSessionForLobbyIdAsync>b__12_0
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 in_x4;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 *puVar11;
  undefined8 unaff_x20;
  undefined8 *puVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  long lVar14;
  long unaff_x24;
  long *unaff_x25;
  
                    /* catch() { ... } // from try @ 07825cb4 with catch @ 07825cf0 */
  FUN_03a8a718();
                    /* catch() { ... } // from try @ 07825cb0 with catch @ 07825cf4 */
                    /* catch() { ... } // from try @ 07825ad8 with catch @ 07825cf8 */
                    /* catch() { ... } // from try @ 07825cac with catch @ 07825cfc */
  FUN_03a8a718(PTR_DAT_08498180);
                    /* catch() { ... } // from try @ 07825ca8 with catch @ 07825d00 */
  FUN_03a8a718(PTR_DAT_084870f0);
  FUN_03a8a718(PTR_DAT_0848ec40);
  FUN_03a8a718(PTR_DAT_084870e8);
  FUN_03a8a718(PTR_DAT_084867c8);
  FUN_03a8a718(System_Func<NavigationMoveEvent>_TypeInfo);
  FUN_03a8a718(System_Func<NavigationSubmitEvent>_TypeInfo);
  FUN_03a8a718(System_Func<MouseEnterWindowEvent>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08494e88);
  FUN_03a8a718(PTR_DAT_084914b8);
  FUN_03a8a718(PTR_DAT_0849f120);
  FUN_03a8a718(PTR_DAT_084c6cc8);
  FUN_03a8a718(PTR_DAT_084a03c8);
  FUN_03a8a718(System_Func<MouseLeaveEvent>_TypeInfo);
  FUN_03a8a718(System_Func<MeshWriteData>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x432) = 1;
  puVar1 = PTR_DAT_084867c8;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0679343c();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x22;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_03afed3c();
  puVar12 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar12 = unaff_x23;
  thunk_FUN_03afed3c(puVar12);
  lVar4 = FUN_03a8a804(*(undefined8 *)puVar1,5);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)System_Func<MouseLeaveEvent>_TypeInfo;
      thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = unaff_x22;
        thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x28));
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)System_Func<MouseEnterWindowEvent>_TypeInfo
          ;
          thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x30));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = unaff_x21;
            thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x38));
            puVar2 = PTR_DAT_084870f0;
            puVar1 = PTR_DAT_084870e8;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)System_Func<MeshWriteData>_TypeInfo;
              thunk_FUN_03afed3c();
              uVar5 = FUN_065ce45c(lVar4,0);
              puVar11 = (undefined8 *)(unaff_x19 + 0x30);
              *puVar11 = uVar5;
              thunk_FUN_03afed3c(puVar11,uVar5);
              lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              FUN_04de7d48(lVar4,*(undefined8 *)puVar2);
              puVar1 = System_Func<NavigationSubmitEvent>_TypeInfo;
              lVar13 = *(long *)(unaff_x19 + 0x20);
              if (lVar13 != 0) {
                lVar6 = *(long *)System_Func<NavigationSubmitEvent>_TypeInfo;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                  lVar6 = *(long *)puVar1;
                }
                puVar3 = PTR_DAT_08498170;
                puVar2 = PTR_DAT_08498168;
                puVar10 = *(undefined8 **)(lVar6 + 0xb8);
                lVar14 = puVar10[1];
                if (lVar14 == 0) {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                    puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                  }
                  uVar5 = *puVar10;
                  lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08498180);
                  FUN_049639e4(lVar14,uVar5,*(undefined8 *)System_Func<NavigationMoveEvent>_TypeInfo
                               ,0);
                  plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar7 = lVar14;
                  thunk_FUN_03afed3c(plVar7,lVar14);
                }
                puVar1 = PTR_DAT_084914b8;
                uVar5 = FUN_044d3220(lVar13,lVar14,*(undefined8 *)puVar2);
                uVar8 = FUN_044e130c(uVar5,*(undefined8 *)puVar3);
                uVar5 = uVar8;
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  uVar5 = thunk_FUN_03ae8be4(*unaff_x25);
                }
                FUN_0781f254(uVar5,lVar4,*(undefined8 *)puVar1,uVar8,in_x4,1);
              }
              uVar9 = FUN_065cd268(*puVar12,0);
              if ((uVar9 & 1) == 0) {
                lVar13 = *unaff_x25;
                uVar5 = *puVar12;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  lVar13 = thunk_FUN_03ae8be4();
                }
                FUN_0781f15c(lVar13,lVar4,*(undefined8 *)PTR_DAT_08494e88,uVar5);
              }
              puVar1 = PTR_DAT_0849f120;
              if (lVar4 != 0) {
                if (0 < *(int *)(lVar4 + 0x18)) {
                  uVar8 = *puVar11;
                  uVar5 = FUN_065cec10(*(undefined8 *)PTR_DAT_084a03c8,lVar4,0);
                  uVar5 = FUN_065cddf0(uVar8,*(undefined8 *)puVar1,uVar5,0);
                  *puVar11 = uVar5;
                  thunk_FUN_03afed3c(puVar11);
                  return;
                }
                return;
              }
              goto LAB_078260cc;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_078260cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


