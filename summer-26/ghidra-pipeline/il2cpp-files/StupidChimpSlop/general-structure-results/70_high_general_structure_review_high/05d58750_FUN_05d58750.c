/*
FUNCTION_NAME: FUN_05d58750
ENTRY_POINT: 05d58750
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d591b4) */
/* WARNING: Removing unreachable block (ram,0x05d59080) */
/* WARNING: Removing unreachable block (ram,0x05d58d70) */
/* WARNING: Removing unreachable block (ram,0x05d58c50) */
/* WARNING: Removing unreachable block (ram,0x05d58aac) */
/* WARNING: Removing unreachable block (ram,0x05d58ab0) */
/* WARNING: Removing unreachable block (ram,0x05d589ec) */
/* WARNING: Removing unreachable block (ram,0x05d591c4) */
/* WARNING: Removing unreachable block (ram,0x05d591bc) */
/* WARNING: Removing unreachable block (ram,0x05d591a0) */
/* WARNING: Removing unreachable block (ram,0x05d59190) */
/* WARNING: Removing unreachable block (ram,0x05d59198) */
/* WARNING: Removing unreachable block (ram,0x05d590f4) */
/* WARNING: Removing unreachable block (ram,0x05d58e70) */
/* WARNING: Removing unreachable block (ram,0x05d58e74) */
/* WARNING: Removing unreachable block (ram,0x05d58cf0) */
/* WARNING: Removing unreachable block (ram,0x05d591cc) */
/* WARNING: Removing unreachable block (ram,0x05d58b44) */
/* WARNING: Removing unreachable block (ram,0x05d58df0) */
/* WARNING: Removing unreachable block (ram,0x05d591d4) */
/* WARNING: Removing unreachable block (ram,0x05d59008) */

