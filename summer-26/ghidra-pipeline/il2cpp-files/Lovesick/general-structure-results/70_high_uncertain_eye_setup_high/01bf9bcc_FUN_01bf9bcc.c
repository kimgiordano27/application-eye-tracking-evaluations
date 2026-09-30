/*
FUNCTION_NAME: FUN_01bf9bcc
ENTRY_POINT: 01bf9bcc
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


/* WARNING: Removing unreachable block (ram,0x01bfa1ac) */

void FUN_01bf9bcc(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined1 uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined1 local_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined4 local_64;
  
  puVar5 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  if ((DAT_0377e907 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_0377e907 = 1;
  }
  lVar7 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar5);
  if (((lVar7 != 0) && (param_1 != (long *)0x0)) && (lVar14 = param_1[7], lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x18) < 9) {
      thunk_FUN_00d48444(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        );
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar13 = thunk_FUN_00d48444(System_Xml_Schema_FacetsChecker_FacetsCompiler_Map___TypeInfo);
      FUN_017a9608(uVar10,uVar13,0);
      uVar13 = thunk_FUN_00d48444(StringLiteral_1380);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,uVar13);
    }
    uVar18 = *(uint *)(param_1 + 8);
    iVar2 = *(int *)(lVar7 + 0x18);
    if (*(int *)(lVar14 + 0x18) < (int)(uVar18 + 9)) {
      (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      uVar18 = *(uint *)(param_1 + 8);
      lVar14 = param_1[7];
      *(uint *)(param_1 + 8) = uVar18 + 1;
      if (lVar14 == 0) goto LAB_01bfa210;
    }
    else {
      *(uint *)(param_1 + 8) = uVar18 + 1;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar18) {
LAB_01bfa20c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(lVar14 + (int)uVar18 + 0x20) = 8;
    uVar24 = *(undefined4 *)(lVar7 + 0x18);
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    puVar5 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    lVar14 = param_1[7];
    if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
      lVar14 = 0;
    }
    else {
      lVar14 = lVar14 + 0x20;
    }
    lVar8 = *(long *)Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar5;
    }
    puVar15 = (undefined4 *)(lVar14 + (int)param_1[8]);
    if (**(char **)(lVar8 + 0xb8) == '\0') {
      uStack_71 = (undefined1)((uint)uVar24 >> 0x18);
      *(undefined1 *)puVar15 = uStack_71;
      uStack_72 = (undefined1)((uint)uVar24 >> 0x10);
      *(undefined1 *)((long)puVar15 + 1) = uStack_72;
      uStack_73 = (undefined1)((uint)uVar24 >> 8);
      *(undefined1 *)((long)puVar15 + 2) = uStack_73;
      local_74 = (undefined1)uVar24;
      *(undefined1 *)((long)puVar15 + 3) = local_74;
    }
    else {
      *puVar15 = uVar24;
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 4;
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    lVar14 = param_1[7];
    if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
      lVar14 = 0;
    }
    else {
      lVar14 = lVar14 + 0x20;
    }
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar5;
    }
    puVar15 = (undefined4 *)(lVar14 + (int)param_1[8]);
    if (**(char **)(lVar8 + 0xb8) == '\0') {
      *(undefined1 *)puVar15 = 0;
      *(undefined1 *)((long)puVar15 + 1) = 0;
      *(undefined1 *)((long)puVar15 + 2) = 0;
      *(undefined1 *)((long)puVar15 + 3) = 4;
    }
    else {
      *puVar15 = 4;
    }
    iVar1 = (int)param_1[8] + 4;
    *(int *)(param_1 + 8) = iVar1;
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
    puVar4 = OVRPlugin_OVRP_1_60_0_TypeInfo;
    if (param_1[7] != 0) {
      iVar3 = *(int *)(param_1[7] + 0x18);
      iVar2 = iVar2 * 4;
      if (iVar3 < iVar2) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar6 = StringLiteral_10310;
        plVar9 = (long *)FUN_01251e3c(iVar2,*(undefined8 *)puVar4);
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar14 = *(long *)puVar5;
        }
        puVar5 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
        if (**(char **)(lVar14 + 0xb8) == '\0') {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_01251db0(plVar9,*(undefined8 *)
                                        Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          puVar4 = Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__;
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar21 = 0;
            uVar19 = 0;
            uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar16 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar24 = *(undefined4 *)(lVar7 + 0x20 + uVar21);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01c36e78(uVar24,uVar10,uVar21 & 0xffffffff,0);
              uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar19 = uVar19 + 1;
              uVar21 = uVar21 + 4;
            } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
        }
        else {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = FUN_01251db0(plVar9,*(undefined8 *)
                                        Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          FUN_01c6fa20(lVar7,uVar10,iVar2,0,0,0);
        }
        plVar11 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400))
        ;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01251db0(plVar9,*(undefined8 *)puVar5);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar10,uVar10);
        }
        (**(code **)(*plVar11 + 0x368))(plVar11,uVar10,0,iVar2,*(undefined8 *)(*plVar11 + 0x370));
        lVar7 = *plVar9;
        uVar19 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar7 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01bfa19c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01bfa19c:
        (*(code *)*puVar12)(plVar9,puVar12[1]);
      }
      else {
        if (iVar3 < iVar1 + iVar2) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        }
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)puVar5;
        }
        puVar4 = Method_FootstepMemoryBandmate_Hide__;
        if (**(char **)(lVar14 + 0xb8) == '\0') {
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar19 = 0;
            uVar21 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            puVar22 = (undefined1 *)((ulong)&local_64 | 1);
            puVar23 = (undefined1 *)((ulong)&local_64 | 3);
            do {
              if (uVar21 <= uVar19) goto LAB_01bfa20c;
              uVar24 = *(undefined4 *)(lVar7 + 0x20 + uVar19 * 4);
              local_64 = uVar24;
              if (DAT_0377e94d == '\0') {
                thunk_FUN_00d48444(puVar4);
                thunk_FUN_00d48444(puVar5);
                DAT_0377e94d = '\x01';
              }
              lVar14 = param_1[7];
              if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
                lVar14 = 0;
              }
              else {
                lVar14 = lVar14 + 0x20;
              }
              lVar8 = *(long *)puVar5;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar8 = *(long *)puVar5;
              }
              if (**(char **)(lVar8 + 0xb8) == '\0') {
                puVar15 = (undefined4 *)(lVar14 + (int)param_1[8]);
                *(undefined1 *)puVar15 = *puVar23;
                *(undefined1 *)((long)puVar15 + 1) = puVar23[-1];
                *(undefined1 *)((long)puVar15 + 2) = puVar23[-2];
                uVar17 = (undefined1)local_64;
LAB_01bfa060:
                *(undefined1 *)((long)puVar15 + 3) = uVar17;
              }
              else {
                lVar8 = *(long *)puVar4;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar8 = *(long *)puVar4;
                }
                puVar15 = (undefined4 *)(lVar14 + (int)param_1[8]);
                if (*(char *)(*(long *)(lVar8 + 0xb8) + 1) == '\0') {
                  *(char *)puVar15 = (char)uVar24;
                  *(undefined1 *)((long)puVar15 + 1) = *puVar22;
                  *(undefined1 *)((long)puVar15 + 2) = puVar22[1];
                  uVar17 = *puVar23;
                  goto LAB_01bfa060;
                }
                *puVar15 = uVar24;
              }
              uVar19 = uVar19 + 1;
              *(int *)(param_1 + 8) = (int)param_1[8] + 4;
              uVar21 = (ulong)*(uint *)(lVar7 + 0x18);
            } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
        }
        else {
          lVar14 = param_1[7];
          if (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x18) == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = lVar14 + 0x20;
            }
          }
          lVar8 = 0;
          if (*(int *)(lVar7 + 0x18) != 0) {
            lVar8 = lVar7 + 0x20;
          }
          FUN_01c6f9c8(lVar8,lVar14 + (int)param_1[8],iVar2,0);
          *(int *)(param_1 + 8) = (int)param_1[8] + iVar2;
        }
      }
      return;
    }
  }
LAB_01bfa210:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


