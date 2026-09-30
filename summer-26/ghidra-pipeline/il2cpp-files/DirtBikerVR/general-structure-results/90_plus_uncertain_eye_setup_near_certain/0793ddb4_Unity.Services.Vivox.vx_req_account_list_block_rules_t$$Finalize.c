/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$Finalize
ENTRY_POINT: 0793ddb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0793e2f8) */
/* WARNING: Removing unreachable block (ram,0x0793e150) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_vx_req_account_list_block_rules_t__Finalize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined1 auVar12 [16];
  long lStack0000000000000020;
  int *piStack0000000000000028;
  long *plStack0000000000000030;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  piStack0000000000000028 = (int *)((long)&stack0x00000058 + 4);
  lStack0000000000000020 = 0;
                    /* try { // try from 0793ddc0 to 07a3dde3 has its CatchHandler @ 0793e150 */
  plStack0000000000000030 = (long *)&stack0x00000068;
  if (in_stack_00000058._4_4_ != 0) {
    plVar8 = *(long **)(unaff_x22 + 0x20);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 0793ddf0 to 07a3de13 has its CatchHandler @ 0793e14c */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0793ded4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_084c3f08,0);
                    /* try { // try from 0793de18 to 07a3de3b has its CatchHandler @ 0793e148 */
LAB_0793ded4:
    in_stack_00000050 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
    puVar2 = PTR_DAT_084c3f10;
    puVar1 = PTR_DAT_08488568;
    do {
      plVar8 = in_stack_00000050;
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *in_stack_00000050;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0793df58;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)puVar1,0);
LAB_0793df58:
      uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      plVar8 = in_stack_00000050;
      if ((uVar6 & 1) == 0) {
        if ((-1 < in_stack_00000058._4_4_) || (in_stack_00000050 == (long *)0x0)) goto LAB_0793e144;
        lVar5 = *in_stack_00000050;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_0793e048;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0793e030;
      }
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *in_stack_00000050;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0793dfbc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)puVar2,0);
LAB_0793dfbc:
      auVar12 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07fc64a4(*(long *)(in_stack_00000068 + 10),auVar12._0_8_,auVar12._8_8_,0);
    } while( true );
  }
  in_stack_00000058._4_4_ = -1;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000068 + 0xc);
  *(undefined8 *)(in_stack_00000068 + 0xc) = 0;
                    /* try { // try from 0793de40 to 07a3de63 has its CatchHandler @ 0793e144 */
  *in_stack_00000068 = 0xffffffff;
  goto LAB_0793de48;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0793e030:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0793e138;
    }
  }
LAB_0793e048:
  puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)PTR_DAT_08488550,0);
LAB_0793e138:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_0793e144:
  if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc6c14(*(long *)(in_stack_00000068 + 10),*(undefined4 *)(unaff_x22 + 0x28),0);
  if ((*(long *)(unaff_x22 + 0x30) != 0) &&
     (((uVar6 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_084c82e0
                                   ,0), (uVar6 & 1) != 0 ||
       (uVar6 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_084c82e8
                                   ,0), (uVar6 & 1) != 0)) ||
      (uVar6 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x22 + 0x18),
                                  *(undefined8 *)
                                   UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
      (uVar6 & 1) != 0)))) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar5 = *(long *)(in_stack_00000068 + 10);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo);
    FUN_07fc701c(uVar4,uVar11,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07fc5380(lVar5,uVar4,0);
  }
  lVar5 = *(long *)(in_stack_00000068 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                            );
  FUN_07fc4948(uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc52b8(lVar5,uVar4,0);
  if (*(long *)(unaff_x22 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(in_stack_00000068 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc5660(*(long *)(in_stack_00000068 + 10),0);
  in_stack_00000048 = FUN_0793e484();
  uVar6 = FUN_0587c6c4(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar6 & 1) == 0) {
    in_stack_00000058._4_4_ = 0;
    *in_stack_00000068 = 0;
    *(undefined8 *)(in_stack_00000068 + 0xc) = in_stack_00000048;
    thunk_FUN_03afed3c(in_stack_00000068 + 0xc,0);
    puVar9 = in_stack_00000068;
    if (*(int *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Vector3f___TypeInfo,extraout_x1,in_stack_00000068);
    }
    FUN_03ffb420(puVar9 + 2,&stack0x00000048,in_stack_00000068,
                 *(undefined8 *)UnityEngine_ParticleSystem_Particle___TypeInfo);
    uVar4 = 0;
    iVar10 = 10;
    goto LAB_0793de64;
  }
LAB_0793de48:
  uVar4 = FUN_0587c704(&stack0x00000048,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  iVar10 = 0xb;
LAB_0793de64:
  if ((*piStack0000000000000028 < 0) &&
     (plVar8 = *(long **)(*plStack0000000000000030 + 0x28), plVar8 != (long *)0x0)) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  if (lStack0000000000000020 == 0) {
    if (iVar10 == 0xb) {
      lVar5 = *(long *)OVRPlugin_Vector3f___TypeInfo;
      puVar9 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(puVar9,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    }
    else if (iVar10 == 0) {
      uVar4 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
      puVar9 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      lVar5 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar11 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
      FUN_05338d34(puVar9,uVar4,uVar11);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


