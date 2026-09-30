/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$GetGazeButtonState
ENTRY_POINT: 0635009c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 194
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06351788) */
/* WARNING: Removing unreachable block (ram,0x063506bc) */
/* WARNING: Removing unreachable block (ram,0x0635100c) */
/* WARNING: Removing unreachable block (ram,0x06351010) */
/* WARNING: Removing unreachable block (ram,0x06351ab0) */
/* WARNING: Removing unreachable block (ram,0x063513a8) */
/* WARNING: Removing unreachable block (ram,0x063513ac) */
/* WARNING: Removing unreachable block (ram,0x063515f8) */
/* WARNING: Removing unreachable block (ram,0x0635177c) */

undefined8 UnityEngine_EventSystems_OVRInputModule__GetGazeButtonState(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xf40));
  FUN_0373b518(PTR_DAT_07d882c0);
  FUN_0373b518(PTR_DAT_07db4f48);
  FUN_0373b518(PTR_DAT_07db4f50);
  FUN_0373b518(PTR_DAT_07db4f58);
  FUN_0373b518(PTR_DAT_07db4f60);
  FUN_0373b518(PTR_DAT_07db4f68);
  FUN_0373b518(PTR_DAT_07db4be0);
  FUN_0373b518(PTR_DAT_07d86678);
  FUN_0373b518(PTR_DAT_07db4f70);
  FUN_0373b518(PTR_DAT_07d97f28);
  *(undefined1 *)(unaff_x21 + 0x39f) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  FUN_06334e90();
  if (in_stack_00000030 == 0) goto LAB_0635162c;
  uVar10 = FUN_063455f0(in_stack_00000030);
  plVar21 = (long *)PTR_DAT_07db4be0;
  puVar2 = PTR_DAT_07db27e8;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(in_stack_00000028 + 0x20) == 0) goto LAB_0635162c;
    uVar13 = *(uint *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar13 = 1;
  }
  plVar19 = *(long **)(in_stack_00000028 + 0x28);
  if (plVar19 != (long *)0x0) {
    lVar14 = *plVar19;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db27e8) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_063501e0;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07db27e8,0);
LAB_063501e0:
    iVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    if (2 < iVar7) {
      uVar12 = FUN_06338600(in_stack_00000030);
      lVar14 = *plVar21;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar14);
        lVar14 = *plVar21;
      }
      lVar23 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      uVar20 = *(undefined8 *)PTR_DAT_07d86678;
      if (lVar23 == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar14);
          lVar14 = *plVar21;
        }
        uVar24 = **(undefined8 **)(lVar14 + 0xb8);
        lVar23 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
        FUN_044a4918(lVar23,uVar24,*(undefined8 *)PTR_DAT_07db4f50,0);
        plVar19 = (long *)(*(long *)(*plVar21 + 0xb8) + 8);
        *plVar19 = lVar23;
        thunk_FUN_037aeb94(plVar19,lVar23);
      }
      uVar12 = FUN_03f6a6a8(uVar12,lVar23,*(undefined8 *)PTR_DAT_07db4ef0);
      uVar12 = FUN_060c2498(uVar20,uVar12,0);
      if (unaff_x20 == (long *)0x0) goto LAB_0635162c;
      plVar19 = *(long **)(in_stack_00000028 + 0x28);
      uVar20 = (**(code **)(*unaff_x20 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar24 = FUN_061d52c8(0);
      uVar12 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f70,uVar24,
                            *(undefined8 *)(in_stack_00000030 + 0x60),uVar12);
      if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
      }
      uVar24 = thunk_FUN_037787d0();
      uVar12 = FUN_062d6f1c(uVar24,uVar20,uVar12,0);
      if (plVar19 == (long *)0x0) goto LAB_0635162c;
      lVar14 = *plVar19;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto UnityEngine_EventSystems_OVRInputModule__get_instance;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar2,1);
