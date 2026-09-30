/*
FUNCTION_NAME: FUN_05fcf158
ENTRY_POINT: 05fcf158
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05fcf158(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  puVar5 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  if ((DAT_06dc4819 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__);
    FUN_02d965b8(Method_System_Span<HierarchyNode>_op_Implicit__);
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(Method_System_Span<FrameTiming>__ctor__);
    DAT_06dc4819 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_1 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar8 + 8) = uVar10;
    if (param_2 != 0) {
      lVar8 = *(long *)(param_2 + 0x18);
      if (*(int *)(*(long *)Method_System_Span<HierarchyNode>_op_Implicit__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar4 = Method_System_Span<FrameTiming>__ctor__;
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(lVar8 + 0x10);
        if (*(char *)(param_1 + 0x5c) == '\0') {
          iVar9 = *(int *)(param_1 + 0x48);
          if (0 < iVar9) {
            iVar7 = *(int *)(param_1 + 0x54);
            iVar11 = 0;
            do {
              if (0 < iVar7) {
                iVar9 = 0;
                do {
                  uVar6 = *(undefined8 *)(param_1 + 0x20);
                  uVar1 = *(undefined8 *)(param_1 + 0x28);
                  lVar8 = *(long *)(param_2 + 0x18);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_05fccbc0(&local_a8,uVar6,uVar1);
                  if (lVar8 == 0) goto LAB_05fcf45c;
                  uStack_f8 = uStack_a0;
                  local_100 = local_a8;
                  uStack_e8 = uStack_90;
                  uStack_f0 = local_98;
                  local_e0 = local_88;
                  FUN_05f2fc38(lVar8,&local_100,iVar9 + *(int *)(param_1 + 0x50),0xffffffff,
                               *(int *)(param_1 + 0x44) + iVar11,0);
                  uVar6 = FUN_05fcd064(*(undefined8 *)(param_1 + 0x10),
                                       *(undefined8 *)(param_1 + 0x18));
                  lVar8 = *(long *)puVar5;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c(lVar8);
                    lVar8 = *(long *)puVar5;
                  }
                  lVar8 = *(long *)(lVar8 + 0xb8);
                  iVar7 = *(int *)(param_1 + 0x4c);
                  iVar2 = *(int *)(param_1 + 0x40);
                  uVar12 = *(undefined4 *)(lVar8 + 8);
                  uVar13 = *(undefined4 *)(lVar8 + 0xc);
                  iVar3 = *(int *)(param_1 + 0x58);
                  uVar14 = *(undefined4 *)(lVar8 + 0x10);
                  uVar15 = *(undefined4 *)(lVar8 + 0x14);
                  if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__
                              + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_05f981b0(uVar12,uVar13,uVar14,uVar15,(float)(iVar9 + iVar7),uVar10,uVar6,
                               iVar2 + iVar11,iVar3 == 1,0);
                  iVar7 = *(int *)(param_1 + 0x54);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar7);
                iVar9 = *(int *)(param_1 + 0x48);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar9);
          }
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          lVar8 = *(long *)(param_2 + 0x18);
          if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05fccbc0(&local_a8,uVar6,uVar1);
          if (lVar8 == 0) goto LAB_05fcf45c;
          uStack_c8 = uStack_a0;
          local_d0 = local_a8;
          uStack_b8 = uStack_90;
          uStack_c0 = local_98;
          local_b0 = local_88;
          FUN_05f2fc38(lVar8,&local_d0,0,0xffffffff,0xffffffff,0);
          uVar6 = FUN_05fcd064(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          lVar8 = *(long *)puVar5;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar8);
            lVar8 = *(long *)puVar5;
          }
          lVar8 = *(long *)(lVar8 + 0xb8);
          iVar9 = *(int *)(param_1 + 0x4c);
          iVar11 = *(int *)(param_1 + 0x58);
          uVar12 = *(undefined4 *)(lVar8 + 8);
          uVar13 = *(undefined4 *)(lVar8 + 0xc);
          uVar14 = *(undefined4 *)(lVar8 + 0x10);
          uVar15 = *(undefined4 *)(lVar8 + 0x14);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4)
              == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05f985f4(uVar12,uVar13,uVar14,uVar15,(float)iVar9,uVar10,uVar6,iVar11 == 1,0);
        }
        return;
      }
    }
  }
LAB_05fcf45c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


