/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.XRPass$$get_enabled
ENTRY_POINT: 058e0b14
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_Experimental_Rendering_XRPass__get_enabled
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined1 *param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uVar15;
  ulong uVar16;
  long *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  uint uStack0000000000000054;
  undefined4 in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long *plStack0000000000000080;
  long lStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  
  uVar9 = param_2._8_8_;
  lStack0000000000000090 = param_2._0_8_;
  lStack0000000000000088 = param_1._8_8_;
  plStack0000000000000080 = param_1._0_8_;
  do {
    uStack0000000000000098 = uVar9;
    FUN_03c1746c(param_3,param_4,param_5);
LAB_058e08bc:
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        lVar10 = *unaff_x22;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x27) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_058e0908;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_058e0908:
        iVar6 = (*(code *)*puVar7)();
        if (iVar6 <= unaff_w23) {
          lVar10 = *unaff_x26;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar10);
            lVar10 = *unaff_x26;
          }
          puVar2 = OVRPlugin_OVRP_1_96_0_TypeInfo;
          lVar13 = *(long *)OVRPlugin_OVRP_1_96_0_TypeInfo;
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar2;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
          if (lVar14 == 0) {
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar13 = *(long *)puVar2;
            }
            uVar9 = **(undefined8 **)(lVar13 + 0xb8);
            lVar14 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo);
            FUN_0466361c(lVar14,uVar9,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar8 = lVar14;
            thunk_FUN_02dd37b4(plVar8,lVar14);
          }
          if (lVar10 != 0) {
            FUN_03c19108(lVar10,lVar14,*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (unaff_x19 != 0) {
              FUN_03c176c8();
              return;
            }
          }
          goto LAB_058e0c40;
        }
        lVar10 = *unaff_x22;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x28) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_058e0968;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_058e0968:
        plVar8 = (long *)(*(code *)*puVar7)();
        if (plVar8 == (long *)0x0) goto LAB_058e0c40;
        iVar6 = FUN_061784cc(plVar8,0);
      } while (iVar6 == -1);
      uVar9 = FUN_06177bfc(plVar8,0);
      lStack0000000000000090 = unaff_x20[2];
      lStack0000000000000088 = unaff_x20[1];
      plStack0000000000000080 = (long *)*unaff_x20;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*unaff_x26);
      }
      in_stack_00000038 = lStack0000000000000088;
      in_stack_00000030 = plStack0000000000000080;
      in_stack_00000040 = lStack0000000000000090;
      uVar11 = FUN_058e0c44(uVar9,&stack0x00000030,&stack0x00000050,(long)&stack0x00000048 + 4);
    } while ((uVar11 & 1) == 0);
    lVar10 = (**(code **)(*unaff_x21 + 600))();
    uVar5 = in_stack_00000058;
    uVar1 = uStack0000000000000054;
    uVar4 = uStack0000000000000050;
    if (lVar10 == 0) {
LAB_058e0c40:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar16 = (ulong)uStack0000000000000054;
    uVar15 = FUN_0601e4a4(uStack0000000000000050,uVar16,in_stack_00000058,lVar10,0);
    uVar9 = (**(code **)(*unaff_x21 + 600))();
    uVar11 = (**(code **)(*plVar8 + 0x418))
                       (uVar15,uVar16,plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x420));
    if ((uVar11 & 1) == 0) goto LAB_058e08bc;
    lVar10 = *unaff_x26;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *unaff_x26;
    }
    uVar3 = in_stack_00000048._4_4_;
    param_3 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    in_stack_00000018 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000010 = plVar8;
    thunk_FUN_02dd37b4(&stack0x00000010,plVar8);
    in_stack_00000018 = CONCAT44(uVar1,uVar4);
    in_stack_00000020 = CONCAT44((int)uVar15,uVar5);
    uVar9 = CONCAT44(uVar3,(int)uVar16);
    in_stack_00000028 = uVar9;
    if (param_3 == 0) goto LAB_058e0c40;
    lVar13 = *unaff_x29;
    in_stack_00000068 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000010;
    in_stack_00000070 = in_stack_00000020;
    lVar10 = *(long *)(param_3 + 0x10);
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    in_stack_00000078 = uVar9;
    if (lVar10 == 0) goto LAB_058e0c40;
    uVar1 = *(uint *)(param_3 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(param_3 + 0x18) = uVar1 + 1;
      lVar10 = lVar10 + (long)(int)uVar1 * 0x20;
      *(long *)(lVar10 + 0x28) = in_stack_00000018;
      *(long **)(lVar10 + 0x20) = in_stack_00000010;
      *(undefined8 *)(lVar10 + 0x38) = uVar9;
      *(long *)(lVar10 + 0x30) = in_stack_00000020;
      thunk_FUN_02dd37b4(lVar10 + 0x20,0);
      goto LAB_058e08bc;
    }
    param_4 = (undefined1 *)&stack0x00000080;
    param_5 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
    plStack0000000000000080 = in_stack_00000010;
    lStack0000000000000088 = in_stack_00000018;
    lStack0000000000000090 = in_stack_00000020;
  } while( true );
}


