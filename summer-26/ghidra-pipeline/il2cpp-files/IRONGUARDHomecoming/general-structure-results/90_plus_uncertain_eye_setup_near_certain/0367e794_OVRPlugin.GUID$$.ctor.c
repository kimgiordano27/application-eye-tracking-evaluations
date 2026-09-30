/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 0367e794
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0367ea9c) */

void OVRPlugin_GUID___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  ulong uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  FUN_03221d40();
  puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__;
  puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar10 = *(long *)(unaff_x20 + 0x40);
  if (lVar10 == 0) {
LAB_0367ea98:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar14 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar14) {
    uVar12 = 0;
    do {
      if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar13 = *(long *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
      uVar14 = 0;
      do {
        if ((lVar13 == 0) || (plVar6 = (long *)FUN_0367d974(lVar13,uVar14), plVar6 == (long *)0x0))
        goto LAB_0367ea98;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0367e860;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_0367e860:
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_0367e874:
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0367e8c0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0367e8c0:
        uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar9 & 1) != 0) {
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0367e91c;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar5,0);
LAB_0367e91c:
          in_stack_00000018 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          uStack0000000000000010 = (ulong)uVar14;
          thunk_FUN_01f51358(&stack0x00000018);
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar8 + 0x28);
            *puVar7 = in_stack_00000018;
            *(ulong *)(lVar8 + 0x20) = uStack0000000000000010;
            thunk_FUN_01f51358(puVar7,0);
          }
          else {
            FUN_032225c0();
          }
          goto LAB_0367e874;
        }
        if (plVar6 != (long *)0x0) {
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0367e9f8;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0367e9f8:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 5);
      uVar14 = *(uint *)(lVar10 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar14);
  }
  return;
}