UnityEngine_EventSystems_OVRInputModule__get_instance:
      (*(code *)*puVar11)(plVar19,3,uVar12,0,puVar11[1]);
    }
  }
  lVar14 = FUN_06351ba4(in_stack_00000028,in_stack_00000030);
  if (uVar13 != 0) {
    if (*(long *)(in_stack_00000030 + 0xd8) != 0) {
      plVar19 = (long *)FUN_05450738(*(long *)(in_stack_00000030 + 0xd8),
                                     *(undefined8 *)PTR_DAT_07db4a70);
      puVar6 = PTR_DAT_07db4f68;
      puVar5 = PTR_DAT_07db4f60;
      puVar4 = PTR_DAT_07db4f10;
      puVar3 = PTR_DAT_07db4ee8;
      puVar2 = PTR_DAT_07db4a78;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar23 = *plVar19;
        uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
              puVar11 = (undefined8 *)(lVar23 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350498;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07d89700,0);
LAB_06350498:
        uVar10 = (*(code *)*puVar11)(plVar19,puVar11[1]);
        plVar21 = (long *)PTR_DAT_07db4be0;
        if ((uVar10 & 1) == 0) {
          if (plVar19 == (long *)0x0) goto LAB_063506c0;
          lVar23 = *plVar19;
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar10 == 0) goto LAB_06350688;
          piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          goto LAB_06350670;
        }
        lVar23 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
        FUN_06352d54(lVar23,0);
        lVar15 = *plVar19;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350508;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar2,0);
LAB_06350508:
        lVar15 = (*(code *)*puVar11)(plVar19,puVar11[1]);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar21 = (long *)(lVar23 + 0x10);
        *plVar21 = lVar15;
        thunk_FUN_037aeb94(plVar21);
        if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(char *)(*plVar21 + 0x80) == '\0') {
          uVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
          FUN_044a3874(uVar12,lVar23,*(undefined8 *)puVar5,0);
          uVar10 = FUN_03f439f0(lVar14,uVar12,*(undefined8 *)puVar3);
          if ((uVar10 & 1) != 0) {
            if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar12 = *(undefined8 *)(*plVar21 + 0x30);
            lVar23 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
            FUN_06352c74(lVar23,uVar12,0);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            *(long *)(lVar23 + 0x18) = *plVar21;
            thunk_FUN_037aeb94();
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,0,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar23 + 0x28) = in_stack_00000040;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_07db4f20;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (uVar9 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar9 + 1;
              plVar21 = (long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
              *plVar21 = lVar23;
              thunk_FUN_037aeb94(plVar21,lVar23);
            }
            else {
              FUN_049ceef4(lVar14,lVar23,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0635162c;
  }
  goto LAB_063506c0;
LAB_06350914:
  if (*(long *)(lVar23 + 0x18) != 0) {
    uVar12 = FUN_06338600(in_stack_00000030);
    lVar15 = *plVar21;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar15);
      lVar15 = *plVar21;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar15);
        lVar15 = *plVar21;
      }
      uVar20 = **(undefined8 **)(lVar15 + 0xb8);
      lVar17 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4f18);
      FUN_044a4918(lVar17,uVar20,*(undefined8 *)PTR_DAT_07db4f58,0);
      plVar22 = (long *)(*(long *)(*plVar21 + 0xb8) + 0x10);
      *plVar22 = lVar17;
      thunk_FUN_037aeb94(plVar22,lVar17);
      puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    }
    if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar15 = FUN_041f32b0(uVar12,lVar17,*(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x60),*puVar11);
    if (lVar15 != 0) {
LAB_063507e0:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((uVar13 != 0) && (*(char *)(lVar23 + 0x28) != '\0')) && (*(uint *)(lVar23 + 0x2c) < 2))
        {
          plVar22 = (long *)(lVar15 + 0x48);
          if (*plVar22 == 0) {
            lVar17 = FUN_063488fc(in_stack_00000028,*(undefined8 *)(lVar15 + 0x40));
            *plVar22 = lVar17;
            thunk_FUN_037aeb94(plVar22);
          }
          in_stack_00000058 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar9 = FUN_04e5f3c0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if ((uVar9 >> 1 & 1) != 0) {
            FUN_06345efc(lVar15);
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            uVar12 = FUN_0634b13c();
            *(undefined8 *)(lVar23 + 0x30) = uVar12;
            thunk_FUN_037aeb94();
          }
        }
        lVar17 = FUN_06338600(in_stack_00000030);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar9 = FUN_054507c0(lVar17,lVar15,*(undefined8 *)PTR_DAT_07db4ed8);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *(long *)(lVar23 + 0x30);
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_037787d0(lVar15,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0)) {
          uVar12 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar12,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar19[(long)(int)uVar9 + 4] = lVar15;
        thunk_FUN_037aeb94(plVar19 + (long)(int)uVar9 + 4,lVar15);
        *(undefined1 *)(lVar23 + 0x38) = 1;
      }
    }
  }
  goto LAB_06350740;
