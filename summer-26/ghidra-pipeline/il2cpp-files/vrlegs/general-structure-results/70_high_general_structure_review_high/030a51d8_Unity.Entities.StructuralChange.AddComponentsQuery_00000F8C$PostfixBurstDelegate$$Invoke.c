/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddComponentsQuery_00000F8C$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a51d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8
Unity_Entities_StructuralChange_AddComponentsQuery_00000F8C_PostfixBurstDelegate__Invoke(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  long unaff_x23;
  long unaff_x24;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  FUN_01ab69ac(System_Action<float[]>_TypeInfo);
  FUN_01ab69ac(System_Action<BaseCommandModel>_TypeInfo);
  FUN_01ab69ac(System_Action<BaseRuntimePanel>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x59a) = 1;
  in_stack_00000038 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  lVar4 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_027b3d9c(lVar4,0);
  if (unaff_x23 != 0) {
    lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,*(undefined4 *)(unaff_x23 + 0x18));
    puVar1 = PTR_DAT_03cbdf88;
    if (0 < (int)*(ulong *)(unaff_x23 + 0x18)) {
      uVar15 = 0;
      uVar11 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      lVar16 = lVar5 + 0x20;
      do {
        if (uVar11 <= uVar15) goto LAB_030a56c4;
        lVar14 = *(long *)(unaff_x23 + 0x20 + uVar15 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_036d35a8(lVar14,0,0);
        if ((uVar11 & 1) == 0) {
          if (unaff_x24 == 0) goto LAB_030a56c8;
          uVar11 = FUN_0219f8b8();
          if ((uVar11 & 1) == 0) {
            if (lVar5 != 0) {
              if (uVar15 < *(uint *)(lVar5 + 0x18)) {
                *(undefined4 *)(lVar16 + uVar15 * 4) = 0xffffffff;
                plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
                if ((lVar14 != 0) && (lVar14 = FUN_036d3824(lVar14,0), plVar6 != (long *)0x0)) {
                  if ((lVar14 != 0) &&
                     (lVar7 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0
                     )) goto LAB_030a56cc;
                  if ((int)plVar6[3] != 0) {
                    plVar6[4] = lVar14;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar6 + 4,lVar14);
                    puVar13 = (undefined8 *)System_Action<BaseRuntimePanel>_TypeInfo;
                    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      puVar13 = (undefined8 *)System_Action<BaseRuntimePanel>_TypeInfo;
                    }
                    goto LAB_030a5434;
                  }
                  goto LAB_030a56c4;
                }
                goto LAB_030a56c8;
              }
              goto LAB_030a56c4;
            }
            goto LAB_030a56c8;
          }
          iVar2 = FUN_01f242a8(in_stack_00000000,in_stack_00000038,*(undefined8 *)PTR_DAT_03cdfba0);
          if (iVar2 == -1) {
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
            uVar8 = thunk_FUN_01a89e68();
            FUN_027a7930(uVar8,0);
            uVar9 = thunk_FUN_01a6ca08(System_Action<BaseVisualElementPanel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar8,uVar9);
          }
          if (lVar5 == 0) goto LAB_030a56c8;
          if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_030a56c4;
          *(int *)(lVar16 + uVar15 * 4) = iVar2;
        }
        else {
          if (lVar5 == 0) goto LAB_030a56c8;
          if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_030a56c4;
          *(undefined4 *)(lVar16 + uVar15 * 4) = 0xffffffff;
          plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          in_stack_00000008._4_4_ = (undefined4)uVar15;
          lVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000008 + 4);
          if (plVar6 == (long *)0x0) goto LAB_030a56c8;
          if ((lVar14 != 0) &&
             (lVar7 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_030a56cc:
            uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar8,0);
          }
          if ((int)plVar6[3] == 0) goto LAB_030a56c4;
          plVar6[4] = lVar14;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar14);
          puVar13 = (undefined8 *)System_Action<BaseCommandModel>_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            puVar13 = (undefined8 *)System_Action<BaseCommandModel>_TypeInfo;
          }
