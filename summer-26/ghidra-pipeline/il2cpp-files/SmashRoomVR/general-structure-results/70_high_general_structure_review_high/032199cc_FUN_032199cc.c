/*
FUNCTION_NAME: FUN_032199cc
ENTRY_POINT: 032199cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_6
*/


void FUN_032199cc(long param_1,long *param_2,long *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  
  if ((DAT_03ff4630 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d837e0);
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
    DAT_03ff4630 = 1;
  }
  puVar3 = PTR_DAT_03d837e0;
  if (*(int *)(param_1 + 0x28) == 2) {
    if ((ulong)*(uint *)(param_2 + 1) == (long)*(int *)(param_1 + 0x20)) {
      uVar4 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(undefined4 *)(param_1 + 0x14));
      plVar5 = (long *)*param_2;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x308))
                  (plVar5,(long)*(int *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x24) +
                          param_2[2],0,*(undefined8 *)(*plVar5 + 0x310));
        param_2 = (long *)*param_2;
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x318))
                    (param_2,uVar4,0,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*param_2 + 800)
                    );
          iVar2 = *(int *)(param_1 + 0x2c);
          iVar9 = 0;
          if (iVar2 - 0x1400U < 7) {
            iVar9 = *(int *)(&DAT_00bfc5b0 + (long)(int)(iVar2 - 0x1400U) * 4);
          }
          iVar6 = *(int *)(param_1 + 0x30);
          iVar1 = *(int *)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x18) < 1) {
            iVar1 = iVar9 << 1;
          }
          if (iVar6 < 1) {
            return;
          }
          iVar8 = 0;
          lVar10 = 1;
          do {
            if (iVar2 == 0x1406) {
              lVar7 = *param_3;
              if (lVar7 == 0) break;
              uVar12 = FUN_02fda1d4(uVar4,iVar8,0);
              uVar11 = (param_4 + (int)lVar10) - 1;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_03219c34:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              *(undefined4 *)(lVar7 + (long)(int)uVar11 * 8 + 0x20) = uVar12;
              lVar7 = *param_3;
              if (lVar7 == 0) break;
              uVar12 = FUN_02fda1d4(uVar4,iVar9 + iVar8,0);
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_03219c34;
              *(undefined4 *)(lVar7 + (long)(int)uVar11 * 8 + 0x24) = uVar12;
              iVar6 = *(int *)(param_1 + 0x30);
            }
            if (iVar6 <= lVar10) {
              return;
            }
            iVar2 = *(int *)(param_1 + 0x2c);
            lVar10 = lVar10 + 1;
            iVar8 = iVar8 + iVar1;
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = *(undefined8 *)PTR_DAT_03d837c0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = *(undefined8 *)puVar3;
  }
  FUN_038f2e04(uVar4,0);
  return;
}


