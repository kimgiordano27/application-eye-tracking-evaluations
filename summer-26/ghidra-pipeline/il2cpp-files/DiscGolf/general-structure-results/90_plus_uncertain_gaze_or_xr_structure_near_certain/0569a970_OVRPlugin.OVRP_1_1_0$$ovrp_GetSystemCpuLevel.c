/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 0569a970
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  int *unaff_x23;
  long unaff_x25;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x29;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000088;
  
  FUN_02dcfd74();
  lVar7 = *(long *)(*(long *)(unaff_x25 + 0x38) + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  if (((0 < *(int *)(unaff_x21 + 0x50)) && (*(long *)(unaff_x21 + 0x48) != 0)) &&
     (lVar7 = FUN_036ec9d0(*(long *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                           *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)), lVar7 != 0)) {
    FUN_036ec8dc(*(undefined8 *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                 *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x18));
  }
  lVar8 = *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
  ;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  if (((0 < *(int *)(unaff_x21 + 0x20)) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
     (lVar7 = FUN_036ec9d8(*(long *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                           *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)), lVar7 != 0)) {
    FUN_036ec8e4(*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                 *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  lVar8 = *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
  ;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  if (((0 < *(int *)(unaff_x21 + 0x30)) && (*(long *)(unaff_x21 + 0x28) != 0)) &&
     (lVar7 = FUN_036ec9dc(*(long *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                           *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)), lVar7 != 0)) {
    FUN_036ec8e8(*(undefined8 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                 *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  if (in_stack_00000088._4_4_ == 0) {
    bVar3 = 1;
  }
  else {
    uVar9 = 0;
    bVar3 = 1;
    do {
      if (unaff_x23 == (int *)0x0) goto LAB_0569adb8;
      iVar1 = *unaff_x23;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          in_stack_00000068._4_4_ = 0;
          uVar4 = FUN_038d8f3c(unaff_w20,unaff_w19,uVar9 & 0xffffffff,unaff_x23,&stack0x00000070,
                               (long)&stack0x00000068 + 4,
                               *(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                              );
          if (((uVar4 & 1) == 0) ||
             (uVar4 = FUN_0377528c(in_stack_00000068._4_4_,&stack0x00000060,
                                   *(undefined8 *)
                                    System_Collections_Generic_IEnumerable<Column>_TypeInfo),
             (uVar4 & 1) == 0)) {
            bVar3 = 0;
          }
          else {
            if ((*(long *)(unaff_x21 + 0x10) == 0) || (in_stack_00000060 == 0)) {
LAB_0569adb8:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *(long *)(unaff_x21 + 0x58);
            in_stack_00000050 = 0;
            in_stack_00000058 = 0;
            FUN_03b3b344(&stack0x00000050,*(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x18),
                         *(undefined8 *)(in_stack_00000060 + 0x30),
                         *(undefined8 *)
                          System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
            if (lVar7 == 0) goto LAB_0569adb8;
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar6 = *(long *)
                     System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0569adb8;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar5 = (undefined8 *)(lVar8 + 0x28);
              *puVar5 = in_stack_00000058;
              *(undefined8 *)(lVar8 + 0x20) = in_stack_00000050;
              LeanTween__value(puVar5,0);
            }
            else {
              FUN_03eadc7c(lVar7,in_stack_00000050,in_stack_00000058,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            lVar7 = *unaff_x29;
            if (lVar7 == 0) goto LAB_0569adb8;
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar6 = *(long *)PTR_DAT_069fcea0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0569adb8;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *puVar5 = in_stack_00000070;
              LeanTween__value(puVar5);
            }
            else {
              FUN_040101ec(lVar7,in_stack_00000070,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            bVar3 = 1;
          }
        }
        else if (iVar1 == 1) {
          bVar3 = FUN_038d9cfc();
        }
        else {
LAB_0569accc:
          bVar3 = iVar1 != 0x7fffffff & bVar3;
        }
      }
      else if (iVar1 == 2) {
        bVar3 = FUN_038d9bb4();
      }
      else if (iVar1 == 3) {
        bVar3 = FUN_038d9e44();
      }
      else {
        if (iVar1 != 4) goto LAB_0569accc;
        bVar3 = FUN_038d9f94();
      }
      uVar9 = uVar9 + 1;
      unaff_x23 = unaff_x23 + 3;
    } while (uVar9 < in_stack_00000088._4_4_);
  }
  return bVar3 & 1;
}


