/*
FUNCTION_NAME: FUN_01bfab04
ENTRY_POINT: 01bfab04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bfaff4) */

void FUN_01bfab04(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  puVar8 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__;
  if ((DAT_0377e909 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    DAT_0377e909 = 1;
  }
  lVar10 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar8);
  if (((lVar10 != 0) && (param_1 != (long *)0x0)) && (lVar17 = param_1[7], lVar17 != 0)) {
    if (*(int *)(lVar17 + 0x18) < 9) {
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
    uVar19 = *(uint *)(param_1 + 8);
    iVar4 = *(int *)(lVar10 + 0x18);
    if (*(int *)(lVar17 + 0x18) < (int)(uVar19 + 9)) {
      (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      uVar19 = *(uint *)(param_1 + 8);
      lVar17 = param_1[7];
      *(uint *)(param_1 + 8) = uVar19 + 1;
      if (lVar17 == 0) goto thunk_FUN_00da518c;
    }
    else {
      *(uint *)(param_1 + 8) = uVar19 + 1;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar19) {
LAB_01bfb050:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(lVar17 + (int)uVar19 + 0x20) = 8;
    uVar5 = *(undefined4 *)(lVar10 + 0x18);
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    puVar8 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    lVar17 = param_1[7];
    if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
      lVar17 = 0;
    }
    else {
      lVar17 = lVar17 + 0x20;
    }
    lVar11 = *(long *)Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
    ;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar8;
    }
    puVar2 = (undefined4 *)(lVar17 + (int)param_1[8]);
    if (**(char **)(lVar11 + 0xb8) == '\0') {
      uStack_65 = (undefined1)((uint)uVar5 >> 0x18);
      *(undefined1 *)puVar2 = uStack_65;
      uStack_66 = (undefined1)((uint)uVar5 >> 0x10);
      *(undefined1 *)((long)puVar2 + 1) = uStack_66;
      uStack_67 = (undefined1)((uint)uVar5 >> 8);
      *(undefined1 *)((long)puVar2 + 2) = uStack_67;
      local_68 = (undefined1)uVar5;
      *(undefined1 *)((long)puVar2 + 3) = local_68;
    }
    else {
      *puVar2 = uVar5;
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 4;
    if (DAT_0377e948 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_0377e948 = '\x01';
    }
    lVar17 = param_1[7];
    if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
      lVar17 = 0;
    }
    else {
      lVar17 = lVar17 + 0x20;
    }
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar8;
    }
    puVar2 = (undefined4 *)(lVar17 + (int)param_1[8]);
    if (**(char **)(lVar11 + 0xb8) == '\0') {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 1) = 0;
      *(undefined1 *)((long)puVar2 + 2) = 0;
      *(undefined1 *)((long)puVar2 + 3) = 0x10;
    }
    else {
      *puVar2 = 0x10;
    }
    iVar1 = (int)param_1[8] + 4;
    *(int *)(param_1 + 8) = iVar1;
    puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
    puVar7 = OVRPlugin_OVRP_1_60_0_TypeInfo;
    if (param_1[7] != 0) {
      iVar6 = *(int *)(param_1[7] + 0x18);
      iVar4 = iVar4 * 0x10;
      if (iVar6 < iVar4) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar12 = (long *)FUN_01251e3c(iVar4,*(undefined8 *)puVar7);
        lVar17 = *(long *)puVar8;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar17 = *(long *)puVar8;
        }
        puVar8 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
        if (**(char **)(lVar17 + 0xb8) == '\0') {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_01251db0(plVar12,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          puVar7 = Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__;
          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
            uVar22 = 0;
            uVar20 = 0;
            uVar18 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            do {
              if (uVar18 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar16 = *(undefined8 *)(lVar10 + uVar22 + 0x20);
              uVar3 = *(undefined8 *)(lVar10 + uVar22 + 0x28);
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01c375f4(uVar13,uVar22 & 0xffffffff,uVar16,uVar3,0);
              uVar18 = (ulong)*(uint *)(lVar10 + 0x18);
              uVar20 = uVar20 + 1;
              uVar22 = uVar22 + 0x10;
            } while ((long)uVar20 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
        else {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_01251db0(plVar12,*(undefined8 *)
                                         Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
          FUN_01c6fa20(lVar10,uVar13,iVar4,0,0,0);
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
        (**(code **)(*plVar14 + 0x368))(plVar14,uVar13,0,iVar4,*(undefined8 *)(*plVar14 + 0x370));
        lVar10 = *plVar12;
        uVar20 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_10310) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_01bfafe4;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_01bfafe4:
        (*(code *)*puVar15)(plVar12,puVar15[1]);
      }
      else {
        if (iVar6 < iVar1 + iVar4) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        }
        lVar17 = *(long *)puVar8;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar17 = *(long *)puVar8;
        }
        if (**(char **)(lVar17 + 0xb8) == '\0') {
          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
            uVar20 = 0;
            uVar22 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            puVar15 = (undefined8 *)(lVar10 + 0x28);
            do {
              if (uVar22 <= uVar20) goto LAB_01bfb050;
              FUN_01bfb194(param_1,puVar15[-1],*puVar15);
              uVar22 = (ulong)*(uint *)(lVar10 + 0x18);
              uVar20 = uVar20 + 1;
              puVar15 = puVar15 + 2;
            } while ((long)uVar20 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
        else {
          lVar17 = param_1[7];
          if (lVar17 != 0) {
            if (*(int *)(lVar17 + 0x18) == 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = lVar17 + 0x20;
            }
          }
          lVar11 = 0;
          if (*(int *)(lVar10 + 0x18) != 0) {
            lVar11 = lVar10 + 0x20;
          }
          FUN_01c6f9c8(lVar11,lVar17 + (int)param_1[8],iVar4,0);
          *(int *)(param_1 + 8) = (int)param_1[8] + iVar4;
        }
      }
      return;
    }
  }
thunk_FUN_00da518c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


