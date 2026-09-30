/*
FUNCTION_NAME: FUN_05cf1a9c
ENTRY_POINT: 05cf1a9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_8;ray_or_cast_sink_hits_5;strong_file_logging_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool FUN_05cf1a9c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  short *psVar16;
  undefined1 auStack_124 [192];
  int local_64;
  
  if ((DAT_06bc34fa & 1) == 0) {
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                );
    FUN_02f08768(Method_System_Configuration_IgnoreSection_get_Properties__);
    FUN_02f08768(Method_UnityEngine_UI_Image_RebuildImage__);
    FUN_02f08768(Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                );
    FUN_02f08768(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_1__
                );
    DAT_06bc34fa = 1;
  }
  memset(auStack_124,0,0xc4);
  puVar3 = Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__;
  if ((*(int *)(param_3 + 0x3c) == 0) && (*(int *)(param_3 + 0x44) == 0)) {
    bVar6 = true;
  }
  else {
    if (*(int *)(param_2 + 0x2a8) != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = FUN_03deb160(param_1 + 0x68,
                            *(int *)(param_2 + 0x2a8) + *(int *)(param_2 + 0x2a4) + -1,
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverrides__
                           );
      cVar2 = *(char *)(param_3 + 0x7d);
      iVar15 = *(int *)(param_3 + 0x3c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar7 = FUN_06121628(lVar10 + 0x24,0);
      if (iVar15 + -(uint)(cVar2 != '\0') == iVar7) {
        iVar15 = *(int *)(param_3 + 0x44);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar7 = FUN_06121628(lVar10,0);
        if (iVar15 == iVar7) {
          if ((cVar2 == '\0') && (*(char *)(param_2 + 0x2c0) != '\0')) {
            uVar8 = FUN_05cf0b90(param_2);
          }
          else {
            uVar8 = 0;
          }
          if (DAT_06bc34ed == '\0') {
            FUN_02f08768(
                        Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
                        );
            DAT_06bc34ed = '\x01';
          }
          iVar15 = *(int *)(param_3 + 0x38);
          uVar1 = *(uint *)(param_3 + 0x3c);
          lVar14 = *(long *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02f41ef8(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0347f6f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
          puVar5 = Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__;
          puVar4 = Method_System_Configuration_IgnoreSection_get_Properties__;
          puVar3 = PTR_DAT_067ce608;
          if ((int)uVar1 < 0) {
            FUN_050f577c(0);
          }
          else if (uVar1 != 0) {
            lVar12 = lVar12 + (long)iVar15 * 0x18;
            uVar13 = 0;
            do {
              if ((cVar2 == '\0') || ((int)uVar13 != 0)) {
                iVar15 = 0;
                lVar14 = lVar12 + uVar13 * 0x18;
                while( true ) {
                  memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  if (local_64 <= iVar15) goto LAB_05cf1df0;
                  memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  psVar16 = (short *)FUN_04da93a0(auStack_124,iVar15,*(undefined8 *)puVar4);
                  if (DAT_06bc3597 == '\0') {
                    FUN_02f08768(puVar3);
                    DAT_06bc3597 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  if (((*(short *)(lVar12 + uVar13 * 0x18) == *psVar16) &&
                      (*(int *)(psVar16 + 8) == *(int *)(lVar14 + 0x10))) &&
                     (*(int *)(psVar16 + 10) == *(int *)(lVar14 + 0x14))) break;
                  iVar15 = iVar15 + 1;
                }
                if (iVar15 < 0) goto LAB_05cf1df0;
                if (*(int *)(*(long *)
                              Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                            + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                iVar7 = FUN_061214b8(lVar10 + 0x24,(int)uVar13 + -(uint)(cVar2 != '\0'),0);
                if (iVar7 != iVar15) goto LAB_05cf1df0;
              }
              else {
                uVar8 = (*(uint *)(lVar12 + uVar13 * 0x18 + 0xc) ^ 0xffffffff) & 2;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar1);
          }
          if (DAT_06bc34ea == '\0') {
            FUN_02f08768(
                        Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
                        );
            DAT_06bc34ea = '\x01';
          }
          iVar15 = *(int *)(param_3 + 0x40);
          uVar1 = *(uint *)(param_3 + 0x44);
          lVar14 = *(long *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetBestPoseFromRaycastDebugger>b__84_2__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02f41ef8(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0347f6f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
          puVar5 = Method_UnityEngine_UIElements_Image_SetProperty<Sprite,_Texture,_VectorImage>__;
          puVar4 = Method_System_Configuration_IgnoreSection_get_Properties__;
          puVar3 = PTR_DAT_067ce608;
          if ((int)uVar1 < 0) {
            FUN_050f577c(0);
          }
          else if (uVar1 != 0) {
            uVar13 = 0;
            do {
              psVar16 = (short *)(lVar12 + (long)iVar15 * 0x18 + uVar13 * 0x18);
              iVar7 = 0;
              while( true ) {
                memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                if (local_64 <= iVar7) goto LAB_05cf1df0;
                memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                psVar11 = (short *)FUN_04da93a0(auStack_124,iVar7,*(undefined8 *)puVar4);
                if (DAT_06bc3597 == '\0') {
                  FUN_02f08768(puVar3);
                  DAT_06bc3597 = '\x01';
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                if (((*psVar16 == *psVar11) && (*(int *)(psVar11 + 8) == *(int *)(psVar16 + 8))) &&
                   (*(int *)(psVar11 + 10) == *(int *)(psVar16 + 10))) break;
                iVar7 = iVar7 + 1;
              }
              if (*(int *)(*(long *)
                            Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSeatPoseDebugger>b__82_0__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              iVar9 = FUN_061214b8(lVar10,uVar13 & 0xffffffff,0);
              if (iVar9 != iVar7) goto LAB_05cf1df0;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar1);
          }
          return uVar8 == *(uint *)(lVar10 + 0x48);
        }
      }
    }
LAB_05cf1df0:
    bVar6 = false;
  }
  return bVar6;
}


