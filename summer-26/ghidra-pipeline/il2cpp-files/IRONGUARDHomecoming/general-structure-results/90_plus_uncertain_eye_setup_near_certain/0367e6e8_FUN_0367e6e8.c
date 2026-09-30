/*
FUNCTION_NAME: FUN_0367e6e8
ENTRY_POINT: 0367e6e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0367ea9c) */

long FUN_0367e6e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong local_70;
  undefined8 uStack_68;
  
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_84__;
  puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_83__;
  if ((DAT_04833e34 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_87__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_84__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_83__);
    DAT_04833e34 = 1;
  }
  uStack_68 = 0;
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03221d40(lVar7,*(undefined8 *)puVar3);
  puVar6 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_87__;
  puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__;
  puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar13 = *(long *)(param_1 + 0x40);
  if (lVar13 == 0) {
LAB_0367ea98:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar17 = *(uint *)(lVar13 + 0x18);
  if (0 < (int)uVar17) {
    uVar15 = 0;
    do {
      if (uVar17 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar16 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
      uVar17 = 0;
      do {
        if ((lVar16 == 0) || (plVar8 = (long *)FUN_0367d974(lVar16,uVar17), plVar8 == (long *)0x0))
        goto LAB_0367ea98;
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0367e860;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0367e860:
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_0367e874:
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0367e8c0;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0367e8c0:
        uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar11 & 1) != 0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367e91c;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0367e91c:
          uStack_68 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          local_70 = (ulong)uVar17;
          thunk_FUN_01f51358(&uStack_68);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar6;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar10 + 0x28);
            *puVar9 = uStack_68;
            *(ulong *)(lVar10 + 0x20) = local_70;
            thunk_FUN_01f51358(puVar9,0);
          }
          else {
            FUN_032225c0(lVar7,local_70,uStack_68,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0367e874;
        }
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0367e9f8;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0367e9f8:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 5);
      uVar17 = *(uint *)(lVar13 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar17);
  }
  return lVar7;
}