LAB_030a5434:
          FUN_0367b588(*puVar13,plVar6,0);
        }
        uVar11 = (ulong)*(uint *)(unaff_x23 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(unaff_x23 + 0x18));
    }
    if ((unaff_x19 != 0) &&
       (uVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d02880,*(undefined4 *)(unaff_x19 + 0x18)),
       lVar4 != 0)) {
      puVar13 = (undefined8 *)(lVar4 + 0x10);
      *puVar13 = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar8);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      puVar1 = System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo;
      uVar12 = *(uint *)(unaff_x19 + 0x18);
      if (0 < (int)uVar12) {
        uVar10 = 0;
        do {
          if (uVar12 <= uVar10) {
LAB_030a56c4:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar16 = unaff_x19 + (long)(int)uVar10 * 0x20;
          in_stack_00000018 = *(undefined8 *)(lVar16 + 0x28);
          in_stack_00000010 = *(undefined8 *)(lVar16 + 0x20);
          in_stack_00000028 = *(undefined8 *)(lVar16 + 0x38);
          in_stack_00000020 = *(undefined8 *)(lVar16 + 0x30);
          uVar3 = FUN_036abb68(&stack0x00000010,0);
          uVar8 = FUN_036abb28(&stack0x00000010,0);
          lVar16 = *(long *)(lVar4 + 0x20);
          if (lVar16 == 0) {
            lVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_020611bc(lVar16,lVar4,*(undefined8 *)System_Action<AppCodeTaskPostData>_TypeInfo,0);
            *(long *)(lVar4 + 0x20) = lVar16;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar4 + 0x20),lVar16);
          }
          FUN_030a506c(uVar8,lVar5,uVar3,lVar16);
          uVar3 = FUN_036abb78(&stack0x00000010,0);
          uVar8 = UnityEngine_TextGenerator__GetCharacters(&stack0x00000010,0);
          lVar16 = *(long *)(lVar4 + 0x28);
          if (lVar16 == 0) {
            lVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_020611bc(lVar16,lVar4,*(undefined8 *)System_Action<Assembly>_TypeInfo,0);
            *(long *)(lVar4 + 0x28) = lVar16;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar4 + 0x28),lVar16);
          }
          FUN_030a506c(uVar8,lVar5,uVar3,lVar16);
          uVar3 = FUN_036abb88(&stack0x00000010,0);
          uVar8 = FUN_036abb48(&stack0x00000010,0);
          lVar16 = *(long *)(lVar4 + 0x30);
          if (lVar16 == 0) {
            lVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_020611bc(lVar16,lVar4,*(undefined8 *)System_Action<AsyncOperation>_TypeInfo,0);
            *(long *)(lVar4 + 0x30) = lVar16;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar4 + 0x30),lVar16);
          }
          FUN_030a506c(uVar8,lVar5,uVar3,lVar16);
          uVar3 = FUN_036abb98(&stack0x00000010,0);
          uVar8 = FUN_036abb58(&stack0x00000010,0);
          lVar16 = *(long *)(lVar4 + 0x38);
          if (lVar16 == 0) {
            lVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_020611bc(lVar16,lVar4,*(undefined8 *)System_Action<AsyncOperationHandle>_TypeInfo,0)
            ;
            *(long *)(lVar4 + 0x38) = lVar16;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar4 + 0x38),lVar16);
          }
          FUN_030a506c(uVar8,lVar5,uVar3,lVar16);
          uVar10 = *(int *)(lVar4 + 0x18) + 1;
          *(uint *)(lVar4 + 0x18) = uVar10;
          uVar12 = *(uint *)(unaff_x19 + 0x18);
        } while ((int)uVar10 < (int)uVar12);
      }
      return *puVar13;
    }
  }
LAB_030a56c8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


