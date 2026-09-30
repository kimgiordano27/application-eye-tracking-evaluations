/*
FUNCTION_NAME: Unity.Mathematics.math$$forward
ENTRY_POINT: 031bc904
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void Unity_Mathematics_math__forward(uint *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long in_x9;
  uint *unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long *unaff_x23;
  int unaff_w27;
  int unaff_w28;
  long lVar14;
  undefined8 uVar15;
  uint uStack000000000000001c;
  undefined8 in_stack_00000020;
  uint in_stack_00000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  uint uStack0000000000000034;
  uint in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  uint uStack000000000000004c;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  uint uStack0000000000000080;
  uint uStack0000000000000084;
  undefined8 in_stack_00000088;
  uint uStack0000000000000090;
  byte bStack00000000000000b0;
  char cStack00000000000000b4;
  char in_stack_000000b8;
  
  uVar11 = *param_1;
  uVar13 = **(undefined8 **)(in_x9 + 0x7b8);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar6 = (long *)FUN_0277b678(uVar13,0);
  puVar3 = System_Collections_Generic_List<RuntimeManager_AttachedInstance>_TypeInfo;
  if (plVar6 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar6 + 0x388))();
    plVar6 = (long *)FUN_0277b678(*(undefined8 *)puVar3,0);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x388))();
      if (((uVar4 | uVar5) & 1) == 0) {
        uVar13 = *(undefined8 *)System_Collections_Generic_List<SQLiteCommand_Binding>_TypeInfo;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar6 = (long *)FUN_0277b678(uVar13,0);
        if (plVar6 == (long *)0x0) goto LAB_031bd044;
        uVar5 = (**(code **)(*plVar6 + 0x388))();
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 1;
      }
      uVar13 = *(undefined8 *)System_Collections_Generic_List<SVGDocument_HierarchyUpdate>_TypeInfo;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar6 = (long *)FUN_0277b678(uVar13,0);
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x388))();
        puVar2 = 
        System_Collections_Generic_List<ResourceManager_DeferredCallbackRegisterRequest>_TypeInfo;
        puVar3 = System_Collections_Generic_List<XmlSchemaObject>_TypeInfo;
        if ((uVar5 != 0 || unaff_w28 != 0) && ((uVar7 & 1) != 0)) {
          thunk_FUN_01a6ca08(System_Collections_Generic_List<Settings_PlatformTemplate>_TypeInfo);
          uVar13 = FUN_025b4d3c();
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar15 = thunk_FUN_01a89e68();
          FUN_026b274c(uVar15,uVar13,0);
          uVar13 = thunk_FUN_01a6ca08(
                                     System_Collections_Generic_List<SimulationBehaviourUpdater_BehaviourList>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar15,uVar13);
        }
        uVar13 = *(undefined8 *)System_Collections_Generic_List<SVGDocument_PostponedClip>_TypeInfo;
        iStack000000000000002c = unaff_w27;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0277b678(uVar13,0);
        uVar8 = FUN_0279b53c();
        FUN_0277b678(*(undefined8 *)puVar2,0);
        uStack000000000000001c = FUN_0279b53c();
        uVar13 = (**(code **)(*unaff_x20 + 0xb78))();
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar12);
          lVar12 = *(long *)puVar3;
        }
        puVar2 = PTR_DAT_03d0d210;
        lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
        if (lVar14 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar12);
            lVar12 = *(long *)puVar3;
          }
          uVar15 = **(undefined8 **)(lVar12 + 0xb8);
          lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc6fb8);
          FUN_021de1ac(lVar14,uVar15,
                       *(undefined8 *)
                        System_Collections_Generic_List<SVGDocument_PostponedStopData>_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar6 = lVar14;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar14);
        }
        uVar9 = FUN_01f64c54(uVar13,lVar14,*(undefined8 *)puVar2);
        uVar10 = FUN_031bd750();
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar1 = uVar11 | 0x40000000;
          if (uStack0000000000000050 != 0) {
            uVar1 = uVar11;
          }
          uVar11 = uVar1 | 0x8000000;
          if (in_stack_00000020._4_4_ == 0) {
            uVar11 = uVar1;
          }
          if (uVar5 != 0) {
            uVar11 = uVar11 | 0x2000000;
          }
          uVar5 = uVar11 | 0xa000000;
          if ((uVar4 & 1) == 0) {
            uVar5 = uVar11;
          }
          if (-1 < _uStack0000000000000050) {
            uVar5 = uVar5 | 0x4000000;
          }
          uVar11 = uVar5 | 0x20000;
          if (cStack00000000000000b4 != '\0') {
            uVar11 = uVar5;
          }
          if (in_stack_000000b8 != '\0') {
            uVar11 = uVar11 | 0x80000;
          }
          uVar4 = uVar11 | 0x10000000;
          if ((_uStack0000000000000090 & 0x100000000) == 0) {
            uVar4 = uVar11;
          }
          uVar11 = uVar4 | 0x1000000;
          if ((uVar7 & 1) == 0) {
            uVar11 = uVar4;
          }
          uVar4 = uVar11 | 0x400000;
          if ((in_stack_00000028 & 1) == 0) {
            uVar4 = uVar11;
          }
          uVar11 = uVar4 | 0x200000;
          if ((uVar8 & 1) == 0) {
            uVar11 = uVar4;
          }
          uVar4 = uVar11 | 0x100000;
          if ((uStack000000000000001c & 1) == 0) {
            uVar4 = uVar11;
          }
          uVar11 = uVar4 | 0x800000;
          if ((uVar9 & 1) == 0) {
            uVar11 = uVar4;
          }
          if ((uVar10 & 1) == 0) {
            uVar11 = uVar11 | 0x40000;
          }
        }
        unaff_x19[10] = 0;
        unaff_x19[0xb] = 0;
        unaff_x19[8] = 0;
        unaff_x19[9] = 0;
        unaff_x19[0xe] = 0;
        unaff_x19[0xf] = 0;
        unaff_x19[0xc] = 0;
        unaff_x19[0xd] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[6] = 0;
        unaff_x19[7] = 0;
        unaff_x19[4] = 0;
        unaff_x19[5] = 0;
        unaff_x19[0xc] = iStack0000000000000048 - uStack0000000000000080;
        unaff_x19[0xd] = uStack0000000000000080;
        *unaff_x19 = uVar11;
        unaff_x19[1] = uStack0000000000000050;
        *(undefined8 *)(unaff_x19 + 8) = in_stack_00000088;
        unaff_x19[10] = uStack000000000000005c;
        unaff_x19[0xb] = uStack000000000000004c;
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        unaff_x19[0x10] = 0;
        unaff_x19[0x11] = 0;
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        unaff_x19[0x16] = uStack0000000000000034;
        unaff_x19[0x17] = uStack0000000000000084;
        if ((int)uStack0000000000000090 < 1) {
          uStack0000000000000090 = uStack0000000000000050;
        }
        unaff_x19[0x18] = 0;
        unaff_x19[0x19] = 0;
        *(undefined8 *)(unaff_x19 + 4) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 6) = in_stack_00000060;
        unaff_x19[0x10] = uStack000000000000007c;
        unaff_x19[0x11] = iStack000000000000002c - uStack0000000000000078;
        unaff_x19[0x12] = uStack0000000000000078;
        unaff_x19[0x13] = iStack0000000000000030 - in_stack_00000070._4_4_;
        unaff_x19[0x14] = in_stack_00000070._4_4_;
        unaff_x19[0x15] = in_stack_00000038;
        unaff_x19[2] = uStack0000000000000090;
        unaff_x19[3] = uStack0000000000000054;
        unaff_x19[0xe] = (uint)bStack00000000000000b0;
        unaff_x19[0xf] = in_stack_00000040._4_4_ - uStack000000000000007c;
        unaff_x19[0x18] = uStack0000000000000058;
        return;
      }
    }
  }
LAB_031bd044:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


