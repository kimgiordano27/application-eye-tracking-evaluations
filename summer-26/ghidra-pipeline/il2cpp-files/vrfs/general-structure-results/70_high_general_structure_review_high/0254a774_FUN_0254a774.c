/*
FUNCTION_NAME: FUN_0254a774
ENTRY_POINT: 0254a774
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void FUN_0254a774(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined8 param_7,byte param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_06dc3578;
  if ((bRam000000000723023e & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dca6f8);
    thunk_FUN_0159f088(PTR_DAT_06e57b30);
    thunk_FUN_0159f088(PTR_DAT_06ddf308);
    thunk_FUN_0159f088(PTR_DAT_06d92710);
    thunk_FUN_0159f088(PTR_DAT_06dc3578);
    thunk_FUN_0159f088(PTR_DAT_06db0370);
    thunk_FUN_0159f088(PTR_DAT_06e55f50);
    bRam000000000723023e = 1;
  }
  lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_06d92710;
  if (lVar4 != 0) {
    FUN_03dae588(lVar4,*(undefined8 *)PTR_DAT_06e57b30);
    *(long *)(param_1 + 0x30) = lVar4;
    thunk_FUN_01656ef8((long *)(param_1 + 0x30),lVar4);
    lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_06ddf308;
    if (lVar4 != 0) {
      VRFS_Analytics_OculusSegmentEventDto_SegmentSettings___ctor
                (lVar4,*(undefined8 *)PTR_DAT_06ddf308);
      *(long *)(param_1 + 0x38) = lVar4;
      thunk_FUN_01656ef8((long *)(param_1 + 0x38),lVar4);
      lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_06e55f50;
      if (lVar4 != 0) {
        VRFS_Analytics_OculusSegmentEventDto_SegmentSettings___ctor(lVar4,*(undefined8 *)puVar2);
        *(long *)(param_1 + 0x40) = lVar4;
        thunk_FUN_01656ef8((long *)(param_1 + 0x40),lVar4);
        FUN_02d76b34(param_1,0);
        *(undefined4 *)(param_1 + 0x18) = param_2;
        *(undefined4 *)(param_1 + 0x1c) = param_3;
        *(undefined4 *)(param_1 + 0x20) = param_4;
        *(byte *)(param_1 + 0x24) = param_8 & 1;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        puVar1 = PTR_DAT_06dca6f8;
        iVar3 = 1;
        lVar4 = Oculus_Platform_CAPI__ovr_IAP_LaunchCheckoutFlow
                          (0,param_2,param_3,1,0,param_4,param_5,1,2,0,param_8 & 1,0,0,1,1,0,0,0,
                           param_7);
        plVar6 = (long *)(param_1 + 0x10);
        *plVar6 = lVar4;
        thunk_FUN_01656ef8(plVar6,lVar4);
        *(undefined1 *)(param_1 + 0x25) = 1;
        if (((param_8 & 1) == 0) ||
           (iVar3 = Oculus_Platform_CAPI__ovr_Destination_GetDisplayName
                              (param_1,*(undefined4 *)(param_1 + 0x18),
                               *(undefined4 *)(param_1 + 0x1c)), 0 < iVar3)) {
          puVar2 = PTR_DAT_06db0370;
          iVar5 = 0;
          do {
            if (*plVar6 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(*plVar6 + 0x18);
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            FUN_0487f0f8(uVar7,iVar5,0);
            FUN_051d1f18(0,0,0,0,0,1,0);
            iVar5 = iVar5 + 1;
          } while (iVar3 != iVar5);
        }
        lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
                    (lVar4,param_2,param_3,param_6 & 1);
          *(long *)(param_1 + 0x28) = lVar4;
          thunk_FUN_01656ef8((long *)(param_1 + 0x28),lVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


