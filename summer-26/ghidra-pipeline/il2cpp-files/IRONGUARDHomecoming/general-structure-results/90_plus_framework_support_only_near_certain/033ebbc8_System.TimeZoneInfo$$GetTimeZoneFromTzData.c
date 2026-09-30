/*
FUNCTION_NAME: System.TimeZoneInfo$$GetTimeZoneFromTzData
ENTRY_POINT: 033ebbc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033ebf08) */
/* WARNING: Removing unreachable block (ram,0x033ebcf4) */
/* WARNING: Removing unreachable block (ram,0x033ec0d0) */
/* WARNING: Removing unreachable block (ram,0x033ec0c4) */

bool System_TimeZoneInfo__GetTimeZoneFromTzData(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong in_x9;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 uVar17;
  long *unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  do {
    if (in_x9 != 0) {
      piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == param_3) {
          puVar7 = (undefined8 *)(param_1 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_033ebc0c;
        }
        in_x9 = in_x9 - 1;
        piVar16 = piVar16 + 4;
      } while (in_x9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_033ebc0c:
    plVar8 = (long *)(*(code *)*puVar7)();
    if (plVar8 != (long *)0x0) {
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8);
      }
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_033ce1dc();
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x19) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_033ebbac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_033ebbac:
    uVar15 = (*(code *)*puVar7)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar15 & 1) == 0) break;
    param_1 = *unaff_x25;
    param_3 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  plVar8 = (long *)thunk_FUN_01f116d0();
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_033ebcdc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_033ebcdc:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  (**(code **)(*in_stack_00000008 + 600))
            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
  if (unaff_x23 != (long *)0x0) {
    uVar9 = (**(code **)(*unaff_x23 + 0x178))();
    uVar9 = FUN_03436d88(in_stack_00000008,uVar9,0);
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      lVar13 = FUN_033d1550(*(long *)(unaff_x20 + 0x38),0);
      lVar14 = *(long *)(unaff_x20 + 0x38);
      if (lVar14 != 0) {
        uVar17 = *(undefined8 *)(lVar14 + 0x38);
        uVar10 = FUN_033d14c4(lVar14,0);
        if (*(long *)(in_stack_00000018 + 0x58) != 0) {
          lVar14 = FUN_033d442c(*(long *)(in_stack_00000018 + 0x58),0);
          puVar1 = Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            do {
              do {
                uVar15 = FUN_033d485c(lVar14,0);
                if ((uVar15 & 1) == 0) goto LAB_033ebe84;
                plVar8 = (long *)FUN_033d4484(lVar14,0);
                uVar15 = FUN_033ec2a0(plVar8,uVar17,uVar10,plVar8);
              } while ((uVar15 & 1) == 0);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar11 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            } while (*(int *)(lVar11 + 0x18) <= *(int *)(lVar13 + 0x18) >> 3);
            *(long *)(in_stack_00000018 + 0x70) = (long)plVar8;
            thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x70),plVar8);
            plVar12 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*plVar12 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            uVar15 = FUN_0344270c(plVar12,uVar9);
          } while ((uVar15 & 1) == 0);
          if (*(long *)(in_stack_00000018 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_033dd4d0(*(long *)(in_stack_00000018 + 0x88),*(undefined8 *)(in_stack_00000018 + 0x58)
                       ,0);
          if (*(long *)(in_stack_00000018 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar4 = FUN_033dd4e8(*(long *)(in_stack_00000018 + 0x88),plVar8,0);
          *(byte *)(in_stack_00000018 + 0x7c) = bVar4 & 1;
LAB_033ebe84:
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          plVar8 = (long *)thunk_FUN_01f116d0(lVar14,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar8 != (long *)0x0) {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_033ebef0;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_033ebef0:
            (*(code *)*puVar7)(plVar8,puVar7[1]);
          }
          if ((*(long *)(unaff_x20 + 0x38) != 0) &&
             (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x38) + 0x28), plVar8 != (long *)0x0)) {
            iVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
            puVar2 = 
            Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__
            ;
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
            lVar14 = *(long *)(unaff_x20 + 0x38);
            if (lVar14 != 0) {
              iVar5 = 0;
              while (plVar8 = *(long **)(lVar14 + 0x28), plVar8 != (long *)0x0) {
                iVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                if (iVar6 <= iVar5) goto LAB_033ec054;
                if (((*(long *)(unaff_x20 + 0x38) == 0) ||
                    (plVar8 = *(long **)(*(long *)(unaff_x20 + 0x38) + 0x28), plVar8 == (long *)0x0)
                    ) || (plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                                     (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x2f0))
                         , plVar8 == (long *)0x0)) break;
                bVar4 = *(byte *)(*unaff_x29 + 0x130);
                if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar8);
                }
                uVar9 = FUN_033cea34(plVar8,0,0);
                uVar9 = FUN_033cf3e4(uVar9,0);
                uVar15 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar2,0);
                if ((uVar15 & 1) != 0) {
                  uVar9 = FUN_033cea34(plVar8,1,0);
                  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
                  FUN_033d0d38(uVar10,uVar9,0);
                  bVar4 = FUN_033ec39c(in_stack_00000018,uVar10,lVar13);
                  *(byte *)(in_stack_00000018 + 0x7d) = bVar4 & 1;
                }
                lVar14 = *(long *)(unaff_x20 + 0x38);
                iVar5 = iVar5 + 1;
                if (lVar14 == 0) break;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


