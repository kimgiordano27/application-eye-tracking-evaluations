/*
FUNCTION_NAME: FUN_01bf84a8
ENTRY_POINT: 01bf84a8
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


/* WARNING: Removing unreachable block (ram,0x01bf8a28) */

void FUN_01bf84a8(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined4 local_64;
  
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__;
  if ((DAT_0377e904 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__);
    DAT_0377e904 = 1;
  }
  lVar9 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar7);
  if (((lVar9 != 0) && (param_1 != (long *)0x0)) && (lVar16 = param_1[7], lVar16 != 0)) {
    if (*(int *)(lVar16 + 0x18) < 9) {
      thunk_FUN_00d48444(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        );
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar15 = thunk_FUN_00d48444(System_Xml_Schema_FacetsChecker_FacetsCompiler_Map___TypeInfo);
      FUN_017a9608(uVar12,uVar15,0);
      uVar15 = thunk_FUN_00d48444(StringLiteral_1380);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar15);
    }
    uVar18 = *(uint *)(param_1 + 8);
    iVar3 = *(int *)(lVar9 + 0x18);
    if (*(int *)(lVar16 + 0x18) < (int)(uVar18 + 9)) {
      (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      uVar18 = *(uint *)(param_1 + 8);
      lVar16 = param_1[7];
      *(uint *)(param_1 + 8) = uVar18 + 1;
      if (lVar16 == 0) goto LAB_01bf8a88;
    }
    else {
      *(uint *)(param_1 + 8) = uVar18 + 1;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar18) {
LAB_01bf8a84:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(lVar16 + (int)uVar18 + 0x20) = 8;
    uVar4 = *(undefined4 *)(lVar9 + 0x18);
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    puVar7 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    lVar16 = param_1[7];
    if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar16 + 0x20;
    }
    lVar10 = *(long *)Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
    ;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar7;
    }
    puVar2 = (undefined4 *)(lVar16 + (int)param_1[8]);
    if (**(char **)(lVar10 + 0xb8) == '\0') {
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
    lVar16 = param_1[7];
    if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar16 + 0x20;
    }
    lVar10 = *(long *)puVar7;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar7;
    }
    puVar2 = (undefined4 *)(lVar16 + (int)param_1[8]);
    if (**(char **)(lVar10 + 0xb8) == '\0') {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 1) = 0;
      *(undefined1 *)((long)puVar2 + 2) = 0;
      *(undefined1 *)((long)puVar2 + 3) = 4;
    }
    else {
      *puVar2 = 4;
    }
    iVar1 = (int)param_1[8] + 4;
    *(int *)(param_1 + 8) = iVar1;
    puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
    puVar6 = OVRPlugin_OVRP_1_60_0_TypeInfo;
    if (param_1[7] != 0) {
      iVar5 = *(int *)(param_1[7] + 0x18);
      iVar3 = iVar3 * 4;
      if (iVar5 < iVar3) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01251e3c(iVar3,*(undefined8 *)puVar6);
        lVar16 = *(long *)puVar7;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar16);
          lVar16 = *(long *)puVar7;
        }
        puVar7 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
        if (**(char **)(lVar16 + 0xb8) == '\0') {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar12 = FUN_01251db0(plVar11,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          puVar6 = Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__;
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar21 = 0;
            uVar19 = 0;
            uVar17 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if (uVar17 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar4 = *(undefined4 *)(lVar9 + 0x20 + uVar21);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01c368ec(uVar12,uVar21 & 0xffffffff,uVar4,0);
              uVar17 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar19 = uVar19 + 1;
              uVar21 = uVar21 + 4;
            } while ((long)uVar19 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
        else {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar12 = FUN_01251db0(plVar11,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          FUN_01c6fa20(lVar9,uVar12,iVar3,0,0,0);
        }
        plVar13 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400))
        ;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = FUN_01251db0(plVar11,*(undefined8 *)puVar7);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar12,uVar12);
        }
        (**(code **)(*plVar13 + 0x368))(plVar13,uVar12,0,iVar3,*(undefined8 *)(*plVar13 + 0x370));
        lVar9 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
              puVar14 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01bf8a18;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_01bf8a18:
        (*(code *)*puVar14)(plVar11,puVar14[1]);
      }
      else {
        if (iVar5 < iVar1 + iVar3) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        }
        lVar16 = *(long *)puVar7;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar16 = *(long *)puVar7;
        }
        if (**(char **)(lVar16 + 0xb8) == '\0') {
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar19 = 0;
            uVar21 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            puVar22 = (undefined1 *)((ulong)&local_64 | 3);
            do {
              if (uVar21 <= uVar19) goto LAB_01bf8a84;
              uVar4 = *(undefined4 *)(lVar9 + 0x20 + uVar19 * 4);
              local_64 = uVar4;
              if (DAT_0377e94c == '\0') {
                thunk_FUN_00d48444(puVar7);
                DAT_0377e94c = '\x01';
              }
              lVar16 = param_1[7];
              if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
                lVar16 = 0;
              }
              else {
                lVar16 = lVar16 + 0x20;
              }
              lVar10 = *(long *)puVar7;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar7;
              }
              puVar2 = (undefined4 *)(lVar16 + (int)param_1[8]);
              if (**(char **)(lVar10 + 0xb8) == '\0') {
                *(undefined1 *)puVar2 = *puVar22;
                *(undefined1 *)((long)puVar2 + 1) = puVar22[-1];
                *(undefined1 *)((long)puVar2 + 2) = puVar22[-2];
                *(undefined1 *)((long)puVar2 + 3) = (undefined1)local_64;
              }
              else {
                *puVar2 = uVar4;
              }
              uVar19 = uVar19 + 1;
              *(int *)(param_1 + 8) = (int)param_1[8] + 4;
              uVar21 = (ulong)*(uint *)(lVar9 + 0x18);
            } while ((long)uVar19 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
        else {
          lVar16 = param_1[7];
          if (lVar16 != 0) {
            if (*(int *)(lVar16 + 0x18) == 0) {
              lVar16 = 0;
            }
            else {
              lVar16 = lVar16 + 0x20;
            }
          }
          lVar10 = 0;
          if (*(int *)(lVar9 + 0x18) != 0) {
            lVar10 = lVar9 + 0x20;
          }
          FUN_01c6f9c8(lVar10,lVar16 + (int)param_1[8],iVar3,0);
          *(int *)(param_1 + 8) = (int)param_1[8] + iVar3;
        }
      }
      return;
    }
  }
LAB_01bf8a88:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


