/*
FUNCTION_NAME: Oculus.Interaction.HandPinchOffset$$HandleHandUpdated
ENTRY_POINT: 0355cf10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


uint Oculus_Interaction_HandPinchOffset__HandleHandUpdated(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x26;
  double dVar11;
  double dVar12;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  double in_stack_00000038;
  
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0355dee0();
  if ((uVar7 & 1) == 0) {
LAB_0355d234:
    FUN_035633a0();
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c();
    uVar7 = FUN_03562494();
    if ((uVar7 & 1) == 0) goto LAB_0355d234;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c();
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_0355dee0();
    if ((uVar7 & 1) == 0) goto LAB_0355d234;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0356286c();
    uVar7 = FUN_03562494();
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0355dee0();
      if ((uVar7 & 1) == 0) goto LAB_0355d234;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 0355d020 to 0365d05f has its CatchHandler @ 0355d488 */
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03562494();
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_035585e8();
        if ((uVar7 & 1) == 0) goto LAB_0355d234;
                    /* try { // try from 0355d060 to 0365d073 has its CatchHandler @ 0355d478 */
        *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + -1;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c();
    }
                    /* try { // try from 0355d088 to 0365d08f has its CatchHandler @ 0355d470 */
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_0356164c();
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03562818();
      if (uVar3 < 0x5a) {
        if ((uVar3 == 0x2b) || (uVar3 == 0x2d)) {
          *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_035586d4();
          if ((uVar7 & 1) == 0) goto LAB_0355d234;
        }
        else {
LAB_0355d160:
          *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + -1;
        }
      }
      else {
        if ((uVar3 != 0x5a) && (uVar3 != 0x7a)) goto LAB_0355d160;
        uVar6 = *(uint *)(unaff_x19 + 0x24) | 0x100;
        *(uint *)(unaff_x19 + 0x24) = uVar6;
        puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        lVar8 = *(long *)
                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar2;
          uVar6 = *(uint *)(unaff_x19 + 0x24);
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        *(uint *)(unaff_x19 + 0x24) = uVar6 | 0x200;
        *(undefined8 *)(unaff_x19 + 0x28) = uVar10;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0356286c();
      uVar7 = FUN_03562494();
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03559e80();
        if ((uVar7 & 1) == 0) goto LAB_0355d234;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0356286c();
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03562494();
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03559e80();
        if ((uVar7 & 1) == 0) goto LAB_0355d234;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0356164c();
      if ((uVar7 & 1) != 0) goto LAB_0355d234;
    }
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar9 = (long *)FUN_0351c438(0);
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar4 = FUN_0356326c();
    uVar5 = FUN_0356326c();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar9 + 0x2a8))
                      (plVar9,uVar1,uVar4,uVar5,uStack0000000000000034,uStack0000000000000030,
                       in_stack_00000028._4_4_,0);
    dVar12 = in_stack_00000020;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar12 = dVar12 * DAT_00c8df08;
      dVar11 = modf(dVar12,&stack0x00000038);
      if (0.0 <= dVar12) {
        if (dVar11 == 0.5) {
          dVar12 = 1.0;
          goto LAB_0355d380;
        }
        dVar11 = (double)(long)(dVar12 + 0.5);
      }
      else if (dVar11 == -0.5) {
        dVar12 = -1.0;
LAB_0355d380:
        dVar11 = in_stack_00000038;
        if (((long)in_stack_00000038 & 1U) != 0) {
          dVar11 = in_stack_00000038 + dVar12;
        }
      }
      else {
        dVar11 = (double)(long)(dVar12 + -0.5);
      }
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = -0x8000000000000000;
      if (dVar11 != INFINITY) {
        lVar8 = (long)dVar11;
      }
      in_stack_00000018 = FUN_0354cd34(&stack0x00000018,lVar8);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000018;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_0355d69c();
      goto LAB_0355d244;
    }
    FUN_035633f0();
  }
  uVar6 = 0;
LAB_0355d244:
  return uVar6 & 1;
}


