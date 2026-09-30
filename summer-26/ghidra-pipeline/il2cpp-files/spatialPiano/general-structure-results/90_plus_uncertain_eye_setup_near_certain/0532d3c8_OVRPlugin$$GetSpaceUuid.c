/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 0532d3c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUuid(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  puVar3 = UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>_TypeInfo;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack000000000000001c = 0;
  uStack0000000000000028 = 0;
                    /* try { // try from 0532d3d0 to 0542d3db has its CatchHandler @ 0532d410 */
  uStack0000000000000020 = 0;
  uStack0000000000000024 = 0;
  if (param_1 != 0) {
                    /* try { // try from 0532d3dc to 0542d43b has its CatchHandler @ 0532d0f0 */
    FUN_048b4580(param_1,*(undefined8 *)
                          UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>_TypeInfo
                );
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_048b4580(*(long *)(unaff_x19 + 0x48),*(undefined8 *)puVar3);
      puVar3 = OVR_OpenVR_EVRApplicationError_TypeInfo;
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0532d3d0 with catch @ 0532d410
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0532d3c0 with catch @ 0532d414
                        */
        if (uVar9 != 0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0532d358 with catch @ 0532d418
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0532d344 with catch @ 0532d41c
                        */
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0532d394 with catch @ 0532d420
                        */
            if (*(long *)(piVar10 + -2) == *(long *)OVR_OpenVR_EVRApplicationError_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0532d454;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
                    /* try { // try from 0532d43c to 0542d43f has its CatchHandler @ 0532d460 */
                    /* try { // try from 0532d440 to 0542d463 has its CatchHandler @ 0532d0f0 */
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar11,*(long *)OVR_OpenVR_EVRApplicationError_TypeInfo,0);
LAB_0532d454:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
                    /* catch() { ... } // from try @ 0532d43c with catch @ 0532d460 */
        if (plVar11 != (long *)0x0) {
                    /* try { // try from 0532d464 to 0542d46b has its CatchHandler @ 0532d474 */
          lVar7 = *plVar11;
                    /* try { // try from 0532d46c to 0542d477 has its CatchHandler @ 0532d0f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0532d464 with catch @ 0532d474
                        */
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0532d4bc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_02f421d0(plVar11,*(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo,0
                               );
LAB_0532d4bc:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0532d528;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_02f421d0(plVar11,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,1);
LAB_0532d528:
            puVar4 = 
            UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>_TypeInfo
            ;
            puVar2 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
            puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
            (*(code *)*puVar5)(&stack0x00000070,plVar11,puVar5[1]);
            in_stack_00000060 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
            in_stack_00000058 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
            in_stack_00000050 = in_stack_00000070;
            while (uVar6 = FUN_04aeea48(&stack0x00000050,*(undefined8 *)puVar2),
                  uVar9 = in_stack_00000060, (uVar6 & 1) != 0) {
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                    goto LAB_0532d5d4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar11,lVar7,7);
LAB_0532d5d4:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000030,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uStack0000000000000078 = uStack0000000000000038;
                in_stack_00000070 = in_stack_00000030;
                uStack0000000000000084 = (undefined4)uStack0000000000000044;
                in_stack_00000088 = SUB84(uStack0000000000000044,4);
                uStack000000000000007c = uStack000000000000003c;
                uStack0000000000000080 = uStack0000000000000040;
                FUN_048b42ec(*(long *)(unaff_x19 + 0x40),uVar9 & 0xffffffff,&stack0x00000070,
                             *(undefined8 *)puVar4);
              }
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                    goto LAB_0532d66c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar11,lVar7,8);
LAB_0532d66c:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000010,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uStack0000000000000078 = uStack0000000000000018;
                in_stack_00000070 = uStack0000000000000010;
                uStack0000000000000084 = uStack0000000000000024;
                in_stack_00000088 = uStack0000000000000028;
                uStack000000000000007c = uStack000000000000001c;
                uStack0000000000000080 = uStack0000000000000020;
                FUN_048b42ec(*(long *)(unaff_x19 + 0x48),uVar9 & 0xffffffff,&stack0x00000070,
                             *(undefined8 *)puVar4);
              }
            }
            FUN_04aeea44(&stack0x00000050,*(undefined8 *)puVar1);
            lVar7 = *(long *)(unaff_x19 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


