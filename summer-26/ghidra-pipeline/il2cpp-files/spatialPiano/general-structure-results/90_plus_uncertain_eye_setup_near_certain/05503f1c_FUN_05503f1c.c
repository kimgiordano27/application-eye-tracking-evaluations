/*
FUNCTION_NAME: FUN_05503f1c
ENTRY_POINT: 05503f1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_20
*/


undefined8 FUN_05503f1c(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  if ((DAT_06bbf579 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cadf0);
    FUN_02f08768(OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce4e8);
    FUN_02f08768(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca3b8);
    FUN_02f08768(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_02f08768(
                System_Linq_Expressions_Interpreter_InterpretedFrame_<GetStackTraceDebugInfo>d__29_TypeInfo
                );
    FUN_02f08768(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cae40);
    FUN_02f08768(PTR_DAT_067d8a28);
    FUN_02f08768(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo);
    DAT_06bbf579 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_3 == -1) {
    if (*(int *)(*(long *)PTR_DAT_067ce4e8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_0550936c(param_2);
    if ((uVar6 & 1) == 0) goto LAB_05504234;
  }
  if (param_2 == (long *)0x0) goto LAB_05504884;
  iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar2 = 
  System_Linq_Expressions_Interpreter_InterpretedFrame_<GetStackTraceDebugInfo>d__29_TypeInfo;
  if (iVar3 < 7) {
    if (iVar3 == 5) {
      bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRPlugin_OVRP_0_1_3_TypeInfo)) {
        lVar10 = param_2[2];
        lVar11 = param_2[3];
LAB_055042a4:
        uVar7 = FUN_0550916c(param_1,lVar11,lVar10,param_3);
        return uVar7;
      }
    }
    else {
      if (iVar3 != 6) goto LAB_05504234;
      bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_106_0_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRPlugin_OVRP_1_106_0_TypeInfo)) {
        if (param_2[2] != 0) {
          uVar6 = FUN_050162b4(param_2[2],0);
          if ((uVar6 & 1) == 0) {
            plVar9 = (long *)FUN_054dfdb0(param_2,0);
            if ((plVar9 == (long *)0x0) ||
               (lVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
               lVar10 == 0)) goto LAB_05504884;
            uVar6 = FUN_050eed48(lVar10,0);
            if ((uVar6 & 1) != 0) {
              lVar10 = param_2[2];
              plVar9 = (long *)FUN_054dfdb0(param_2,0);
              if ((plVar9 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
                 lVar11 == 0)) goto LAB_05504884;
              uVar7 = FUN_050ef6a8(lVar11,*(undefined8 *)
                                           System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo
                                   ,0x14,0);
              uVar6 = FUN_05016ec0(lVar10,uVar7,0);
              if ((uVar6 & 1) != 0) {
                lVar11 = FUN_054dfdb0(param_2,0);
                goto LAB_0550485c;
              }
            }
          }
LAB_05504234:
          FUN_05500c08(param_1,param_2);
          return 0;
        }
        goto LAB_05504884;
      }
    }
    goto LAB_05504888;
  }
  if (iVar3 != 0x17) {
    if (iVar3 == 0x37) {
      if (*param_2 == *(long *)OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo) {
        uVar6 = FUN_05017f3c(param_2[4],0,0);
        if ((uVar6 & 1) == 0) {
          iVar3 = FUN_054e0e10(param_2,0);
          lVar11 = param_2[3];
          if (iVar3 != 1) {
LAB_0550485c:
            uVar7 = FUN_055094f0(param_1,lVar11,param_2,param_3);
            return uVar7;
          }
          lVar10 = FUN_054e0eb0(param_2,0,0);
          goto LAB_055042a4;
        }
        plVar9 = (long *)param_2[3];
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        if (plVar9 != (long *)0x0) {
          lVar10 = *(long *)(param_1 + 0x18);
          uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
          }
          uVar7 = FUN_054d2524(uVar7,0);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (uVar4 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar10 == 0)) goto LAB_05504884;
          auVar13 = FUN_05512e44(lVar10,uVar7,uVar4,0);
          FUN_03e1d140(&local_90,auVar13._0_8_,auVar13._8_8_,
                       *(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo);
          FUN_05503f1c(param_1,param_2[3],0xffffffff);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05504884;
          FUN_054f7a24();
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05504884;
          FUN_054f85b0(*(long *)(param_1 + 0x10),uStack_88 & 0xffffffff);
        }
        uVar5 = FUN_054e0e10(param_2,0);
        lVar10 = FUN_02f0880c(*(undefined8 *)OVRPlugin_OVRP_0_1_1_TypeInfo,(ulong)uVar5);
        puVar2 = PTR_DAT_067c9c68;
        if (0 < (int)uVar5) {
          uVar6 = 0;
          puVar12 = (undefined8 *)(lVar10 + 0x28);
          do {
            plVar9 = (long *)FUN_054e0eb0(param_2,uVar6 & 0xffffffff,0);
            FUN_05500c08(param_1,plVar9);
            if (plVar9 == (long *)0x0) goto LAB_05504884;
            lVar11 = *(long *)(param_1 + 0x18);
            uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)puVar2);
            }
            uVar7 = FUN_054d2524(uVar7,0);
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (uVar4 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar11 == 0)) goto LAB_05504884;
            auVar13 = FUN_05512e44(lVar11,uVar7,uVar4,0);
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_05504884;
            FUN_054f7a24();
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (FUN_054f85b0(*(long *)(param_1 + 0x10),auVar13._0_8_ & 0xffffffff), lVar10 == 0))
            goto LAB_05504884;
            if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            uVar6 = uVar6 + 1;
            puVar12[-1] = auVar13._0_8_;
            *puVar12 = auVar13._8_8_;
            puVar12 = puVar12 + 2;
          } while (uVar5 != uVar6);
        }
        FUN_05501e24(param_1,param_2);
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        local_a0 = local_80;
        if (param_2[4] != 0) {
          uVar7 = FUN_05017e84(param_2[4],0);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
          uStack_c8 = uStack_a8;
          local_d0 = local_b0;
          local_c0 = local_a0;
          FUN_0550e034(uVar8,&local_d0,lVar10,uVar7,param_3,0);
          return uVar8;
        }
        goto LAB_05504884;
      }
    }
    else {
      if (iVar3 != 0x26) goto LAB_05504234;
      bVar1 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_InterpretedFrame_<GetStackTraceDebugInfo>d__29_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)
           System_Linq_Expressions_Interpreter_InterpretedFrame_<GetStackTraceDebugInfo>d__29_TypeInfo
         )) {
        FUN_055012c0(param_1,param_2);
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          uVar7 = FUN_0550122c(param_1,param_2);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo);
          FUN_0550d7d4(uVar8,uVar7,param_3,0);
          return uVar8;
        }
      }
    }
    goto LAB_05504888;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_067ca3b8 + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067ca3b8))
  goto LAB_05504888;
  plVar9 = (long *)param_2[2];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x18);
    uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
    }
    uVar7 = FUN_054bfec0(uVar7,*(undefined8 *)PTR_DAT_067d8a28,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (uVar4 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar10 == 0)) goto LAB_05504884;
    auVar13 = FUN_05512e44(lVar10,uVar7,uVar4,0);
    FUN_03e1d140(&local_78,auVar13._0_8_,auVar13._8_8_,
                 *(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_05503f1c(param_1,param_2[2],0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05504884;
    FUN_054f7a24();
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05504884;
    FUN_054f85b0(*(long *)(param_1 + 0x10),uStack_70 & 0xffffffff);
  }
  plVar9 = (long *)FUN_054dfa9c(param_2,0);
  if (plVar9 == (long *)0x0) {
LAB_05504680:
    plVar9 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067cadf0 + 0x130);
    if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_05504680;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067cadf0) {
      plVar9 = (long *)0x0;
    }
  }
  uVar6 = FUN_0501518c(plVar9,0,0);
  if ((uVar6 & 1) == 0) {
    param_2 = (long *)FUN_054dfa9c(param_2,0);
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      bVar1 = *(byte *)(*(long *)PTR_DAT_067cae40 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067cae40))
      {
LAB_05504888:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_2);
      }
      lVar11 = *(long *)(param_1 + 0x10);
      uVar7 = (**(code **)(lVar10 + 0x298))(param_2,1,*(undefined8 *)(lVar10 + 0x2a0));
      if (lVar11 != 0) {
        FUN_054fb764(lVar11,uVar7);
        uVar6 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        local_a0 = local_68;
        uVar7 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo);
        uStack_108 = uStack_a8;
        local_110 = local_b0;
        local_100 = local_a0;
        FUN_0550ddf8(uVar7,&local_110,param_2,param_3,0);
        return uVar7;
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      uVar7 = FUN_054fb494(uVar6,plVar9);
      FUN_054f6d80(lVar10,uVar7);
      if (plVar9 != (long *)0x0) {
        uVar6 = FUN_05015078(plVar9,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        uVar6 = FUN_05015058(plVar9,0);
        if ((uVar6 & 1) == 0) {
          uStack_a8 = uStack_70;
          local_b0 = local_78;
          local_a0 = local_68;
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo);
          uStack_e8 = uStack_a8;
          local_f0 = local_b0;
          local_e0 = local_a0;
          FUN_0550dc78(uVar7,&local_f0,plVar9,param_3,0);
          return uVar7;
        }
        return 0;
      }
    }
  }
LAB_05504884:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


