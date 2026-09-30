/*
FUNCTION_NAME: FUN_0793dc68
ENTRY_POINT: 0793dc68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0793e2f8) */
/* WARNING: Removing unreachable block (ram,0x0793e150) */
/* WARNING: Removing unreachable block (ram,0x0793e2ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0793dc68(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_58;
  int local_50;
  undefined8 local_48;
  long *local_40;
  int local_34;
  
  if ((DAT_08987dc8 & 1) == 0) {
    FUN_03a8a718(UnityEngine_ParticleSystem_Particle___TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_03a8a718(OVRPlugin_Vector3f___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(PTR_DAT_084c3f08);
    FUN_03a8a718(PTR_DAT_084c3f10);
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(PTR_DAT_084b1ba8);
    FUN_03a8a718(PTR_DAT_084b1bb0);
                    /* try { // try from 0793dd00 to 07a3dd17 has its CatchHandler @ 0793e160 */
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(System_Action<int,_HierarchyNode>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084c82e8);
    FUN_03a8a718(PTR_DAT_084c82e0);
    FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo);
    DAT_08987dc8 = 1;
  }
  local_34 = *param_1;
  local_48 = 0;
  local_40 = (long *)0x0;
  local_50 = 0;
  if (local_34 != 0) {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = *(undefined8 *)(lVar12 + 0x10);
    uVar11 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
                              );
    FUN_07fc4f90(uVar3,uVar5,uVar11,0);
    *(undefined8 *)(param_1 + 10) = uVar3;
    thunk_FUN_03afed3c(param_1 + 10,uVar3);
    if (local_34 != 0) {
      plVar9 = *(long **)(lVar12 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084c3f08) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0793ded4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084c3f08,0);
LAB_0793ded4:
      local_40 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      puVar2 = PTR_DAT_084c3f10;
      puVar1 = PTR_DAT_08488568;
      do {
        plVar9 = local_40;
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *local_40;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0793df58;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(local_40,*(long *)puVar1,0);
LAB_0793df58:
        uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        plVar9 = local_40;
        if ((uVar7 & 1) == 0) {
          if ((-1 < local_34) || (local_40 == (long *)0x0)) goto LAB_0793e144;
          lVar6 = *local_40;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_0793e048;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0793e030;
        }
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *local_40;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0793dfbc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(local_40,*(long *)puVar2,0);
LAB_0793dfbc:
        auVar13 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07fc64a4(*(long *)(param_1 + 10),auVar13._0_8_,auVar13._8_8_,0);
      } while( true );
    }
  }
  local_34 = -1;
  local_48 = *(undefined8 *)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = -1;
  goto LAB_0793de48;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0793e030:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0793e138;
    }
  }
LAB_0793e048:
  puVar4 = (undefined8 *)FUN_03ac43c4(local_40,*(long *)PTR_DAT_08488550,0);
LAB_0793e138:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_0793e144:
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc6c14(*(long *)(param_1 + 10),*(undefined4 *)(lVar12 + 0x28),0);
  if ((*(long *)(lVar12 + 0x30) != 0) &&
     (((uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_084c82e0,0)
       , (uVar7 & 1) != 0 ||
       (uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_084c82e8,0)
       , (uVar7 & 1) != 0)) ||
      (uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar12 + 0x18),
                                  *(undefined8 *)
                                   UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
      (uVar7 & 1) != 0)))) {
    uVar11 = *(undefined8 *)(lVar12 + 0x30);
    lVar6 = *(long *)(param_1 + 10);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo);
    FUN_07fc701c(uVar5,uVar11,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc5380(lVar6,uVar5,0);
  }
  lVar6 = *(long *)(param_1 + 10);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                            );
  FUN_07fc4948(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc52b8(lVar6,uVar5,0);
  if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc5660(*(long *)(param_1 + 10),0);
  local_48 = FUN_0793e484();
  uVar7 = FUN_0587c6c4(&local_48,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar7 & 1) == 0) {
    local_34 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = local_48;
    thunk_FUN_03afed3c(param_1 + 0xc,0);
    if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,param_1);
    }
    FUN_03ffb420(param_1 + 2,&local_48,param_1,
                 *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
    uVar5 = 0;
    iVar10 = 10;
    goto LAB_0793de64;
  }
LAB_0793de48:
  uVar5 = FUN_0587c704(&local_48,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  iVar10 = 0xb;
LAB_0793de64:
  if ((local_34 < 0) && (plVar9 = *(long **)(param_1 + 10), plVar9 != (long *)0x0)) {
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  if (iVar10 == 0xb) {
    lVar12 = *(long *)OVRPlugin_Vector3f___TypeInfo;
    *param_1 = -2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar5,
                 *(undefined8 *)UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo
                );
  }
  else if (iVar10 == 0) {
    uVar5 = (&uStack_58)[local_50 + -1];
    *param_1 = -2;
    lVar12 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
    FUN_05338d34(param_1 + 2,uVar5,uVar11);
  }
  return;
}