LAB_06351318:
  plVar21 = (long *)thunk_FUN_037787d0(plVar21,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06351390;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d896f8,0);
LAB_06351390:
    (*(code *)*puVar11)(plVar21,puVar11[1]);
  }
  goto LAB_06351064;
LAB_06350f7c:
  plVar21 = (long *)thunk_FUN_037787d0(plVar21,*(undefined8 *)PTR_DAT_07d896f8);
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06350ff4;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d896f8,0);
LAB_06350ff4:
    (*(code *)*puVar11)(plVar21,puVar11[1]);
  }
LAB_06351064:
  *(undefined1 *)(lVar23 + 0x38) = 1;
  goto LAB_06350a64;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
LAB_06350670:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar23 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_063506a4;
    }
  }
LAB_06350688:
  puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07d896f8,0);
LAB_063506a4:
  (*(code *)*puVar11)(plVar19,puVar11[1]);
LAB_063506c0:
  lVar23 = FUN_06338600(in_stack_00000030);
  puVar2 = PTR_DAT_07d882c0;
  if (lVar23 != 0) {
    uVar8 = FUN_05450160(lVar23,*(undefined8 *)PTR_DAT_07db4d78);
    plVar19 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,uVar8);
    puVar11 = (undefined8 *)PTR_DAT_07db4f48;
    puVar2 = PTR_DAT_07db4f00;
    if (lVar14 != 0) {
      FUN_049cf910(&stack0x00000040,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_06350740:
      uVar10 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
      lVar23 = in_stack_00000070;
      if ((uVar10 & 1) != 0) {
        if (uVar13 == 0) {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        else {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar15 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar15 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)(PTR_DAT_07d86548 + 0x90)) {
              uVar10 = FUN_0634b6c0(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar8 = 1;
              if ((uVar10 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            in_stack_00000040 = 0;
            FUN_04e5f37c(&stack0x00000040,uVar8,*(undefined8 *)PTR_DAT_07db4f38);
            *(undefined8 *)(lVar23 + 0x28) = in_stack_00000040;
          }
        }
        lVar15 = *(long *)(lVar23 + 0x20);
        if (lVar15 == 0) goto LAB_06350914;
        goto LAB_063507e0;
      }
      FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
      if (unaff_x24 != 0) {
        uVar12 = (**(code **)(unaff_x24 + 0x18))
                           (*(undefined8 *)(unaff_x24 + 0x40),plVar19,
                            *(undefined8 *)(unaff_x24 + 0x28));
        if (unaff_x23 != 0) {
          FUN_0634f590(in_stack_00000028);
        }
        FUN_0634f950(in_stack_00000028);
        FUN_049cf910(&stack0x00000040,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_06350a64:
        do {
          while( true ) {
            do {
              uVar10 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2);
              lVar23 = in_stack_00000070;
              if ((uVar10 & 1) == 0) {
                FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_049cf910(&stack0x00000040,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar10 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar10 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar23 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(lVar23 + 0x18))
                                (*(undefined8 *)(lVar23 + 0x40),uVar12,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar23 + 0x28));
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                if (uVar13 != 0) {
                  FUN_049cf910(&stack0x00000040,lVar14,*(undefined8 *)PTR_DAT_07db4f28);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar10 = FUN_05d64e98(&stack0x00000060,*(undefined8 *)puVar2),
                        (uVar10 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(*unaff_x20 + 0x268))();
                      FUN_06352250(in_stack_00000028,uVar12);
                    }
                  }
                  FUN_05d64e94(&stack0x00000060,*(undefined8 *)PTR_DAT_07db4ef8);
                }
                FUN_0634fb7c(in_stack_00000028);
                return uVar12;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar15 = *(long *)(in_stack_00000070 + 0x18), lVar15 == 0)) ||
                     (*(char *)(lVar15 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar17 = *(long *)(in_stack_00000070 + 0x30);
            uVar10 = FUN_0634f488(in_stack_00000028,lVar15,in_stack_00000030,lVar17);
            if ((uVar10 & 1) == 0) break;
            plVar21 = *(long **)(lVar15 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar21;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06350b8c;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07db4e80,0);
LAB_06350b8c:
            (*(code *)*puVar11)(plVar21,uVar12,lVar17,puVar11[1]);
            *(undefined1 *)(lVar23 + 0x38) = 1;
          }
        } while ((lVar17 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar21 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar16 = *plVar21;
        uVar20 = *(undefined8 *)(lVar15 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4b18) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06350bb8;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07db4b18,0);
LAB_06350bb8:
        plVar21 = (long *)(*(code *)*puVar11)(plVar21,uVar20,puVar11[1]);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)((long)plVar21 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar21);
          }
          if ((*(char *)((long)plVar21 + 0xf2) != '\0') && ((char)plVar21[5] == '\0')) {
            plVar21 = *(long **)(lVar15 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar21;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto FUN_06350c88;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07db4e80,1);
FUN_06350c88:
            lVar15 = (*(code *)*puVar11)(plVar21,uVar12,puVar11[1]);
            if (lVar15 != 0) {
              uVar20 = thunk_FUN_0374b7cc(lVar15,0);
              plVar21 = (long *)FUN_06348960(in_stack_00000028,uVar20);
              puVar3 = PTR_DAT_07d8ac68;
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db4648 + 0x130);
              if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07db4648)) {
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54(plVar21);
              }
              if (*(char *)((long)plVar21 + 0xf1) == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d8ac68;
                plVar19 = (long *)thunk_FUN_037787d0(lVar15);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar15,uVar20);
                }
              }
              else {
                plVar19 = (long *)FUN_06342b50(plVar21,lVar15);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar15 = *plVar19;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_06350d8c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar3,6);
