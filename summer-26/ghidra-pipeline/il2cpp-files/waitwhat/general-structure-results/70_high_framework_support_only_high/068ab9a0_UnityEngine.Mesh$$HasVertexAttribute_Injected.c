/*
FUNCTION_NAME: UnityEngine.Mesh$$HasVertexAttribute_Injected
ENTRY_POINT: 068ab9a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 UnityEngine_Mesh__HasVertexAttribute_Injected(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar12;
  int unaff_w28;
  long in_stack_00000000;
  int *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar3 = PTR_DAT_070c1b68;
  bVar2 = false;
  iVar4 = 0;
  do {
    lVar12 = *(long *)(unaff_x21 + 0x30);
    uVar5 = FUN_042e47a4();
    if (lVar12 == 0) goto LAB_068abcf0;
    uVar6 = FUN_06859118(lVar12,uVar5,&stack0x00000018,&stack0x00000010,0);
    lVar12 = in_stack_00000010;
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar10);
    }
    uVar7 = FUN_069d69b8(lVar12,0,0);
    if ((uVar6 & 1) == 0) {
LAB_068abaa8:
      if (unaff_x24 == 0 && (uVar7 & 1) == 0) goto LAB_068abc44;
    }
    else {
      lVar12 = *(long *)(unaff_x21 + 0x30);
      if (lVar12 == 0) goto LAB_068abcf0;
      thunk_FUN_031c3cac(in_stack_00000018,
                         *(undefined8 *)UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
      uVar6 = FUN_06856518(lVar12);
      if ((uVar6 & 1) == 0) goto LAB_068abaa8;
      if (!bVar2) {
        *in_stack_00000008 = iVar4;
      }
      if (unaff_x19 == 0) goto LAB_068abcf0;
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_068abcf0;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
      }
      else {
        FUN_042e4a64();
      }
      if ((uVar7 & 1) != 0) {
        if (in_stack_00000010 == 0) goto LAB_068abcf0;
        uVar5 = *(undefined8 *)(in_stack_00000010 + 0x28);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_069d69b8(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000000 == 0) goto LAB_068abcf0;
          lVar12 = *(long *)(in_stack_00000000 + 0x10);
          lVar10 = *(long *)OVRPlugin_OVRP_1_29_0_TypeInfo;
          *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_068abcf0;
          uVar1 = *(uint *)(in_stack_00000000 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
            *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000010;
          }
          else {
            FUN_042e4a64(in_stack_00000000,in_stack_00000010,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      if (unaff_x24 == 0) goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
      if (*(long *)(unaff_x21 + 0x310) == 0) goto LAB_068abcf0;
      FUN_052432d4(*(long *)(unaff_x21 + 0x310),in_stack_00000018,iVar4,
                   *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
      bVar2 = true;
    }
    iVar4 = iVar4 + 1;
  } while (unaff_w28 != iVar4);
  if (unaff_x24 == 0) {
LAB_068abc44:
    if (unaff_x19 != 0) {
UnityEngine_Mesh__GetAllocArrayFromChannelImpl:
      return *(undefined4 *)(unaff_x19 + 0x18);
    }
  }
  else {
    lVar12 = *(long *)(unaff_x21 + 0x308);
    if (lVar12 != 0) {
      iVar4 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if ((iVar4 < 1) ||
         (FUN_0595236c(*(undefined8 *)(lVar12 + 0x10),0,iVar4,0), *(long *)(unaff_x21 + 0x308) != 0)
         ) {
        FUN_042e4c6c();
        plVar8 = (long *)FUN_068b3948();
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_068abc5c;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068abc5c:
          (*(code *)*puVar9)(plVar8);
        }
        if (unaff_x19 != 0) {
          if (*(int *)(unaff_x19 + 0x18) < 1) {
            iVar4 = -1;
          }
          else {
            lVar12 = *(long *)(unaff_x21 + 0x310);
            uVar5 = FUN_042e47a4();
            if (lVar12 == 0) goto LAB_068abcf0;
            iVar4 = FUN_0524174c(lVar12,uVar5,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
          }
          *in_stack_00000008 = iVar4;
          goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
        }
      }
    }
  }
LAB_068abcf0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


