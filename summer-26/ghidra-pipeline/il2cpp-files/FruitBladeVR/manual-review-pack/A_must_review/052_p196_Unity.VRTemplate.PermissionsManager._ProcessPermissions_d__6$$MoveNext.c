/*
FUNCTION_NAME: Unity.VRTemplate.PermissionsManager.<ProcessPermissions>d__6$$MoveNext
ENTRY_POINT: 01d4a914
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_VRTemplate_PermissionsManager_<ProcessPermissions>d__6__MoveNext(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_03ef13f1 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Action<string>_TypeInfo_03cb5f98);
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_Add___03cb5fa0);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_ToArray___03cb5fa8);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>__ctor___03cb5fb0);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_get_Count___03cb5fb8);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count___03cb5fc0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item___03cb5f60
                );
    FUN_01c5c92c(PTR_System_Collections_Generic_List<string>_TypeInfo_03cb5fc8);
    FUN_01c5c92c(PTR_UnityEngine_Android_PermissionCallbacks_TypeInfo_03cb5fd0);
    FUN_01c5c92c(PTR_Method_Unity_VRTemplate_PermissionsManager_OnPermissionDenied___03cb5fd8);
    FUN_01c5c92c(PTR_Method_Unity_VRTemplate_PermissionsManager_OnPermissionGranted___03cb5fe0);
    FUN_01c5c92c(PTR_StringLiteral_6166_03cb5fe8);
    DAT_03ef13f1 = 1;
  }
  puVar2 = PTR_System_Collections_Generic_List<string>_TypeInfo_03cb5fc8;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar6 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
  System_Collections_Generic_List<object>___ctor
            (lVar6,*(undefined8 *)
                    PTR_Method_System_Collections_Generic_List<string>__ctor___03cb5fb0);
  if (lVar13 != 0) {
    lVar7 = *(long *)(lVar13 + 0x28);
    *(undefined4 *)(lVar13 + 0x30) = 0;
    puVar5 = PTR_StringLiteral_6166_03cb5fe8;
    puVar4 = PTR_Method_System_Collections_Generic_List<string>_Add___03cb5fa0;
    puVar3 = 
    PTR_Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item___03cb5f60
    ;
    puVar2 = PTR_UnityEngine_Debug_TypeInfo_03cb5ae0;
    if (lVar7 != 0) {
      iVar10 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar10) {
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) < 1) {
              return 0;
            }
            lVar7 = thunk_FUN_01c8fc48(*(undefined8 *)
                                        PTR_UnityEngine_Android_PermissionCallbacks_TypeInfo_03cb5fd0
                                      );
            UnityEngine_Android_PermissionCallbacks___ctor(lVar7,0);
            puVar2 = PTR_System_Action<string>_TypeInfo_03cb5f98;
            uVar9 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_System_Action<string>_TypeInfo_03cb5f98);
            System_Action<object>___ctor
                      (uVar9,lVar13,
                       *(undefined8 *)
                        PTR_Method_Unity_VRTemplate_PermissionsManager_OnPermissionDenied___03cb5fd8
                       ,0);
            if (lVar7 != 0) {
              UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(lVar7,uVar9,0);
              uVar9 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
              System_Action<object>___ctor
                        (uVar9,lVar13,
                         *(undefined8 *)
                          PTR_Method_Unity_VRTemplate_PermissionsManager_OnPermissionGranted___03cb5fe0
                         ,0);
              UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(lVar7,uVar9,0);
              uVar9 = System_Collections_Generic_List<object>__ToArray
                                (lVar6,*(undefined8 *)
                                        PTR_Method_System_Collections_Generic_List<string>_ToArray___03cb5fa8
                                );
              UnityEngine_Android_Permission__RequestUserPermissions(uVar9,lVar7,0);
              return 0;
            }
          }
          break;
        }
        lVar7 = System_Collections_Generic_List<object>__get_Item
                          (lVar7,iVar10,*(undefined8 *)puVar3);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0x18) != '\0') {
          uVar8 = UnityEngine_Android_Permission__HasUserAuthorizedPermission
                            (*(undefined8 *)(lVar7 + 0x10),0);
          if (((uVar8 & 1) == 0) && (*(char *)(lVar7 + 0x19) == '\0')) {
            if (lVar6 == 0) break;
            lVar11 = *(long *)(lVar6 + 0x10);
            uVar9 = *(undefined8 *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              thunk_FUN_01cc8040();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            *(undefined1 *)(lVar7 + 0x19) = 1;
          }
          else {
            uVar9 = System_String__Concat(*(undefined8 *)puVar5,*(undefined8 *)(lVar7 + 0x10),0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c(*(long *)puVar2);
            }
            UnityEngine_Debug__Log(uVar9,lVar13,0);
          }
        }
        lVar7 = *(long *)(lVar13 + 0x28);
        iVar10 = *(int *)(lVar13 + 0x30) + 1;
        *(int *)(lVar13 + 0x30) = iVar10;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


