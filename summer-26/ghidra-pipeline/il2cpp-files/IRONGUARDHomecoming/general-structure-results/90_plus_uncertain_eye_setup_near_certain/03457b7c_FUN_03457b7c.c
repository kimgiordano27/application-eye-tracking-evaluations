/*
FUNCTION_NAME: FUN_03457b7c
ENTRY_POINT: 03457b7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03457fb8) */

void FUN_03457b7c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  
  if ((DAT_04832919 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_MakeByRefType__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_SafeStringArrayHelper_DeserialiseStringArraySafe__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsEnumDefined__);
    thunk_FUN_01efb3a4(Method_System_Resources_SatelliteContractVersionAttribute__ctor__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_MakeGenericType__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SaveVariables_Enter__);
    DAT_04832919 = 1;
  }
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar11 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  puVar10 = Method_Unity_VisualScripting_SaveVariables_Enter__;
  puVar9 = Method_System_Resources_SatelliteContractVersionAttribute__ctor__;
  puVar8 = Method_Unity_Burst_SafeStringArrayHelper_DeserialiseStringArraySafe__;
  puVar7 = Method_System_RuntimeType_MakeGenericType__;
  puVar6 = Method_System_RuntimeType_MakeByRefType__;
  puVar5 = Method_System_RuntimeType_IsEnumDefined__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar16 = *plVar11;
    lVar14 = *(long *)puVar4;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03457cb8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,0);
LAB_03457cb8:
    uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if ((uVar18 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar11;
      lVar14 = *(long *)puVar3;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 == 0) goto LAB_03457f40;
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    lVar16 = *plVar11;
    lVar14 = *(long *)puVar4;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03457d18;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,1);
LAB_03457d18:
    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar13 != (long *)0x0) {
      lVar14 = *plVar13;
      bVar1 = *(byte *)(lVar14 + 0x130);
      uVar17 = (uint)bVar1;
      bVar2 = *(byte *)(*(long *)puVar9 + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar16 = *(long *)(lVar14 + 200),
         *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar13);
      }
      lVar15 = *(long *)puVar6;
      uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
      if ((bVar1 < *(byte *)(lVar15 + 0x130)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15)) {
        lVar15 = *(long *)puVar8;
        uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
        if ((bVar1 < *(byte *)(lVar15 + 0x130)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15))
        {
          lVar15 = *(long *)puVar7;
          uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
          if ((bVar1 < *(byte *)(lVar15 + 0x130)) || (*(long *)(lVar16 + uVar18 * 8 + -8) != lVar15)
             ) {
            lVar15 = *(long *)puVar10;
            uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
            if ((*(byte *)(lVar15 + 0x130) <= bVar1) &&
               (*(long *)(lVar16 + uVar18 * 8 + -8) == lVar15)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar14 = *plVar13;
                lVar15 = *(long *)puVar10;
                uVar17 = (uint)*(byte *)(lVar14 + 0x130);
                uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
              }
              if ((uVar17 < (uint)uVar18) ||
                 (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar13);
              }
              FUN_03454d58(plVar13);
            }
          }
          else {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar14 = *plVar13;
              lVar15 = *(long *)puVar7;
              uVar17 = (uint)*(byte *)(lVar14 + 0x130);
              uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
            }
            if ((uVar17 < (uint)uVar18) ||
               (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar13);
            }
            FUN_03454ae0(plVar13);
          }
        }
        else {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar14 = *plVar13;
            lVar15 = *(long *)puVar8;
            uVar17 = (uint)*(byte *)(lVar14 + 0x130);
            uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
          }
          if ((uVar17 < (uint)uVar18) ||
             (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar13);
          }
          FUN_034549a0(plVar13);
        }
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *plVar13;
          lVar15 = *(long *)puVar6;
          uVar17 = (uint)*(byte *)(lVar14 + 0x130);
          uVar18 = (ulong)*(byte *)(lVar15 + 0x130);
        }
        if ((uVar17 < (uint)uVar18) ||
           (*(long *)(*(long *)(lVar14 + 200) + uVar18 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar13);
        }
        FUN_03454718(plVar13);
      }
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == lVar14) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03457f5c;
    }
  }
LAB_03457f40:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,0);
LAB_03457f5c:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


