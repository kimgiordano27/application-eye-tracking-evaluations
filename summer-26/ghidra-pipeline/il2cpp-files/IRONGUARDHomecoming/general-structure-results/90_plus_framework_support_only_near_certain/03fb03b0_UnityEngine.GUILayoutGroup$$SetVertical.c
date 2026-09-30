/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$SetVertical
ENTRY_POINT: 03fb03b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03fb08bc) */

uint UnityEngine_GUILayoutGroup__SetVertical(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar13;
  int iVar14;
  int iVar15;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Text_Encoder_GetBytes__);
    thunk_FUN_01efb3a4(PTR_DAT_04582dc0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04582dc8);
    thunk_FUN_01efb3a4(PTR_DAT_04582dd0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04582d08);
    thunk_FUN_01efb3a4(PTR_DAT_04582dd8);
    thunk_FUN_01efb3a4(PTR_DAT_04582d68);
    thunk_FUN_01efb3a4(PTR_DAT_04582da0);
    *(undefined1 *)(unaff_x21 + 0x834) = 1;
  }
  if (unaff_x20 == 0) goto LAB_03fb08ac;
  uVar6 = FUN_03fe3248();
  if ((uVar6 & 1) != 0) {
    FUN_03faea6c();
    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
       (uVar6 = FUN_026d69b0(*(long *)(unaff_x19 + 0x18),0,0,*(undefined8 *)PTR_DAT_04582dd8),
       (uVar6 & 1) != 0)) {
      plVar13 = *(long **)(unaff_x20 + 0x10);
      if (plVar13 == (long *)0x0) {
LAB_03fb08ac:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__)
          {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x19) * 0x10 + 0x138);
            goto LAB_03fb04e8;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar13,*(long *)
                                     Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__
                            ,0x19);
LAB_03fb04e8:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      if (plVar13 == (long *)0x0) goto LAB_03fb08ac;
      lVar10 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_Text_Encoder_GetBytes__) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_03fb0554;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)Method_System_Text_Encoder_GetBytes__,3);
LAB_03fb0554:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13);
      if (plVar13 == (long *)0x0) goto LAB_03fb08ac;
      lVar10 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04582dc8) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03fb05c0;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)PTR_DAT_04582dc8,0);
LAB_03fb05c0:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      puVar4 = PTR_DAT_04582dd0;
      puVar3 = PTR_DAT_04582dc0;
      puVar2 = PTR_DAT_04582da0;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar10 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03fb0640;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_03fb0640:
          uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if ((uVar6 & 1) == 0) {
            iVar15 = 0xb;
            iVar14 = 0xb;
            goto joined_r0x03fb07d0;
          }
          lVar10 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03fb069c;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_03fb069c:
          plVar8 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *plVar8;
          lVar10 = *(long *)puVar3;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03fb06fc;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_03fb06fc:
          plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        } while ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)puVar2));
        lVar11 = *plVar8;
        lVar10 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fb0768;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_03fb0768:
        plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
        uVar6 = FUN_03fb0124();
      } while ((uVar6 & 1) != 0);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_026d6b24(*(long *)(unaff_x19 + 0x18),0,0,*(undefined8 *)PTR_DAT_04582d08);
      }
      iVar15 = 10;
      iVar14 = 10;
joined_r0x03fb07d0:
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fb0828;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03fb0828:
        (*(code *)*puVar7)(plVar13,puVar7[1]);
        iVar14 = iVar15;
      }
      if ((iVar14 == 0xb) || (iVar14 == 0)) {
        uVar5 = FUN_03fb0994();
        if (*(long *)(unaff_x19 + 0x18) == 0) {
          uVar5 = uVar5 & 1;
        }
        else {
          FUN_026d6b24(*(long *)(unaff_x19 + 0x18),0,0,*(undefined8 *)PTR_DAT_04582d08);
        }
        goto LAB_03fb0880;
      }
    }
  }
  uVar5 = 0;
LAB_03fb0880:
  return uVar5 & 1;
}


