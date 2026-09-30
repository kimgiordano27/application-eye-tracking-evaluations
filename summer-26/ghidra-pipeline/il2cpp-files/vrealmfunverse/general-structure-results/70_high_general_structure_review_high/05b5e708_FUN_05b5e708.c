/*
FUNCTION_NAME: FUN_05b5e708
ENTRY_POINT: 05b5e708
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_6;strong_file_logging_hits_2
*/


void FUN_05b5e708(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_066d4958 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSurfacePositionDebugger>b__83_2__
                );
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetKeyWallDebugger>b__79_0__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetKeyWallDebugger>b__79_2__);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetLargestSurfaceDebugger>b__81_0__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_4__);
    FUN_02b3c81c(PTR_DAT_06317330);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetLargestSurfaceDebugger>b__81_1__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetLargestSurfaceDebugger>b__81_2__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_5__);
    FUN_02b3c81c(PTR_DAT_06317348);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<IsPositionInRoomDebugger>b__86_0__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<IsPositionInRoomDebugger>b__86_1__
                );
    FUN_02b3c81c(PTR_DAT_06317350);
    FUN_02b3c81c(PTR_DAT_06317358);
    FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetupSettings>b__9_2__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_0__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_1__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_2__);
    DAT_066d4958 = 1;
  }
  puVar2 = PTR_DAT_06317358;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(char *)(param_1 + 0x20) != '\0') {
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06317348);
      FUN_037a5cd0(lVar5,*(undefined8 *)PTR_DAT_06317330);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_03334b78(lVar5,*(undefined8 *)PTR_DAT_06317350);
      if (lVar5 == 0) goto LAB_05b5eb30;
      FUN_037a6fdc(&local_88,lVar5,
                   *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetLargestSurfaceDebugger>b__81_0__
                  );
      puVar3 = Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetKeyWallDebugger>b__79_0__;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_60 = local_78;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar6 = FUN_0472eaf4(&local_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(char *)(local_60 + 0x10) != '\0') {
          FUN_05d3a474(local_60,0);
        }
      }
      FUN_0472eaf0(&local_70,
                   *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetClosestSurfacePositionDebugger>b__83_2__
                  );
    }
    puVar4 = Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<IsPositionInRoomDebugger>b__86_1__;
    puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_4__;
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_5__
                              );
    FUN_037a5cd0(lVar5,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_03334aac(lVar5,*(undefined8 *)puVar4);
    puVar3 = Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_0__;
    puVar2 = Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<GetLargestSurfaceDebugger>b__81_2__
    ;
    if (lVar5 == 0) {
LAB_05b5eb30:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar12 = 0;
      do {
        lVar7 = FUN_037a6268(lVar5,iVar12,*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_05b5eb30;
        uVar13 = *(undefined8 *)(lVar7 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d49cd == '\0') {
          FUN_02b3c81c(puVar3);
          DAT_066d49cd = '\x01';
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar8 = *(long *)puVar3;
        }
        uVar6 = thunk_FUN_04c08854(uVar13,**(undefined8 **)(lVar8 + 0xb8),0);
        if ((uVar6 & 1) != 0) {
          plVar9 = (long *)FUN_03f185e0(lVar7,*(undefined8 *)
                                               Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<IsPositionInRoomDebugger>b__86_0__
                                       );
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
            *(undefined8 *)(param_1 + 0x48) = 0;
          }
          else {
            lVar5 = *(long *)
                     Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_1__;
            bVar1 = *(byte *)(lVar5 + 0x130);
            if (*(byte *)(*plVar9 + 0x130) < bVar1) {
              plVar10 = (long *)0x0;
            }
            else {
              plVar10 = plVar9;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
                plVar10 = (long *)0x0;
              }
            }
            *(long **)(param_1 + 0x48) = plVar10;
            if (*(byte *)(*plVar9 + 0x130) < bVar1) {
              plVar9 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
              plVar9 = (long *)0x0;
            }
          }
          thunk_FUN_02bb0e9c(param_1 + 0x48,plVar9);
          break;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar5 + 0x18));
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c45068(*(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<RayCastDebugger>b__85_2__,
                   param_1,0);
    }
    else {
      FUN_05b7216c(*(long *)(param_1 + 0x48),0,0);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetupSettings>b__9_2__
                                 );
      FUN_05a8b70c(uVar13,uVar11,0);
      *(undefined8 *)(param_1 + 0x50) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar13);
    }
  }
  return;
}


