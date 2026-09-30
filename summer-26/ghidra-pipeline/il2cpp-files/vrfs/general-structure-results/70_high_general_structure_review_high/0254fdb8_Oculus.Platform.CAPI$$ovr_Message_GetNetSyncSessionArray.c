/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 0254fdb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
               (long param_1,int param_2,int param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_06d9c1a0;
  if ((bRam0000000007230239 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9c1a0);
    thunk_FUN_0159f088(PTR_DAT_06dcdc08);
    thunk_FUN_0159f088(PTR_DAT_06d9c0f8);
    thunk_FUN_0159f088(PTR_DAT_06df9a58);
    thunk_FUN_0159f088(PTR_DAT_06def080);
    thunk_FUN_0159f088(PTR_DAT_06e32c48);
    thunk_FUN_0159f088(PTR_DAT_06dc7580);
    bRam0000000007230239 = 1;
  }
  FUN_02d76b34(param_1,0);
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    FUN_02d76b34(lVar3,0);
    plVar7 = (long *)(param_1 + 0x10);
    *plVar7 = lVar3;
    thunk_FUN_01656ef8(plVar7,lVar3);
    puVar1 = PTR_DAT_06e32c48;
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(float *)(lVar3 + 0x20) = (float)param_2;
      *(float *)(lVar3 + 0x24) = (float)param_3;
      *(int *)(param_1 + 0x18) = param_2;
      *(int *)(param_1 + 0x1c) = param_3;
      *(byte *)(param_1 + 0x20) = param_4 & 1;
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_06dc7580;
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar4 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar3 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
        if (lVar4 == 0) goto LAB_0254fff4;
        FUN_02b70ac4(lVar4,uVar5,*(undefined8 *)PTR_DAT_06df9a58,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar7 = lVar4;
        thunk_FUN_01656ef8(plVar7,lVar4);
        lVar3 = *(long *)puVar1;
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar6 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar3 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar6 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_0254fff4;
        FUN_02b70ac4(lVar6,uVar5,*(undefined8 *)PTR_DAT_06def080,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar7 = lVar6;
        thunk_FUN_01656ef8(plVar7,lVar6);
      }
      lVar3 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d9c0f8);
      if (lVar3 != 0) {
        FUN_03b1a5b0(lVar3,lVar4,lVar6,1,*(undefined8 *)PTR_DAT_06dcdc08);
        *(long *)(param_1 + 0x28) = lVar3;
        thunk_FUN_01656ef8((long *)(param_1 + 0x28),lVar3);
        return;
      }
    }
  }
LAB_0254fff4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


