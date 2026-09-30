/*
FUNCTION_NAME: System.TimeZoneInfo$$CreateLocalUnity
ENTRY_POINT: 033ebd70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033ebf08) */
/* WARNING: Removing unreachable block (ram,0x033ec0d0) */

bool System_TimeZoneInfo__CreateLocalUnity(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x29;
  long in_stack_00000018;
  
  if (param_1 != 0) {
    lVar7 = FUN_033d442c(param_1,0);
    puVar1 = Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      do {
        do {
          uVar8 = FUN_033d485c(lVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_033ebe84;
          plVar9 = (long *)FUN_033d4484(lVar7,0);
          uVar8 = FUN_033ec2a0();
        } while ((uVar8 & 1) == 0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      } while (*(int *)(lVar10 + 0x18) <= *(int *)(unaff_x21 + 0x18) >> 3);
      *(long *)(unaff_x19 + 0x70) = (long)plVar9;
      thunk_FUN_01f51358((long *)(unaff_x19 + 0x70),plVar9);
      plVar11 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*plVar11 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      uVar8 = FUN_0344270c();
    } while ((uVar8 & 1) == 0);
    if (*(long *)(in_stack_00000018 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_033dd4d0(*(long *)(in_stack_00000018 + 0x88),*(undefined8 *)(in_stack_00000018 + 0x58),0);
    if (*(long *)(in_stack_00000018 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar4 = FUN_033dd4e8(*(long *)(in_stack_00000018 + 0x88),plVar9,0);
    *(byte *)(in_stack_00000018 + 0x7c) = bVar4 & 1;
LAB_033ebe84:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar9 = (long *)thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033ebef0;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_033ebef0:
      (*(code *)*puVar12)(plVar9,puVar12[1]);
    }
    if ((*(long *)(unaff_x20 + 0x38) != 0) &&
       (plVar9 = *(long **)(*(long *)(unaff_x20 + 0x38) + 0x28), plVar9 != (long *)0x0)) {
      iVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
      puVar2 = 
      Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__;
      puVar1 = Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsStatic__;
      if (iVar5 == 0) {
        *(undefined1 *)(in_stack_00000018 + 0x7d) = 1;
LAB_033ec054:
        bVar3 = false;
        if (*(char *)(in_stack_00000018 + 0x7c) != '\0') {
          bVar3 = *(char *)(in_stack_00000018 + 0x7d) != '\0';
        }
        return bVar3;
      }
      lVar7 = *(long *)(unaff_x20 + 0x38);
      if (lVar7 != 0) {
        iVar5 = 0;
        while (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0) {
          iVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          if (iVar6 <= iVar5) goto LAB_033ec054;
          if (((*(long *)(unaff_x20 + 0x38) == 0) ||
              (plVar9 = *(long **)(*(long *)(unaff_x20 + 0x38) + 0x28), plVar9 == (long *)0x0)) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                         (plVar9,iVar5,*(undefined8 *)(*plVar9 + 0x2f0)),
             plVar9 == (long *)0x0)) break;
          bVar4 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar9);
          }
          uVar13 = FUN_033cea34(plVar9,0,0);
          uVar13 = FUN_033cf3e4(uVar13,0);
          uVar8 = thunk_FUN_0340e318(uVar13,*(undefined8 *)puVar2,0);
          if ((uVar8 & 1) != 0) {
            uVar13 = FUN_033cea34(plVar9,1,0);
            uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_033d0d38(uVar14,uVar13,0);
            bVar4 = FUN_033ec39c(in_stack_00000018,uVar14);
            *(byte *)(in_stack_00000018 + 0x7d) = bVar4 & 1;
          }
          lVar7 = *(long *)(unaff_x20 + 0x38);
          iVar5 = iVar5 + 1;
          if (lVar7 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


