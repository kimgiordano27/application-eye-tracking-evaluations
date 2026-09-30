/*
FUNCTION_NAME: FUN_01bf7d98
ENTRY_POINT: 01bf7d98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bf8308) */

void FUN_01bf7d98(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined2 local_64 [2];
  
  puVar8 = StringLiteral_9728;
  if ((DAT_0377e903 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_9728);
    DAT_0377e903 = 1;
  }
  lVar10 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar8);
  if (((lVar10 != 0) && (param_1 != (long *)0x0)) && (lVar18 = param_1[7], lVar18 != 0)) {
    if (*(int *)(lVar18 + 0x18) < 9) {
      thunk_FUN_00d48444(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        );
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar16 = thunk_FUN_00d48444(System_Xml_Schema_FacetsChecker_FacetsCompiler_Map___TypeInfo);
      FUN_017a9608(uVar13,uVar16,0);
      uVar16 = thunk_FUN_00d48444(StringLiteral_1380);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,uVar16);
    }
    uVar20 = *(uint *)(param_1 + 8);
    iVar17 = *(int *)(lVar10 + 0x18);
    if (*(int *)(lVar18 + 0x18) < (int)(uVar20 + 9)) {
      (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      uVar20 = *(uint *)(param_1 + 8);
      lVar18 = param_1[7];
      *(uint *)(param_1 + 8) = uVar20 + 1;
      if (lVar18 == 0) goto LAB_01bf8368;
    }
    else {
      *(uint *)(param_1 + 8) = uVar20 + 1;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar20) {
LAB_01bf8364:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(lVar18 + (int)uVar20 + 0x20) = 8;
    uVar4 = *(undefined4 *)(lVar10 + 0x18);
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    puVar8 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    lVar18 = param_1[7];
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) == 0)) {
      lVar18 = 0;
    }
    else {
      lVar18 = lVar18 + 0x20;
    }
    lVar11 = *(long *)Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
    ;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar8;
    }
    puVar2 = (undefined4 *)(lVar18 + (int)param_1[8]);
    if (**(char **)(lVar11 + 0xb8) == '\0') {
      uStack_69 = (undefined1)((uint)uVar4 >> 0x18);
      *(undefined1 *)puVar2 = uStack_69;
      uStack_6a = (undefined1)((uint)uVar4 >> 0x10);
      *(undefined1 *)((long)puVar2 + 1) = uStack_6a;
      uStack_6b = (undefined1)((uint)uVar4 >> 8);
      *(undefined1 *)((long)puVar2 + 2) = uStack_6b;
      local_6c = (undefined1)uVar4;
      *(undefined1 *)((long)puVar2 + 3) = local_6c;
    }
    else {
      *puVar2 = uVar4;
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 4;
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    lVar18 = param_1[7];
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) == 0)) {
      lVar18 = 0;
    }
    else {
      lVar18 = lVar18 + 0x20;
    }
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar8;
    }
    puVar2 = (undefined4 *)(lVar18 + (int)param_1[8]);
    if (**(char **)(lVar11 + 0xb8) == '\0') {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 1) = 0;
      *(undefined1 *)((long)puVar2 + 2) = 0;
      *(undefined1 *)((long)puVar2 + 3) = 2;
    }
    else {
      *puVar2 = 2;
    }
    iVar1 = (int)param_1[8] + 4;
    *(int *)(param_1 + 8) = iVar1;
    puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
    puVar7 = OVRPlugin_OVRP_1_60_0_TypeInfo;
    if (param_1[7] != 0) {
      iVar5 = *(int *)(param_1[7] + 0x18);
      iVar17 = iVar17 * 2;
      if (iVar5 < iVar17) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar12 = (long *)FUN_01251e3c(iVar17,*(undefined8 *)puVar7);
        lVar18 = *(long *)puVar8;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar18);
          lVar18 = *(long *)puVar8;
        }
        puVar8 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
        if (**(char **)(lVar18 + 0xb8) == '\0') {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_01251db0(plVar12,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          puVar7 = Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__;
          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
            uVar23 = 0;
            uVar21 = 0;
            uVar19 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            do {
              if (uVar19 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar6 = *(undefined2 *)(lVar10 + 0x20 + uVar23);
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01c366d4(uVar13,uVar23 & 0xffffffff,uVar6,0);
              uVar19 = (ulong)*(uint *)(lVar10 + 0x18);
              uVar21 = uVar21 + 1;
              uVar23 = uVar23 + 2;
            } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_01251db0(plVar12,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          FUN_01c6fa20(lVar10,uVar13,iVar17,0,0,0);
        }
        plVar14 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400))
        ;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar13 = FUN_01251db0(plVar12,*(undefined8 *)puVar8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar13,uVar13);
        }
        (**(code **)(*plVar14 + 0x368))(plVar14,uVar13,0,iVar17,*(undefined8 *)(*plVar14 + 0x370));
        lVar10 = *plVar12;
        uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_01bf82f8;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_01bf82f8:
        (*(code *)*puVar15)(plVar12,puVar15[1]);
      }
      else {
        if (iVar5 < iVar1 + iVar17) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        }
        lVar18 = *(long *)puVar8;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar18 = *(long *)puVar8;
        }
        if (**(char **)(lVar18 + 0xb8) == '\0') {
          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
            uVar21 = 0;
            uVar23 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            do {
              if (uVar23 <= uVar21) goto LAB_01bf8364;
              uVar6 = *(undefined2 *)(lVar10 + 0x20 + uVar21 * 2);
              local_64[0] = uVar6;
              if (DAT_0377e94b == '\0') {
                thunk_FUN_00d48444(puVar8);
                DAT_0377e94b = '\x01';
              }
              lVar18 = param_1[7];
              if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) == 0)) {
                lVar18 = 0;
              }
              else {
                lVar18 = lVar18 + 0x20;
              }
              lVar11 = *(long *)puVar8;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar11 = *(long *)puVar8;
              }
              iVar17 = (int)param_1[8];
              puVar3 = (undefined2 *)(lVar18 + iVar17);
              if (**(char **)(lVar11 + 0xb8) == '\0') {
                *(undefined1 *)puVar3 = *(undefined1 *)((ulong)local_64 | 1);
                *(undefined1 *)((long)puVar3 + 1) = (undefined1)local_64[0];
                iVar17 = (int)param_1[8];
              }
              else {
                *puVar3 = uVar6;
              }
              *(int *)(param_1 + 8) = iVar17 + 2;
              uVar23 = (ulong)*(uint *)(lVar10 + 0x18);
              uVar21 = uVar21 + 1;
            } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
        else {
          lVar18 = param_1[7];
          if (lVar18 != 0) {
            if (*(int *)(lVar18 + 0x18) == 0) {
              lVar18 = 0;
            }
            else {
              lVar18 = lVar18 + 0x20;
            }
          }
          lVar11 = 0;
          if (*(int *)(lVar10 + 0x18) != 0) {
            lVar11 = lVar10 + 0x20;
          }
          FUN_01c6f9c8(lVar11,lVar18 + (int)param_1[8],iVar17,0);
          *(int *)(param_1 + 8) = (int)param_1[8] + iVar17;
        }
      }
      return;
    }
  }
LAB_01bf8368:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


