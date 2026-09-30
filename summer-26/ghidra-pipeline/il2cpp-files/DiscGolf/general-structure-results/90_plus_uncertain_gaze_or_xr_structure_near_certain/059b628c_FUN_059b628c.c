/*
FUNCTION_NAME: FUN_059b628c
ENTRY_POINT: 059b628c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x059b66d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_059b628c(int *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  int local_34;
  
  if ((DAT_06dc14bc & 1) == 0) {
    FUN_02d965b8(OVRPlugin_Sizef_TypeInfo);
    FUN_02d965b8(OVRPlugin_Sizei_TypeInfo);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02d965b8(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02d965b8(OVRPlugin_OverlayShape_TypeInfo);
    FUN_02d965b8(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02d965b8(OVRPlugin_PoseStatef_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(OVRPlugin_Posef_TypeInfo);
    FUN_02d965b8(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_06dc14bc = 1;
  }
  local_34 = *param_1;
                    /* try { // try from 059b6358 to 05ab641f has its CatchHandler @ 059b6358
                       catch() { ... } // from try @ 059b6358 with catch @ 059b6358
                       catch() { ... } // from try @ 059b6584 with catch @ 059b6358
                       catch() { ... } // from try @ 059b666c with catch @ 059b6358
                       catch() { ... } // from try @ 059b66ec with catch @ 059b6358 */
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_34 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_34 = -1;
    *param_1 = -1;
LAB_059b63f0:
    uVar2 = FUN_04b88fc8(local_50,*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    LeanTween__value();
    auVar1 = local_50;
    if (local_34 == 1) goto LAB_059b6430;
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_059b6808();
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(*(long *)(param_1 + 0xc) + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = FUN_059b68a8();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_60 = FUN_0481d044(lVar5,0,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo);
    uVar6 = FUN_04b88f80(local_60,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo);
    if ((uVar6 & 1) == 0) {
      local_34 = 1;
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
      LeanTween__value(param_1 + 0x12,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo,extraout_x1,param_1);
      }
      FUN_031e7168(param_1 + 2,local_60,param_1,*(undefined8 *)OVRPlugin_Sizef_TypeInfo);
      uVar2 = 0;
      iVar9 = 5;
      goto LAB_059b646c;
    }
  }
  else {
    if (local_34 != 1) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = FUN_059b511c(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_50 = FUN_0481d044(lVar5,0,*(undefined8 *)OVRPlugin_Posef_TypeInfo);
      uVar6 = FUN_04b88f80(local_50,*(undefined8 *)OVRPlugin_PoseStatef_TypeInfo);
      if ((uVar6 & 1) == 0) {
        local_34 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
        LeanTween__value(param_1 + 0xe,0);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo,extraout_x1_00,param_1);
        }
        FUN_031e7168(param_1 + 2,local_50,param_1,*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
        return;
      }
      goto LAB_059b63f0;
    }
LAB_059b6430:
    local_34 = -1;
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    local_50 = auVar1;
  }
  uVar2 = FUN_04b88fc8(local_60,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
  iVar9 = 8;
LAB_059b646c:
  if ((local_34 < 0) && (plVar8 = *(long **)(param_1 + 0xc), plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059b660c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_059b660c:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  if (iVar9 == 8) {
    lVar5 = *(long *)OVRPlugin_OVRP_1_94_0_TypeInfo;
    *param_1 = -2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,uVar2,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
  }
  else if (iVar9 == 0) {
    uVar2 = (&uStack_70)[local_68 + -1];
    *param_1 = -2;
    lVar5 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_94_0_TypeInfo);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = thunk_FUN_02dfd288(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_040b1c24(param_1 + 2,uVar2,uVar4);
  }
  return;
}


