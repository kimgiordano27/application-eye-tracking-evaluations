/*
FUNCTION_NAME: FUN_034725a8
ENTRY_POINT: 034725a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_034725a8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  int *piVar19;
  undefined8 uVar20;
  
  puVar2 = Method_Sirenix_Serialization_SerializationUtility_GetCachedReader__;
  if ((DAT_048329fa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetEnumUnderlyingType__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetEnumValues__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetMember__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_GetCachedReader__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetMember__);
    DAT_048329fa = 1;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(lVar8,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar9 = (long *)FUN_03472be4();
    if (lVar8 == 0) goto LAB_03472bb8;
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
    }
    else {
      lVar15 = *(long *)Method_System_Reflection_SignatureType_GetEnumUnderlyingType__;
      bVar1 = *(byte *)(lVar15 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar15))
      goto LAB_03472750;
      *(long **)(lVar8 + 0x18) = plVar9;
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar15))
      goto LAB_03472750;
    }
    thunk_FUN_01f51358(lVar8 + 0x18,plVar9);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar9 = (long *)FUN_03472c54();
    if (lVar8 == 0) goto LAB_03472bb8;
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(lVar8 + 0x20) = 0;
    }
    else {
      lVar15 = *(long *)Method_System_Reflection_SignatureType_GetEnumValues__;
      bVar1 = *(byte *)(lVar15 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar15)) {
LAB_03472750:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      *(long **)(lVar8 + 0x20) = plVar9;
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar15))
      goto LAB_03472750;
    }
    thunk_FUN_01f51358(lVar8 + 0x20,plVar9);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (lVar8 == 0) goto LAB_03472bb8;
  }
  else {
    if (lVar8 == 0) goto LAB_03472bb8;
    *(long *)(lVar8 + 0x28) = *(long *)(param_1 + 0x28);
    thunk_FUN_01f51358();
  }
  *(undefined1 *)(lVar8 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 == (long *)0x0) ||
     (iVar7 = (**(code **)(*plVar9 + 0x3c8))(plVar9,*(undefined8 *)(*plVar9 + 0x3d0)), iVar7 < 1)) {
    return lVar8;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
    puVar6 = Method_System_Reflection_SignatureType_GetMember__;
    puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
    puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (plVar9 != (long *)0x0) {
        do {
          lVar16 = *plVar9;
          lVar15 = *(long *)puVar2;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03472a8c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,0);
LAB_03472a8c:
          uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar17 & 1) == 0) {
            return lVar8;
          }
          plVar11 = (long *)FUN_034721bc(lVar8);
          lVar15 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03472af4;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03472af4:
          plVar13 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          lVar15 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_03472b54;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,1);
LAB_03472b54:
          uVar20 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) break;
          if ((plVar13 != (long *)0x0) && (lVar15 = *(long *)puVar3, *plVar13 != lVar15)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar13,lVar15,uVar20);
          }
          (**(code **)(*plVar11 + 0x318))(plVar11,plVar13,uVar20,*(undefined8 *)(*plVar11 + 800));
        } while( true );
      }
    }
    else if (plVar9 != (long *)0x0) {
      do {
        lVar16 = *plVar9;
        lVar15 = *(long *)puVar2;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03472844;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,0);
LAB_03472844:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          return lVar8;
        }
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_034728a0;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_034728a0:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) break;
        if (*plVar11 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        uVar12 = FUN_0340e040(plVar11,*(undefined8 *)puVar6,0);
        plVar13 = (long *)FUN_034721bc(lVar8);
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03472934;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,1);
LAB_03472934:
        lVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar5 = Method_System_Reflection_SignatureType_GetMember__;
        if ((uVar12 & 1) == 0) {
          if (plVar13 == (long *)0x0) break;
          pcVar18 = *(code **)(*plVar13 + 0x318);
          uVar20 = *(undefined8 *)(*plVar13 + 800);
        }
        else {
          if (lVar15 == 0) break;
          uVar20 = *(undefined8 *)Method_System_Reflection_SignatureType_GetMember__;
          lVar16 = thunk_FUN_01f116d0(lVar15,uVar20);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,uVar20);
          }
          lVar16 = *(long *)puVar5;
          plVar14 = (long *)thunk_FUN_01f116d0(lVar15,lVar16);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,lVar16);
          }
          lVar15 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto FUN_034729f0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar14,lVar16,0);
FUN_034729f0:
          lVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
          if (plVar13 == (long *)0x0) break;
          pcVar18 = *(code **)(*plVar13 + 0x318);
          uVar20 = *(undefined8 *)(*plVar13 + 800);
        }
        (*pcVar18)(plVar13,plVar11,lVar15,uVar20);
      } while( true );
    }
  }
LAB_03472bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


