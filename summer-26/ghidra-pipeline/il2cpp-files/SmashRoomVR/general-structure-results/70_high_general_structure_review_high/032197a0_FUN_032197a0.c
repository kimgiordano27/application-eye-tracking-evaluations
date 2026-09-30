/*
FUNCTION_NAME: FUN_032197a0
ENTRY_POINT: 032197a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_6
*/


void FUN_032197a0(long param_1,long *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((DAT_03ff462f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d837d8);
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
    DAT_03ff462f = 1;
  }
  puVar2 = PTR_DAT_03d837d8;
  if (*(int *)(param_1 + 0x28) == 1) {
    if ((ulong)*(uint *)(param_2 + 1) == (long)*(int *)(param_1 + 0x20)) {
      uVar3 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(undefined4 *)(param_1 + 0x14));
      plVar4 = (long *)*param_2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x308))
                  (plVar4,(long)*(int *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x24) +
                          param_2[2],0,*(undefined8 *)(*plVar4 + 0x310));
        param_2 = (long *)*param_2;
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x318))
                    (param_2,uVar3,0,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*param_2 + 800)
                    );
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 < 1) {
            uVar1 = *(int *)(param_1 + 0x2c) - 0x1400;
            if (uVar1 < 7) {
              iVar6 = *(int *)(&DAT_00bfc5b0 + (long)(int)uVar1 * 4);
            }
            else {
              iVar6 = 0;
            }
          }
          if (0 < *(int *)(param_1 + 0x30)) {
            iVar5 = 0;
            lVar7 = 0;
            lVar8 = param_4 << 0x20;
            do {
              lVar9 = *param_3;
              uVar10 = FUN_02fda1d4(uVar3,iVar5,0);
              if (lVar9 == 0) goto LAB_032199b4;
              if ((ulong)*(uint *)(lVar9 + 0x18) <= (param_4 & 0xffffffff) + lVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              *(undefined4 *)(lVar9 + (lVar8 >> 0x1e) + 0x20) = uVar10;
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + 0x100000000;
              iVar5 = iVar5 + iVar6;
            } while (lVar7 < *(int *)(param_1 + 0x30));
          }
          return;
        }
      }
LAB_032199b4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = *(undefined8 *)PTR_DAT_03d837c0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = *(undefined8 *)puVar2;
  }
  FUN_038f2e04(uVar3,0);
  return;
}


