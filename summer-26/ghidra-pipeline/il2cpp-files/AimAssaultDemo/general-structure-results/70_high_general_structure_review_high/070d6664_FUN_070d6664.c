/*
FUNCTION_NAME: FUN_070d6664
ENTRY_POINT: 070d6664
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_070d6664(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
  if ((DAT_08267c0d & 1) == 0) {
    FUN_0373b518(PTR_DAT_07dfbd48);
    FUN_0373b518(PTR_DAT_07dfbd28);
    FUN_0373b518(PXR_HumanBodySubsystem_HumanBodyProvider_var);
    FUN_0373b518(
                UnityEngine_XR_OpenXR_Features_Interactions_PICONeo3ControllerProfile_PICONeo3Controller_var
                );
    FUN_0373b518(UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var);
    FUN_0373b518(PICOSessionSubsystem_SessionProvider_var);
    DAT_08267c0d = 1;
  }
  local_48 = 0;
  if (*param_3 != 0) {
    local_48 = FUN_07041e9c(*param_3,*(undefined8 *)PTR_DAT_07dfbd48);
    FUN_070d57fc(param_1,param_1 + 200);
    FUN_070d4d60(param_1,(long *)(param_1 + 0x158),&local_48);
    if (*(long *)(param_1 + 0x158) != 0) {
      iVar8 = 1;
      if (*(char *)(*(long *)(param_1 + 0x158) + 0x14) != '\0') {
        iVar8 = 2;
      }
      puVar5 = (undefined8 *)FUN_0711574c(param_3 + 1,0);
      uVar12 = *(undefined8 *)((long)puVar5 + 0x14);
      uVar10 = *(undefined8 *)((long)puVar5 + 0xc);
      uVar6 = *puVar5;
      lVar7 = param_1 + 0x120;
      uVar1 = *(undefined4 *)(puVar5 + 6);
      uVar13 = puVar5[5];
      uVar11 = puVar5[4];
      *(undefined8 *)(param_1 + 0x120) = uVar6;
      *(undefined4 *)(param_1 + 0x128) = 1;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      iVar2 = 0;
      if (iVar8 != 0) {
        iVar2 = (int)uVar6 / iVar8;
      }
      *(undefined8 *)(param_1 + 0x134) = uVar12;
      *(undefined8 *)(param_1 + 300) = uVar10;
      iVar3 = 0;
      if (iVar8 != 0) {
        iVar3 = (int)((ulong)uVar6 >> 0x20) / iVar8;
      }
      *(int *)(param_1 + 0x120) = iVar2;
      *(undefined8 *)(param_1 + 0x148) = uVar13;
      *(undefined8 *)(param_1 + 0x140) = uVar11;
      *(undefined4 *)(param_1 + 0x150) = uVar1;
      *(int *)(param_1 + 0x124) = iVar3;
      if ((*(char *)(param_1 + 0xb8) == '\0') || (*(int *)(param_1 + 0x100) < 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0x10;
      }
      FUN_07590650(lVar7,uVar6,0);
      puVar4 = PTR_DAT_07dfbd28;
      lVar9 = *(long *)(param_1 + 0xf8);
      if (lVar9 != 0) {
        if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
LAB_070d69a4:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        FUN_070d69a8(0,lVar9 + 0x20,lVar7,1,1,1,
                     *(undefined8 *)PICOSessionSubsystem_SessionProvider_var);
        lVar9 = *(long *)(param_1 + 0xf8);
        if (lVar9 != 0) {
          if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_070d69a4;
          FUN_070d69a8(0,lVar9 + 0x28,lVar7,1,1,1,
                       *(undefined8 *)
                        UnityEngine_XR_OpenXR_Features_Interactions_PICONeo3ControllerProfile_PICONeo3Controller_var
                      );
          lVar9 = *(long *)(param_1 + 0xf8);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_070d69a4;
            FUN_070d69a8(0,lVar9 + 0x30,lVar7,1,1,1,
                         *(undefined8 *)PXR_HumanBodySubsystem_HumanBodyProvider_var);
            *(ulong *)(param_1 + 0x120) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20) * iVar8,
                          (int)*(undefined8 *)(param_1 + 0x120) * iVar8);
            FUN_07590650(lVar7,(ulong)*(byte *)(param_1 + 0xb8) << 4,0);
            lVar9 = *(long *)(param_1 + 0xf8);
            if (lVar9 != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_070d69a4;
              FUN_070d69a8(0,lVar9 + 0x38,lVar7,1,1,1,
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var
                          );
              lVar7 = *(long *)(param_1 + 0xf8);
              if (lVar7 != 0) {
                if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_070d69a4;
                FUN_070ce5fc(param_2,*(undefined8 *)(lVar7 + 0x38));
                lVar7 = *(long *)(param_1 + 0x158);
                if (lVar7 != 0) {
                  if (*(char *)(lVar7 + 0x15) == '\0') {
                    lVar7 = *(long *)(param_1 + 0xf8);
                    if (lVar7 == 0) goto LAB_070d69a0;
                    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_070d69a4;
                    uVar6 = *(undefined8 *)(lVar7 + 0x38);
                  }
                  else {
                    if (*(long *)(param_1 + 0x118) == 0) goto LAB_070d69a0;
                    uVar6 = FUN_07090ea8(*(long *)(param_1 + 0x118),0);
                  }
                  FUN_070909f4(param_1,uVar6,0);
                  FUN_07090b20(0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_1,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_070d69a0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


