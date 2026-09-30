/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnAddonGetGoogleRequestEvent
ENTRY_POINT: 0522d9e4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnAddonGetGoogleRequestEvent(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x0522d9e4:
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar6 = (long *)FUN_052163f4();
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,unaff_w21,1,*(undefined8 *)(*plVar6 + 0x1e0));
    FUN_052187a8(unaff_x22,unaff_w21);
    FUN_052189b8(unaff_x22,unaff_w21);
    lVar8 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xa8);
    if (lVar8 == 0) goto LAB_0522e75c;
    System_Array_InternalEnumerator<RichTextTagAttribute>__System_Collections_IEnumerator_get_Current
              (lVar8,unaff_x22,
               *(undefined8 *)System_Collections_Generic_Dictionary<string,_SchemaNotation>_TypeInfo
              );
    if (lVar7 != unaff_x23) {
      lVar7 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
      if (lVar7 != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar7 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0);
          if (lVar7 == 0) goto LAB_0522e75c;
        }
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),unaff_x22,unaff_x23,*(undefined8 *)(lVar7 + 0x28));
      }
    }
LAB_0522da98:
    do {
      uVar1 = unaff_w28 + 1;
      if (unaff_w26 <= (int)uVar1) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        _in_stack_00000030 = FUN_05218720();
        _in_stack_00000040 =
             FUN_04005224(&stack0x00000030,
                          *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo)
        ;
        puVar5 = System_Collections_Generic_Dictionary<string,_StringBuilder>_TypeInfo;
        puVar4 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
        puVar3 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
        in_stack_00000010 = &stack0x00000040;
        in_stack_00000008 = 0;
        while( true ) {
          uVar9 = FUN_04005300(&stack0x00000040,*(undefined8 *)puVar3);
          if ((uVar9 & 1) == 0) {
            FUN_0400538c(&stack0x00000040,
                         *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo
                        );
            return;
          }
          lVar7 = FUN_04005238(&stack0x00000040,*(undefined8 *)puVar4);
          lVar8 = *unaff_x25;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar8 = *unaff_x25;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xa8);
          if (lVar8 == 0) break;
          uVar9 = FUN_04caaeb4(lVar8,lVar7,*(undefined8 *)puVar5);
          if ((uVar9 & 1) == 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            FUN_052190dc(lVar7,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar1) ||
         (unaff_w28 = unaff_w28 + 2, *(uint *)(unaff_x19 + 0x18) <= unaff_w28)) goto LAB_0522e758;
      uVar2 = *(undefined4 *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20);
      unaff_w21 = *(undefined4 *)(unaff_x19 + (long)(int)unaff_w28 * 4 + 0x20);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      unaff_x22 = FUN_052294a8(uVar2);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x27);
      }
      uVar9 = FUN_05ee2f7c(unaff_x22,0,0);
      if ((uVar9 & 1) == 0) goto LAB_0522d9d8;
      lVar7 = *unaff_x25;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar7 = *unaff_x25;
      }
      if (-1 < *(int *)(*(long *)(lVar7 + 0xb8) + 0x24)) {
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
        lVar7 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000008);
        if (plVar6 == (long *)0x0) break;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_0522e768:
          uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar10,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar7;
          thunk_FUN_02dc1ef0(plVar6 + 4,lVar7);
          uStack000000000000002c = unaff_w21;
          lVar7 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000028 + 4);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_0522e768;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            plVar6[5] = lVar7;
            thunk_FUN_02dc1ef0(plVar6 + 5,lVar7);
            uStack0000000000000028 = unaff_w20;
            lVar7 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000028);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_0522e768;
            if (2 < *(uint *)(plVar6 + 3)) {
              plVar6[6] = lVar7;
              thunk_FUN_02dc1ef0(plVar6 + 6,lVar7);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea2bc0(*(undefined8 *)
                            System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                           ,plVar6,0);
              goto LAB_0522da98;
            }
          }
        }
LAB_0522e758:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
    } while( true );
  }
LAB_0522e75c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
LAB_0522d9d8:
  if (unaff_x22 == 0) goto LAB_0522e75c;
  param_1 = *unaff_x25;
  unaff_x23 = *(long *)(unaff_x22 + 0x80);
  goto code_r0x0522d9e4;
}


