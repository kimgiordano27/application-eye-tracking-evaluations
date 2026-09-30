/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<IKSolverLimb.AxisDirection>
ENTRY_POINT: 024055dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 275
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_17;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_18
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Array__InternalArray__ICollection_Remove<IKSolverLimb_AxisDirection>
               (undefined1 param_1 [16],ulong param_2,undefined **param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ushort *puVar16;
  undefined **unaff_x19;
  uint uVar17;
  undefined **unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong uVar18;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined **in_stack_00000008;
  undefined *in_stack_00000010;
  ulong in_stack_00000018;
  undefined **in_stack_00000020;
  undefined **in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar18 = param_1._8_8_;
  puVar14 = param_1._0_8_;
  ppuVar15 = (undefined **)((ulong)unaff_x21 & 0xff);
  puVar16 = &switchD_024005b0::switchdataD_00bebb88;
  ppuVar5 = param_3;
  switch(ppuVar15) {
  case (undefined **)0x0:
    ppuVar15 = (undefined **)unaff_x19[7];
    param_3 = &PTR_typeinfo_0422f000;
  case (undefined **)0xfa:
  case (undefined **)0xfd:
  case (undefined **)0xff:
    unaff_x20 = (undefined **)*ppuVar15;
code_r0x02406050:
    thunk_FUN_01c273e8(param_3[0x165]);
code_r0x02406058:
    param_3 = unaff_x20;
    FUN_019b5f60();
    param_4 = (undefined8 *)0x0;
code_r0x02406064:
    uVar9 = FUN_032e04b8(param_3,param_4);
    thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
    uVar10 = thunk_FUN_01c496e0();
    FUN_01cfe284(uVar10,uVar9,0);
LAB_02406038:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar10);
  case (undefined **)0x1:
  case (undefined **)0x15:
  case (undefined **)0x3a:
  case (undefined **)0x4e:
  case (undefined **)0x73:
  case (undefined **)0x87:
  case (undefined **)0xac:
  case (undefined **)0xc0:
  case (undefined **)0xe5:
  case (undefined **)0xf9:
    in_stack_00000020 = unaff_x20;
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 != (long *)0x0) {
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_04230588 + 0x40)) {
        puVar3 = (undefined1 *)thunk_FUN_01c49834();
        FUN_023f3e1c(*puVar3);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x2:
  case (undefined **)0x48:
    in_stack_00000020 = unaff_x20;
    param_3 = (undefined **)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    ppuVar15 = (undefined **)PTR_DAT_042303a0;
    if (param_3 == (undefined **)0x0) goto LAB_02405fdc;
  case (undefined **)0x81:
    puVar16 = (ushort *)*param_3;
code_r0x0240594c:
    if (*(long *)(puVar16 + 0x20) != *(long *)(*ppuVar15 + 0x40)) {
LAB_02405fe0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    puVar3 = (undefined1 *)thunk_FUN_01c49834();
    FUN_023f3834(*puVar3);
    break;
  case (undefined **)0x3:
  case (undefined **)0x43:
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x18:
    ppuVar15 = (undefined **)*unaff_x22;
code_r0x02405ab0:
    param_3 = (undefined **)thunk_FUN_01c49334(ppuVar15[1],&stack0x00000020);
    if (param_3 == (undefined **)0x0) {
LAB_02405fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
code_r0x02405ac0:
    if (*(long *)(*param_3 + 0x40) == *(long *)(*(long *)PTR_DAT_042305d0 + 0x40)) {
code_r0x02405ae0:
      puVar16 = (ushort *)thunk_FUN_01c49834();
      param_3 = (undefined **)(ulong)*puVar16;
code_r0x02405ae8:
      param_4 = (undefined8 *)0x0;
System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>:
      FUN_03248b4c(param_3,param_4);
      return;
    }
    goto LAB_02405fe0;
  case (undefined **)0x4:
  case (undefined **)0x4d:
    in_stack_00000020 = unaff_x20;
    param_3 = (undefined **)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
  case (undefined **)0xc2:
  case (undefined **)0xfb:
    if (param_3 != (undefined **)0x0) {
      ppuVar15 = &PTR_DAT_04230000;
code_r0x02405b10:
      ppuVar15 = (undefined **)ppuVar15[0xd4];
      puVar16 = (ushort *)*param_3;
code_r0x02405b18:
      if (*(long *)(puVar16 + 0x20) == *(long *)(*ppuVar15 + 0x40)) {
        param_3 = (undefined **)thunk_FUN_01c49834();
code_r0x02405b30:
        FUN_03248c78(*(undefined2 *)param_3,0);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x5:
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x50:
    ppuVar15 = (undefined **)*unaff_x22;
    param_4 = &stack0x00000020;
code_r0x0240597c:
    param_3 = (undefined **)ppuVar15[1];
code_r0x02405980:
    puVar6 = (undefined8 *)thunk_FUN_01c49334(param_3,param_4);
    if (puVar6 != (undefined8 *)0x0) {
      puVar16 = (ushort *)*puVar6;
      param_4 = *(undefined8 **)PTR_DAT_0422fd80;
code_r0x02405998:
      if (*(long *)(puVar16 + 0x20) == param_4[8]) {
        puVar4 = (uint *)thunk_FUN_01c49834();
        param_3 = (undefined **)(ulong)*puVar4;
code_r0x024059b0:
        FUN_03248bb0(param_3,0);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x6:
  case (undefined **)0x7:
  case (undefined **)0x8:
  case (undefined **)0x9:
  case (undefined **)0xb:
  case (undefined **)0xc:
  case (undefined **)0xd:
  case (undefined **)0xe:
  case (undefined **)0x10:
  case (undefined **)0x11:
  case (undefined **)0x12:
  case (undefined **)0x13:
    in_stack_00000020 = (undefined **)CONCAT71(in_stack_00000020._1_7_,(char)unaff_x21);
    param_3 = (undefined **)thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
    param_4 = &stack0x00000020;
  case (undefined **)0x3f:
  case (undefined **)0x40:
  case (undefined **)0x41:
  case (undefined **)0x42:
  case (undefined **)0x44:
  case (undefined **)0x45:
  case (undefined **)0x46:
  case (undefined **)0x47:
  case (undefined **)0x49:
  case (undefined **)0x4a:
  case (undefined **)0x4b:
  case (undefined **)0x4c:
    uVar9 = thunk_FUN_01c49334(param_3,param_4);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar10 = thunk_FUN_01c496e0();
    uVar13 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_03244804(uVar10,uVar13,uVar9,0,0);
    goto LAB_02406038;
  case (undefined **)0xa:
  case (undefined **)0x75:
    ppuVar15 = (undefined **)*unaff_x22;
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x3c:
    param_4 = &stack0x00000020;
code_r0x024059c8:
    plVar2 = (long *)thunk_FUN_01c49334(ppuVar15[1],param_4);
    if (plVar2 != (long *)0x0) {
      param_4 = *(undefined8 **)PTR_DAT_042305a8;
      ppuVar15 = *(undefined ***)(*plVar2 + 0x40);
code_r0x024059e8:
      if (ppuVar15 == (undefined **)param_4[8]) {
        param_3 = (undefined **)thunk_FUN_01c49834();
code_r0x024059f8:
        FUN_03248cdc(*(undefined4 *)param_3,0);
code_r0x02405a04:
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0xf:
    ppuVar15 = (undefined **)*unaff_x22;
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x3d:
    ppuVar5 = (undefined **)thunk_FUN_01c49334(ppuVar15[1],&stack0x00000020);
    ppuVar15 = &PTR_typeinfo_0422f000;
code_r0x02405a20:
    param_3 = *(undefined ***)ppuVar15[0x143];
    unaff_x19 = ppuVar5;
    if (*(int *)(param_3 + 0x1c) == 0) {
code_r0x02405a38:
      thunk_FUN_01c1d1e8(param_3);
      ppuVar5 = unaff_x19;
    }
    param_3 = ppuVar5;
    if (param_3 == (undefined **)0x0) {
      param_3 = (undefined **)0x0;
    }
    else if (*param_3 != *(undefined **)PTR_DAT_0422fc38) {
      param_3 = (undefined **)0x0;
    }
    param_4 = (undefined8 *)0x0;
code_r0x02405fc4:
    FUN_01cfb43c(param_3,param_4);
    break;
  case (undefined **)0x14:
  case (undefined **)0x3e:
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x17:
    param_3 = (undefined **)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
code_r0x02405a70:
    if (param_3 != (undefined **)0x0) {
code_r0x02405a74:
      in_ZR = *(long *)(*param_3 + 0x40) == *(long *)(*(long *)PTR_DAT_042304e0 + 0x40);
code_r0x02405a90:
      if ((bool)in_ZR) {
        param_3 = (undefined **)thunk_FUN_01c49834();
code_r0x02405a98:
        FUN_03248e24(*(undefined4 *)param_3,0);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  default:
    goto code_r0x02405f18;
  case (undefined **)0x1a:
    goto code_r0x02405b10;
  case (undefined **)0x1c:
    goto code_r0x02405b54;
  case (undefined **)0x1d:
    goto code_r0x02405ba0;
  case (undefined **)0x1f:
    puVar6 = (undefined8 *)thunk_FUN_01c49334(ppuVar15[1],&stack0x00000020);
    if (puVar6 == (undefined8 *)0x0) goto LAB_02405fdc;
    puVar16 = (ushort *)*puVar6;
    ppuVar15 = (undefined **)PTR_DAT_04230770;
  case (undefined **)0xda:
    param_4 = (undefined8 *)*ppuVar15;
code_r0x02405eb0:
    if (*(long *)(puVar16 + 0x20) == param_4[8]) {
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_023f401c(*puVar6,*(undefined4 *)(puVar6 + 1));
      return;
    }
    goto LAB_02405fe0;
  case (undefined **)0x21:
    goto code_r0x02405bec;
  case (undefined **)0x24:
    goto code_r0x02405c58;
  case (undefined **)0x29:
    ppuVar15 = (undefined **)*unaff_x22;
    in_stack_00000020 = unaff_x20;
  case (undefined **)0x6c:
  case (undefined **)0x93:
    plVar2 = (long *)thunk_FUN_01c49334(ppuVar15[1],&stack0x00000020);
    if (plVar2 != (long *)0x0) {
      in_ZR = *(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042303d0 + 0x40);
code_r0x02405cb4:
      if ((bool)in_ZR) {
        puVar16 = (ushort *)thunk_FUN_01c49834();
        param_3 = (undefined **)(ulong)*puVar16;
        param_4 = (undefined8 *)0x0;
code_r0x02405cc4:
        FUN_03248ae8(param_3,param_4);
code_r0x02405cc8:
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x2b:
    goto code_r0x02405cc8;
  case (undefined **)0x2e:
    goto code_r0x02405d10;
  case (undefined **)0x2f:
    goto code_r0x02405d5c;
  case (undefined **)0x31:
    param_4 = &stack0x00000020;
    param_3 = *(undefined ***)(*unaff_x22 + 8);
    in_stack_00000020 = unaff_x20;
  case (undefined **)0xa0:
    plVar2 = (long *)thunk_FUN_01c49334(param_3,param_4);
    if (plVar2 != (long *)0x0) {
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042301a8 + 0x40)) {
        param_3 = (undefined **)thunk_FUN_01c49834();
code_r0x02405de8:
        FUN_023f3e84(*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4));
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x33:
  case (undefined **)0xd6:
    param_3 = (undefined **)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (param_3 == (undefined **)0x0) goto LAB_02405fdc;
  case (undefined **)0xa1:
    if (*(long *)(*param_3 + 0x40) == *(long *)(*(long *)PTR_DAT_042306f8 + 0x40)) {
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_023f3f08(*puVar6);
      return;
    }
    goto LAB_02405fe0;
  case (undefined **)0x38:
    param_4 = &stack0x00000020;
  case (undefined **)0x72:
    param_3 = (undefined **)thunk_FUN_01c49334(ppuVar15[1],param_4);
code_r0x02405e50:
    if (param_3 != (undefined **)0x0) {
      puVar16 = (ushort *)*param_3;
      ppuVar15 = (undefined **)PTR_DAT_042301b0;
code_r0x02405e60:
      if (*(long *)(puVar16 + 0x20) == *(long *)(*ppuVar15 + 0x40)) {
        puVar11 = (undefined4 *)thunk_FUN_01c49834();
        FUN_023f3f8c(*puVar11,puVar11[1],puVar11[2]);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x39:
    goto code_r0x02406058;
  case (undefined **)0x3b:
    goto code_r0x0240597c;
  case (undefined **)0x4f:
  case (undefined **)0x52:
  case (undefined **)0x54:
  case (undefined **)0x57:
  case (undefined **)0x59:
  case (undefined **)0x5b:
  case (undefined **)0x5c:
  case (undefined **)0x5e:
  case (undefined **)0x5f:
  case (undefined **)0x60:
  case (undefined **)0x61:
  case (undefined **)0x63:
  case (undefined **)0x65:
  case (undefined **)0x66:
  case (undefined **)0x69:
  case (undefined **)0x6b:
  case (undefined **)0x6d:
  case (undefined **)0x6e:
  case (undefined **)0x6f:
  case (undefined **)0x70:
    goto code_r0x02405d28;
  case (undefined **)0x51:
    goto code_r0x024059b0;
  case (undefined **)0x53:
    goto code_r0x02405a04;
  case (undefined **)0x55:
  case (undefined **)0xba:
    goto code_r0x02405a38;
  case (undefined **)0x56:
    goto code_r0x02405a74;
  case (undefined **)0x58:
    goto code_r0x02405ab0;
  case (undefined **)0x5a:
    goto System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>;
  case (undefined **)0x5d:
    param_4 = &stack0x00000020;
    param_3 = (undefined **)ppuVar15[1];
  case (undefined **)0x8c:
    param_3 = (undefined **)thunk_FUN_01c49334(param_3,param_4);
code_r0x02405b54:
    ppuVar15 = (undefined **)PTR_DAT_04230108;
    if (param_3 != (undefined **)0x0) {
code_r0x02405b60:
      puVar16 = (ushort *)*param_3;
code_r0x02405b64:
      param_4 = (undefined8 *)*ppuVar15;
code_r0x02405b68:
      if (*(long *)(puVar16 + 0x20) == param_4[8]) {
        puVar6 = (undefined8 *)thunk_FUN_01c49834();
        FUN_023f39b0(*puVar6,puVar6[1]);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x62:
    goto code_r0x02405b60;
  case (undefined **)0x64:
  case (undefined **)0x8e:
    param_3 = (undefined **)thunk_FUN_01c49334(ppuVar15[1]);
code_r0x02405ba0:
    if (param_3 != (undefined **)0x0) {
      param_4 = *(undefined8 **)PTR_DAT_04230358;
      ppuVar15 = *(undefined ***)(*param_3 + 0x40);
      unaff_x19 = (undefined **)PTR_DAT_04230358;
code_r0x02405bb8:
      if (ppuVar15 == (undefined **)param_4[8]) {
        puVar7 = (ulong *)thunk_FUN_01c49834();
        uVar18 = puVar7[1];
        puVar14 = (undefined *)*puVar7;
code_r0x02405bcc:
        param_3 = (undefined **)*unaff_x19;
code_r0x02405bd0:
        in_stack_00000010 = puVar14;
        in_stack_00000018 = uVar18;
        if (*(int *)(param_3 + 0x1c) == 0) {
          thunk_FUN_01c1d1e8();
        }
        param_3 = &stack0x00000010;
        param_4 = (undefined8 *)0x0;
code_r0x02405be8:
        FUN_03763528(param_3,param_4);
code_r0x02405bec:
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x67:
    goto code_r0x02405bd0;
  case (undefined **)0x68:
    ppuVar15 = (undefined **)ppuVar15[0x8f];
    puVar16 = (ushort *)*param_3;
  case (undefined **)0xc7:
    if (*(long *)(puVar16 + 0x20) == *(long *)(*ppuVar15 + 0x40)) {
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      uVar9 = *puVar6;
      goto LAB_02405d78;
    }
    goto LAB_02405fe0;
  case (undefined **)0x6a:
    goto code_r0x02405c4c;
  case (undefined **)0x71:
    goto code_r0x02405cc4;
  case (undefined **)0x74:
    plVar2 = (long *)thunk_FUN_01c49334();
    if (plVar2 == (long *)0x0) goto LAB_02405fdc;
    if (*(long *)(*plVar2 + 0x40) !=
        *(long *)(*(long *)System_Text_RegularExpressions_MatchCollection_TypeInfo + 0x40))
    goto LAB_02405fe0;
    puVar6 = (undefined8 *)thunk_FUN_01c49834();
    FUN_023f3b6c(*puVar6);
    break;
  case (undefined **)0x76:
    goto code_r0x024059f8;
  case (undefined **)0x77:
    in_stack_00000008 = unaff_x20;
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000008);
    if (plVar2 == (long *)0x0) goto LAB_02405fdc;
    if (*(long *)(*plVar2 + 0x40) !=
        *(long *)(*(long *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo + 0x40))
    goto LAB_02405fe0;
    param_3 = (undefined **)thunk_FUN_01c49834();
  case (undefined **)0x7c:
    in_stack_00000020 = (undefined **)*param_3;
    FUN_023f3bf0(&stack0x00000020);
    break;
  case (undefined **)0x78:
  case (undefined **)0x79:
  case (undefined **)0x7a:
  case (undefined **)0x7b:
  case (undefined **)0x7d:
  case (undefined **)0x7e:
  case (undefined **)0x7f:
  case (undefined **)0x80:
  case (undefined **)0x82:
  case (undefined **)0x83:
  case (undefined **)0x84:
  case (undefined **)0x85:
    goto code_r0x02405de8;
  case (undefined **)0x86:
    goto code_r0x02405980;
  case (undefined **)0x88:
  case (undefined **)0x8b:
  case (undefined **)0x8d:
  case (undefined **)0x90:
  case (undefined **)0x92:
  case (undefined **)0x94:
  case (undefined **)0x95:
  case (undefined **)0x97:
  case (undefined **)0x98:
  case (undefined **)0x99:
  case (undefined **)0x9a:
  case (undefined **)0x9c:
  case (undefined **)0x9e:
  case (undefined **)0x9f:
  case (undefined **)0xa2:
  case (undefined **)0xa4:
  case (undefined **)0xa6:
  case (undefined **)0xa7:
  case (undefined **)0xa8:
  case (undefined **)0xa9:
    plVar2 = (long *)thunk_FUN_01c49334(ppuVar15[1]);
    if (plVar2 == (long *)0x0) goto LAB_02405fdc;
    if (*(long *)(*plVar2 + 0x40) !=
        *(long *)(*(long *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo + 0x40))
    goto LAB_02405fe0;
    puVar11 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f389c(*puVar11,puVar11[1],puVar11[2],puVar11[3]);
    break;
  case (undefined **)0x89:
    goto code_r0x02405a98;
  case (undefined **)0x8a:
    goto code_r0x02405ae8;
  case (undefined **)0x8f:
    goto code_r0x02405be8;
  case (undefined **)0x91:
    param_3 = (undefined **)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (param_3 == (undefined **)0x0) goto LAB_02405fdc;
code_r0x02405c4c:
    puVar16 = (ushort *)*param_3;
    ppuVar15 = (undefined **)PTR_DAT_04230670;
code_r0x02405c58:
    puVar14 = *ppuVar15;
    ppuVar15 = *(undefined ***)(puVar16 + 0x20);
    puVar16 = *(ushort **)(puVar14 + 0x40);
code_r0x02405c64:
    if (ppuVar15 == (undefined **)puVar16) {
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_03248dc0(*puVar6,0);
      return;
    }
    goto LAB_02405fe0;
  case (undefined **)0x96:
    if (ppuVar15 != (undefined **)param_4[8]) goto LAB_02405fe0;
  case (undefined **)0xcc:
    pbVar8 = (byte *)thunk_FUN_01c49834();
    param_3 = (undefined **)(ulong)*pbVar8;
    param_4 = (undefined8 *)0x0;
code_r0x02405d10:
    FUN_03248a80(param_3,param_4);
    break;
  case (undefined **)0x9b:
    param_3 = (undefined **)ppuVar15[1];
code_r0x02405d28:
    plVar2 = (long *)thunk_FUN_01c49334(param_3);
    puVar14 = PTR_DAT_0422f960;
    if (plVar2 != (long *)0x0) {
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_0422f960 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_01c49834();
        ppuVar15 = (undefined **)*puVar6;
        param_3 = *(undefined ***)puVar14;
code_r0x02405d5c:
        in_stack_00000068 = ppuVar15;
        if (*(int *)(param_3 + 0x1c) == 0) {
          thunk_FUN_01c1d1e8();
        }
        param_3 = (undefined **)&stack0x00000068;
code_r0x02405d70:
        param_4 = (undefined8 *)0x0;
System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>:
        uVar9 = FUN_032b1574(param_3,param_4);
LAB_02405d78:
        FUN_03248c14(uVar9,0);
        return;
      }
      goto LAB_02405fe0;
    }
    goto LAB_02405fdc;
  case (undefined **)0x9d:
    goto code_r0x02405d70;
  case (undefined **)0xa3:
    goto code_r0x02405e60;
  case (undefined **)0xa5:
    goto code_r0x02405eb0;
  case (undefined **)0xaa:
    in_ZR = _USHORT_00bebbc8 == param_4[8];
  case (undefined **)0xdc:
    if ((bool)in_ZR) {
      param_3 = (undefined **)thunk_FUN_01c49834();
      puVar14 = (undefined *)(ulong)*(uint *)param_3;
      param_2 = (ulong)*(uint *)((long)param_3 + 4);
code_r0x02405f18:
      FUN_023f40ac(puVar14,param_2,*(undefined4 *)(param_3 + 1),*(undefined4 *)((long)param_3 + 0xc)
                  );
      return;
    }
    goto LAB_02405fe0;
  case (undefined **)0xab:
    if (ppuVar15 == (undefined **)0x0) {
      FUN_01c5d288(PTR_DAT_04230358);
      FUN_01c5d288(PTR_DAT_0422fa08);
      FUN_01c5d288(PTR_DAT_0422f930);
      FUN_01c5d288(PTR_DAT_042303a0);
      FUN_01c5d288(PTR_DAT_042303d0);
      FUN_01c5d288(System_Text_RegularExpressions_Match_TypeInfo);
      FUN_01c5d288(UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
      FUN_01c5d288(PTR_DAT_0422f960);
      FUN_01c5d288(PTR_DAT_04230108);
      FUN_01c5d288(PTR_DAT_042304a8);
      FUN_01c5d288(PTR_DAT_042305d0);
      param_3 = &PTR_typeinfo_0422f000;
      goto code_r0x02406150;
    }
    goto LAB_02406324;
  case (undefined **)0xad:
    goto code_r0x0240594c;
  case (undefined **)0xae:
    goto code_r0x02405ae0;
  case (undefined **)0xaf:
    goto code_r0x02405b30;
  case (undefined **)0xb0:
    goto code_r0x02405998;
  case (undefined **)0xb1:
  case (undefined **)0xb2:
  case (undefined **)0xb3:
  case (undefined **)0xb4:
  case (undefined **)0xb6:
  case (undefined **)0xb7:
  case (undefined **)0xb8:
  case (undefined **)0xb9:
  case (undefined **)0xbb:
  case (undefined **)0xbc:
  case (undefined **)0xbd:
  case (undefined **)0xbe:
    goto code_r0x02406064;
  case (undefined **)0xb5:
    goto code_r0x024059e8;
  case (undefined **)0xbf:
    goto code_r0x02405a90;
  case (undefined **)0xc1:
  case (undefined **)0xc4:
  case (undefined **)0xc6:
  case (undefined **)0xc9:
  case (undefined **)0xcb:
  case (undefined **)0xcd:
  case (undefined **)0xce:
  case (undefined **)0xd0:
  case (undefined **)0xd1:
  case (undefined **)0xd2:
  case (undefined **)0xd3:
  case (undefined **)0xd5:
  case (undefined **)0xd7:
  case (undefined **)0xd8:
  case (undefined **)0xdb:
  case (undefined **)0xdd:
  case (undefined **)0xdf:
  case (undefined **)0xe0:
  case (undefined **)0xe1:
  case (undefined **)0xe2:
    goto code_r0x02406050;
  case (undefined **)0xc3:
  case (undefined **)0xfc:
    goto code_r0x02405b64;
  case (undefined **)0xc5:
  case (undefined **)0xfe:
    goto code_r0x02405bcc;
  case (undefined **)0xc8:
    goto code_r0x02405c64;
  case (undefined **)0xca:
    goto code_r0x02405cb4;
  case (undefined **)0xcf:
    goto System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>;
  case (undefined **)0xd4:
    thunk_FUN_01c495e4(param_3,*ppuVar15);
    break;
  case (undefined **)0xd9:
    goto code_r0x02405e50;
  case (undefined **)0xde:
    FUN_023f3adc();
    break;
  case (undefined **)0xe3:
    goto code_r0x02405fc4;
  case (undefined **)0xe4:
    goto code_r0x024061b0;
  case (undefined **)0xe6:
    goto code_r0x024059c8;
  case (undefined **)0xe7:
    goto code_r0x02405b68;
  case (undefined **)0xe8:
    goto code_r0x02405bb8;
  case (undefined **)0xe9:
    goto code_r0x02405a20;
  case (undefined **)0xea:
  case (undefined **)0xeb:
  case (undefined **)0xec:
  case (undefined **)0xed:
  case (undefined **)0xef:
  case (undefined **)0xf0:
  case (undefined **)0xf1:
  case (undefined **)0xf2:
  case (undefined **)0xf4:
  case (undefined **)0xf5:
  case (undefined **)0xf6:
  case (undefined **)0xf7:
code_r0x02406150:
    FUN_01c5d288(param_3[0x1b0]);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(PTR_DAT_04236d90);
    FUN_01c5d288(PTR_DAT_042301a0);
    FUN_01c5d288(System_Text_RegularExpressions_MatchCollection_TypeInfo);
    FUN_01c5d288(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    FUN_01c5d288(Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo);
    FUN_01c5d288(System_Text_RegularExpressions_MatchSparse_TypeInfo);
    param_3 = &System_Runtime_Remoting_Messaging_IMessage_TypeInfo;
code_r0x024061b0:
    FUN_01c5d288(param_3[0x97]);
    FUN_01c5d288(PTR_DAT_04230588);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshot_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshotCandidate_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshotCandidateList_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingBrowseResult_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueueResult_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueueResultAndRoom_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueuedUser_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueuedUserList_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_MatchmakingStats_TypeInfo);
    FUN_01c5d288(UnityEngine_Material_TypeInfo);
    FUN_01c5d288(UnityEngine_TextCore_Text_MaterialManager_TypeInfo);
    FUN_01c5d288(UnityEngine_MaterialPropertyBlock_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_MaterialQualityUtilities_TypeInfo);
    FUN_01c5d288(TMPro_MaterialReferenceManager_TypeInfo);
    FUN_01c5d288(UnityEngine_TextCore_Text_MaterialReferenceManager_TypeInfo);
    FUN_01c5d288(UnityEngine_ProBuilder_MaterialUtility_TypeInfo);
    FUN_01c5d288(System_Math_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fa18);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_042306a0);
    FUN_01c5d288(PTR_DAT_042305a8);
    FUN_01c5d288(PTR_DAT_04230670);
    FUN_01c5d288(PTR_DAT_042306f8);
    FUN_01c5d288(PTR_DAT_042301a8);
    FUN_01c5d288(PTR_DAT_04230770);
    FUN_01c5d288(PTR_DAT_042301b0);
    FUN_01c5d288(PTR_DAT_04236e58);
    if (*unaff_x21 == 0) {
      FUN_01c723f0();
    }
LAB_02406324:
    uVar17 = (uint)unaff_x20;
    uVar1 = uVar17 & 0xff;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    in_stack_00000078 = 0;
    if (0x3c < uVar1) {
      if (uVar1 < 0x44) {
        uVar17 = uVar17 & 0xff;
        if (uVar17 == 0x3e) {
          in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
          plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
          if (plVar2 == (long *)0x0) goto LAB_02406eb8;
          if (*(long *)(*plVar2 + 0x40) ==
              *(long *)(*(long *)System_Text_RegularExpressions_Match_TypeInfo + 0x40)) {
            puVar11 = (undefined4 *)thunk_FUN_01c49834();
            FUN_023f392c(*puVar11,*(undefined8 *)
                                   Oculus_Platform_Models_MatchmakingAdminSnapshotCandidate_TypeInfo
                        );
            return;
          }
          goto LAB_02406ebc;
        }
        if (uVar17 == 0x41) {
          in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
          plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
          if (plVar2 == (long *)0x0) goto LAB_02406eb8;
          if (*(long *)(*plVar2 + 0x40) ==
              *(long *)(*(long *)Mono_ISystemDependencyProvider_TypeInfo + 0x40)) {
            puVar11 = (undefined4 *)thunk_FUN_01c49834();
            FUN_023f3d00(*puVar11,puVar11[1],puVar11[2],puVar11[3],
                         *(undefined8 *)UnityEngine_TextCore_Text_MaterialManager_TypeInfo);
            return;
          }
          goto LAB_02406ebc;
        }
        if (uVar17 == 0x43) {
          in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
          in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
          plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
          if (plVar2 == (long *)0x0) goto LAB_02406eb8;
          if (*(long *)(*plVar2 + 0x40) ==
              *(long *)(*(long *)System_Text_RegularExpressions_MatchSparse_TypeInfo + 0x40)) {
            puVar6 = (undefined8 *)thunk_FUN_01c49834();
            FUN_023f3d90(*puVar6,puVar6[1],*(undefined8 *)UnityEngine_Material_TypeInfo);
            return;
          }
          goto LAB_02406ebc;
        }
      }
      else {
        uVar17 = uVar17 & 0xff;
        if (uVar17 < 0x4f) {
          if (uVar17 == 0x46) {
            in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
            in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
            plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
            if (plVar2 == (long *)0x0) goto LAB_02406eb8;
            if (*(long *)(*plVar2 + 0x40) ==
                *(long *)(*(long *)System_Text_RegularExpressions_MatchCollection_TypeInfo + 0x40))
            {
              puVar6 = (undefined8 *)thunk_FUN_01c49834();
              FUN_023f3b6c(*puVar6,*(undefined8 *)
                                    Oculus_Platform_Models_MatchmakingEnqueuedUser_TypeInfo);
              return;
            }
            goto LAB_02406ebc;
          }
          if (uVar17 == 0x4e) {
            in_stack_00000068 = (undefined **)CONCAT44(unaff_s9,unaff_s10);
            in_stack_00000070 = unaff_s8;
            plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000068);
            if (plVar2 == (long *)0x0) goto LAB_02406eb8;
            if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_04236d90 + 0x40)) {
              puVar6 = (undefined8 *)thunk_FUN_01c49834();
              in_stack_000000b8 = puVar6[5];
              in_stack_000000b0 = puVar6[4];
              in_stack_000000c8 = puVar6[7];
              in_stack_000000c0 = puVar6[6];
              in_stack_00000098 = puVar6[1];
              in_stack_00000020 = (undefined **)*puVar6;
              in_stack_000000a8 = puVar6[3];
              in_stack_000000a0 = (undefined *)puVar6[2];
              in_stack_00000090 = in_stack_00000020;
              FUN_023f3a5c(&stack0x00000090,
                           *(undefined8 *)Oculus_Platform_Models_MatchmakingEnqueueResult_TypeInfo);
              return;
            }
            goto LAB_02406ebc;
          }
        }
        else {
          if (uVar17 == 0x50) {
            in_stack_00000068 = (undefined **)CONCAT44(unaff_s9,unaff_s10);
            in_stack_00000070 = unaff_s8;
            plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000068);
            if (plVar2 == (long *)0x0) goto LAB_02406eb8;
            if (*(long *)(*plVar2 + 0x40) ==
                *(long *)(*(long *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo + 0x40)) {
              puVar6 = (undefined8 *)thunk_FUN_01c49834();
              in_stack_00000008 = (undefined **)puVar6[1];
              in_stack_00000090 = *puVar6;
              in_stack_00000010 = (undefined *)puVar6[2];
              in_stack_00000098 = in_stack_00000008;
              in_stack_000000a0 = in_stack_00000010;
              FUN_023f3bf0(&stack0x00000090,
                           *(undefined8 *)Oculus_Platform_Models_MatchmakingStats_TypeInfo);
              return;
            }
            goto LAB_02406ebc;
          }
          if (uVar17 == 0x53) {
            in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
            in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
            plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
            if (plVar2 == (long *)0x0) goto LAB_02406eb8;
            if (*(long *)(*plVar2 + 0x40) ==
                *(long *)(*(long *)System_Text_RegularExpressions_MatchEvaluator_TypeInfo + 0x40)) {
              puVar11 = (undefined4 *)thunk_FUN_01c49834();
              System_Array__InternalArray__ICollection_CopyTo<RaycastHit2D>
                        (*puVar11,puVar11[1],puVar11[2],puVar11[3],
                         *(undefined8 *)Oculus_Platform_Models_MatchmakingEnqueuedUserList_TypeInfo)
              ;
              return;
            }
            goto LAB_02406ebc;
          }
        }
      }
switchD_02406364_caseD_6:
      in_stack_00000090 = CONCAT71(in_stack_00000090._1_7_,(char)unaff_x20);
      uVar9 = thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
      uVar13 = thunk_FUN_01c49334(uVar9,&stack0x00000090);
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar9 = thunk_FUN_01c496e0();
      uVar10 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
      FUN_03244804(uVar9,uVar10,uVar13,0,0);
LAB_02406f14:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9);
    }
    if (uVar1 < 0x15) {
      switch((ulong)unaff_x20 & 0xff) {
      case 0:
        uVar9 = *(undefined8 *)unaff_x19[7];
        thunk_FUN_01c273e8(PTR_DAT_0422fb28);
        FUN_019b5f60();
        uVar13 = FUN_032e04b8(uVar9,0);
        thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
        uVar9 = thunk_FUN_01c496e0();
        FUN_01cfe284(uVar9,uVar13,0);
        goto LAB_02406f14;
      case 1:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_04230588 + 0x40)) {
          puVar3 = (undefined1 *)thunk_FUN_01c49834();
          FUN_023f3e1c(*puVar3,*(undefined8 *)UnityEngine_MaterialPropertyBlock_TypeInfo);
          return;
        }
        break;
      case 2:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042303a0 + 0x40)) {
          puVar3 = (undefined1 *)thunk_FUN_01c49834();
          FUN_023f3834(*puVar3,*(undefined8 *)
                                Oculus_Platform_Models_MatchmakingAdminSnapshot_TypeInfo);
          return;
        }
        break;
      case 3:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042305d0 + 0x40)) {
          puVar12 = (undefined2 *)thunk_FUN_01c49834();
          FUN_03248b4c(*puVar12,0);
          return;
        }
        break;
      case 4:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042306a0 + 0x40)) {
          puVar12 = (undefined2 *)thunk_FUN_01c49834();
          FUN_03248c78(*puVar12,0);
          return;
        }
        break;
      case 5:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
          puVar11 = (undefined4 *)thunk_FUN_01c49834();
          FUN_03248bb0(*puVar11,0);
          return;
        }
        break;
      default:
        goto switchD_02406364_caseD_6;
      case 10:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042305a8 + 0x40)) {
          puVar11 = (undefined4 *)thunk_FUN_01c49834();
          FUN_03248cdc(*puVar11,0);
          return;
        }
        break;
      case 0xf:
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (*(int *)(*(long *)PTR_DAT_0422fa18 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa18);
        }
        if (plVar2 == (long *)0x0) {
          plVar2 = (long *)0x0;
        }
        else if (*plVar2 != *(long *)PTR_DAT_0422fc38) {
          plVar2 = (long *)0x0;
        }
        FUN_01cfb43c(plVar2,0);
        return;
      case 0x14:
        in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
        if (plVar2 == (long *)0x0) goto LAB_02406eb8;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042304e0 + 0x40)) {
          puVar11 = (undefined4 *)thunk_FUN_01c49834();
          FUN_03248e24(*puVar11,0);
          return;
        }
      }
LAB_02406ebc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    switch(uVar17 & 0xff) {
    case 0x19:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) {
LAB_02406eb8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042304a8 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_03248e90(*puVar6,0);
      break;
    default:
      goto switchD_02406364_caseD_6;
    case 0x1b:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230108 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_023f39b0(*puVar6,puVar6[1],
                   *(undefined8 *)Oculus_Platform_Models_MatchmakingBrowseResult_TypeInfo);
      break;
    case 0x1c:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      puVar14 = PTR_DAT_04230358;
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230358 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      in_stack_00000088 = puVar6[1];
      in_stack_00000080 = *puVar6;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03763528(&stack0x00000080,0);
      break;
    case 0x1e:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230478 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      uVar9 = *puVar6;
      goto LAB_02406bd8;
    case 0x20:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230670 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_03248dc0(*puVar6,0);
      break;
    case 0x21:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042303d0 + 0x40))
      goto LAB_02406ebc;
      puVar12 = (undefined2 *)thunk_FUN_01c49834();
      FUN_03248ae8(*puVar12,0);
      break;
    case 0x23:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fa08 + 0x40))
      goto LAB_02406ebc;
      puVar3 = (undefined1 *)thunk_FUN_01c49834();
      FUN_03248a80(*puVar3,0);
      break;
    case 0x25:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      puVar14 = PTR_DAT_0422f960;
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_0422f960 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      in_stack_00000078 = *puVar6;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032b1574(&stack0x00000078,0);
LAB_02406bd8:
      FUN_03248c14(uVar9,0);
      break;
    case 0x28:
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      uVar9 = thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      thunk_FUN_01c495e4(uVar9,*(undefined8 *)PTR_DAT_0422f930);
      break;
    case 0x2d:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301a8 + 0x40))
      goto LAB_02406ebc;
      puVar11 = (undefined4 *)thunk_FUN_01c49834();
      FUN_023f3e84(*puVar11,puVar11[1],*(undefined8 *)TMPro_MaterialReferenceManager_TypeInfo);
      break;
    case 0x2f:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042306f8 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_023f3f08(*puVar6,*(undefined8 *)UnityEngine_Rendering_MaterialQualityUtilities_TypeInfo);
      break;
    case 0x32:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301b0 + 0x40))
      goto LAB_02406ebc;
      puVar11 = (undefined4 *)thunk_FUN_01c49834();
      FUN_023f3f8c(*puVar11,puVar11[1],puVar11[2],
                   *(undefined8 *)UnityEngine_ProBuilder_MaterialUtility_TypeInfo);
      break;
    case 0x33:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230770 + 0x40))
      goto LAB_02406ebc;
      puVar6 = (undefined8 *)thunk_FUN_01c49834();
      FUN_023f401c(*puVar6,*(undefined4 *)(puVar6 + 1),
                   *(undefined8 *)UnityEngine_TextCore_Text_MaterialReferenceManager_TypeInfo);
      break;
    case 0x35:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04236e58 + 0x40))
      goto LAB_02406ebc;
      puVar11 = (undefined4 *)thunk_FUN_01c49834();
      FUN_023f40ac(*puVar11,puVar11[1],puVar11[2],puVar11[3],*(undefined8 *)System_Math_TypeInfo);
      break;
    case 0x37:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301a0 + 0x40))
      goto LAB_02406ebc;
      puVar11 = (undefined4 *)thunk_FUN_01c49834();
      FUN_023f3adc(*puVar11,puVar11[1],puVar11[2],puVar11[3],
                   *(undefined8 *)Oculus_Platform_Models_MatchmakingEnqueueResultAndRoom_TypeInfo);
      break;
    case 0x3c:
      in_stack_00000090 = CONCAT44(unaff_s9,unaff_s10);
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,unaff_s8);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x21 + 8),&stack0x00000090);
      if (plVar2 == (long *)0x0) goto LAB_02406eb8;
      if (*(long *)(*plVar2 + 0x40) !=
          *(long *)(*(long *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo + 0x40))
      goto LAB_02406ebc;
      puVar11 = (undefined4 *)thunk_FUN_01c49834();
      FUN_023f389c(*puVar11,puVar11[1],puVar11[2],puVar11[3],
                   *(undefined8 *)
                    Oculus_Platform_Models_MatchmakingAdminSnapshotCandidateList_TypeInfo);
    }
    return;
  case (undefined **)0xee:
    goto code_r0x02405a70;
  case (undefined **)0xf3:
    goto code_r0x02405ac0;
  case (undefined **)0xf8:
    goto code_r0x02405b18;
  }
  return;
}


