/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$.ctor
ENTRY_POINT: 0793dd14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0793e2f8) */
/* WARNING: Removing unreachable block (ram,0x0793e150) */
/* WARNING: Removing unreachable block (ram,0x0793e2ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_vx_req_account_list_block_rules_t___ctor(void)

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
  int *unaff_x19;
  long *plVar9;
  long unaff_x20;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  int iStack000000000000005c;
  undefined4 *in_stack_00000068;
  
  FUN_03a8a718();
  FUN_03a8a718(
              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
              );
  FUN_03a8a718(System_Action<int,_HierarchyNode>_TypeInfo);
                    /* try { // try from 0793dd34 to 07a3dd3f has its CatchHandler @ 0793e15c */
  FUN_03a8a718(PTR_DAT_084c82e8);
  FUN_03a8a718(PTR_DAT_084c82e0);
  FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xdc8) = 1;
  iStack000000000000005c = *unaff_x19;
                    /* try { // try from 0793dd60 to 07a3dd63 has its CatchHandler @ 0793e0fc */
                    /* try { // try from 0793dd64 to 07a3dd8b has its CatchHandler @ 0793e158 */
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000040 = 0;
  if (iStack000000000000005c != 0) {
    lVar13 = *(long *)(unaff_x19 + 8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
                              );
    FUN_07fc4f90(uVar3,uVar5,uVar12,0);
    *(undefined8 *)(in_stack_00000068 + 10) = uVar3;
    thunk_FUN_03afed3c(in_stack_00000068 + 10,uVar3);
    if (iStack000000000000005c != 0) {
      plVar9 = *(long **)(lVar13 + 0x20);
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
      in_stack_00000050 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      puVar2 = PTR_DAT_084c3f10;
      puVar1 = PTR_DAT_08488568;
      do {
        plVar9 = in_stack_00000050;
        if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *in_stack_00000050;
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
        puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)puVar1,0);
LAB_0793df58:
        uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        plVar9 = in_stack_00000050;
        if ((uVar7 & 1) == 0) {
          if ((-1 < iStack000000000000005c) || (in_stack_00000050 == (long *)0x0))
          goto LAB_0793e144;
          lVar6 = *in_stack_00000050;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_0793e048;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0793e030;
        }
        if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *in_stack_00000050;
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
        puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)puVar2,0);
LAB_0793dfbc:
        auVar14 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07fc64a4(*(long *)(in_stack_00000068 + 10),auVar14._0_8_,auVar14._8_8_,0);
      } while( true );
    }
  }
  iStack000000000000005c = -1;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000068 + 0xc);
  *(undefined8 *)(in_stack_00000068 + 0xc) = 0;
  *in_stack_00000068 = 0xffffffff;
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
  puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)PTR_DAT_08488550,0);
LAB_0793e138:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_0793e144:
  if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc6c14(*(long *)(in_stack_00000068 + 10),*(undefined4 *)(lVar13 + 0x28),0);
  if ((*(long *)(lVar13 + 0x30) != 0) &&
     (((uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)PTR_DAT_084c82e0,0)
       , (uVar7 & 1) != 0 ||
       (uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)PTR_DAT_084c82e8,0)
       , (uVar7 & 1) != 0)) ||
      (uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(lVar13 + 0x18),
                                  *(undefined8 *)
                                   UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
      (uVar7 & 1) != 0)))) {
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    lVar6 = *(long *)(in_stack_00000068 + 10);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo);
    FUN_07fc701c(uVar5,uVar12,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc5380(lVar6,uVar5,0);
  }
  lVar6 = *(long *)(in_stack_00000068 + 10);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                            );
  FUN_07fc4948(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc52b8(lVar6,uVar5,0);
  if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc5660(*(long *)(in_stack_00000068 + 10),0);
  in_stack_00000048 = FUN_0793e484();
  uVar7 = FUN_0587c6c4(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar7 & 1) == 0) {
    iStack000000000000005c = 0;
    *in_stack_00000068 = 0;
    *(undefined8 *)(in_stack_00000068 + 0xc) = in_stack_00000048;
    thunk_FUN_03afed3c(in_stack_00000068 + 0xc,0);
    puVar10 = in_stack_00000068;
    if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,in_stack_00000068);
    }
    FUN_03ffb420(puVar10 + 2,&stack0x00000048,in_stack_00000068,
                 *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
    uVar5 = 0;
    iVar11 = 10;
    goto LAB_0793de64;
  }
LAB_0793de48:
  uVar5 = FUN_0587c704(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  iVar11 = 0xb;
LAB_0793de64:
  if ((iStack000000000000005c < 0) &&
     (plVar9 = *(long **)(in_stack_00000068 + 10), plVar9 != (long *)0x0)) {
    lVar13 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar8 * 0x10 + 0x138);
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
  if (iVar11 == 0xb) {
    lVar13 = *(long *)OVRPlugin_Vector3f___TypeInfo;
    puVar10 = in_stack_00000068 + 2;
    *in_stack_00000068 = 0xfffffffe;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(puVar10,uVar5,
                 *(undefined8 *)UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo
                );
  }
  else if (iVar11 == 0) {
    uVar5 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
    puVar10 = in_stack_00000068 + 2;
    *in_stack_00000068 = 0xfffffffe;
    lVar13 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
    FUN_05338d34(puVar10,uVar5,uVar12);
  }
  return;
}


