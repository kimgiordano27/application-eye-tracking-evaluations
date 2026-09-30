/*
FUNCTION_NAME: FUN_033d32e0
ENTRY_POINT: 033d32e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 223
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033d361c) */
/* WARNING: Removing unreachable block (ram,0x033d35c0) */

undefined8 FUN_033d32e0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  
  if ((DAT_04832501 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream_EnsureNotClosed__);
    DAT_04832501 = 1;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0353e644(*(long *)(param_1 + 0x28),0);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 != (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
        puVar7 = Method_System_IO_MemoryStream_EnsureNotClosed__;
        puVar6 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
        puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
        puVar4 = 
        Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
        ;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar3;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_033d340c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_033d340c:
          uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar15 & 1) == 0) {
            plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar2);
            if (plVar8 == (long *)0x0) goto LAB_033d35b4;
            lVar14 = *plVar8;
            lVar13 = *(long *)puVar2;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 == 0) goto LAB_033d358c;
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_033d3574;
          }
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar3;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_033d346c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,1);
LAB_033d346c:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar10);
          }
          if (plVar10[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar15 = FUN_0340e040(plVar10[2],*(undefined8 *)puVar7,0);
          if ((uVar15 & 1) != 0) {
            if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = FUN_033cea34(plVar10[3],1);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar11 = FUN_033cdff8();
            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
            FUN_033cffa4(lVar13,uVar11);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(param_1 + 0x28);
            lVar13 = FUN_033cea34(*(long *)(lVar13 + 0x18),0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar11 = FUN_033cdff8();
            uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_033d0b3c(uVar12,uVar11);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_033d0cc8(lVar14,uVar12);
          }
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_033d35c8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_033d3574:
    if (*(long *)(piVar16 + -2) == lVar13) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033d35a8;
    }
  }
LAB_033d358c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_033d35a8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033d35b4:
  *(undefined1 *)(param_1 + 0x32) = 0;
LAB_033d35c8:
  return *(undefined8 *)(param_1 + 0x28);
}


