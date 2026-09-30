/*
FUNCTION_NAME: OVRTrackedKeyboard.<UpdateKeyboardPose>d__95$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02841bb0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
OVRTrackedKeyboard_<UpdateKeyboardPose>d__95__System_Collections_IEnumerator_get_Current(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long lVar12;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    uVar5 = FUN_02803888();
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_02821568(unaff_x25,unaff_x22,uVar5,&stack0x00000048,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0271c480(0);
      FUN_028455cc();
    }
    else {
      in_stack_00000038 = in_stack_00000050;
      in_stack_00000030 = in_stack_00000048;
      thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbf088,&stack0x00000030);
    }
LAB_02841d68:
    uVar6 = FUN_02806e50();
    if ((uVar6 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cff620);
      uVar5 = FUN_02801990();
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cff628);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar8);
    }
    if (unaff_x27 == (long *)0x0) {
LAB_02841dbc:
      FUN_0284366c();
    }
    else {
      uVar6 = (**(code **)(*unaff_x27 + 0x1a8))();
      if ((uVar6 & 1) == 0) goto LAB_02841dbc;
      FUN_02843260();
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_02841e40;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02841e40:
    (*(code *)*puVar7)();
LAB_02841e54:
    do {
      uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar6 & 1) == 0) {
        FUN_0284a414();
OVRTrackedKeyboardHands__get_LeftHandOverKeyboard:
        FUN_0284a1ec();
        return in_stack_00000018;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 != 0xd) {
            FUN_018748a8();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000030 = thunk_FUN_01a6ca08(PTR_DAT_03cfdce8);
            in_stack_00000038 = 0xffffffffffffffff;
            in_stack_00000040 = uVar3;
            uVar5 = FUN_027a62b8(&stack0x00000030,0);
            uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cff638);
            FUN_025b1328(uVar8,uVar5,0);
            uVar5 = FUN_02801990();
            uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cff628);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar5,uVar8);
          }
          goto OVRTrackedKeyboardHands__get_LeftHandOverKeyboard;
        }
        goto LAB_02841e54;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar6 = FUN_02844348();
    } while ((uVar6 & 1) != 0);
    if (unaff_w26 != 0x1c) {
      if (unaff_w26 == 0x1a) {
        uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        lVar9 = unaff_x19[9];
        lVar12 = unaff_x19[0xc];
        uVar8 = FUN_02803888();
        if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = OVRPlugin_<>c__<_cctor>b__710_115(uVar5,(int)lVar9,lVar12,uVar8,&stack0x00000058,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0271c480(0);
          FUN_028455cc();
        }
        else {
          in_stack_00000030 = in_stack_00000058;
          thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&stack0x00000030);
        }
      }
      else {
        lVar9 = *in_stack_00000020;
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x12) == '\0')) {
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0271c480(0);
          FUN_028455cc();
        }
        else {
          if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar10 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
          if (plVar10 == (long *)0x0) {
LAB_02841c68:
            lVar12 = 0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03cfdf28 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03cfdf28)) goto LAB_02841c68;
            lVar12 = plVar10[6];
          }
          uVar8 = *(undefined8 *)(lVar9 + 0x18);
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (*(int *)(*(long *)PTR_DAT_03cfe350 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02824a74(uVar8,lVar12,uVar5,0,0);
        }
      }
      goto LAB_02841d68;
    }
    unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    unaff_x22 = unaff_x19[0xc];
  } while( true );
}


