/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 013e0b38
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x26;
  long in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
  }
  lVar4 = FUN_01d2c6a4(0);
  if (lVar4 != 0) {
    FUN_01367758();
    if (in_stack_00000018 == 0) {
      return;
    }
    uVar2 = FUN_01ca1ab4(in_stack_00000018,*(undefined8 *)PTR_DAT_0234cd98,0);
    puVar1 = PTR_DAT_0234bc58;
    if (in_stack_00000018 != 0) {
      iVar3 = FUN_01ca1ab4(in_stack_00000018,*(undefined8 *)PTR_DAT_0234cd80,0);
      lVar4 = *(long *)puVar1;
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar4);
      }
      uVar7 = FUN_01d5e86c(uVar7,0);
      if (in_stack_00000018 != 0) {
        lVar4 = FUN_01c9f7dc(in_stack_00000018,*(undefined8 *)PTR_DAT_0234cd88,uVar7,0);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0103c244(lVar8);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_0103ffe0(lVar4,lVar8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(lVar4,lVar8);
          }
        }
        *(long *)(unaff_x19 + 0x30) = lVar5;
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0103c244(lVar8);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_0103ffe0(lVar4,lVar8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(lVar4,lVar8);
          }
        }
        thunk_FUN_0106e12c((long *)(unaff_x19 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x10),0);
        }
        else {
          FUN_013e04c8();
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar7 = FUN_01d5e86c(uVar7,0);
          if (in_stack_00000018 == 0) goto LAB_013e0e24;
          lVar4 = FUN_01c9f7dc(in_stack_00000018,*(undefined8 *)PTR_DAT_0234cd90,uVar7,0);
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0103c244(lVar8);
          }
          if (lVar4 == 0) {
            FUN_01d69098(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar5 = thunk_FUN_0103ffe0(lVar4,lVar8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(lVar4,lVar8);
          }
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar6 = 0;
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00fdc53c();
              }
              FUN_013e05a8();
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int *)(lVar5 + 0x18));
          }
        }
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar4 = FUN_01d2c6a4(0);
        if (lVar4 != 0) {
          FUN_01367508();
          return;
        }
      }
    }
  }
LAB_013e0e24:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


