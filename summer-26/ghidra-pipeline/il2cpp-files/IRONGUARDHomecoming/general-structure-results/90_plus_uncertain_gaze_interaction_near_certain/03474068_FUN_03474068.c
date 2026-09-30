/*
FUNCTION_NAME: FUN_03474068
ENTRY_POINT: 03474068
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 190
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03474628) */
/* WARNING: Removing unreachable block (ram,0x03474604) */
/* WARNING: Removing unreachable block (ram,0x03474634) */

int FUN_03474068(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04832a0b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsAssignableFrom__);
    DAT_04832a0b = 1;
  }
  puVar3 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 != (long *)0x0) {
    lVar10 = *param_1;
    bVar1 = *(byte *)(*(long *)Method_System_Reflection_SignatureType_IsAssignableFrom__ + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Reflection_SignatureType_IsAssignableFrom__)) {
      iVar14 = 0;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_03474188;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(param_1,*(long *)
                                     Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,9);
LAB_03474188:
      plVar7 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
      puVar5 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
      puVar4 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03474200;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_03474200:
        uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar2);
          if (plVar7 == (long *)0x0) {
            return iVar14;
          }
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto System_Number__NumberToUInt64;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0347432c;
        }
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03474260;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_03474260:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar6 = (undefined8 *)thunk_FUN_01f11920();
        uStack_78 = puVar6[1];
        local_80 = *puVar6;
        plVar8 = (long *)*param_2;
        if (plVar8 == (long *)0x0) {
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
          FUN_0353e574(uVar9,0);
          *param_2 = uVar9;
          thunk_FUN_01f51358(param_2,uVar9);
          plVar8 = (long *)*param_2;
        }
        uStack_88 = uStack_78;
        local_90 = local_80;
        uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_90);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar9,uVar9);
        }
        (**(code **)(*plVar8 + 0x308))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x310));
        iVar14 = iVar14 + 1;
      } while( true );
    }
    uVar12 = FUN_0347a914(param_1,0);
    if (((uVar12 & 1) != 0) && (plVar7 = (long *)FUN_0347aa10(param_1,0), plVar7 != (long *)0x0)) {
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_03474410;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,9);
LAB_03474410:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar5 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
      puVar4 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar14 = 0;
      do {
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0347448c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0347448c:
        uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar2);
          if (plVar7 == (long *)0x0) {
            return iVar14;
          }
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_034745d4;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_034745bc;
        }
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_034744ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_034744ec:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar6 = (undefined8 *)thunk_FUN_01f11920();
        uStack_68 = puVar6[1];
        local_70 = *puVar6;
        plVar8 = (long *)*param_2;
        if (plVar8 == (long *)0x0) {
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
          FUN_0353e574(uVar9,0);
          *param_2 = uVar9;
          thunk_FUN_01f51358(param_2,uVar9);
          plVar8 = (long *)*param_2;
        }
        uStack_88 = uStack_68;
        local_90 = local_70;
        uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_90);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar9,uVar9);
        }
        (**(code **)(*plVar8 + 0x308))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x310));
        iVar14 = iVar14 + 1;
      } while( true );
    }
  }
  return 0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0347432c:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034743cc;
    }
  }
System_Number__NumberToUInt64:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_034743cc:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return iVar14;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_034745bc:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034745f0;
    }
  }
LAB_034745d4:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_034745f0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return iVar14;
}


