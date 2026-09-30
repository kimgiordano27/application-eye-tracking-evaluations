/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryLevel
ENTRY_POINT: 0569ad24
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryLevel(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *in_x9;
  long lVar8;
  int in_w10;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  int *unaff_x23;
  ulong unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000088;
  
code_r0x0569ad24:
  lVar8 = *in_x9;
  *(int *)(param_2 + 0x1c) = in_w10;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = param_3;
      LeanTween__value(puVar6);
    }
    else {
      FUN_040101ec(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    bVar3 = 1;
LAB_0569ad70:
    do {
      while( true ) {
        unaff_x28 = unaff_x28 + 1;
        unaff_x23 = unaff_x23 + 3;
        if (in_stack_00000088._4_4_ <= unaff_x28) {
          return bVar3 & 1;
        }
        if (unaff_x23 == (int *)0x0) goto LAB_0569adb8;
        iVar1 = *unaff_x23;
        if (iVar1 < 2) break;
        if (iVar1 == 2) {
          bVar3 = FUN_038d9bb4();
        }
        else if (iVar1 == 3) {
          bVar3 = FUN_038d9e44();
        }
        else if (iVar1 == 4) {
          bVar3 = FUN_038d9f94();
        }
        else {
LAB_0569accc:
          bVar3 = iVar1 != 0x7fffffff & bVar3;
        }
      }
      if (iVar1 != 0) {
        if (iVar1 != 1) goto LAB_0569accc;
        bVar3 = FUN_038d9cfc();
        goto LAB_0569ad70;
      }
      in_stack_00000068._4_4_ = 0;
      uVar4 = FUN_038d8f3c(unaff_w20,unaff_w19,unaff_x28 & 0xffffffff,unaff_x23,&stack0x00000070,
                           (long)&stack0x00000068 + 4,
                           *(undefined8 *)
                            UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                          );
      if (((uVar4 & 1) != 0) &&
         (uVar4 = FUN_0377528c(in_stack_00000068._4_4_,&stack0x00000060,
                               *(undefined8 *)
                                System_Collections_Generic_IEnumerable<Column>_TypeInfo),
         (uVar4 & 1) != 0)) goto code_r0x0569ac3c;
      bVar3 = 0;
    } while( true );
  }
LAB_0569adb8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x0569ac3c:
  if ((*(long *)(unaff_x21 + 0x10) == 0) || (in_stack_00000060 == 0)) goto LAB_0569adb8;
  lVar8 = *(long *)(unaff_x21 + 0x58);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_03b3b344(&stack0x00000050,*(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x18),
               *(undefined8 *)(in_stack_00000060 + 0x30),
               *(undefined8 *)System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo
              );
  if (lVar8 == 0) goto LAB_0569adb8;
  lVar5 = *(long *)(lVar8 + 0x10);
  lVar7 = *(long *)System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_0569adb8;
  uVar2 = *(uint *)(lVar8 + 0x18);
  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
    lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
    puVar6 = (undefined8 *)(lVar5 + 0x28);
    *puVar6 = in_stack_00000058;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000050;
    LeanTween__value(puVar6,0);
  }
  else {
    FUN_03eadc7c(lVar8,in_stack_00000050,in_stack_00000058,
                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  param_2 = *unaff_x29;
  if (param_2 == 0) goto LAB_0569adb8;
  param_1 = *(long *)(param_2 + 0x10);
  in_w10 = *(int *)(param_2 + 0x1c) + 1;
  param_3 = in_stack_00000070;
  in_x9 = (long *)PTR_DAT_069fcea0;
  goto code_r0x0569ad24;
}


