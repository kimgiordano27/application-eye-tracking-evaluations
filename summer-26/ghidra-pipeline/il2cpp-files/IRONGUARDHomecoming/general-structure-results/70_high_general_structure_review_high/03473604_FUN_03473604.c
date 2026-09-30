/*
FUNCTION_NAME: FUN_03473604
ENTRY_POINT: 03473604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_03473604(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832a06 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetProperties__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__);
    thunk_FUN_01efb3a4(Method_System_Enum_ToObject__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832a06 = 1;
  }
  puVar5 = Method_System_Reflection_SignatureType_GetProperties__;
  puVar4 = Method_System_Enum_ToObject__;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_01f08bd8(uVar12,1,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  uVar12 = FUN_0347349c(lVar6,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (lVar6 == 0) goto LAB_03473988;
    plVar7 = (long *)FUN_03584d04(lVar6,*(undefined8 *)(param_1 + 0x20),0x34,0,uVar12,0,0);
  }
  else {
    if (lVar6 == 0) goto LAB_03473988;
    plVar7 = (long *)FUN_03584a68(lVar6,0x34,0,uVar12,0,0);
  }
  uVar8 = FUN_034b27c0(plVar7,0,0);
  if (((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    if (plVar7 == (long *)0x0) goto LAB_03473988;
    uVar8 = (**(code **)(*plVar7 + 0x318))(plVar7,*(undefined8 *)(*plVar7 + 800));
    if ((uVar8 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
  }
  uVar8 = FUN_034b27c0(plVar7,0,0);
  if (((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar12 = FUN_0347349c();
    if (plVar7 == (long *)0x0) goto LAB_03473988;
    lVar10 = *plVar7;
    bVar2 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__
                     + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
    plVar7 = (long *)(**(code **)(lVar10 + 0x408))(plVar7,uVar12,*(undefined8 *)(lVar10 + 0x410));
  }
  uVar8 = FUN_034b27d8(plVar7,0,0);
  if (((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar6 = FUN_03584e6c(lVar6,0);
    if (lVar6 == 0) {
LAB_03473988:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
LAB_0347398c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar13 = *(long **)(lVar6 + (long)(int)uVar14 * 8 + 0x20);
        if (plVar13 == (long *)0x0) goto LAB_03473988;
        uVar12 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
        uVar8 = FUN_0340e600(uVar12,*(undefined8 *)(param_1 + 0x20),0);
        if (((uVar8 & 1) == 0) &&
           (uVar8 = (**(code **)(*plVar13 + 0x318))(plVar13,*(undefined8 *)(*plVar13 + 800)),
           (uVar8 & 1) != 0)) {
          lVar10 = (**(code **)(*plVar13 + 0x328))(plVar13,*(undefined8 *)(*plVar13 + 0x330));
          if ((lVar10 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_03473988;
          if (*(int *)(lVar10 + 0x18) == *(int *)(*(long *)(param_1 + 0x30) + 0x18)) {
            uVar12 = FUN_0347349c();
            plVar7 = (long *)(**(code **)(*plVar13 + 0x408))
                                       (plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x410));
            if (plVar7 == (long *)0x0) goto LAB_03473988;
            lVar10 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
            if ((*(long *)(param_1 + 0x28) == 0) || (lVar10 == 0)) goto LAB_03473988;
            uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 0x18);
            if (uVar1 == *(uint *)(lVar10 + 0x18)) {
              if (0 < (int)uVar1) {
                lVar15 = 4;
                do {
                  uVar16 = (int)lVar15 - 4;
                  if (uVar1 <= uVar16) goto LAB_0347398c;
                  plVar13 = *(long **)(lVar10 + lVar15 * 8);
                  if ((plVar13 == (long *)0x0) ||
                     (plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                                  (plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
                     plVar13 == (long *)0x0)) goto LAB_03473988;
                  uVar12 = (**(code **)(*plVar13 + 0x2d8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x2e0));
                  lVar11 = *(long *)(param_1 + 0x28);
                  if (lVar11 == 0) goto LAB_03473988;
                  if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_0347398c;
                  uVar8 = FUN_0340e600(uVar12,*(undefined8 *)(lVar11 + lVar15 * 8),0);
                  if ((uVar8 & 1) != 0) {
                    plVar7 = (long *)0x0;
                    break;
                  }
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  lVar15 = lVar15 + 1;
                } while ((int)lVar15 + -4 < (int)uVar1);
              }
              uVar8 = FUN_034b27c0(plVar7,0,0);
              if ((uVar8 & 1) != 0) break;
            }
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
  }
  uVar8 = FUN_034b27d8(plVar7,0,0);
  if ((uVar8 & 1) != 0) {
    uVar12 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               );
    uVar12 = FUN_01f08890(uVar12,5);
    FUN_01bc50c0();
    uVar9 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InvalidInput>__);
    FUN_01bc5408(uVar12,0,uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    FUN_01bc50c0(uVar12);
    FUN_01bc5408(uVar12,1,uVar9);
    FUN_01bc50c0(uVar12);
    uVar9 = thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetPropertyImpl__);
    FUN_01bc5408(uVar12,2,uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    FUN_01bc50c0(uVar12);
    FUN_01bc5408(uVar12,3,uVar9);
    FUN_01bc50c0(uVar12);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    FUN_01bc5408(uVar12,4,uVar9);
    uVar12 = FUN_0340efe8(uVar12,0);
    thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_03454990(uVar9,uVar12);
    uVar12 = thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetProperties__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar12);
  }
  return plVar7;
}