LAB_06350d8c:
              uVar10 = (*(code *)*puVar11)(plVar19,puVar11[1]);
              plVar22 = (long *)PTR_DAT_07d8ac68;
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar21 + 0xf1) == '\0') {
                  uVar20 = *(undefined8 *)PTR_DAT_07d8ac68;
                  plVar21 = (long *)thunk_FUN_037787d0(lVar17,uVar20);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373bb54(lVar17,uVar20);
                  }
                }
                else {
                  plVar21 = (long *)FUN_06342b50(plVar21,lVar17);
                  plVar22 = (long *)PTR_DAT_07d8ac68;
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
                lVar15 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d96390) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06350e38;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d96390,0);
LAB_06350e38:
                plVar21 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                do {
                  lVar15 = *plVar21;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06350ea0;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d89700,0);
LAB_06350ea0:
                  uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                  if ((uVar10 & 1) == 0) goto LAB_06350f7c;
                  lVar15 = *plVar21;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                        goto LAB_06350f08;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d89700,1);
LAB_06350f08:
                  uVar20 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                  lVar15 = *plVar19;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *plVar22) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_06350f68;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0377596c(plVar19,*plVar22,2);
LAB_06350f68:
                  (*(code *)*puVar11)(plVar19,uVar20,puVar11[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar21 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07db4610 + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07db4610)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          if ((char)plVar21[5] == '\0') {
            plVar19 = *(long **)(lVar15 + 0x68);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *plVar19;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_063510d4;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07db4e80,1);
LAB_063510d4:
            lVar15 = (*(code *)*puVar11)(plVar19,uVar12,puVar11[1]);
            if (lVar15 != 0) {
              if ((char)plVar21[0x20] == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar19 = (long *)thunk_FUN_037787d0(lVar15,uVar20);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar15,uVar20);
                }
              }
              else {
                plVar19 = (long *)FUN_0634424c(plVar21,lVar15);
              }
              if ((char)plVar21[0x20] == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_07d974d8;
                plVar21 = (long *)thunk_FUN_037787d0(lVar17,uVar20);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar17,uVar20);
                }
              }
              else {
                plVar21 = (long *)FUN_0634424c(plVar21,lVar17);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              lVar15 = *plVar21;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d974d8,9);
Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate:
              plVar21 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              do {
                lVar15 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d89700) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d89700,0);
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked:
                uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                if ((uVar10 & 1) == 0) goto LAB_06351318;
                lVar15 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d9b3e8) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_06351290;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d9b3e8,2);
LAB_06351290:
                auVar25 = (*(code *)*puVar11)(plVar21,puVar11[1]);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                lVar15 = *plVar19;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07d974d8) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_06351300;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar19,*(long *)PTR_DAT_07d974d8,1);
LAB_06351300:
                (*(code *)*puVar11)(plVar19,auVar25._0_8_,auVar25._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_06351064;
      }
    }
  }
LAB_0635162c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


