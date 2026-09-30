/*
FUNCTION_NAME: FUN_05fcfe74
ENTRY_POINT: 05fcfe74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05fcfe74(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar4 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  if ((DAT_06dc481b & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__);
    FUN_02d965b8(Method_System_Span<HierarchyNode>_op_Implicit__);
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(Method_System_Span<FrameTiming>__ctor__);
    DAT_06dc481b = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_1 == 0) goto LAB_05fd03fc;
  uVar10 = *(undefined8 *)(param_1 + 0x34);
  lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(lVar6 + 8) = uVar10;
  if (param_2 == 0) goto LAB_05fd03fc;
  lVar6 = *(long *)(param_2 + 0x18);
  if (*(int *)(*(long *)Method_System_Span<HierarchyNode>_op_Implicit__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar3 = Method_System_Span<FrameTiming>__ctor__;
  if (lVar6 == 0) goto LAB_05fd03fc;
  plVar11 = (long *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(lVar6 + 0x10);
  if (*plVar11 == 0) {
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *(long *)puVar4;
    }
    *plVar11 = **(long **)(lVar6 + 0xb8);
    LeanTween__value(plVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4285 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4285 = '\x01';
  }
  puVar2 = PTR_DAT_06a0f5d8;
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4286 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4286 = '\x01';
  }
  iVar9 = (uint)*(ushort *)(param_1 + 0x16) << 0x10;
  if (*(ushort *)(param_1 + 0x16) != 0) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *(long *)puVar2;
    }
    piVar7 = *(int **)(lVar6 + 0xb8);
    if (iVar9 != *piVar7) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar7 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (iVar9 != piVar7[1]) goto LAB_05fd0068;
    }
    lVar6 = *(long *)(param_1 + 0x58);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x14);
    uVar13 = *(undefined8 *)(param_1 + 0x1c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_05fccd6c(uVar12,uVar13);
    if (lVar6 == 0) goto LAB_05fd03fc;
    thunk_FUN_06319ec0(lVar6,uVar1,uVar12,0);
  }
LAB_05fd0068:
  lVar6 = *(long *)(param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (lVar6 == 0) {
LAB_05fd03fc:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
  thunk_FUN_06319c7c(*(undefined4 *)(lVar8 + 8),*(undefined4 *)(lVar8 + 0xc),
                     *(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x14),lVar6,uVar1,0);
  puVar4 = Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__;
  if (*(char *)(param_1 + 0x88) == '\0') {
    iVar9 = *(int *)(param_1 + 0x68);
    if (0 < iVar9) {
      iVar5 = *(int *)(param_1 + 0x74);
      iVar14 = 0;
      do {
        if (0 < iVar5) {
          iVar9 = 0;
          do {
            if (*(int *)(param_1 + 0x60) != -1) {
              if (*plVar11 == 0) goto LAB_05fd03fc;
              FUN_0631a9d8(*plVar11,*(undefined4 *)(param_1 + 0x7c),
                           *(int *)(param_1 + 0x60) + iVar14,0);
            }
            if (*(int *)(param_1 + 0x6c) != -1) {
              if (*plVar11 == 0) goto LAB_05fd03fc;
              FUN_0631a9d8(*plVar11,*(undefined4 *)(param_1 + 0x80),iVar9 + *(int *)(param_1 + 0x6c)
                           ,0);
            }
            lVar6 = *(long *)(param_2 + 0x18);
            uVar12 = *(undefined8 *)(param_1 + 0x24);
            uVar13 = *(undefined8 *)(param_1 + 0x2c);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05fccbc0(&local_88,uVar12,uVar13);
            if (lVar6 == 0) goto LAB_05fd03fc;
            uStack_d8 = uStack_80;
            local_e0 = local_88;
            uStack_c8 = uStack_70;
            uStack_d0 = local_78;
            local_c0 = local_68;
            FUN_05f2fc38(lVar6,&local_e0,iVar9 + *(int *)(param_1 + 0x70),0xffffffff,
                         *(int *)(param_1 + 100) + iVar14,0);
                    /* try { // try from 05fd0280 to 060d05f3 has its CatchHandler @ 05fd0280
                       catch() { ... } // from try @ 05fd0280 with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd0620 with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd0670 with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd06d8 with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd070c with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd072c with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd0750 with catch @ 05fd0280
                       catch() { ... } // from try @ 05fd0774 with catch @ 05fd0280 */
            iVar5 = *(int *)(param_1 + 0x78);
            if (iVar5 == 2) {
              uVar12 = *(undefined8 *)(param_1 + 0x48);
              uVar1 = *(undefined4 *)(param_1 + 0x50);
              uVar13 = *(undefined8 *)(param_1 + 0x58);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05f97dac(uVar10,uVar12,uVar1,uVar13,0);
            }
            else if (iVar5 == 1) {
              uVar12 = *(undefined8 *)(param_1 + 0x48);
              uVar1 = *(undefined4 *)(param_1 + 0x50);
              uVar13 = *(undefined8 *)(param_1 + 0x58);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05f97ad4(uVar10,uVar12,uVar1,uVar13,0);
            }
            else if (iVar5 == 0) {
              uVar12 = *(undefined8 *)(param_1 + 0x48);
              uVar1 = *(undefined4 *)(param_1 + 0x50);
              uVar13 = *(undefined8 *)(param_1 + 0x58);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05f97c40(uVar10,uVar12,uVar1,uVar13,0);
            }
            iVar5 = *(int *)(param_1 + 0x74);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar5);
          iVar9 = *(int *)(param_1 + 0x68);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar9);
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) != -1) {
      if (*plVar11 == 0) goto LAB_05fd03fc;
      FUN_0631a9d8(*plVar11,*(undefined4 *)(param_1 + 0x7c),0,0);
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      if (*plVar11 == 0) goto LAB_05fd03fc;
      FUN_0631a9d8(*plVar11,*(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0x6c),0);
    }
    lVar6 = *(long *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0x24);
    uVar13 = *(undefined8 *)(param_1 + 0x2c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05fccbc0(&local_88,uVar12,uVar13);
    if (lVar6 == 0) goto LAB_05fd03fc;
    uStack_a8 = uStack_80;
    local_b0 = local_88;
    uStack_98 = uStack_70;
    uStack_a0 = local_78;
    local_90 = local_68;
    FUN_05f2fc38(lVar6,&local_b0,0,0xffffffff,0xffffffff,0);
    iVar9 = *(int *)(param_1 + 0x78);
    if (iVar9 == 2) {
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_05f97dac(uVar10,uVar13,uVar1,uVar12,0);
    }
    else if (iVar9 == 1) {
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_05f97ad4(uVar10,uVar13,uVar1,uVar12,0);
    }
    else if (iVar9 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_05f97c40(uVar10,uVar13,uVar1,uVar12,0);
    }
  }
  return;
}