void FUN_05d58750(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long local_a0;
  long *plStack_98;
  long *local_90;
  long local_80;
  long *plStack_78;
  long *local_70;
  long local_68;
  
  puVar3 = Method_UnityEngine_UIElements_ScrollView_UpdateElasticBehaviour__;
                    /* try { // try from 05d58758 to 05e5875b has its CatchHandler @ 05d58794 */
                    /* try { // try from 05d5875c to 05e58797 has its CatchHandler @ 05d56ebc */
  if ((DAT_06a580b3 & 1) == 0) {
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_CheckDispose__);
                    /* catch() { ... } // from try @ 05d58758 with catch @ 05d58794 */
                    /* try { // try from 05d58798 to 05e5879f has its CatchHandler @ 05d588d4 */
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_Release__);
                    /* try { // try from 05d587a0 to 05e587fb has its CatchHandler @ 05d56ebc */
                    /* catch() { ... } // from try @ 05d58514 with catch @ 05d587a4 */
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_Wait__);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_WaitAsync__);
                    /* catch() { ... } // from try @ 05d5823c with catch @ 05d587b8 */
                    /* catch() { ... } // from try @ 05d58200 with catch @ 05d587bc */
    FUN_02d4dc40(Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__);
                    /* catch() { ... } // from try @ 05d58218 with catch @ 05d587c0 */
                    /* catch() { ... } // from try @ 05d581f8 with catch @ 05d587c4 */
                    /* catch() { ... } // from try @ 05d5739c with catch @ 05d587c8 */
    FUN_02d4dc40(Method_System_Threading_SendOrPostCallback_Invoke__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Sensor_get_samplingFrequency__);
    FUN_02d4dc40(Method_UnityEngine_Rendering_SerializableEnum_get_value__);
    FUN_02d4dc40(
                Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__
                );
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo__ctor__);
                    /* try { // try from 05d587fc to 05e587ff has its CatchHandler @ 05d58834 */
                    /* try { // try from 05d58800 to 05e58837 has its CatchHandler @ 05d56ebc */
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnAttachToPanel__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValue__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollDragElementChanged__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
                    /* catch() { ... } // from try @ 05d587fc with catch @ 05d58834 */
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_FindElement__);
                    /* try { // try from 05d58838 to 05e5883f has its CatchHandler @ 05d588d4 */
                    /* try { // try from 05d58840 to 05e58863 has its CatchHandler @ 05d56ebc */
    FUN_02d4dc40(Method_UnityEngine_UIElements_ScrollView_UpdateElasticBehaviour__);
                    /* catch() { ... } // from try @ 05d5828c with catch @ 05d58844 */
    DAT_06a580b3 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_a0 = 0;
  plStack_98 = (long *)0x0;
  local_90 = (long *)0x0;
  FUN_05d58358(param_1);
                    /* try { // try from 05d58864 to 05e58867 has its CatchHandler @ 05d58874 */
  FUN_05d59454(param_1);
  lVar7 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 05d58864 with catch @ 05d58874 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
                    /* try { // try from 05d5887c to 05e58883 has its CatchHandler @ 05d588d4 */
    lVar7 = *(long *)puVar3;
  }
                    /* try { // try from 05d58884 to 05e5889b has its CatchHandler @ 05d56ebc */
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 != 0) {
    FUN_05e949f8(lVar7,0);
  }
  plStack_b0 = &local_68;
                    /* try { // try from 05d5889c to 05e5889f has its CatchHandler @ 05d588a8 */
  local_b8 = 0;
                    /* catch() { ... } // from try @ 05d5889c with catch @ 05d588a8 */
  local_68 = lVar7;
                    /* try { // try from 05d588ac to 05e588b3 has its CatchHandler @ 05d588d4 */
                    /* try { // try from 05d588b4 to 05e588d7 has its CatchHandler @ 05d56ebc */
  (**(code **)(*param_1 + 0x1e8))(param_1,1,*(undefined8 *)(*param_1 + 0x1f0));
  if (local_68 != 0) {
    FUN_05e94a80(local_68,0);
  }
  puVar5 = Method_System_Runtime_Serialization_SerializationInfo_AddValue__;
  puVar2 = Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__;
  puVar1 = Method_System_Threading_SendOrPostCallback_Invoke__;
  puVar4 = Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__;
                    /* catch() { ... } // from try @ 05d586d8 with catch @ 05d588d4
                       catch() { ... } // from try @ 05d58730 with catch @ 05d588d4
                       catch() { ... } // from try @ 05d58798 with catch @ 05d588d4
                       catch() { ... } // from try @ 05d58838 with catch @ 05d588d4
                       catch() { ... } // from try @ 05d5887c with catch @ 05d588d4
                       catch() { ... } // from try @ 05d588ac with catch @ 05d588d4 */
  if ((param_1[0x14] != 0) && (lVar7 = *(long *)(param_1[0x14] + 0x10), lVar7 != 0)) {
    FUN_036a68ac(&local_b8,lVar7,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
    local_70 = local_a8;
    plStack_78 = plStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    plStack_b0 = &local_80;
    while (uVar8 = FUN_049c6928(&local_80,*(undefined8 *)puVar1), plVar6 = local_70,
          lVar7 = local_b8, (uVar8 & 1) != 0) {
      plVar9 = (long *)param_1[0x14];
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,local_70,*(undefined8 *)(*plVar9 + 400));
      if ((uVar8 & 1) != 0) {
        if (param_1[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar8 = FUN_04caaeb4(param_1[0x1c],plVar6,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar3;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
          if (lVar7 != 0) {
            FUN_05e949f8(lVar7,0);
          }
          local_68 = lVar7;
          (**(code **)(*param_1 + 0x318))(param_1,plVar6,*(undefined8 *)(*param_1 + 800));
          if (local_68 != 0) {
            FUN_05e94a80(local_68,0);
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar3;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
          if (lVar7 != 0) {
            FUN_05e949f8(lVar7,0);
          }
          local_68 = lVar7;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
                goto LAB_05d58a78;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d87540(plVar6,*(long *)puVar5,0x14);
LAB_05d58a78:
          (*(code *)*puVar10)(plVar6,puVar10[1]);
          if (local_68 != 0) {
            FUN_05e94a80(local_68,0);
          }
        }
      }
    }
    FUN_049c6924(plStack_b0,*(undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__);
    puVar5 = Method_System_Runtime_Serialization_SerializationInfo__ctor__;
    puVar2 = Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollDragElementChanged__;
    puVar1 = Method_UnityEngine_UIElements_ScrollView_OnAttachToPanel__;
    if (lVar7 == 0) {
      if ((param_1[0x13] == 0) || (lVar7 = *(long *)(param_1[0x13] + 0x10), lVar7 == 0))
      goto LAB_05d591b0;
      FUN_036a68ac(&local_b8,lVar7,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_SerializationInfo_FindElement__);
      local_90 = local_a8;
      plStack_98 = plStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      plStack_b0 = &local_a0;
      while (uVar8 = FUN_049c6928(&local_a0,*(undefined8 *)puVar4), plVar6 = local_90,
            lVar7 = local_b8, (uVar8 & 1) != 0) {
        plVar9 = (long *)param_1[0x13];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,local_90,*(undefined8 *)(*plVar9 + 400));
        if ((uVar8 & 1) != 0) {
          if (param_1[0x1b] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar8 = FUN_04caaeb4(param_1[0x1b],plVar6,*(undefined8 *)puVar5);
          if ((uVar8 & 1) == 0) {
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar7 = *(long *)puVar3;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
            if (lVar7 != 0) {
              FUN_05e949f8(lVar7,0);
            }
            local_68 = lVar7;
            FUN_05d594a0(param_1,plVar6,param_1[0x19]);
            if (local_68 != 0) {
              FUN_05e94a80(local_68,0);
            }
            lVar7 = thunk_FUN_02d8a53c(plVar6,*(undefined8 *)puVar2);
            lVar11 = thunk_FUN_02d8a53c(plVar6,*(undefined8 *)puVar1);
            if (lVar7 != 0) {
              lVar12 = *(long *)puVar3;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar12 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x58);
              if (lVar12 != 0) {
                FUN_05e949f8(lVar12,0);
              }
              local_68 = lVar12;
              (**(code **)(*param_1 + 0x338))
                        (param_1,lVar7,param_1[0x19],*(undefined8 *)(*param_1 + 0x340));
              if (local_68 != 0) {
                FUN_05e94a80(local_68,0);
              }
            }
            if (lVar11 != 0) {
              lVar12 = *(long *)puVar3;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar12 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x60);
              if (lVar12 != 0) {
                FUN_05e949f8(lVar12,0);
              }
              local_68 = lVar12;
              (**(code **)(*param_1 + 0x368))
                        (param_1,lVar11,param_1[0x19],*(undefined8 *)(*param_1 + 0x370));
              if (local_68 != 0) {
                FUN_05e94a80(local_68,0);
              }
            }
            if (lVar7 != 0) {
              lVar12 = *(long *)puVar3;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar12 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x68);
              if (lVar12 != 0) {
                FUN_05e949f8(lVar12,0);
              }
              local_68 = lVar12;
              (**(code **)(*param_1 + 0x488))
                        (param_1,lVar7,param_1[0x19],*(undefined8 *)(*param_1 + 0x490));
              if (local_68 != 0) {
                FUN_05e94a80(local_68,0);
              }
            }
            if (lVar11 != 0) {
              lVar7 = *(long *)puVar3;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar7 = *(long *)puVar3;
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x70);
              if (lVar7 != 0) {
                FUN_05e949f8(lVar7,0);
              }
              local_68 = lVar7;
              (**(code **)(*param_1 + 0x498))
                        (param_1,lVar11,param_1[0x19],*(undefined8 *)(*param_1 + 0x4a0));
              if (local_68 != 0) {
                FUN_05e94a80(local_68,0);
              }
            }
          }
        }
      }
      FUN_049c6924(plStack_b0,*(undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__);
      if (lVar7 == 0) {
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
        if (lVar7 != 0) {
          FUN_05e949f8(lVar7,0);
        }
        plStack_b0 = &local_68;
        local_b8 = 0;
        local_68 = lVar7;
        (**(code **)(*param_1 + 0x218))(param_1,1,*(undefined8 *)(*param_1 + 0x220));
        if (local_68 != 0) {
          FUN_05e94a80(local_68,0);
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
        if (lVar7 != 0) {
          FUN_05e949f8(lVar7,0);
        }
        plStack_b0 = &local_68;
        local_b8 = 0;
        local_68 = lVar7;
        (**(code **)(*param_1 + 0x1f8))(param_1,1,*(undefined8 *)(*param_1 + 0x200));
        if (local_68 != 0) {
          FUN_05e94a80(local_68,0);
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        if (lVar7 != 0) {
          FUN_05e949f8(lVar7,0);
        }
        plStack_b0 = &local_68;
        local_b8 = 0;
        local_68 = lVar7;
        (**(code **)(*param_1 + 0x208))(param_1,1,*(undefined8 *)(*param_1 + 0x210));
        if (local_68 != 0) {
          FUN_05e94a80(local_68,0);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee0(lVar7);
  }
LAB_05d591b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


