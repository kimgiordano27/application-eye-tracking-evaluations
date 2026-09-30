/*
FUNCTION_NAME: Oculus.Platform.Models.ChallengeEntryList$$.ctor
ENTRY_POINT: 036139a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03613dc0) */

undefined4 Oculus_Platform_Models_ChallengeEntryList___ctor(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  undefined4 uVar14;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x840));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_85__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  *(undefined1 *)(unaff_x21 + 0x9a1) = 1;
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (unaff_x19 != 0) {
    lVar5 = FUN_023361c8();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    plVar13 = *(long **)(unaff_x20 + 0x28);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      lVar8 = *(long *)Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_17__;
      uVar1 = *(ushort *)(lVar10 + 0x12e);
      uVar6 = (ulong)uVar1;
      if (*(char *)(unaff_x20 + 0x40) == '\0') {
        if (uVar1 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              iVar11 = *piVar12 + 6;
              goto LAB_03613ab8;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        uVar9 = 6;
      }
      else {
        if (uVar1 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
LAB_03613a50:
          if (*(long *)(piVar12 + -2) != lVar8) goto code_r0x03613a5c;
          iVar11 = *piVar12 + 7;
LAB_03613ab8:
          puVar7 = (undefined8 *)(lVar10 + (long)iVar11 * 0x10 + 0x138);
          goto LAB_03613ac0;
        }
LAB_03613a68:
        uVar9 = 7;
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar13,lVar8,uVar9);
LAB_03613ac0:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_80__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03613b28;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_80__
                              ,0);
LAB_03613b28:
        plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
        puVar4 = Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_81__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03613b98;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_03613b98:
          uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if ((uVar6 & 1) == 0) {
            uVar14 = 0;
            if (plVar13 == (long *)0x0) {
              return 0;
            }
            goto LAB_03613d38;
          }
          lVar8 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03613bf4;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_03613bf4:
          lVar8 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        } while (lVar8 != *(long *)(lVar5 + 0x30));
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_02b6b4d8(*(long *)(unaff_x20 + 0x48),lVar8,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_78__);
        if ((uVar6 & 1) == 0) {
          lVar10 = *(long *)(unaff_x20 + 0x48);
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_85__
                                    );
          FUN_030f2380(uVar9,*(undefined8 *)
                              Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_84__);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b6b2e4(lVar10,lVar8,uVar9,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_77__);
        }
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_02b6b264(*(long *)(unaff_x20 + 0x48),lVar8,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_79__);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_030f2f44(lVar8,*(undefined8 *)(lVar5 + 0x38),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_83__);
        if ((uVar6 & 1) == 0) {
          uVar9 = *(undefined8 *)(lVar5 + 0x38);
          lVar5 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_82__;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = 1;
        if (plVar13 == (long *)0x0) {
          return 1;
        }
LAB_03613d38:
        lVar5 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03613d8c;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03613d8c:
        (*(code *)*puVar7)(plVar13,puVar7[1]);
        return uVar14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x03613a5c:
  uVar6 = uVar6 - 1;
  piVar12 = piVar12 + 4;
  if (uVar6 == 0) goto LAB_03613a68;
  goto LAB_03613a50;
}


