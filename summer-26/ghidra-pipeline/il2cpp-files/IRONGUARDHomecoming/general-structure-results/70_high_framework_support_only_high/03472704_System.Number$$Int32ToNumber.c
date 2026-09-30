/*
FUNCTION_NAME: System.Number$$Int32ToNumber
ENTRY_POINT: 03472704
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Number__Int32ToNumber(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  long in_x10;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  
  bVar1 = *(byte *)(param_3 + 0x130);
  if ((*(byte *)(in_x10 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(in_x10 + 200) + ((ulong)bVar1 - 1) * 8) != param_3)) {
LAB_03472750:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_1);
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) != param_3)) goto LAB_03472750;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x20),param_1);
  if (*(long *)(unaff_x20 + 0x28) == 0) {
    if (unaff_x19 == 0) goto LAB_03472bb8;
  }
  else {
    if (unaff_x19 == 0) goto LAB_03472bb8;
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
    thunk_FUN_01f51358();
  }
  *(undefined1 *)(unaff_x19 + 0x30) = *(undefined1 *)(unaff_x20 + 0x30);
  plVar8 = *(long **)(unaff_x20 + 0x10);
  if ((plVar8 == (long *)0x0) ||
     (iVar7 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0)), iVar7 < 1)) {
    return;
  }
  plVar8 = *(long **)(unaff_x20 + 0x10);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
    puVar6 = Method_System_Reflection_SignatureType_GetMember__;
    puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
    puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (*(char *)(unaff_x20 + 0x30) == '\0') {
      if (plVar8 != (long *)0x0) {
        do {
          lVar15 = *plVar8;
          lVar14 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar14) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03472a8c;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03472a8c:
          uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar16 & 1) == 0) {
            return;
          }
          plVar10 = (long *)FUN_034721bc();
          lVar14 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03472af4;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03472af4:
          plVar12 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          lVar14 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03472b54;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,1);
LAB_03472b54:
          uVar19 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) break;
          if ((plVar12 != (long *)0x0) && (lVar14 = *(long *)puVar3, *plVar12 != lVar14)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar12,lVar14,uVar19);
          }
          (**(code **)(*plVar10 + 0x318))(plVar10,plVar12,uVar19,*(undefined8 *)(*plVar10 + 800));
        } while( true );
      }
    }
    else if (plVar8 != (long *)0x0) {
      do {
        lVar15 = *plVar8;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03472844;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03472844:
        uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar16 & 1) == 0) {
          return;
        }
        lVar14 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_034728a0;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_034728a0:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) break;
        if (*plVar10 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        uVar11 = FUN_0340e040(plVar10,*(undefined8 *)puVar6,0);
        plVar12 = (long *)FUN_034721bc();
        lVar14 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03472934;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,1);
LAB_03472934:
        lVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        puVar5 = Method_System_Reflection_SignatureType_GetMember__;
        if ((uVar11 & 1) == 0) {
          if (plVar12 == (long *)0x0) break;
          pcVar17 = *(code **)(*plVar12 + 0x318);
          uVar19 = *(undefined8 *)(*plVar12 + 800);
        }
        else {
          if (lVar14 == 0) break;
          uVar19 = *(undefined8 *)Method_System_Reflection_SignatureType_GetMember__;
          lVar15 = thunk_FUN_01f116d0(lVar14,uVar19);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,uVar19);
          }
          lVar15 = *(long *)puVar5;
          plVar13 = (long *)thunk_FUN_01f116d0(lVar14,lVar15);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,lVar15);
          }
          lVar14 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                goto FUN_034729f0;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar13,lVar15,0);
FUN_034729f0:
          lVar14 = (*(code *)*puVar9)(plVar13,puVar9[1]);
          if (plVar12 == (long *)0x0) break;
          pcVar17 = *(code **)(*plVar12 + 0x318);
          uVar19 = *(undefined8 *)(*plVar12 + 800);
        }
        (*pcVar17)(plVar12,plVar10,lVar14,uVar19);
      } while( true );
    }
  }
LAB_03472bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


