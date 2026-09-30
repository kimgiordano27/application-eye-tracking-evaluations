/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$SetupCheckerMeshMaterial
ENTRY_POINT: 04a755d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__SetupCheckerMeshMaterial(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  code *pcVar10;
  long *unaff_x23;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  int *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  void *in_stack_00000028;
  
  do {
    param_1 = FUN_02b76218(param_1);
    do {
      uVar5 = (uint)unaff_x25;
      lVar7 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == param_1) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a75624;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,param_1,0);
LAB_04a75624:
      pcVar10 = (code *)*puVar2;
      memcpy(&stack0x000001e0,&stack0x000000c0,0x90);
      memcpy(&stack0x00000150,&stack0x00000030,0x90);
      uVar8 = (*pcVar10)(unaff_x23,&stack0x000001e0,&stack0x00000150,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        if ((int)(uint)unaff_x29 < 0) {
          uVar6 = *(uint *)(unaff_x26 + 0x18);
          if (uVar6 <= uVar5) goto LAB_04a75794;
          lVar7 = *(long *)(in_stack_00000020 + 0x10);
          if (lVar7 == 0) goto LAB_04a757d4;
          if (*(uint *)(lVar7 + 0x18) <= (uint)in_stack_00000008) goto LAB_04a75794;
          *(int *)(lVar7 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x20 + (unaff_x28 & 0xffffffff) * 0x98 + 4) + 1;
        }
        else {
          uVar6 = *(uint *)(unaff_x26 + 0x18);
          if ((uVar6 <= uVar5) || (uVar6 <= (uint)unaff_x29)) goto LAB_04a75794;
          *(undefined4 *)(unaff_x20 + (unaff_x29 & 0xffffffff) * 0x98 + 4) =
               *(undefined4 *)(unaff_x20 + (unaff_x28 & 0xffffffff) * 0x98 + 4);
        }
        if (uVar5 < uVar6) {
          *in_stack_00000010 = -1;
          memset((void *)(unaff_x19 + 8),0,0x90);
          *(undefined4 *)(unaff_x20 + (unaff_x28 & 0xffffffff) * 0x98 + 4) =
               *(undefined4 *)(in_stack_00000020 + 0x28);
          iVar1 = *(int *)(in_stack_00000020 + 0x20) + -1;
          *(int *)(in_stack_00000020 + 0x20) = iVar1;
          *(int *)(in_stack_00000020 + 0x38) = *(int *)(in_stack_00000020 + 0x38) + 1;
          if (iVar1 == 0) {
            uVar5 = 0xffffffff;
            *(undefined4 *)(in_stack_00000020 + 0x24) = 0;
          }
          *(uint *)(in_stack_00000020 + 0x28) = uVar5;
          return 1;
        }
LAB_04a75794:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      do {
        uVar5 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
        if ((int)uVar5 <= unaff_w27) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar3 = thunk_FUN_02b79644();
          uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar3,in_stack_00000018);
        }
        if (uVar5 <= (uint)unaff_x25) goto LAB_04a75794;
        unaff_w27 = unaff_w27 + 1;
        unaff_x29 = unaff_x25 & 0xffffffff;
        uVar6 = *(uint *)(unaff_x20 + (unaff_x28 & 0xffffffff) * 0x98 + 4);
        unaff_x25 = (ulong)uVar6;
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (uVar5 <= uVar6) goto LAB_04a75794;
        in_stack_00000010 = (int *)(unaff_x20 + unaff_x25 * 0x98);
        unaff_x28 = unaff_x25;
      } while (*in_stack_00000010 != unaff_w21);
      unaff_x19 = unaff_x20 + unaff_x25 * 0x98;
      unaff_x23 = *(long **)(in_stack_00000020 + 0x30);
      memcpy(&stack0x000000c0,(void *)(unaff_x19 + 8),0x90);
      memcpy(&stack0x00000030,in_stack_00000028,0x90);
      if (unaff_x23 == (long *)0x0) {
LAB_04a757d4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      param_1 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
    } while ((*(ushort *)(param_1 + 0x135) & 1) != 0);
  } while( true );
}


